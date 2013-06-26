import FWCore.ParameterSet.Config as cms

XMLIdealGeometryESSource = cms.ESSource("XMLIdealGeometryESSource",
    geomXMLFiles = cms.vstring('Geometry/CMSCommonData/data/normal/cmsextent.xml', 
        'Geometry/CMSCommonData/data/cms.xml', 
        'Geometry/CMSCommonData/data/cmsMother.xml', 
        'Geometry/CMSCommonData/data/cmsTracker.xml', 
        'Geometry/CMSCommonData/data/muonBase.xml', 
        'Geometry/CMSCommonData/data/muonMagnet.xml', 
        'Geometry/CMSCommonData/data/cmsBeam.xml', 
        'Geometry/CMSCommonData/data/beampipe.xml', 
        'Geometry/CMSCommonData/data/mgnt.xml', 
        'Geometry/CMSCommonData/data/materials.xml', 
        'Geometry/CMSCommonData/data/rotations.xml', 
        'Geometry/TrackerCommonData/data/tibtidcommonmaterial.xml', 
        'Geometry/TrackerCommonData/data/tibmaterial.xml', 
        'Geometry/TrackerCommonData/data/tibmodpar.xml', 
        'Geometry/TrackerCommonData/data/tibmodule0.xml', 
        'Geometry/TrackerCommonData/data/tibmodule0a.xml', 
        'Geometry/TrackerCommonData/data/tibmodule0b.xml', 
        'Geometry/TrackerCommonData/data/tibmodule2.xml', 
        'Geometry/MTCCTrackerCommonData/data/tibemptymodule2_mtcc.xml', 
        'Geometry/TrackerCommonData/data/tibstringpar.xml', 
        'Geometry/TrackerCommonData/data/tibstring1lr.xml', 
        'Geometry/TrackerCommonData/data/tibstring1ur.xml', 
        'Geometry/MTCCTrackerCommonData/data/tibstring1_mtcc.xml', 
        'Geometry/TrackerCommonData/data/tibstring2lr.xml', 
        'Geometry/TrackerCommonData/data/tibstring2ur.xml', 
        'Geometry/MTCCTrackerCommonData/data/tibstring2_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tibemptystringss_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tibemptystring2lr_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tibemptystring2ur_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tibemptystring2_mtcc.xml', 
        'Geometry/TrackerCommonData/data/tiblayerpar.xml', 
        'Geometry/MTCCTrackerCommonData/data/tiblayer1_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tiblayer2_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tib_mtcc.xml', 
        'Geometry/TrackerCommonData/data/tobmaterial.xml', 
        'Geometry/TrackerCommonData/data/tobmodpar.xml', 
        'Geometry/TrackerCommonData/data/tobmodule0.xml', 
        'Geometry/TrackerCommonData/data/tobmodule2.xml', 
        'Geometry/TrackerCommonData/data/tobmodule4.xml', 
        'Geometry/TrackerCommonData/data/tobrodpar.xml', 
        'Geometry/TrackerCommonData/data/tobrod0c.xml', 
        'Geometry/MTCCTrackerCommonData/data/tobrod0_a_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tobrod0_b_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tobrod0_c_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tobrod0_d_mtcc.xml', 
        'Geometry/TrackerCommonData/data/tobrod0h.xml', 
        'Geometry/TrackerCommonData/data/tobrod0l.xml', 
        'Geometry/MTCCTrackerCommonData/data/tobrod0_mtcc.xml', 
        'Geometry/TrackerCommonData/data/tobrod2c.xml', 
        'Geometry/TrackerCommonData/data/tobrod2l.xml', 
        'Geometry/TrackerCommonData/data/tobrod4c.xml', 
        'Geometry/MTCCTrackerCommonData/data/tobrod4_a_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tobrod4_b_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tobrod4_c_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tobrod4_d_mtcc.xml', 
        'Geometry/TrackerCommonData/data/tobrod4h.xml', 
        'Geometry/TrackerCommonData/data/tobrod4l.xml', 
        'Geometry/MTCCTrackerCommonData/data/tobrod4_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tob_mtcc.xml', 
        'Geometry/TrackerCommonData/data/tecmaterial.xml', 
        'Geometry/TrackerCommonData/data/tecmodpar.xml', 
        'Geometry/TrackerCommonData/data/tecmodule3.xml', 
        'Geometry/TrackerCommonData/data/tecmodule4.xml', 
        'Geometry/TrackerCommonData/data/tecmodule4r.xml', 
        'Geometry/TrackerCommonData/data/tecmodule4s.xml', 
        'Geometry/TrackerCommonData/data/tecmodule5.xml', 
        'Geometry/TrackerCommonData/data/tecmodule6.xml', 
        'Geometry/TrackerCommonData/data/tecring3.xml', 
        'Geometry/TrackerCommonData/data/tecring3f.xml', 
        'Geometry/TrackerCommonData/data/tecring3b.xml', 
        'Geometry/TrackerCommonData/data/tecring4.xml', 
        'Geometry/TrackerCommonData/data/tecring4f.xml', 
        'Geometry/TrackerCommonData/data/tecring4b.xml', 
        'Geometry/TrackerCommonData/data/tecring5.xml', 
        'Geometry/TrackerCommonData/data/tecring5f.xml', 
        'Geometry/TrackerCommonData/data/tecring5b.xml', 
        'Geometry/TrackerCommonData/data/tecring6.xml', 
        'Geometry/TrackerCommonData/data/tecring6f.xml', 
        'Geometry/TrackerCommonData/data/tecring6b.xml', 
        'Geometry/TrackerCommonData/data/tecpetpar.xml', 
        'Geometry/TrackerCommonData/data/tecpetal3.xml', 
        'Geometry/TrackerCommonData/data/tecpetalf.xml', 
        'Geometry/TrackerCommonData/data/tecpetalb.xml', 
        'Geometry/TrackerCommonData/data/tecpetal8f.xml', 
        'Geometry/TrackerCommonData/data/tecpetal8b.xml', 
        'Geometry/TrackerCommonData/data/tecwheel.xml', 
        'Geometry/MTCCTrackerCommonData/data/tecwheeld_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tecsupport_mtcc.xml', 
        'Geometry/MTCCTrackerCommonData/data/tec_mtcc.xml', 
        'Geometry/TrackerCommonData/data/trackermaterial.xml', 
        'Geometry/MTCCTrackerCommonData/data/tracker.xml', 
        'Geometry/MTCCTrackerCommonData/data/trackerStructureTopology_mtcc.xml', 
        'Geometry/TrackerSimData/data/trackersens_mtcc.xml', 
        'Geometry/TrackerSimData/data/trackerProdCuts_mtcc.xml', 
        'Geometry/TrackerSimData/data/trackerProdCutsBEAM.xml', 
        'Geometry/CMSCommonData/data/FieldParameters.xml'),
    rootNodeName = cms.string('cms:OCMS')
)


