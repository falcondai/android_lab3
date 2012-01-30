/*==============================================================================

@file 
    Square.h

@brief
    Geometry for the square used.

==============================================================================*/

#ifndef _QCAR_SQUARE_OBJECT_H_
#define _QCAR_SQUARE_OBJECT_H_


#define NUM_SQUARE_OBJECT_VERTEX 4
#define NUM_SQUARE_OBJECT_INDEX 2 * 3
#define HALF_EDGE_LENGTH 25.0
#define Z_COORDINATE 50.0

static const float squareVertices[NUM_SQUARE_OBJECT_VERTEX * 3] =
{
    -HALF_EDGE_LENGTH, -HALF_EDGE_LENGTH, Z_COORDINATE,  HALF_EDGE_LENGTH, -HALF_EDGE_LENGTH, Z_COORDINATE,  HALF_EDGE_LENGTH, HALF_EDGE_LENGTH, Z_COORDINATE,  -HALF_EDGE_LENGTH, HALF_EDGE_LENGTH, Z_COORDINATE,  
};

static const float squareTexCoords[NUM_SQUARE_OBJECT_VERTEX * 2] =
{
    0.0, 0.0,  1.0, 0.0,  1.0, 1.0,  0.0, 1.0, 
};

static const float squareNormals[NUM_SQUARE_OBJECT_VERTEX * 3] =
{
    0.0, 0.0, 1.0,  0.0, 0.0, 1.0,  0.0, 0.0, 1.0,  0.0, 0.0, 1.0,
};

static const unsigned short squareIndices[NUM_SQUARE_OBJECT_INDEX] =
{
    0,1,2, 2,3,0,
};


#endif // _QCAR_SQUARE_OBJECT_H_
