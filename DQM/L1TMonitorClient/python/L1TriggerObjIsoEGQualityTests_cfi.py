# quality tests for L1 IsoEG trigger objects
 
import FWCore.ParameterSet.Config as cms

l1TriggerObjIsoEGQualityTests = cms.EDAnalyzer("QualityTester",
    qtList=cms.untracked.FileInPath('DQM/L1TMonitorClient/data/L1TriggerObjIsoEGQualityTests.xml'),
    QualityTestPrescaler=cms.untracked.int32(1),
    getQualityTestsFromFile=cms.untracked.bool(True),
    testInEventloop=cms.untracked.bool(False),
    qtestOnEndLumi=cms.untracked.bool(True),
    qtestOnEndRun=cms.untracked.bool(True),
    qtestOnEndJob=cms.untracked.bool(False),
    reportThreshold=cms.untracked.string(""),
    verboseQT=cms.untracked.bool(True)
)

