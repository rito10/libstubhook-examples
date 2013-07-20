/ / Made by TreeBl
unsigned int * makeNewItem (int id, int VTABLE, materialDword int, int pictureId, char * name)
{
unsigned int * Producto = new unsigned int [0xb8];
int * DISA = (int *) (materialDword-0x1000 + myPidAddr);
TileNew ((int) artículo, id, pictureId, * DISA);

elemento [0] = VTABLE 8-0 x1000 + myPidAddr;
artículo [3] = 0;
punto [4] = 0;
artículo [5] = 0;
artículo [6] = 0x3f666666;
artículo [7] = 0x3E000000;
artículo [8] = 0x3f666666;
/ / Int idk = item [2];
char * tst = (char *) (0x216230-0x1000 + myPidAddr + id);
* Tst = 0x1;
TileInit (material (int));
setDestroyTime (material (int), 0x3DCCCCCD);
setSoundType ((int) artículo, 0x216358-0x1000 + myPidAddr);
artículo [15] = 1;
std :: string testa = (std :: string) Nombre;
setDescriptionId (material (int), testa);
int * inTable = (int *) (0x2154D0-0x1000 + myPidAddr + (id * 4));
* Artículo inTable = (int);

volver el artículo;
}
