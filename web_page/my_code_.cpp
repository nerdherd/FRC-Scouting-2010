static const char* rawData = "\010\000\000\000I\003\000\000///////////////////\n// start my code //\n///////////////////\n\nvar mode;\n\n\t\n\n\n$(function () {\n\t$(\"#requireJS\").remove();\n\t$(\".content_action\").hide();\n\tfunction mode_change () {\n\t    // the mode of the page changes\n\t    mode = $(this).val();\n\t    $(\".content_action\").hide();\n\t    switch(mode) {\n\t    case \"chose\":\n\t\t$(\"#welcomeAction\").show();\n\t\treturn; // what can I do\n\t    case \"enterList\": // enter the list of matches\n\t\treturn alert('working');\n\t    case \"scoreMatch\": // scoring the match\n\t\t$(\"#matchScouting\").show();\n\t\treturn;\n\t    }\n\t}\n\t\n\tmode_change.apply($(\"#mode\")); // I think there is something in the jquery api that will do this\n\t$(\"#mode\").change(mode_change);\n\tfunction match (number) {\n\t    \n\t}\n\tfunction match_team(team) {\n\t    \n\t}\n\t$(\"#matchNum\").change(function () {\n\t\tmatch($(this).val()*1);\n\t    });\n    });\n\n\n";