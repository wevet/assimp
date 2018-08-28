#pragma once

#include "code/Importer/IFC/IFCLoader.h"
#include "code/Importer/IFC/IFCReaderGen_4.h"
#include "code/Importer/IFC/IFCUtil.h"

struct aiScene;

namespace Assimp {
namespace IFC {

struct ConversionData4 {
    ConversionData4( const STEP::DB& db, const IFC::Schema_4::IfcProject& proj, aiScene* out, const IFCImporter::Settings& settings );
    ~ConversionData4();

    IfcFloat mLenScale, mAngleScale;
    bool plane_angle_in_radians;
    const STEP::DB& mDb;
    const IFC::Schema_4::IfcProject& mProj;
    aiScene* mOut;
    const IFCImporter::Settings& mSettings;
};

}
}
