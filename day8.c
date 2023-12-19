//
// Created by eurms on 12/8/2023.
//

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/wait.h>

char * input = "LLRRRLRLLRLRRLRLRLRRRLLRRLRRRLRRRLRRRLRRRLRRRLRRLRLLRRRLRRLLRLRLLLRRLRRLRLRLRLRRRLRLRRRLRRLLLRRRLLRRLLRRLLRRRLLLLRLRLRRRLRLRRRLRLLLRLRRLRRRLRRRLRRRLRRRLLRRLLLLRRLLRRLLRRLRLRRRLRRRLRRRLRRLRRRLRRLRRLRRLRLRRRLRRLRRRLRRRLRRLRLRRRLRRLLRLRRLRRRLRLRRLRRRLRRLRRLRRRLLRRRR\n"
               "\n"
               "GXF = (XQB, GFH)\n"
               "QQC = (HQF, BNK)\n"
               "TPP = (XNG, FDD)\n"
               "LQD = (MGR, GJN)\n"
               "XNG = (RCM, BJG)\n"
               "NQC = (KNT, DQF)\n"
               "DGJ = (PGM, LSB)\n"
               "RBF = (RCH, RCH)\n"
               "DNH = (RTL, MLF)\n"
               "VKF = (SRV, TQR)\n"
               "MPT = (FVV, TVP)\n"
               "TKX = (VRN, KNV)\n"
               "XLQ = (MCF, MCF)\n"
               "MNJ = (FRT, QGV)\n"
               "STF = (LFQ, QDS)\n"
               "FFH = (JVM, TCJ)\n"
               "KRT = (GFC, HRX)\n"
               "FVG = (QFS, RSJ)\n"
               "DBH = (GXF, DJL)\n"
               "RKP = (VNL, MSC)\n"
               "VQX = (GGG, RPB)\n"
               "FCM = (VMC, MGV)\n"
               "SRL = (LVV, JQN)\n"
               "HHM = (BDM, FRV)\n"
               "GMN = (LPK, FHT)\n"
               "QCF = (RCH, NJM)\n"
               "PCB = (MDJ, KDM)\n"
               "VMR = (THX, HHB)\n"
               "XQK = (BJQ, LST)\n"
               "FCS = (KPT, RSC)\n"
               "XTG = (XTL, SVX)\n"
               "FVF = (KXB, VVV)\n"
               "NNR = (SBM, TPP)\n"
               "NPH = (RHN, FRR)\n"
               "GJF = (FXG, MLP)\n"
               "TRR = (LVC, RMR)\n"
               "NBS = (SFH, JGT)\n"
               "SSH = (KTK, DDM)\n"
               "CJH = (QJK, XHB)\n"
               "DQF = (NSR, MJB)\n"
               "FHT = (PFK, GPS)\n"
               "GTJ = (QXC, XBR)\n"
               "KQB = (JXT, KGR)\n"
               "JLL = (GTJ, CBN)\n"
               "QPH = (LTX, BDJ)\n"
               "BSP = (MRH, BXJ)\n"
               "QBX = (GPR, SHJ)\n"
               "SPJ = (SLD, XQK)\n"
               "PML = (TTV, BHX)\n"
               "FQN = (TPJ, BTV)\n"
               "GTK = (NBS, VNP)\n"
               "DSQ = (RFN, QGB)\n"
               "KTK = (JHR, FCM)\n"
               "FXV = (BBN, VPK)\n"
               "LJC = (VKH, PPQ)\n"
               "NBA = (JBL, LSR)\n"
               "RKK = (VTL, SNM)\n"
               "FVV = (DQS, CSM)\n"
               "MGJ = (QHP, DPL)\n"
               "RND = (JRQ, XGJ)\n"
               "DVP = (RBF, RBF)\n"
               "JXR = (TJN, CVC)\n"
               "FMV = (CVJ, BVZ)\n"
               "XBL = (KFC, HHT)\n"
               "GDR = (KCV, KCV)\n"
               "NGN = (VKH, PPQ)\n"
               "NJB = (VTH, FSQ)\n"
               "MBD = (JKS, SFQ)\n"
               "TGC = (PXP, TTF)\n"
               "VMT = (XJN, CCH)\n"
               "LBF = (QRB, SKN)\n"
               "DGH = (CSD, RND)\n"
               "SFH = (XHH, GSC)\n"
               "QQD = (VTT, NLX)\n"
               "BLB = (GHJ, KQD)\n"
               "LFG = (TLH, XJT)\n"
               "CQS = (FRR, RHN)\n"
               "XRS = (QLF, KLC)\n"
               "DJL = (GFH, XQB)\n"
               "LJM = (RPM, HPF)\n"
               "HHT = (LBF, VCS)\n"
               "GFL = (LFG, MGQ)\n"
               "TNX = (TSJ, HCK)\n"
               "HPR = (MTG, TJX)\n"
               "LKP = (BXL, BHG)\n"
               "KRC = (DCT, CTS)\n"
               "PSJ = (QPF, MQT)\n"
               "CXG = (NPG, JQP)\n"
               "QTK = (XBL, DSM)\n"
               "SVP = (MLF, RTL)\n"
               "NDT = (NLC, MLK)\n"
               "TDR = (DJR, CJQ)\n"
               "RHS = (HXN, PSZ)\n"
               "PSZ = (VNG, NNK)\n"
               "KKL = (GLH, SPJ)\n"
               "RSB = (SFQ, JKS)\n"
               "PQS = (XVK, LMV)\n"
               "TTV = (MLG, FRH)\n"
               "CJQ = (CTM, KCC)\n"
               "VTT = (QSQ, TVV)\n"
               "TCJ = (MTD, KKX)\n"
               "CNM = (SXQ, RGK)\n"
               "XCC = (DNP, FQN)\n"
               "CXD = (TJX, MTG)\n"
               "VTL = (JFV, DHN)\n"
               "BJG = (FHB, QVJ)\n"
               "MJR = (HDL, LSF)\n"
               "CSV = (CTS, DCT)\n"
               "LFQ = (LNX, RHQ)\n"
               "MNL = (XBL, DSM)\n"
               "NDR = (PGT, TPC)\n"
               "CKS = (CDQ, GLT)\n"
               "VVV = (BVL, QQC)\n"
               "GGG = (JGS, VRC)\n"
               "QRT = (SQJ, VSJ)\n"
               "HQF = (NJK, NJK)\n"
               "JGK = (FJK, PXJ)\n"
               "RXG = (CLT, GTK)\n"
               "TNH = (SJM, QNX)\n"
               "HLX = (QJX, PGN)\n"
               "FRR = (CKP, NHC)\n"
               "QMK = (QVH, QLH)\n"
               "FRT = (TMB, VRX)\n"
               "KJD = (GBS, QMT)\n"
               "RCH = (TGC, TGC)\n"
               "JGF = (DKD, CHG)\n"
               "TSM = (TDR, XHJ)\n"
               "MTG = (DRP, KRR)\n"
               "DCF = (NQC, KNM)\n"
               "VPQ = (HRB, MGG)\n"
               "XVK = (MPC, XMX)\n"
               "NNK = (FKT, CMD)\n"
               "TBF = (JDV, LQD)\n"
               "TTH = (SJM, QNX)\n"
               "NLX = (TVV, QSQ)\n"
               "HGT = (LSF, HDL)\n"
               "FCB = (KLC, QLF)\n"
               "GBH = (HTJ, LXL)\n"
               "BJQ = (XDH, RGV)\n"
               "FLH = (FXV, SMJ)\n"
               "XGN = (CHN, BLJ)\n"
               "RGV = (QCB, TCC)\n"
               "BCV = (NHF, NDH)\n"
               "GQD = (LDC, TVB)\n"
               "BCT = (KGS, QCH)\n"
               "NGC = (MGJ, RPT)\n"
               "LSL = (QVH, QLH)\n"
               "SQJ = (TTH, TNH)\n"
               "VNL = (RLV, CRK)\n"
               "XCQ = (KQB, BLP)\n"
               "CDL = (DJL, GXF)\n"
               "MJB = (CRR, HHM)\n"
               "GSP = (DQJ, FLV)\n"
               "NCM = (SQN, VPJ)\n"
               "JRQ = (RJM, CXG)\n"
               "SXA = (QPH, CFB)\n"
               "LBT = (GPL, NDJ)\n"
               "QNX = (PJT, PQC)\n"
               "PBV = (RRP, TSM)\n"
               "CSD = (XGJ, JRQ)\n"
               "MLK = (GLG, SKB)\n"
               "CFB = (LTX, BDJ)\n"
               "BCH = (HPQ, JBR)\n"
               "BBN = (RHR, VMT)\n"
               "KCV = (RHL, RHL)\n"
               "SGG = (SMP, QSP)\n"
               "GFB = (KCF, KJR)\n"
               "TSD = (NSD, NDL)\n"
               "CXL = (FVG, JCJ)\n"
               "FSQ = (FQG, GXQ)\n"
               "BQF = (HRB, MGG)\n"
               "LRK = (JPG, BHR)\n"
               "LBB = (BHX, TTV)\n"
               "CXR = (BXX, STP)\n"
               "MGV = (RLK, FDX)\n"
               "FHB = (LCN, KSX)\n"
               "JDQ = (GFK, BHD)\n"
               "FJL = (GDR, GDR)\n"
               "TSN = (RKJ, GLN)\n"
               "VPK = (RHR, VMT)\n"
               "VCS = (SKN, QRB)\n"
               "BKG = (RSC, KPT)\n"
               "LQB = (MMQ, BCT)\n"
               "KJK = (SMF, VPM)\n"
               "XMV = (PQS, RCX)\n"
               "TCC = (GPP, KRT)\n"
               "BFS = (DDP, VJJ)\n"
               "FDD = (RCM, BJG)\n"
               "BHG = (MKG, BSM)\n"
               "GQP = (PRR, FFH)\n"
               "GXQ = (BLH, FMB)\n"
               "XBV = (NSH, GCB)\n"
               "MCF = (QPH, CFB)\n"
               "BTD = (BCH, GFM)\n"
               "JQD = (VPQ, BQF)\n"
               "JGT = (XHH, GSC)\n"
               "KGS = (MGB, QQS)\n"
               "JMF = (PSK, GDD)\n"
               "VTZ = (NNR, NVQ)\n"
               "JGS = (KHM, DTS)\n"
               "CBF = (NDJ, GPL)\n"
               "XPM = (MCF, VGZ)\n"
               "RSJ = (VCC, MGS)\n"
               "BLQ = (HJP, MPP)\n"
               "HHB = (NKX, PXK)\n"
               "JKS = (DKV, GMN)\n"
               "GFH = (RXG, VGP)\n"
               "MSC = (RLV, CRK)\n"
               "KJR = (SLQ, FLH)\n"
               "KFC = (VCS, LBF)\n"
               "GGM = (KJK, QJF)\n"
               "QDS = (RHQ, LNX)\n"
               "TPC = (PFD, DJN)\n"
               "DSM = (HHT, KFC)\n"
               "BPJ = (RKK, GGV)\n"
               "MLG = (PDG, SGF)\n"
               "HTJ = (RBJ, PKL)\n"
               "HJR = (MRH, BXJ)\n"
               "JVA = (NVQ, NNR)\n"
               "PXK = (CRV, RHB)\n"
               "NJK = (CVJ, CVJ)\n"
               "XPR = (PGT, TPC)\n"
               "DTS = (FCS, BKG)\n"
               "XJN = (TFT, LKP)\n"
               "SNV = (DDT, LBL)\n"
               "BXX = (KKQ, GBH)\n"
               "PQM = (MXJ, FTT)\n"
               "NSX = (HLX, GVH)\n"
               "CVJ = (JBL, LSR)\n"
               "HKQ = (VMR, DSR)\n"
               "RQJ = (QFV, XMV)\n"
               "CMQ = (KKL, QDL)\n"
               "PGM = (VBL, KFF)\n"
               "LST = (RGV, XDH)\n"
               "CMD = (HKQ, SPB)\n"
               "XSV = (LBB, PML)\n"
               "JHB = (SSB, CXR)\n"
               "LVC = (JHB, TVH)\n"
               "QNT = (RBB, NDT)\n"
               "QPF = (FJG, TKX)\n"
               "NDH = (RRT, PQM)\n"
               "TSJ = (LGH, FBN)\n"
               "KDM = (GJJ, NVX)\n"
               "HMJ = (HPF, RPM)\n"
               "STP = (GBH, KKQ)\n"
               "LDC = (LBT, CBF)\n"
               "RCB = (BPN, JXR)\n"
               "MSN = (PDF, JHF)\n"
               "KKX = (HVX, BKX)\n"
               "GLT = (VHR, GGM)\n"
               "MRH = (LCD, CKD)\n"
               "VGP = (CLT, GTK)\n"
               "LLV = (MRN, PBV)\n"
               "PDL = (DGH, LNK)\n"
               "PFD = (RCB, VRH)\n"
               "CRK = (NGC, KQR)\n"
               "TVP = (CSM, DQS)\n"
               "VTH = (GXQ, FQG)\n"
               "RHJ = (SHN, PNR)\n"
               "MMQ = (QCH, KGS)\n"
               "GFK = (VDV, XCC)\n"
               "PQC = (SRF, KML)\n"
               "SHJ = (CHD, DCB)\n"
               "QJF = (SMF, VPM)\n"
               "QLF = (NGX, RKP)\n"
               "LTX = (RNS, VHH)\n"
               "RQB = (MGQ, LFG)\n"
               "BHD = (XCC, VDV)\n"
               "FQG = (BLH, FMB)\n"
               "SNM = (JFV, DHN)\n"
               "LRQ = (JDL, QBX)\n"
               "SHP = (FRT, QGV)\n"
               "DDP = (CRJ, SXV)\n"
               "LMV = (XMX, MPC)\n"
               "KMP = (HQB, SSK)\n"
               "GXM = (SRV, TQR)\n"
               "SMP = (JGK, GST)\n"
               "KRH = (PBV, MRN)\n"
               "RDM = (FKN, MSN)\n"
               "FNF = (VJJ, DDP)\n"
               "VKH = (CJX, PDB)\n"
               "NHF = (PQM, RRT)\n"
               "PBJ = (RMR, LVC)\n"
               "FRG = (QJC, BPL)\n"
               "RHG = (BGQ, XCQ)\n"
               "RPB = (VRC, JGS)\n"
               "KQD = (VBS, MBN)\n"
               "LSR = (SRH, CSS)\n"
               "KFF = (MFT, NSX)\n"
               "TJX = (KRR, DRP)\n"
               "GPL = (FPQ, SSH)\n"
               "XNM = (BCH, GFM)\n"
               "MPP = (RLX, FVF)\n"
               "HQB = (DJJ, SPV)\n"
               "SSK = (SPV, DJJ)\n"
               "XVA = (SHP, MNJ)\n"
               "TMT = (VRS, JHH)\n"
               "NGX = (MSC, VNL)\n"
               "SMF = (HFP, JMF)\n"
               "SFQ = (DKV, GMN)\n"
               "GBM = (NDH, NHF)\n"
               "DKV = (FHT, LPK)\n"
               "PTN = (FCD, SRL)\n"
               "GPB = (CVS, GFD)\n"
               "QFR = (BLQ, LCT)\n"
               "TLH = (KMP, LFS)\n"
               "TVG = (BHD, GFK)\n"
               "RRT = (MXJ, FTT)\n"
               "DCB = (BPC, GJF)\n"
               "VRN = (CVH, PLG)\n"
               "MGG = (RGR, DDB)\n"
               "XND = (LGX, FCN)\n"
               "HDC = (DJP, BPJ)\n"
               "TCV = (NNV, MDV)\n"
               "JQP = (LSL, QMK)\n"
               "KLC = (NGX, RKP)\n"
               "DPL = (VSL, GQP)\n"
               "BHX = (MLG, FRH)\n"
               "HNK = (LFQ, QDS)\n"
               "RHR = (CCH, XJN)\n"
               "RCM = (FHB, QVJ)\n"
               "JVN = (RHL, VTZ)\n"
               "HSS = (LXF, LXF)\n"
               "XQB = (RXG, VGP)\n"
               "XJQ = (NLN, XLD)\n"
               "HFP = (PSK, GDD)\n"
               "HCK = (FBN, LGH)\n"
               "VHR = (KJK, QJF)\n"
               "MLF = (MPT, SGJ)\n"
               "TPS = (PGM, LSB)\n"
               "HJJ = (CQS, NPH)\n"
               "LMQ = (JQD, VPR)\n"
               "GPR = (CHD, DCB)\n"
               "QFS = (MGS, VCC)\n"
               "SKB = (SMG, STS)\n"
               "CKT = (CCJ, RJH)\n"
               "SDV = (NGN, LJC)\n"
               "DJB = (DVP, SHV)\n"
               "CDR = (RQJ, BPH)\n"
               "QHP = (VSL, GQP)\n"
               "PFK = (HQJ, XSV)\n"
               "PNM = (NRQ, JGF)\n"
               "SQN = (LJM, HMJ)\n"
               "KXB = (BVL, QQC)\n"
               "NHX = (XDQ, PTN)\n"
               "TFT = (BHG, BXL)\n"
               "XDH = (TCC, QCB)\n"
               "XFN = (QGB, RFN)\n"
               "BLJ = (QRV, GGH)\n"
               "QLH = (SGG, QHQ)\n"
               "KPT = (LQB, TNG)\n"
               "VBS = (PDL, PJH)\n"
               "RFN = (GFL, RQB)\n"
               "JDL = (GPR, SHJ)\n"
               "NNV = (VSN, BRN)\n"
               "JNV = (KDM, MDJ)\n"
               "SLK = (FLV, DQJ)\n"
               "JPG = (XRS, FCB)\n"
               "DQJ = (NGR, XKM)\n"
               "LMT = (GJC, BKT)\n"
               "GFD = (DMP, XND)\n"
               "RJM = (NPG, JQP)\n"
               "GLH = (XQK, SLD)\n"
               "SPB = (DSR, VMR)\n"
               "MGQ = (TLH, XJT)\n"
               "SNL = (MLR, VTM)\n"
               "KNT = (MJB, NSR)\n"
               "DDM = (FCM, JHR)\n"
               "TDD = (GLN, RKJ)\n"
               "RRX = (XLQ, XPM)\n"
               "SGF = (SNL, FJF)\n"
               "BTV = (GFB, SMX)\n"
               "BPH = (XMV, QFV)\n"
               "VSJ = (TNH, TTH)\n"
               "DSD = (DVP, SHV)\n"
               "JXT = (DGJ, TPS)\n"
               "DDV = (NNV, MDV)\n"
               "DRP = (KDS, TNJ)\n"
               "MTD = (HVX, BKX)\n"
               "CVH = (FFD, RDM)\n"
               "LCD = (CMJ, CMJ)\n"
               "NLC = (SKB, GLG)\n"
               "XJT = (LFS, KMP)\n"
               "CHG = (DHF, FVX)\n"
               "MFT = (HLX, GVH)\n"
               "HRX = (HPM, XGN)\n"
               "KGR = (TPS, DGJ)\n"
               "GLJ = (NSH, GCB)\n"
               "GPP = (GFC, HRX)\n"
               "TVV = (NFR, QNT)\n"
               "QJK = (QKQ, KDV)\n"
               "XHH = (NJB, PVR)\n"
               "BHR = (FCB, XRS)\n"
               "CKD = (CMJ, RRX)\n"
               "XKM = (VQX, RDL)\n"
               "PXJ = (GBM, BCV)\n"
               "DCT = (HDC, BFG)\n"
               "HXN = (NNK, VNG)\n"
               "QGG = (BPH, RQJ)\n"
               "DQS = (FKL, NCM)\n"
               "STL = (DDT, LBL)\n"
               "PDB = (FNF, BFS)\n"
               "ZZZ = (TTF, PXP)\n"
               "SHV = (RBF, QCF)\n"
               "NGL = (GDR, XRQ)\n"
               "QVH = (QHQ, SGG)\n"
               "CBN = (XBR, QXC)\n"
               "RNT = (KRC, CSV)\n"
               "GCB = (DDF, LMQ)\n"
               "NDL = (DDV, TCV)\n"
               "SRV = (CDR, QGG)\n"
               "DMP = (LGX, LGX)\n"
               "RKJ = (KFG, FRG)\n"
               "SKG = (KBH, LRQ)\n"
               "QGB = (RQB, GFL)\n"
               "XBR = (GQD, QJV)\n"
               "DHN = (LMT, NBB)\n"
               "LPK = (PFK, GPS)\n"
               "QVS = (HJJ, TQJ)\n"
               "MSV = (RJH, CCJ)\n"
               "CCK = (SQJ, VSJ)\n"
               "QHQ = (SMP, QSP)\n"
               "PKL = (RVD, BDX)\n"
               "JDV = (MGR, GJN)\n"
               "FDX = (JFT, TNX)\n"
               "DJN = (RCB, VRH)\n"
               "XGJ = (CXG, RJM)\n"
               "DJJ = (VKF, GXM)\n"
               "VPR = (VPQ, BQF)\n"
               "PGT = (PFD, DJN)\n"
               "RGR = (RPS, NBT)\n"
               "BRK = (BSP, HJR)\n"
               "KKQ = (LXL, HTJ)\n"
               "VRC = (DTS, KHM)\n"
               "GST = (FJK, PXJ)\n"
               "SLD = (BJQ, LST)\n"
               "GHL = (NRQ, JGF)\n"
               "HQJ = (PML, LBB)\n"
               "BLH = (RNT, JFC)\n"
               "SPV = (GXM, VKF)\n"
               "VPM = (JMF, HFP)\n"
               "RBB = (MLK, NLC)\n"
               "FTT = (PVF, DVS)\n"
               "XRQ = (KCV, JVN)\n"
               "LSB = (VBL, KFF)\n"
               "QMT = (CCK, QRT)\n"
               "FBN = (XNM, BTD)\n"
               "JFT = (TSJ, HCK)\n"
               "HDL = (QHL, XNP)\n"
               "BPC = (FXG, MLP)\n"
               "TVB = (LBT, CBF)\n"
               "KNM = (KNT, DQF)\n"
               "CHN = (QRV, GGH)\n"
               "SRH = (XQN, NNC)\n"
               "LXF = (HXN, HXN)\n"
               "VCC = (SKG, QQR)\n"
               "VMM = (RGK, SXQ)\n"
               "FCD = (LVV, JQN)\n"
               "FMB = (RNT, JFC)\n"
               "CNC = (PTN, XDQ)\n"
               "KCC = (JLL, VFC)\n"
               "CDQ = (VHR, GGM)\n"
               "QFV = (RCX, PQS)\n"
               "XQN = (RHG, TKF)\n"
               "SMJ = (VPK, BBN)\n"
               "SRF = (JDQ, TVG)\n"
               "SKN = (RLS, RHJ)\n"
               "KXX = (KHL, LFJ)\n"
               "GJN = (BRK, FPX)\n"
               "QGV = (VRX, TMB)\n"
               "SXV = (GQM, KJD)\n"
               "VGZ = (CFB, QPH)\n"
               "JQN = (XFN, DSQ)\n"
               "BKT = (CBT, PVD)\n"
               "QJC = (PBJ, TRR)\n"
               "BLP = (JXT, KGR)\n"
               "TTF = (MMV, MFK)\n"
               "PXP = (MMV, MFK)\n"
               "PSK = (KMJ, QQD)\n"
               "VPJ = (HMJ, LJM)\n"
               "RPQ = (CDL, DBH)\n"
               "RPS = (NDR, XPR)\n"
               "QQS = (VDG, XJP)\n"
               "GGH = (PCB, JNV)\n"
               "KHL = (MLT, PSJ)\n"
               "NPG = (QMK, LSL)\n"
               "XDQ = (SRL, FCD)\n"
               "MXJ = (PVF, DVS)\n"
               "VGG = (XLD, NLN)\n"
               "DNP = (TPJ, BTV)\n"
               "XRN = (LRK, QXS)\n"
               "XTS = (NQC, KNM)\n"
               "FJF = (MLR, VTM)\n"
               "MVL = (THG, GPB)\n"
               "TPJ = (GFB, SMX)\n"
               "FJG = (VRN, KNV)\n"
               "NDX = (JDV, LQD)\n"
               "JHR = (MGV, VMC)\n"
               "KNV = (CVH, PLG)\n"
               "NSH = (LMQ, DDF)\n"
               "THG = (CVS, GFD)\n"
               "RDL = (RPB, GGG)\n"
               "BNK = (NJK, FMV)\n"
               "FHG = (THG, GPB)\n"
               "NKX = (RHB, CRV)\n"
               "MMV = (CKS, FRS)\n"
               "RHB = (GSP, SLK)\n"
               "GVH = (QJX, PGN)\n"
               "LFS = (HQB, SSK)\n"
               "SJM = (PQC, PJT)\n"
               "TVH = (CXR, SSB)\n"
               "FKN = (JHF, PDF)\n"
               "KRR = (TNJ, KDS)\n"
               "HPQ = (FJL, NGL)\n"
               "PDG = (FJF, SNL)\n"
               "RRP = (TDR, XHJ)\n"
               "LGX = (XVV, XVV)\n"
               "QKQ = (TDD, TSN)\n"
               "GQM = (GBS, QMT)\n"
               "MQT = (FJG, TKX)\n"
               "HRB = (RGR, DDB)\n"
               "HQS = (DJB, DSD)\n"
               "XMX = (MNL, QTK)\n"
               "LGH = (XNM, BTD)\n"
               "QJX = (PPC, KXX)\n"
               "JBR = (FJL, NGL)\n"
               "FRV = (HGT, MJR)\n"
               "BXN = (QXS, LRK)\n"
               "GFM = (HPQ, JBR)\n"
               "MDV = (VSN, BRN)\n"
               "PPQ = (PDB, CJX)\n"
               "FRH = (PDG, SGF)\n"
               "KBH = (QBX, JDL)\n"
               "LNX = (XTG, MJV)\n"
               "PHD = (XJQ, VGG)\n"
               "DJR = (KCC, CTM)\n"
               "LNK = (RND, CSD)\n"
               "SVX = (HRJ, RPQ)\n"
               "BVZ = (LSR, JBL)\n"
               "STS = (CMQ, MGX)\n"
               "DDF = (VPR, JQD)\n"
               "GHJ = (MBN, VBS)\n"
               "HVX = (CXD, HPR)\n"
               "JBL = (CSS, SRH)\n"
               "HPF = (BNS, QFR)\n"
               "DSR = (THX, HHB)\n"
               "KMJ = (VTT, NLX)\n"
               "GFC = (XGN, HPM)\n"
               "CJX = (FNF, BFS)\n"
               "FKT = (SPB, HKQ)\n"
               "MBN = (PDL, PJH)\n"
               "NLN = (CXL, KNR)\n"
               "GSC = (PVR, NJB)\n"
               "LFJ = (MLT, PSJ)\n"
               "NBT = (NDR, XPR)\n"
               "RLK = (TNX, JFT)\n"
               "SSB = (BXX, STP)\n"
               "FJK = (GBM, BCV)\n"
               "VRX = (CJH, KXH)\n"
               "DJP = (RKK, GGV)\n"
               "HRJ = (CDL, DBH)\n"
               "XHB = (QKQ, KDV)\n"
               "BVL = (HQF, HQF)\n"
               "PVF = (VMM, CNM)\n"
               "GLN = (KFG, FRG)\n"
               "KHM = (BKG, FCS)\n"
               "VHH = (MBJ, PHD)\n"
               "XPV = (DJB, DSD)\n"
               "MJV = (XTL, SVX)\n"
               "BDJ = (VHH, RNS)\n"
               "RLS = (SHN, PNR)\n"
               "CBT = (RQM, JJX)\n"
               "PRR = (JVM, TCJ)\n"
               "DVS = (VMM, CNM)\n"
               "KXH = (QJK, XHB)\n"
               "SHD = (LXF, RHS)\n"
               "GPS = (XSV, HQJ)\n"
               "MGR = (BRK, FPX)\n"
               "BXJ = (LCD, CKD)\n"
               "RBJ = (RVD, BDX)\n"
               "JFC = (KRC, CSV)\n"
               "GDD = (QQD, KMJ)\n"
               "KDS = (TBF, NDX)\n"
               "BRN = (HSS, SHD)\n"
               "QXC = (QJV, GQD)\n"
               "GLG = (STS, SMG)\n"
               "MGX = (QDL, KKL)\n"
               "MLT = (MQT, QPF)\n"
               "HPM = (BLJ, CHN)\n"
               "CKP = (CNC, NHX)\n"
               "KML = (TVG, JDQ)\n"
               "AAA = (PXP, TTF)\n"
               "BPZ = (MNJ, SHP)\n"
               "FPQ = (DDM, KTK)\n"
               "NSR = (CRR, HHM)\n"
               "XLD = (CXL, KNR)\n"
               "PLG = (FFD, RDM)\n"
               "RPM = (BNS, QFR)\n"
               "SGJ = (FVV, TVP)\n"
               "BPL = (PBJ, TRR)\n"
               "RHN = (NHC, CKP)\n"
               "MGB = (XJP, VDG)\n"
               "RJH = (BTK, FBK)\n"
               "VNP = (JGT, SFH)\n"
               "BDX = (SNV, STL)\n"
               "VSN = (HSS, HSS)\n"
               "LCT = (MPP, HJP)\n"
               "NBB = (GJC, BKT)\n"
               "VRS = (GHL, PNM)\n"
               "JJX = (BLB, FBQ)\n"
               "TMB = (KXH, CJH)\n"
               "RLX = (KXB, VVV)\n"
               "NJM = (TGC, ZZZ)\n"
               "VNG = (CMD, FKT)\n"
               "GJJ = (MSV, CKT)\n"
               "CVC = (SNH, TMT)\n"
               "CVS = (DMP, DMP)\n"
               "MFK = (CKS, FRS)\n"
               "XHJ = (DJR, CJQ)\n"
               "FCN = (XVV, BPZ)\n"
               "JVM = (KKX, MTD)\n"
               "RQM = (FBQ, BLB)\n"
               "SLQ = (FXV, SMJ)\n"
               "BNS = (LCT, BLQ)\n"
               "DKD = (FVX, DHF)\n"
               "JHF = (MBD, RSB)\n"
               "FBQ = (GHJ, KQD)\n"
               "KDV = (TSN, TDD)\n"
               "FVL = (HJJ, TQJ)\n"
               "LXL = (PKL, RBJ)\n"
               "VDV = (FQN, DNP)\n"
               "BDM = (HGT, MJR)\n"
               "VDG = (KHJ, SDV)\n"
               "BFG = (DJP, BPJ)\n"
               "PNR = (XPV, HQS)\n"
               "XTL = (RPQ, HRJ)\n"
               "PGN = (PPC, KXX)\n"
               "XNP = (LLV, KRH)\n"
               "VTM = (DNH, SVP)\n"
               "VJJ = (CRJ, SXV)\n"
               "NVQ = (SBM, TPP)\n"
               "RLV = (NGC, KQR)\n"
               "THX = (NKX, PXK)\n"
               "MLP = (GLJ, XBV)\n"
               "MPC = (MNL, QTK)\n"
               "FPX = (BSP, HJR)\n"
               "NHC = (NHX, CNC)\n"
               "CRV = (SLK, GSP)\n"
               "NNC = (RHG, TKF)\n"
               "SNH = (JHH, VRS)\n"
               "KNR = (FVG, JCJ)\n"
               "CRJ = (GQM, KJD)\n"
               "PJT = (SRF, KML)\n"
               "XJP = (KHJ, SDV)\n"
               "BXL = (BSM, MKG)\n"
               "QRB = (RHJ, RLS)\n"
               "SMX = (KCF, KJR)\n"
               "CSM = (FKL, NCM)\n"
               "MGS = (QQR, SKG)\n"
               "RTL = (SGJ, MPT)\n"
               "CND = (NDL, NSD)\n"
               "BTK = (QVS, FVL)\n"
               "TNJ = (TBF, NDX)\n"
               "JFV = (LMT, NBB)\n"
               "CMJ = (XLQ, XLQ)\n"
               "CCJ = (BTK, FBK)\n"
               "SXQ = (FHG, MVL)\n"
               "MLR = (DNH, SVP)\n"
               "PJH = (LNK, DGH)\n"
               "KFG = (QJC, BPL)\n"
               "MRN = (RRP, TSM)\n"
               "LBL = (HNK, STF)\n"
               "NFR = (RBB, NDT)\n"
               "NGR = (RDL, VQX)\n"
               "PVR = (VTH, FSQ)\n"
               "LVV = (XFN, DSQ)\n"
               "RCX = (XVK, LMV)\n"
               "FLV = (NGR, XKM)\n"
               "CRR = (FRV, BDM)\n"
               "BSM = (CND, TSD)\n"
               "FVX = (XRN, BXN)\n"
               "TKF = (XCQ, BGQ)\n"
               "QSQ = (NFR, QNT)\n"
               "XVV = (SHP, MNJ)\n"
               "RVD = (SNV, STL)\n"
               "MKG = (TSD, CND)\n"
               "QCB = (GPP, KRT)\n"
               "NVX = (MSV, CKT)\n"
               "GGV = (VTL, SNM)\n"
               "GJC = (PVD, CBT)\n"
               "QSP = (JGK, GST)\n"
               "VBL = (MFT, NSX)\n"
               "DDB = (RPS, NBT)\n"
               "BKX = (HPR, CXD)\n"
               "FKL = (VPJ, SQN)\n"
               "VRH = (BPN, JXR)\n"
               "QQR = (KBH, LRQ)\n"
               "RSC = (LQB, TNG)\n"
               "NRQ = (DKD, CHG)\n"
               "RHL = (NVQ, NNR)\n"
               "QCH = (MGB, QQS)\n"
               "CTS = (BFG, HDC)\n"
               "KHJ = (NGN, LJC)\n"
               "RGK = (MVL, FHG)\n"
               "CCH = (LKP, TFT)\n"
               "VSL = (FFH, PRR)\n"
               "KQR = (RPT, MGJ)\n"
               "LCN = (XTS, DCF)\n"
               "TJN = (TMT, SNH)\n"
               "CLT = (NBS, VNP)\n"
               "JCJ = (QFS, RSJ)\n"
               "BPN = (TJN, CVC)\n"
               "FXG = (GLJ, XBV)\n"
               "BGQ = (KQB, BLP)\n"
               "RMR = (TVH, JHB)\n"
               "CTM = (JLL, VFC)\n"
               "KCF = (SLQ, FLH)\n"
               "DHF = (XRN, BXN)\n"
               "NDJ = (SSH, FPQ)\n"
               "KSX = (XTS, DCF)\n"
               "RPT = (DPL, QHP)\n"
               "QJV = (TVB, LDC)\n"
               "TNG = (BCT, MMQ)\n"
               "FBK = (FVL, QVS)\n"
               "MBJ = (XJQ, VGG)\n"
               "CHD = (GJF, BPC)\n"
               "LSF = (QHL, XNP)\n"
               "SHN = (HQS, XPV)\n"
               "TQR = (CDR, QGG)\n"
               "GRA = (NNK, VNG)\n"
               "RNS = (MBJ, PHD)\n"
               "VFC = (GTJ, CBN)\n"
               "PPC = (LFJ, KHL)\n"
               "DDT = (STF, HNK)\n"
               "NSD = (TCV, DDV)\n"
               "VMC = (FDX, RLK)\n"
               "QXS = (JPG, BHR)\n"
               "PDF = (MBD, RSB)\n"
               "QRV = (PCB, JNV)\n"
               "QVJ = (KSX, LCN)\n"
               "QDL = (GLH, SPJ)\n"
               "MDJ = (GJJ, NVX)\n"
               "HJP = (FVF, RLX)\n"
               "FRS = (GLT, CDQ)\n"
               "SBM = (FDD, XNG)\n"
               "SMG = (CMQ, MGX)\n"
               "TQJ = (NPH, CQS)\n"
               "RHQ = (MJV, XTG)\n"
               "FFD = (MSN, FKN)\n"
               "CSS = (XQN, NNC)\n"
               "PVD = (RQM, JJX)\n"
               "GBS = (QRT, CCK)\n"
               "JHH = (PNM, GHL)\n"
               "QHL = (LLV, KRH)";

typedef unsigned int uint;

typedef struct node {
    uint left;
    uint right;
} node;

uint convert_to_index(char* string) {
    return (string[0] - 'A')*32*32 + (string[1] - 'A')*32 + (string[2] - 'A');
}
uint ends_with(uint val, char character) {
    return (val & 31) == character - 'A';
}

uint part1(char* string) {
    uint target = convert_to_index("ZZZ");
    uint start = convert_to_index("AAA");
    char * path  = string;
    node * args = calloc(1<<15, sizeof(node));
    while(*string++ != '\n');
    string++;
    while(*string != '\0') {
        char *arg, *left, *right;
        arg = string;
        string += 7;
        left = string;
        string += 5;
        right = string;
        while(*string != '\0' && *string++ != '\n');
        args[convert_to_index(arg)] = (node){convert_to_index(left), convert_to_index(right)};
    }
    uint steps = 0;
    uint current = start;
    char * next = path;
    while(current != target) {
        current = (*next++ == 'R')?args[current].right:args[current].left;
        if (*next == '\n') next = path;
        steps++;
    }
    return steps;
}

void print_encoded(uint val) {
    printf("%c", (val>>10 & 31) + 'A');
    printf("%c", (val>>5 & 31) + 'A');
    printf("%c", (val & 31) + 'A');
}


unsigned long long part2(char* string) {
    int count = 0;
    uint starts[6] = {0};
    unsigned long long cycle_size[6] = {0};
    unsigned long long cycle_offset[6] = {0};
    char * path  = string;
    node * args = calloc(1<<15, sizeof(node));
    while(*string++ != '\n');
    string++;
    while(*string != '\0') {
        char *arg, *left, *right;
        arg = string;
        string += 7;
        left = string;
        string += 5;
        right = string;
        while(*string != '\0' && *string++ != '\n');
        args[convert_to_index(arg)] = (node){convert_to_index(left), convert_to_index(right)};
        if (ends_with(convert_to_index(arg), 'A')) starts[count++] = convert_to_index(arg);
    }
    uint steps = 0;
    uint currents [6] = {0};
    for (int i = 0; i < count; ++i) {
        currents[i] = starts[i];
    }
    char * next = path;
    bool found = true;
    for (int i = 0; i < count; ++i) {
        found &= ends_with(currents[i],'Z');
    }
    while(!found) {
        steps++;
        bool all_found = true;
        for (int i = 0; i < count; ++i) {
            currents[i] = (*next == 'R')?args[currents[i]].right:args[currents[i]].left;

            if (!cycle_size[i]) {
                all_found = false;
                if (ends_with(currents[i], 'Z')) {
                    cycle_size[i] = cycle_offset[i] = steps;
                }
            }
        }
        if(all_found) break;
        if (*++next == '\n') next = path;
        found = true;
        for (int i = 0; i < count; ++i) {
            found &= ends_with(currents[i],'Z');
        }
    }
    for (int i = 0; i < count; ++i) {
        printf("%llu, %llu\n", cycle_offset[i], cycle_size[i]);
    }

    int pid = fork();
    if(pid < 0) {
        printf("failed to fork");
    }
    int wstatus;
    if(pid) {
        // parent
        printf("forked - parent");
        wait(&wstatus);
    } else {
        //child
        char python_command [2048] = {0};
        char * str = python_command;
        str += sprintf(str, "\nimport math\nprint(math.lcm(");
        for (int i = 0; i < count; ++i) {
            str += sprintf(str, i < count -1?"%llu, ":"%llu", cycle_size[i]);
        }
        str += sprintf(str, "))");
        printf("forked - child\n");
        char * argv[64] = {
                "python3",
                "-c",
                python_command
        };

        execvp(*argv, argv);
        printf("did not exicute\n");
    }

    return steps;
}


int main() {
    printf("Part 1: %u\n", part1(input));
    printf("Part 2: %llu\n", part2(input));
}