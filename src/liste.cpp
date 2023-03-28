#include <liste.h>


Cellule::Cellule(float value)
{
	this->setValue(value);
	this->setNext(nullptr);
	this->setPreview(nullptr);
}

Cellule::Cellule(float value, Cellule* preview, Cellule* next)
{
	this->setValue(value);
	this->setNext(next);
	this->setPreview(preview);
}

Cellule* Cellule::getNext(void)
{
	return this->next;
}
Cellule* Cellule::getPreview(void)
{
	return this->preview;
}
float Cellule::getValue(void)
{
	return this->value;
}

void Cellule::setNext(Cellule* next)
{
	this->next = next;
}
void Cellule::setPreview(Cellule* preview)
{
	this->preview = preview; 
}
void Cellule::setValue(float value)
{
	this->value = value; 
}

Cellule::~Cellule()
{

}


Liste::Liste(void)
{
	this->first = nullptr;
	this->nbElement = 0;
}
Liste::Liste(Cellule* first)
{
	this->first = first;
	while(first != nullptr)
	{
		this->nbElement++;
		first = first->getNext();
	}

}
Liste::Liste(float x)
{
	this->first = new Cellule(x);
	this->nbElement = 1;
}

bool Liste::estVide(void)
{
	if(this->getFirstElement() == nullptr)
		return true;
	return false;
}

int Liste::getNbElement(void)
{
	return (int)this->nbElement;
}

Cellule* Liste::getFirstElement(void)
{
	return this->first;
}

void Liste::addElement(float x)
{
	this->nbElement++;
	Cellule* nouv = new Cellule(x);
	if(this->estVide())
		this->first = nouv;
	Cellule* temp = this->getFirstElement();

	while(temp->getNext() != nullptr)
		temp = temp->getNext();

	temp->setNext(nouv);
	nouv->setPreview(temp);

}

Cellule* Liste::popElement(float x)
{
	if(this->estVide())
		return nullptr;

	Cellule* temp = this->getFirstElement();
	
}

void Liste::sort(void)
{

}

Cellule* Liste::findElement(float x)
{
	return nullptr;
}

Liste::~Liste()
{
	
}