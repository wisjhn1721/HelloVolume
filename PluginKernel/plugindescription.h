// --- CMAKE generated variables for your plugin

#include "pluginstructures.h"

#ifndef _plugindescription_h
#define _plugindescription_h

#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)
#define AU_COCOA_VIEWFACTORY_STRING STR(AU_COCOA_VIEWFACTORY_NAME)
#define AU_COCOA_VIEW_STRING STR(AU_COCOA_VIEW_NAME)

// --- AU Plugin Cocoa View Names (flat namespace)
#define AU_COCOA_VIEWFACTORY_NAME AUCocoaViewFactory_8588AEDB94AF4AD2857485DD6C4AAA37
#define AU_COCOA_VIEW_NAME AUCocoaView_8588AEDB94AF4AD2857485DD6C4AAA37

// --- BUNDLE IDs (MacOS Only)
const char* kAAXBundleID = "wisefx.aax.HelloVolume.bundleID";
const char* kAUBundleID = "wisefx.au.HelloVolume.bundleID";
const char* kVST3BundleID = "wisefx.vst3.HelloVolume.bundleID";

// --- Plugin Names
const char* kPluginName = "HelloVolume";
const char* kShortPluginName = "HelloVolume";
const char* kAUBundleName = "HelloVolume";
const char* kAAXBundleName = "HelloVolume";
const char* kVSTBundleName = "HelloVolume";

// --- bundle name helper
inline static const char* getPluginDescBundleName()
{
#ifdef AUPLUGIN
	return kAUBundleName;
#endif

#ifdef AAXPLUGIN
	return kAAXBundleName;
#endif

#ifdef VSTPLUGIN
	return kVSTBundleName;
#endif

	// --- should never get here
	return kPluginName;
}

// --- Plugin Type
const pluginType kPluginType = pluginType::kFXPlugin;

// --- VST3 UUID
const char* kVSTFUID = "{8588AEDB-94AF-4AD2-8574-85DD6C4AAA37}";

// --- 4-char codes
const int32_t kFourCharCode = 'NDpc';
const int32_t kAAXProductID = 'QUUe';
const int32_t kManufacturerID = 'WISE';

// --- Vendor information
const char* kVendorName = "WiseFX";
const char* kVendorURL = "www.wisefx.com";
const char* kVendorEmail = "john@wisefx.com";

// --- Plugin Options
const bool kProcessFrames = true;
const uint32_t kBlockSize = DEFAULT_AUDIO_BLOCK_SIZE;
const bool kWantSidechain = false;
const uint32_t kLatencyInSamples = 0;
const double kTailTimeMsec = 0.000;
const bool kVSTInfiniteTail = false;
const bool kVSTSAA = false;
const uint32_t kVST3SAAGranularity = 1;
const uint32_t kAAXCategory = 0;

#endif


