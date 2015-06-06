/*******************************************************************************
*
* Part of LD48 Entry: (working title) - see common.h for copyright info.
*
*******************************************************************************/

#ifndef     __ANORMS_H
    #define __ANORMS_H

    /* the id normal list, for use with glNormal3f() */
    float normal_list[][3] =
    {
        { -0.525731f,  0.000000f,  0.850651f },
        { -0.442863f,  0.238856f,  0.864188f },
        { -0.295242f,  0.000000f,  0.955423f },
        { -0.309017f,  0.500000f,  0.809017f },
        { -0.162460f,  0.262866f,  0.951056f },
        {  0.000000f,  0.000000f,  1.000000f },
        {  0.000000f,  0.850651f,  0.525731f },
        { -0.147621f,  0.716567f,  0.681718f },
        {  0.147621f,  0.716567f,  0.681718f },
        {  0.000000f,  0.525731f,  0.850651f },
        {  0.309017f,  0.500000f,  0.809017f },
        {  0.525731f,  0.000000f,  0.850651f },
        {  0.295242f,  0.000000f,  0.955423f },
        {  0.442863f,  0.238856f,  0.864188f },
        {  0.162460f,  0.262866f,  0.951056f },
        { -0.681718f,  0.147621f,  0.716567f },
        { -0.809017f,  0.309017f,  0.500000f },
        { -0.587785f,  0.425325f,  0.688191f },
        { -0.850651f,  0.525731f,  0.000000f },
        { -0.864188f,  0.442863f,  0.238856f },
        { -0.716567f,  0.681718f,  0.147621f },
        { -0.688191f,  0.587785f,  0.425325f },
        { -0.500000f,  0.809017f,  0.309017f },
        { -0.238856f,  0.864188f,  0.442863f },
        { -0.425325f,  0.688191f,  0.587785f },
        { -0.716567f,  0.681718f, -0.147621f },
        { -0.500000f,  0.809017f, -0.309017f },
        { -0.525731f,  0.850651f,  0.000000f },
        {  0.000000f,  0.850651f, -0.525731f },
        { -0.238856f,  0.864188f, -0.442863f },
        {  0.000000f,  0.955423f, -0.295242f },
        { -0.262866f,  0.951056f, -0.162460f },
        {  0.000000f,  1.000000f,  0.000000f },
        {  0.000000f,  0.955423f,  0.295242f },
        { -0.262866f,  0.951056f,  0.162460f },
        {  0.238856f,  0.864188f,  0.442863f },
        {  0.262866f,  0.951056f,  0.162460f },
        {  0.500000f,  0.809017f,  0.309017f },
        {  0.238856f,  0.864188f, -0.442863f },
        {  0.262866f,  0.951056f, -0.162460f },
        {  0.500000f,  0.809017f, -0.309017f },
        {  0.850651f,  0.525731f,  0.000000f },
        {  0.716567f,  0.681718f,  0.147621f },
        {  0.716567f,  0.681718f, -0.147621f },
        {  0.525731f,  0.850651f,  0.000000f },
        {  0.425325f,  0.688191f,  0.587785f },
        {  0.864188f,  0.442863f,  0.238856f },
        {  0.688191f,  0.587785f,  0.425325f },
        {  0.809017f,  0.309017f,  0.500000f },
        {  0.681718f,  0.147621f,  0.716567f },
        {  0.587785f,  0.425325f,  0.688191f },
        {  0.955423f,  0.295242f,  0.000000f },
        {  1.000000f,  0.000000f,  0.000000f },
        {  0.951056f,  0.162460f,  0.262866f },
        {  0.850651f, -0.525731f,  0.000000f },
        {  0.955423f, -0.295242f,  0.000000f },
        {  0.864188f, -0.442863f,  0.238856f },
        {  0.951056f, -0.162460f,  0.262866f },
        {  0.809017f, -0.309017f,  0.500000f },
        {  0.681718f, -0.147621f,  0.716567f },
        {  0.850651f,  0.000000f,  0.525731f },
        {  0.864188f,  0.442863f, -0.238856f },
        {  0.809017f,  0.309017f, -0.500000f },
        {  0.951056f,  0.162460f, -0.262866f },
        {  0.525731f,  0.000000f, -0.850651f },
        {  0.681718f,  0.147621f, -0.716567f },
        {  0.681718f, -0.147621f, -0.716567f },
        {  0.850651f,  0.000000f, -0.525731f },
        {  0.809017f, -0.309017f, -0.500000f },
        {  0.864188f, -0.442863f, -0.238856f },
        {  0.951056f, -0.162460f, -0.262866f },
        {  0.147621f,  0.716567f, -0.681718f },
        {  0.309017f,  0.500000f, -0.809017f },
        {  0.425325f,  0.688191f, -0.587785f },
        {  0.442863f,  0.238856f, -0.864188f },
        {  0.587785f,  0.425325f, -0.688191f },
        {  0.688191f,  0.587785f, -0.425325f },
        { -0.147621f,  0.716567f, -0.681718f },
        { -0.309017f,  0.500000f, -0.809017f },
        {  0.000000f,  0.525731f, -0.850651f },
        { -0.525731f,  0.000000f, -0.850651f },
        { -0.442863f,  0.238856f, -0.864188f },
        { -0.295242f,  0.000000f, -0.955423f },
        { -0.162460f,  0.262866f, -0.951056f },
        {  0.000000f,  0.000000f, -1.000000f },
        {  0.295242f,  0.000000f, -0.955423f },
        {  0.162460f,  0.262866f, -0.951056f },
        { -0.442863f, -0.238856f, -0.864188f },
        { -0.309017f, -0.500000f, -0.809017f },
        { -0.162460f, -0.262866f, -0.951056f },
        {  0.000000f, -0.850651f, -0.525731f },
        { -0.147621f, -0.716567f, -0.681718f },
        {  0.147621f, -0.716567f, -0.681718f },
        {  0.000000f, -0.525731f, -0.850651f },
        {  0.309017f, -0.500000f, -0.809017f },
        {  0.442863f, -0.238856f, -0.864188f },
        {  0.162460f, -0.262866f, -0.951056f },
        {  0.238856f, -0.864188f, -0.442863f },
        {  0.500000f, -0.809017f, -0.309017f },
        {  0.425325f, -0.688191f, -0.587785f },
        {  0.716567f, -0.681718f, -0.147621f },
        {  0.688191f, -0.587785f, -0.425325f },
        {  0.587785f, -0.425325f, -0.688191f },
        {  0.000000f, -0.955423f, -0.295242f },
        {  0.000000f, -1.000000f,  0.000000f },
        {  0.262866f, -0.951056f, -0.162460f },
        {  0.000000f, -0.850651f,  0.525731f },
        {  0.000000f, -0.955423f,  0.295242f },
        {  0.238856f, -0.864188f,  0.442863f },
        {  0.262866f, -0.951056f,  0.162460f },
        {  0.500000f, -0.809017f,  0.309017f },
        {  0.716567f, -0.681718f,  0.147621f },
        {  0.525731f, -0.850651f,  0.000000f },
        { -0.238856f, -0.864188f, -0.442863f },
        { -0.500000f, -0.809017f, -0.309017f },
        { -0.262866f, -0.951056f, -0.162460f },
        { -0.850651f, -0.525731f,  0.000000f },
        { -0.716567f, -0.681718f, -0.147621f },
        { -0.716567f, -0.681718f,  0.147621f },
        { -0.525731f, -0.850651f,  0.000000f },
        { -0.500000f, -0.809017f,  0.309017f },
        { -0.238856f, -0.864188f,  0.442863f },
        { -0.262866f, -0.951056f,  0.162460f },
        { -0.864188f, -0.442863f,  0.238856f },
        { -0.809017f, -0.309017f,  0.500000f },
        { -0.688191f, -0.587785f,  0.425325f },
        { -0.681718f, -0.147621f,  0.716567f },
        { -0.442863f, -0.238856f,  0.864188f },
        { -0.587785f, -0.425325f,  0.688191f },
        { -0.309017f, -0.500000f,  0.809017f },
        { -0.147621f, -0.716567f,  0.681718f },
        { -0.425325f, -0.688191f,  0.587785f },
        { -0.162460f, -0.262866f,  0.951056f },
        {  0.442863f, -0.238856f,  0.864188f },
        {  0.162460f, -0.262866f,  0.951056f },
        {  0.309017f, -0.500000f,  0.809017f },
        {  0.147621f, -0.716567f,  0.681718f },
        {  0.000000f, -0.525731f,  0.850651f },
        {  0.425325f, -0.688191f,  0.587785f },
        {  0.587785f, -0.425325f,  0.688191f },
        {  0.688191f, -0.587785f,  0.425325f },
        { -0.955423f,  0.295242f,  0.000000f },
        { -0.951056f,  0.162460f,  0.262866f },
        { -1.000000f,  0.000000f,  0.000000f },
        { -0.850651f,  0.000000f,  0.525731f },
        { -0.955423f, -0.295242f,  0.000000f },
        { -0.951056f, -0.162460f,  0.262866f },
        { -0.864188f,  0.442863f, -0.238856f },
        { -0.951056f,  0.162460f, -0.262866f },
        { -0.809017f,  0.309017f, -0.500000f },
        { -0.864188f, -0.442863f, -0.238856f },
        { -0.951056f, -0.162460f, -0.262866f },
        { -0.809017f, -0.309017f, -0.500000f },
        { -0.681718f,  0.147621f, -0.716567f },
        { -0.681718f, -0.147621f, -0.716567f },
        { -0.850651f,  0.000000f, -0.525731f },
        { -0.688191f,  0.587785f, -0.425325f },
        { -0.587785f,  0.425325f, -0.688191f },
        { -0.425325f,  0.688191f, -0.587785f },
        { -0.425325f, -0.688191f, -0.587785f },
        { -0.587785f, -0.425325f, -0.688191f },
        { -0.688191f, -0.587785f, -0.425325f }
    };
#endif
