#include "CondCore/PluginSystem/interface/registration_macros.h"

#include "JetMETCorrections/FFTJetObjects/interface/FFTJetCorrectorSequenceTypes.h"
#include "JetMETCorrections/FFTJetObjects/interface/FFTJetCorrectorSequenceRcdTypes.h"
#include "JetMETCorrections/FFTJetObjects/interface/FFTJetLookupTableRcdTypes.h"
#include "JetMETCorrections/FFTJetObjects/interface/FFTJetLookupTableSequence.h"

REGISTER_PLUGIN(FFTBasicJetCorrectorSequenceRcd, FFTBasicJetCorrectorSequence);  
REGISTER_PLUGIN(FFTGenJetCorrectorSequenceRcd,   FFTGenJetCorrectorSequence);
REGISTER_PLUGIN(FFTCaloJetCorrectorSequenceRcd,  FFTCaloJetCorrectorSequence); 
REGISTER_PLUGIN(FFTPFJetCorrectorSequenceRcd,    FFTPFJetCorrectorSequence);   
REGISTER_PLUGIN(FFTTrackJetCorrectorSequenceRcd, FFTTrackJetCorrectorSequence);
REGISTER_PLUGIN(FFTJPTJetCorrectorSequenceRcd,   FFTJPTJetCorrectorSequence);  
REGISTER_PLUGIN(FFTPFCHS0CorrectorSequenceRcd,   FFTPFJetCorrectorSequence);   
REGISTER_PLUGIN(FFTPFCHS1CorrectorSequenceRcd,   FFTPFJetCorrectorSequence);   
REGISTER_PLUGIN(FFTPFCHS2CorrectorSequenceRcd,   FFTPFJetCorrectorSequence);   

REGISTER_PLUGIN(FFTBasicJetSysCorrectorSequenceRcd, FFTBasicJetCorrectorSequence);
REGISTER_PLUGIN(FFTGenJetSysCorrectorSequenceRcd,   FFTGenJetCorrectorSequence);  
REGISTER_PLUGIN(FFTCaloJetSysCorrectorSequenceRcd,  FFTCaloJetCorrectorSequence); 
REGISTER_PLUGIN(FFTPFJetSysCorrectorSequenceRcd,    FFTPFJetCorrectorSequence);   
REGISTER_PLUGIN(FFTTrackJetSysCorrectorSequenceRcd, FFTTrackJetCorrectorSequence);
REGISTER_PLUGIN(FFTJPTJetSysCorrectorSequenceRcd,   FFTJPTJetCorrectorSequence);  
REGISTER_PLUGIN(FFTPFCHS0SysCorrectorSequenceRcd,   FFTPFJetCorrectorSequence);   
REGISTER_PLUGIN(FFTPFCHS1SysCorrectorSequenceRcd,   FFTPFJetCorrectorSequence);   
REGISTER_PLUGIN(FFTPFCHS2SysCorrectorSequenceRcd,   FFTPFJetCorrectorSequence);   

REGISTER_PLUGIN(FFTGen0CorrectorSequenceRcd, FFTGenJetCorrectorSequence);
REGISTER_PLUGIN(FFTGen1CorrectorSequenceRcd, FFTGenJetCorrectorSequence);
REGISTER_PLUGIN(FFTGen2CorrectorSequenceRcd, FFTGenJetCorrectorSequence);

REGISTER_PLUGIN(FFTPF0CorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTPF1CorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTPF2CorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTPF3CorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTPF4CorrectorSequenceRcd, FFTPFJetCorrectorSequence);

REGISTER_PLUGIN(FFTCalo0CorrectorSequenceRcd, FFTCaloJetCorrectorSequence);
REGISTER_PLUGIN(FFTCalo1CorrectorSequenceRcd, FFTCaloJetCorrectorSequence);
REGISTER_PLUGIN(FFTCalo2CorrectorSequenceRcd, FFTCaloJetCorrectorSequence);
REGISTER_PLUGIN(FFTCalo3CorrectorSequenceRcd, FFTCaloJetCorrectorSequence);
REGISTER_PLUGIN(FFTCalo4CorrectorSequenceRcd, FFTCaloJetCorrectorSequence);

REGISTER_PLUGIN(FFTGen0SysCorrectorSequenceRcd, FFTGenJetCorrectorSequence);
REGISTER_PLUGIN(FFTGen1SysCorrectorSequenceRcd, FFTGenJetCorrectorSequence);
REGISTER_PLUGIN(FFTGen2SysCorrectorSequenceRcd, FFTGenJetCorrectorSequence);

REGISTER_PLUGIN(FFTPF0SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTPF1SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTPF2SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTPF3SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTPF4SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTPF5SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTPF6SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTPF7SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTPF8SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTPF9SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);

REGISTER_PLUGIN(FFTCalo0SysCorrectorSequenceRcd, FFTCaloJetCorrectorSequence);
REGISTER_PLUGIN(FFTCalo1SysCorrectorSequenceRcd, FFTCaloJetCorrectorSequence);
REGISTER_PLUGIN(FFTCalo2SysCorrectorSequenceRcd, FFTCaloJetCorrectorSequence);
REGISTER_PLUGIN(FFTCalo3SysCorrectorSequenceRcd, FFTCaloJetCorrectorSequence);
REGISTER_PLUGIN(FFTCalo4SysCorrectorSequenceRcd, FFTCaloJetCorrectorSequence);
REGISTER_PLUGIN(FFTCalo5SysCorrectorSequenceRcd, FFTCaloJetCorrectorSequence);
REGISTER_PLUGIN(FFTCalo6SysCorrectorSequenceRcd, FFTCaloJetCorrectorSequence);
REGISTER_PLUGIN(FFTCalo7SysCorrectorSequenceRcd, FFTCaloJetCorrectorSequence);
REGISTER_PLUGIN(FFTCalo8SysCorrectorSequenceRcd, FFTCaloJetCorrectorSequence);
REGISTER_PLUGIN(FFTCalo9SysCorrectorSequenceRcd, FFTCaloJetCorrectorSequence);

REGISTER_PLUGIN(FFTCHS0SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTCHS1SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTCHS2SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTCHS3SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTCHS4SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTCHS5SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTCHS6SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTCHS7SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTCHS8SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);
REGISTER_PLUGIN(FFTCHS9SysCorrectorSequenceRcd, FFTPFJetCorrectorSequence);

REGISTER_PLUGIN(FFTEtaFlatteningFactorsTableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTPileupRhoCalibrationTableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTPileupRhoEtaDependenceTableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT0TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT1TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT2TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT3TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT4TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT5TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT6TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT7TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT8TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT9TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT10TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT11TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT12TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT13TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT14TableRcd, FFTJetLookupTableSequence);
REGISTER_PLUGIN(FFTLUT15TableRcd, FFTJetLookupTableSequence);
