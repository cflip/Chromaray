#pragma once

#include "../chromaray.hpp"
#include "../util/conversions.h"

#include "Material.hpp"

class ColourMaterial : public Material {
public:
	ColourMaterial(int colour);

private:
	const int m_ColourPointer = 1;

protected:
	void bindAllAttribs() override;
};