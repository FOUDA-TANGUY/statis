#ifndef __LISTE__H__
#define __LISTE__H__

class Cellule
{
	private :
		Cellule* preview;
		float value;
		Cellule* next;
	public:
		Cellule(float value);
		Cellule(float value, Cellule* preview, Cellule* next);

		Cellule* getNext(void);
		Cellule* getPreview(void);
		float getValue(void);

		void setNext(Cellule* next);
		void setPreview(Cellule* preview);
		void setValue(float value);

		~Cellule();
};

class Liste
{
	private :
		Cellule* first;
		unsigned int nbElement;

	public :
		Liste(void);
		Liste(Cellule* first);
		Liste(float x);

		bool estVide(void);

		int getNbElement(void);
		Cellule* getFirstElement(void);
		void addElement(float x);
		Cellule* popElement(float x);
		void sort(void);
		Cellule* findElement(float x);

		~Liste();
};

#endif