/*	Created by Tamar Ziv on 9/19/11.
 *	Copyright 2011 __MyCompanyName__. All rights reserved.
 */

#include "poObject.h"

class gitTestApp : public poObject {
public:
	gitTestApp();
	virtual ~gitTestApp();
	
	virtual void eventHandler(poEvent *event);
	virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
};