#include <iostream>
#include <fstream>
using namespace std;

struct Banda
{
	int ID;
	string Nome;
	string EstiloMusical;
	short int AnoCriacao;
	short int MusicasFamosas;
};

void AbrirArquivo()
{
	ifstream arquivo("BandasBD.csv");
	if (arquivo)
	{
		cout << "arquivo aberto" << endl;
	}
	else
		cout << "Nao foi possivel abrir o arquivo" << endl;
}

void ListarBandas()
{
	cout << "1- Listar bandas cadastradas " << endl;
}

void PesquisarBanda()
{
	cout << "2- Pesquisar banda cadastrada " << endl;
}

void ExcluirBanda()
{
	cout << "3- Excluir banda cadastrada " << endl;
}

void CadastrarBanda()
{
	cout << "4- Cadastrar nova banda " << endl;
}

void SalvarAlteracoes()
{
	cout << "5- Salvar alterações " << endl;
}

void Menu()
{
	int opcao = 1;
	while (opcao != 0)
	{
		cout << "1- Listar bandas cadastradas " << endl;
		cout << "2- Pesquisar banda cadastrada " << endl;
		cout << "3- Excluir banda cadastrada " << endl;
		cout << "4- Cadastrar nova banda " << endl;
		cout << "5- Salvar alterações " << endl;
		cout << "6-  " << endl;
		cout << "0- SAIR " << endl;
		cin >> opcao;

		switch (opcao)
		{
		case 1:
		{
			ListarBandas();
		}
		break;
		case 2:
		{
			PesquisarBanda();
		}
		break;
		case 3:
		{
			ExcluirBanda();
		}
		break;
		case 4:
		{
			CadastrarBanda();
		}
		break;
		default:
			break;
		}
	}
}

int main()
{
	AbrirArquivo();
	Menu();
	return 0;
}
