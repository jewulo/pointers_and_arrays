#pragma once

// single-linked list (can also be used for circular-linked list)
struct sl_node
{
	int a;
	struct sl_node* next;
};

struct sl_node sl_head;

// double-linked list (can also be used for circular-double-linked list)
struct dl_node
{
	int a;
	struct dl_node* prev;
	struct dl_node* next;
};

struct dl_node dl_head;

void lec_2_2_a(void);