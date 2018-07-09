#ifndef _DOMINION_HELPERS_H
#define _DOMINION_HELPERS_H

#include "dominion.h"

int drawCard(int player, struct gameState *state);
int updateCoins(int player, struct gameState *state, int bonus);
int discardCard(int handPos, int currentPlayer, struct gameState *state, 
		int trashFlag);
int gainCard(int supplyPos, struct gameState *state, int toFlag, int player);
int getCost(int cardNumber);
int adventurerEffect(struct gameState *state, int current, int next);
int smithyEffect(struct gameState *state, int current, int next, int handPos);
int great_hallEffect(struct gameState *state, int current, int next, int handPos);
int tributeEffect(struct gameState *state, int current, int next);
int mineEffect(struct gameState *state, int current, int next, int handPos, int c1, int c2);
int cardEffect(int card, int choice1, int choice2, int choice3, 
	       struct gameState *state, int handPos, int *bonus);

#endif