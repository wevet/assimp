#include "code/Importer/IFC/IFCSchema4Loader.h"

namespace Assimp {
namespace IFC {

ConversionData4::ConversionData4( const STEP::DB& db, const IFC::Schema_4::IfcProject& proj, aiScene* out, const IFCImporter::Settings& settings )
: mLenScale( 1.0 )
, mAngleScale( -1.0 )
, mDb( db )
, mProj( proj )
, mOut( out )
, mSettings( settings ) {
    // empty
}

ConversionData4::~ConversionData4() {

}

}
}
