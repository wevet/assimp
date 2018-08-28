#pragma once

#include "code/Importer/IFC/IFCLoader.h"
#include "code/Importer/IFC/IFCReaderGen_2x3.h"
#include "code/STEPFile.h"

namespace Assimp {
    namespace STEP {
        namespace EXPRESS {
            class DataType;
        }
    }

    namespace IFC {
        void ConvertUnit( const ::Assimp::STEP::EXPRESS::DataType& dt, ConversionData2x3& conv );
    }
}

