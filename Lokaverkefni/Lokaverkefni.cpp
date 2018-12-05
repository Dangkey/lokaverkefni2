// Lokaverkefni.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>


class Malarar{
private:
	std::string kt;
	std::string nafn;
	int afslattur;
	
public:
	Malarar() : kt(""), nafn(""), afslattur(0){};
	Malarar(std::string kt, std::string nafn, int afslattur) : kt(kt), nafn(nafn), afslattur(afslattur){};
	std::string getKT() { return kt; };
	void print(){
		std::cout << kt << " : " << nafn << " : " << afslattur << "%" << std::endl;
	};

};
class Rafverktakar{
private:
	std::string nafn;
	int afslattur;
protected:
	std::string kt;
public:
	Rafverktakar() : kt(""),nafn(""), afslattur(0){};
	Rafverktakar(std::string kt, std::string nafn, int afslattur) : kt(kt), nafn(nafn), afslattur(afslattur){};
	std::string getKT() { return kt; };
	void print(){
		std::cout <<kt << " : " << nafn << " : " << afslattur << "%" << std::endl;
	};
};
class Starfsmenn{
private:	
	std::string nafn;
	int afslattur;
protected:
	std::string kt;
public:
	Starfsmenn() : kt(""), nafn(""), afslattur(0){};
	Starfsmenn(std::string kt, std::string nafn, int afslattur) : kt(kt), nafn(nafn), afslattur(afslattur){};
	std::string getKT() { return kt; };
	void print(){	
		std::cout << kt << " : " << nafn << " : " << afslattur << "%" << std::endl;
	};
};
//class Vidskiptavinir{
//private:
//	Malarar *mal;
//	Rafverktakar *raf;
//	Starfsmenn *starf;	
//	
//
//public:
//	Vidskiptavinir(){
//		*mal = Malarar();
//		*raf = Rafverktakar();
//		*starf = Starfsmenn();	
//		void getKT();  { return kt; };
//	};
//	Vidskiptavinir(string kt, string nafn, int afslattur, int type = 3){
//		mal = new Malarar[10];
//		raf = new Rafverktakar[10];
//		starf = new Starfsmenn[10];
//
//		if (type == 1)
//		{
//			LinkedList Malarar = LinkedList();
//			Malarar.createNode(kt, nafn, afslattur, type);
//		};
//		
//	};	
//	void print(){
//		mal->print();
//		raf->print();
//		starf->print();
//	};
//	void getKT(){ return };
//};



class LinkedList
{
private:
	typedef struct node
	{
		node* next;
		Malarar dataMal;
		Rafverktakar dataRaf;
		
	}*nodePtr;
	nodePtr head;
	nodePtr tail;

public:
	LinkedList()
	{
	}
	void createNode(Malarar *Mal)
	{
		Malarar newMal(*Mal);
		nodePtr n = new node;
		n->next = nullptr;
		n->dataMal = newMal;
		/*if (ktExists(kt, afslattur))
		{
			cout << "Cannot perform this operation: Flight with that id already exists" << endl;
			return;
		}*/
		if (head != nullptr)
		{
			tail = head;
			while (tail->next!=nullptr)
			{
				tail = tail->next;

			}
			tail->next = n;
		}
		else
		{			
			head->dataMal = n->dataMal;
			/*Node *temp = new Node(kt, nafn, afslattur, type);
			if (head->Data.getKT() != kt)
			{
				temp->next = head;
				head = temp;
			}
			else
			{
				Node *current = head;
				Node *prev = head;
				while (current && current->Data.getKT() != kt)
				{
					prev = current;
					current = current->next;
				}
				prev->next = temp;
				temp->next = current;
			}*/

		}
	}
	/*void deleteNode(int id,int af)
	{
	Node *current = new Node;
	Node *prev = new Node;
	current = head;
	while (current != nullptr)
	{
	if (ktExists(id,afslattur))
	{
	if (current->data.getId() == id)
	{
	if (current == head)
	{
	head = head->next;
	delete current;
	break;
	}
	else
	{
	prev->next = current->next;
	break;
	}
	}
	{
	prev = current;
	current = current->next;
	}
	}
	else
	{
	cout << "Cannot perform this operation: Flight with that id does not exist" << endl;
	return;
	}

	}
	}
	*/
	void display()
	{
		node* syna = new node;
		syna = head;
		if (syna == nullptr)
		{
			std::cout << "Villa: Enginn i listanum";
		}
		else
		{
			while (syna->next != nullptr)
			{				
				syna->dataMal.print();
				syna = syna->next;
			}
		}
	}
	/*bool ktExists(string kt, int afslattur)
	{
		Node *temp = new Node;
		temp = head;
		while (temp != nullptr)
		{
			if (afslattur == 10)
			{
				if (temp->Mal.getKT() == kt)
				{
					return true;
					break;
				}
				else
				{
					temp = temp->next;
				}
			}
			else if (afslattur == 15)
			{
				if (temp->Raf.getKT() == kt)
				{
					return true;
					break;
				}
				else
				{
					temp = temp->next;
				}
			}
			else if (afslattur == 20)
			{
				if (temp->Starf.getKT() == kt)
				{
					return true;
					break;
				}
				else
				{
					temp = temp->next;
				}
			}
			else
			{
				cout << " beebooo" << endl;
			}

		}
		return false;
	}*/
};


	class Shoppa {
	private:
		std::string item;
		int verd;
		std::string deild;
	public:
		Shoppa() : item(""), verd(0), deild("") {};
		Shoppa(std::string item, int verd, std::string deild) : item(item), verd(verd), deild(deild) {};
		void print() {
			std::cout << item << " " << verd << "kr " << deild << std::endl;
		}
	};

	int main()
	{
		Shoppa shop[10];
		shop[0] = Shoppa("Pensill            ", 999, "  Malningadeild");
		shop[1] = Shoppa("Blondud malning 1L ", 1500, " Malningadeild");
		shop[2] = Shoppa("Blondud malning 5L ", 6500, " Malningadeild");
		shop[3] = Shoppa("Blondud malning 10L", 11490, "Malningadeild");
		shop[4] = Shoppa("Vir 1M             ", 300, "   Rafindadeild");
		shop[5] = Shoppa("Netsnura 5M        ", 1500, "  Rafindadeild");
		shop[6] = Shoppa("HDMI Snura 10M     ", 2000, "  Rafindadeild");
		shop[7] = Shoppa("Klo                ", 500, "   Rafindadeild");
		shop[8] = Shoppa("Tenglarenna        ", 300000, "Rafindadeild");
		shop[9] = Shoppa("Twix               ", 999, "        Almennt");
		for (int i = 0; i < 10; i++)
		{
			shop[i].print();
		}
		std::cout << "----------------" << std::endl;
		LinkedList b = LinkedList();
		b.createNode(&Malarar("2308992829", "Hilmar", 10));
		/*b.createNode("2711912029", "Elas", 15);
		b.createNode("0000000000", "Hilmar", 10);
		b.createNode("1111111111", "Elas", 15);
		b.createNode("1811992029", "Hilmar", 10);
		b.createNode("3333333333", "Elas", 15);
		b.createNode("0405994799", "Hilmar", 10);
		b.createNode("2222222222", "Elas", 15);
		*/b.display();

		return 0;
	}

