CXXFLAGS= -O2 -Wall -fmessage-length=0 -Ilibmicrohttpd/src/include -Ilibmicrohttpd

LIBS=  -lsqlite3 libmicrohttpd/src/daemon/.libs/libmicrohttpd.a

OBJS= main.o

TARGET= robot_scout

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all: $(TARGET)

clean:
	rm -f $(TARGET) $(OBJS)