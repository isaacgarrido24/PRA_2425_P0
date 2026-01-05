# Variables para el compilador y opciones
CXX = g++
CXXFLAGS = -Wall -g

# Archivos objeto
OBJS = main.o BrazoRobotico.o
# Nombre del ejecutable
TARGET = programa_robot

# Regla 'all': Es la que se ejecuta por defecto
all: $(TARGET)

# Regla para enlazar el ejecutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Reglas para compilar los ficheros .cpp a .o
main.o: main.cpp BrazoRobotico.h
	$(CXX) $(CXXFLAGS) -c main.cpp

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	$(CXX) $(CXXFLAGS) -c BrazoRobotico.cpp

# Regla 'test': Compila y ejecuta el programa automáticamente
test: all
	./$(TARGET)

# Regla 'clean': Borra los archivos temporales y el ejecutable
clean:
	rm -f $(OBJS) $(TARGET)
