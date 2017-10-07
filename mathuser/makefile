INCLUDEDIR=../include
TARGET_BIN=mathuser
all:$(TARGET_BIN)
$(TARGET_BIN):main.c printres.c ../libmath/math.c
	gcc -save-temps -I../include main.c printres.c ../libmath/math.c -o $(TARGET_BIN)

clean:rm -f *.i *.o *.s
