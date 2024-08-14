#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

class Carro {
private:
    int consumo = 0;
    int precio = 0;
    int anio;
    int kilometraje;
    int bolsasAire;
    int kmMax;
    int combustibleMax;
    string transmision;
    string placas;
    string propietario;
    string modelo;
    string color;
    string marca;
    string traccion;
    string carroceria;
public:
#pragma region consumo
    void SetConsumo(int consum) {
        this->consumo = consum;
    }
    int GetConsumo() {
        return this->consumo;
    }
#pragma endregion
#pragma region precio
    void SetPrecio(int precio) {
        this->precio = precio;
    }
    int GetPrecio() {
        return this->precio;
    }
#pragma endregion
#pragma region anio
    void SetAnio(int anio) {
        this->anio = anio;
    }
    int GetAnio() {
        return this->anio;
    }
#pragma endregion
#pragma region kilometraje
    void SetKilometraje(int kilometraje) {
        this->kilometraje = kilometraje;
    }
    int GetKilometraje() {
        return this->kilometraje;
    }
#pragma endregion
#pragma region bolsasAire
    void SetBolsasAire(int bolsasAire) {
        this->bolsasAire = bolsasAire;
    }
    int GetBolsasAire() {
        return this->bolsasAire;
    }
#pragma endregion
#pragma region kmMax
    void SetKmMax(int kmMax) {
        this->kmMax = kmMax;
    }
    int GetKmMax()
    {
        return this->kmMax;
    }
#pragma endregion
#pragma region combustibleMax
    void SetCombustibleMax(int combustibleMax) {
        this->combustibleMax = combustibleMax;
    }
    int GetCombustibleMax() {
        return this->combustibleMax;
    }
#pragma endregion
#pragma region transmision
    void SetTransmision(string transmision)
    {
        this->transmision = transmision;
    }
    string GetTransmision() {
        return this->transmision;
    }
#pragma endregion
#pragma region placas
    void SetPlacas(string placas) {
        this->placas = placas;
    }
    string GetPlacas() {
        return this->placas;
    }
#pragma endregion
#pragma region propietario
    void SetPropietario(string propietario)
    {
        this->propietario = propietario;
    }
    string GetPropietario() {
        return this->propietario;
    }
#pragma endregion
#pragma region modelo
    void SetModelo(string modelo) {
        this->modelo = modelo;
    }
    string GetModelo() {
        return this->modelo;
    }
#pragma endregion
#pragma region color
    void SetColor(string color) {
        this->color = color;
    }
    string GetColor() {
        return this->color;
    }
#pragma endregion
#pragma region marca
    void SetMarca(string marca) {
        this->marca = marca;
    }
    string GetMarca() {
        return this->marca;
    }
#pragma endregion
#pragma region traccion
    void SetTraccion(string traccion) {
        this->traccion = traccion;
    }
    string GetTraccion() {
        return this->traccion;
    }
#pragma endregion
#pragma region carroceria
    void SetCarroceria(string carroceria) {
        this->carroceria = carroceria;
    }
    string GetCarroceria() {
        return this->carroceria;
    }
#pragma endregion
};
class Computadora {
private:
    int gbRam;
    int gbAlmacenamiento;
    int wattsFuente;
    int arquitecturaCPU;
    int velocidadRam;
    int resolucionPantalla;
    int bateria;
    string gpu;
    string cpu;
    string sistemaOperativo;
    string gabinete;
    string tipoRefrigeracion;
    bool wifi;
    bool ssd;
    bool isLaptop;
public:
#pragma region gbRam
    void SetGbRam(int gbRam) {
        this->gbRam = gbRam;
    }
    int GetGbRam() {
        return this->gbRam;
    }
#pragma endregion
#pragma region gbAlmacenamiento
    void SetGbAlmacenamiento(int gbAlmacenamiento) {
        this->gbAlmacenamiento = gbAlmacenamiento;
    }
    int GetGbAlmacenamiento() {
        return this->gbAlmacenamiento;
    }
#pragma endregion
#pragma region wattsFuente
    void SetWattsFuente(int wattsFuente) {
        this->wattsFuente = wattsFuente;
    }
    int GetWattsFuente() {
        return this->wattsFuente;
    }
#pragma endregion
#pragma region arquitecturaCPU
    void SetArquitecturaCPU(int arquitecturaCPU) {
        this->arquitecturaCPU = arquitecturaCPU;
    }
    int GetArquitecturaCPU() {
        return this->arquitecturaCPU;
    }
#pragma endregion
#pragma region velocidadRam
    void SetVelocidadRam(int velocidadRam) {
        this->velocidadRam = velocidadRam;
    }
    int GetVelocidadRam() {
        return this->velocidadRam;
    }
#pragma endregion
#pragma region resolucionPantalla
    void SetResolucionPantalla(int resolucionPantalla) {
        this->resolucionPantalla = resolucionPantalla;
    }
    int GetResolucionPantalla() {
        return this->resolucionPantalla;
    }
#pragma endregion
#pragma region bateria
    void SetBateria(int bateria) {
        this->bateria = bateria;
    }
    int GetBateria() {
        return this->bateria;
    }
#pragma endregion
#pragma region gpu
    void SetGpu(string gpu) {
        this->gpu = gpu;
    }
    string GetGpu() {
        return this->gpu;
    }
#pragma endregion
#pragma region cpu
    void SetCPU(string cpu) {
        this->cpu = cpu;
    }
    string GetCPU() {
        return this->cpu;
    }
#pragma endregion
#pragma region sistemaOperativo
    void SetSistemaOperativo(string sistemaOperativo) {
        this->sistemaOperativo = sistemaOperativo;
    }
    string GetSistemaOperativo() {
        return this->sistemaOperativo;
    }
#pragma endregion
#pragma region gabinete
    void SetGabinete(string gabinete) {
        this->gabinete = gabinete;
    }
    string GetGabinete() {
        return this->gabinete;
    }
#pragma endregion
#pragma region tipoRefrigeracion
    void SetTipoRefrigeracion(string tipoRefrigeracion) {
        this->tipoRefrigeracion = tipoRefrigeracion;
    }
    string GetTipoRefrigeracion() {
        return this->tipoRefrigeracion;
    }
#pragma endregion
#pragma region wifi
    void SetWifi(bool wifi) {
        this->wifi = wifi;
    }
    bool GetWifi() {
        return this->wifi;
    }
#pragma endregion
#pragma region ssd
    void SetSsd(bool ssd) {
        this->ssd = ssd;
    }
    bool GetSsd() {
        return this->ssd;
    }
#pragma endregion
#pragma region isLaptop
    void SetIsLaptop(bool isLaptop) {
        this->isLaptop = isLaptop;
    }
    bool GetIsLaptop() {
        return this->isLaptop;
    }
#pragma endregion
};
class Videojuego {
private:
    string titulo;
    string genero;
    string plataforma;
    string desarrollador;
    string editor;
    string lanzamiento;
    string clasificacion;
    string numeroJugadores;
    int precio;
    int duracion;
    int calificacion;
    float peso;
    bool isMultijugador;
    bool dlc;
    bool microtransacciones;
public:
#pragma region titulo
    void SetTitulo(string titulo) {
        this->titulo = titulo;
    }
    string GetTitulo() {
        return this->titulo;
    }
#pragma endregion
#pragma region genero
    void SetGenero(string genero) {
        this->genero = genero;
    }
    string GetGenero() {
        return this->genero;
    }
#pragma endregion
#pragma region plataforma
    void SetPlataforma(string plataforma) {
        this->plataforma = plataforma;
    }
    string GetPlataforma() {
        return this->plataforma;
    }
#pragma endregion
#pragma region desarrollador
    void SetDesarrollador(string desarrollador) {
        this->desarrollador = desarrollador;
    }
    string GetDesarrollador() {
        return this->desarrollador;
    }
#pragma endregion
#pragma region editor
    void SetEditor(string editor) {
        this->editor = editor;
    }
    string GetEditor() {
        return this->editor;
    }
#pragma endregion
#pragma region lanzamiento
    void SetLanzamiento(string lanzamiento) {
        this->lanzamiento = lanzamiento;
    }
    string GetLanzamiento() {
        return this->lanzamiento;
    }
#pragma endregion
#pragma region clasificacion
    void SetClasificacion(string clasificacion) {
        this->clasificacion = clasificacion;
    }
    string GetClasificacion() {
        return this->clasificacion;
    }
#pragma endregion
#pragma region numeroJugadores
    void SetNumeroJugadores(string numeroJugadores) {
        this->numeroJugadores = numeroJugadores;
    }
    string GetNumeroJugadores() {
        return this->numeroJugadores;
    }
#pragma endregion
#pragma region precio
    void SetPrecio(int precio) {
        this->precio = precio;
    }
    int GetPrecio() {
        return this->precio;
    }
#pragma endregion
#pragma region duracion
    void SetDuracion(int duracion) {
        this->duracion = duracion;
    }
    int GetDuracion() {
        return this->duracion;
    }
#pragma endregion
#pragma region calificacion
    void SetCalificacion(int calificacion) {
        this->calificacion = calificacion;
    }
    int GetCalificacion() {
        return this->calificacion;
    }
#pragma endregion
#pragma region peso
    void SetPeso(int peso) {
        this->peso = peso;
    }
    int GetPeso() {
        return this->peso;
    }
#pragma endregion
#pragma region isMultijugador
    void SetIsMultijugador(bool isMultijugador) {
        this->isMultijugador = isMultijugador;
    }
    bool GetIsMultijugador() {
        return this->isMultijugador;
    }
#pragma endregion
#pragma region dlc
    void SetDlc(bool dlc) {
        this->dlc = dlc;
    }
    bool GetDlc() {
        return this->dlc;
    }
#pragma endregion
#pragma region microtransacciones
    void SetMicrotransacciones(bool microtransacciones) {
        this->microtransacciones = microtransacciones;
    }
    bool GetMicrotransacciones() {
        return this->microtransacciones;
    }
#pragma endregion
};

void IngresarCarro(Carro&);
void IngresarComputadora(Computadora&);
void IngresarVideojuego(Videojuego&);

void ImprimirCarro(Carro&);
void ImprimirComputadora(Computadora&);
void ImprimirVideojuego(Videojuego&);

int main()
{
    setlocale(LC_ALL, "");
    Carro carro;
    Computadora pc;
    Videojuego juego;

    IngresarCarro(carro);
    IngresarComputadora(pc);
    IngresarVideojuego(juego);

    ImprimirCarro(carro);
    ImprimirComputadora(pc);
    ImprimirVideojuego(juego);
}

void IngresarCarro(Carro &carro) {
    carro.SetAnio(2025);
    carro.SetBolsasAire(6);
    carro.SetCarroceria("Hatchback");
    carro.SetColor("Azul");
    carro.SetCombustibleMax(50);
    carro.SetConsumo(22);
    carro.SetKilometraje(10000);
    carro.SetKmMax(150);
    carro.SetMarca("Suzuki");
    carro.SetModelo("Swift");
    carro.SetPlacas("JDS-80-90");
    carro.SetPrecio(350000);
    carro.SetPropietario("JPLH");
    carro.SetTraccion("Delantera");
    carro.SetTransmision("Automatica");
}
void ImprimirCarro(Carro &carro) {
    cout << "Año: " << carro.GetAnio() << endl;
    cout << "Bolsas de Aire: " << carro.GetBolsasAire() << endl;
    cout << "Carroceria: " << carro.GetCarroceria() << endl;
    cout << "Color: " << carro.GetColor() << endl;
    cout << "Combustible Maximo: " << carro.GetCombustibleMax() << " litros" << endl;
    cout << "Consumo: " << carro.GetConsumo() << " L/100 km" << endl;
    cout << "Kilometraje: " << carro.GetKilometraje() << " km" << endl;
    cout << "Velocidad maxima: " << carro.GetKmMax() << " km/h" << endl;
    cout << "Marca: " << carro.GetMarca() << endl;
    cout << "Modelo: " << carro.GetModelo() << endl;
    cout << "Placas: " << carro.GetPlacas() << endl;
    cout << "Precio: $" << carro.GetPrecio() << endl;
    cout << "Propietario: " << carro.GetPropietario() << endl;
    cout << "Traccion: " << carro.GetTraccion() << endl;
    cout << "Transmision: " << carro.GetTransmision() << endl;
}

void IngresarComputadora(Computadora &pc) {
    pc.SetGbRam(16);
    pc.SetGbAlmacenamiento(512);
    pc.SetWattsFuente(750);
    pc.SetArquitecturaCPU(64);
    pc.SetVelocidadRam(3200);
    pc.SetResolucionPantalla(1920); // Ejemplo de resolución en píxeles
    pc.SetBateria(5000); // Ejemplo de batería en mAh
    pc.SetGpu("NVIDIA GeForce RTX 3080");
    pc.SetCPU("Intel Core i9-11900K");
    pc.SetSistemaOperativo("Windows 11");
    pc.SetGabinete("Game Factor CSG600");
    pc.SetTipoRefrigeracion("Líquida");
    pc.SetWifi(true);
    pc.SetSsd(true);
    pc.SetIsLaptop(false);
}
void ImprimirComputadora(Computadora &pc) {
    cout << "RAM: " << pc.GetGbRam() << " GB" << endl;
    cout << "Almacenamiento: " << pc.GetGbAlmacenamiento() << " GB" << endl;
    cout << "Fuente de Poder: " << pc.GetWattsFuente() << " watts" << endl;
    cout << "Arquitectura CPU: " << pc.GetArquitecturaCPU() << "-bit" << endl;
    cout << "Velocidad RAM: " << pc.GetVelocidadRam() << " MHz" << endl;
    cout << "Resolución de Pantalla: " << pc.GetResolucionPantalla() << " píxeles" << endl;
    cout << "Batería: " << pc.GetBateria() << " mAh" << endl;
    cout << "GPU: " << pc.GetGpu() << endl;
    cout << "CPU: " << pc.GetCPU() << endl;
    cout << "Sistema Operativo: " << pc.GetSistemaOperativo() << endl;
    cout << "Gabinete: " << pc.GetGabinete() << endl;
    cout << "Tipo de Refrigeración: " << pc.GetTipoRefrigeracion() << endl;
    cout << "WiFi: " << (pc.GetWifi() ? "Sí" : "No") << endl;
    cout << "SSD: " << (pc.GetSsd() ? "Sí" : "No") << endl;
    cout << "Tipo de computadora: " << (pc.GetIsLaptop() ? "Laptop" : "Escritorio") << endl;
}

void IngresarVideojuego(Videojuego &juego) {
    juego.SetTitulo("The Legend of Zelda: Breath of the Wild");
    juego.SetGenero("Aventura");
    juego.SetPlataforma("Nintendo Switch");
    juego.SetDesarrollador("Nintendo");
    juego.SetEditor("Nintendo");
    juego.SetLanzamiento("03/03/2017");
    juego.SetClasificacion("PEGI 12");
    juego.SetNumeroJugadores("1-2");
    juego.SetPrecio(60);
    juego.SetDuracion(50);
    juego.SetCalificacion(95);
    juego.SetPeso(13.5);
    juego.SetIsMultijugador(true);
    juego.SetDlc(true);
    juego.SetMicrotransacciones(false);
}
void ImprimirVideojuego(Videojuego &juego) {
    cout << "Título: " << juego.GetTitulo() << endl;
    cout << "Género: " << juego.GetGenero() << endl;
    cout << "Plataforma: " << juego.GetPlataforma() << endl;
    cout << "Desarrollador: " << juego.GetDesarrollador() << endl;
    cout << "Editor: " << juego.GetEditor() << endl;
    cout << "Lanzamiento: " << juego.GetLanzamiento() << endl;
    cout << "Clasificación: " << juego.GetClasificacion() << endl;
    cout << "Número de Jugadores: " << juego.GetNumeroJugadores() << endl;
    cout << "Precio: $" << juego.GetPrecio() << endl;
    cout << "Duración: " << juego.GetDuracion() << " horas" << endl;
    cout << "Calificación: " << juego.GetCalificacion() << "/100" << endl;
    cout << "Peso: " << juego.GetPeso() << " GB" << endl;
    cout << "Multijugador: " << (juego.GetIsMultijugador() ? "Sí" : "No") << endl;
    cout << "DLC disponibles: " << (juego.GetDlc() ? "Sí" : "No") << endl;
    cout << "Microtransacciones: " << (juego.GetMicrotransacciones() ? "Sí" : "No") << endl;
}




