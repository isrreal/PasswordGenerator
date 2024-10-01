CPPFLAGS=-std=c++17 -Wall -Wextra
IPATH=-Iinc/
SRC=src/
OBJ=obj/

all: app

app: main.gch password_generator.gch
	g++ $(OBJ)main.gch $(OBJ)password_generator.gch -o app

main.gch: $(SRC)main.cpp
	$(CHAIN)-gcc $(CPPFLAGS) $(IPATH) -c $(SRC)main.cpp -o $(OBJ)main.gch
                                        
password_generator.gch: $(SRC)password_generator.cpp                         
	g++ $(CPPFLAGS) $(IPATH) -c $(SRC)password_generator.cpp -o $(OBJ)password_generator.gch

clean:
	rm -rf $(OBJ)*.gch

