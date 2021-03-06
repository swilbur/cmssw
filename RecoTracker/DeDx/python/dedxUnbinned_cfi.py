import FWCore.ParameterSet.Config as cms

dedxUnbinned = cms.EDProducer("DeDxEstimatorProducer",
    tracks                     = cms.InputTag("generalTracks"),
    trajectoryTrackAssociation = cms.InputTag("generalTracks"),

    estimator      = cms.string('unbinnedFit'),

    UseStrip       = cms.bool(True),
    UsePixel       = cms.bool(False),
    MeVperADCStrip = cms.double(3.61e-06*265),
    MeVperADCPixel = cms.double(3.61e-06),

    UseCalibration  = cms.bool(False),
    calibrationPath = cms.string(""),
    ShapeTest       = cms.bool(True),
)



