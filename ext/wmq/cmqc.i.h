# 1 "/opt/mqm/inc/cmqc.h"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/mqm/inc/cmqc.h"
# 3509 "/opt/mqm/inc/cmqc.h"
 typedef unsigned char MQBYTE;
 typedef MQBYTE * PMQBYTE;
 typedef PMQBYTE * PPMQBYTE;
 typedef MQBYTE MQBYTE4[4];
 typedef MQBYTE4 * PMQBYTE4;
 typedef MQBYTE MQBYTE8[8];
 typedef MQBYTE8 * PMQBYTE8;
 typedef MQBYTE MQBYTE16[16];
 typedef MQBYTE16 * PMQBYTE16;
 typedef MQBYTE MQBYTE24[24];
 typedef MQBYTE24 * PMQBYTE24;
 typedef MQBYTE MQBYTE32[32];
 typedef MQBYTE32 * PMQBYTE32;
 typedef MQBYTE MQBYTE40[40];
 typedef MQBYTE40 * PMQBYTE40;
 typedef MQBYTE MQBYTE48[48];
 typedef MQBYTE48 * PMQBYTE48;
 typedef MQBYTE MQBYTE128[128];
 typedef MQBYTE128 * PMQBYTE128;


 typedef char MQCHAR;
 typedef MQCHAR * PMQCHAR;
 typedef PMQCHAR * PPMQCHAR;
 typedef MQCHAR MQCHAR4[4];
 typedef MQCHAR4 * PMQCHAR4;
 typedef MQCHAR MQCHAR8[8];
 typedef MQCHAR8 * PMQCHAR8;
 typedef MQCHAR MQCHAR12[12];
 typedef MQCHAR12 * PMQCHAR12;
 typedef MQCHAR MQCHAR16[16];
 typedef MQCHAR16 * PMQCHAR16;
 typedef MQCHAR MQCHAR20[20];
 typedef MQCHAR20 * PMQCHAR20;
 typedef MQCHAR MQCHAR28[28];
 typedef MQCHAR28 * PMQCHAR28;
 typedef MQCHAR MQCHAR32[32];
 typedef MQCHAR32 * PMQCHAR32;
 typedef MQCHAR MQCHAR48[48];
 typedef MQCHAR48 * PMQCHAR48;
 typedef MQCHAR MQCHAR64[64];
 typedef MQCHAR64 * PMQCHAR64;
 typedef MQCHAR MQCHAR128[128];
 typedef MQCHAR128 * PMQCHAR128;
 typedef MQCHAR MQCHAR256[256];
 typedef MQCHAR256 * PMQCHAR256;
 typedef MQCHAR MQCHAR264[264];
 typedef MQCHAR264 * PMQCHAR264;
# 3565 "/opt/mqm/inc/cmqc.h"
 typedef long MQLONG;
 typedef unsigned long MQULONG;
 typedef long long MQINT64;
 typedef unsigned long long MQUINT64;

 typedef MQLONG * PMQLONG;
 typedef PMQLONG * PPMQLONG;
 typedef signed char MQINT8;
 typedef MQINT8 * PMQINT8;
 typedef PMQINT8 * PPMQINT8;
 typedef unsigned char MQUINT8;
 typedef MQUINT8 * PMQUINT8;
 typedef PMQUINT8 * PPMQUINT8;
 typedef short MQINT16;
 typedef MQINT16 * PMQINT16;
 typedef PMQINT16 * PPMQINT16;
 typedef unsigned short MQUINT16;
 typedef MQUINT16 * PMQUINT16;
 typedef PMQUINT16 * PPMQUINT16;
 typedef MQLONG MQINT32;
 typedef PMQLONG PMQINT32;
 typedef PPMQLONG PPMQINT32;
 typedef MQINT64 * PMQINT64;
 typedef PMQINT64 * PPMQINT64;
 typedef MQULONG * PMQULONG;
 typedef PMQULONG * PPMQULONG;
 typedef MQULONG MQUINT32;
 typedef PMQULONG PMQUINT32;
 typedef PPMQULONG PPMQUINT32;
 typedef MQUINT64 * PMQUINT64;
 typedef PMQUINT64 * PPMQUINT64;
 typedef float MQFLOAT32;
 typedef MQFLOAT32 * PMQFLOAT32;
 typedef PMQFLOAT32 * PPMQFLOAT32;
 typedef double MQFLOAT64;
 typedef MQFLOAT64 * PMQFLOAT64;
 typedef PMQFLOAT64 * PPMQFLOAT64;
 typedef struct tagMQIEP MQIEP;
 typedef MQIEP * PMQIEP;
 typedef PMQIEP * PPMQIEP;
 typedef PMQIEP MQHCONFIG;
 typedef MQHCONFIG * PMQHCONFIG;
 typedef MQLONG MQHCONN;
 typedef MQHCONN * PMQHCONN;
 typedef PMQHCONN * PPMQHCONN;
 typedef MQLONG MQHOBJ;
 typedef MQHOBJ * PMQHOBJ;
 typedef PMQHOBJ * PPMQHOBJ;
 typedef void * MQPTR;
 typedef MQPTR * PMQPTR;
 typedef void * PMQFUNC;
 typedef void * PMQVOID;
 typedef PMQVOID * PPMQVOID;
 typedef MQLONG MQBOOL;
 typedef MQBOOL * PMQBOOL;
 typedef PMQBOOL * PPMQBOOL;
 typedef MQINT64 MQHMSG;
 typedef MQHMSG * PMQHMSG;
 typedef PMQHMSG * PPMQHMSG;
 typedef MQLONG MQPID;
 typedef MQPID * PMQPID;
 typedef MQLONG MQTID;
 typedef MQTID * PMQTID;







 typedef struct tagMQAIR MQAIR;
 typedef MQAIR * PMQAIR;

 struct tagMQAIR {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG AuthInfoType;

   MQCHAR AuthInfoConnName[264];

   PMQCHAR LDAPUserNamePtr;
   MQLONG LDAPUserNameOffset;


   MQLONG LDAPUserNameLength;
   MQCHAR32 LDAPPassword;


   MQCHAR256 OCSPResponderURL;

 };
# 3672 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQBMHO MQBMHO;
 typedef MQBMHO * PMQBMHO;
 typedef PMQBMHO * PPMQBMHO;

 struct tagMQBMHO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;
 };
# 3691 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQBO MQBO;
 typedef MQBO * PMQBO;
 typedef PMQBO * PPMQBO;

 struct tagMQBO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;
 };
# 3710 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQCBC MQCBC;
 typedef MQCBC * PMQCBC;
 typedef PMQCBC * PPMQCBC;

 struct tagMQCBC {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG CallType;
   MQHOBJ Hobj;
   MQPTR CallbackArea;
   MQPTR ConnectionArea;

   MQLONG CompCode;
   MQLONG Reason;
   MQLONG State;
   MQLONG DataLength;
   MQLONG BufferLength;
   MQLONG Flags;


   MQLONG ReconnectDelay;


 };






 typedef struct tagMQCBD MQCBD;
 typedef MQCBD * PMQCBD;
 typedef PMQCBD * PPMQCBD;

 struct tagMQCBD {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG CallbackType;
   MQLONG Options;

   MQPTR CallbackArea;
   MQPTR CallbackFunction;
   MQCHAR128 CallbackName;
   MQLONG MaxMsgLength;
 };
# 3770 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQCHARV MQCHARV;
 typedef MQCHARV * PMQCHARV;

 struct tagMQCHARV {
   MQPTR VSPtr;
   MQLONG VSOffset;
   MQLONG VSBufSize;
   MQLONG VSLength;
   MQLONG VSCCSID;
 };
# 3792 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQCIH MQCIH;
 typedef MQCIH * PMQCIH;

 struct tagMQCIH {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG StrucLength;
   MQLONG Encoding;
   MQLONG CodedCharSetId;
   MQCHAR8 Format;

   MQLONG Flags;
   MQLONG ReturnCode;
   MQLONG CompCode;

   MQLONG Reason;

   MQLONG UOWControl;
   MQLONG GetWaitInterval;

   MQLONG LinkType;
   MQLONG OutputDataLength;
   MQLONG FacilityKeepTime;
   MQLONG ADSDescriptor;
   MQLONG ConversationalTask;

   MQLONG TaskEndStatus;
   MQBYTE8 Facility;
   MQCHAR4 Function;

   MQCHAR4 AbendCode;
   MQCHAR8 Authenticator;
   MQCHAR8 Reserved1;
   MQCHAR8 ReplyToFormat;
   MQCHAR4 RemoteSysId;
   MQCHAR4 RemoteTransId;
   MQCHAR4 TransactionId;
   MQCHAR4 FacilityLike;
   MQCHAR4 AttentionId;
   MQCHAR4 StartCode;
   MQCHAR4 CancelCode;
   MQCHAR4 NextTransactionId;
   MQCHAR8 Reserved2;
   MQCHAR8 Reserved3;

   MQLONG CursorPosition;
   MQLONG ErrorOffset;
   MQLONG InputItem;
   MQLONG Reserved4;

 };
# 3888 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQCMHO MQCMHO;
 typedef MQCMHO * PMQCMHO;
 typedef PMQCMHO * PPMQCMHO;

 struct tagMQCMHO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;
 };
# 3907 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQCTLO MQCTLO;
 typedef MQCTLO * PMQCTLO;
 typedef PMQCTLO * PPMQCTLO;

 struct tagMQCTLO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;

   MQLONG Reserved;
   MQPTR ConnectionArea;

 };
# 3932 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQSCO MQSCO;
 typedef MQSCO * PMQSCO;

 struct tagMQSCO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQCHAR256 KeyRepository;

   MQCHAR256 CryptoHardware;

   MQLONG AuthInfoRecCount;

   MQLONG AuthInfoRecOffset;


   PMQAIR AuthInfoRecPtr;


   MQLONG KeyResetCount;



   MQLONG FipsRequired;


   MQLONG EncryptionPolicySuiteB[4];


 };
# 3981 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQCSP MQCSP;
 typedef MQCSP * PMQCSP;

 struct tagMQCSP {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG AuthenticationType;
   MQBYTE4 Reserved1;
   MQPTR CSPUserIdPtr;
   MQLONG CSPUserIdOffset;
   MQLONG CSPUserIdLength;
   MQBYTE8 Reserved2;
   MQPTR CSPPasswordPtr;
   MQLONG CSPPasswordOffset;
   MQLONG CSPPasswordLength;
 };
# 4015 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQCNO MQCNO;
 typedef MQCNO * PMQCNO;
 typedef PMQCNO * PPMQCNO;

 struct tagMQCNO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;


   MQLONG ClientConnOffset;

   MQPTR ClientConnPtr;


   MQBYTE128 ConnTag;

   PMQSCO SSLConfigPtr;

   MQLONG SSLConfigOffset;


   MQBYTE24 ConnectionId;
   MQLONG SecurityParmsOffset;
   PMQCSP SecurityParmsPtr;

 };
# 4060 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQDH MQDH;
 typedef MQDH * PMQDH;

 struct tagMQDH {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG StrucLength;

   MQLONG Encoding;

   MQLONG CodedCharSetId;


   MQCHAR8 Format;

   MQLONG Flags;
   MQLONG PutMsgRecFields;

   MQLONG RecsPresent;
   MQLONG ObjectRecOffset;

   MQLONG PutMsgRecOffset;

 };
# 4102 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQDLH MQDLH;
 typedef MQDLH * PMQDLH;

 struct tagMQDLH {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Reason;


   MQCHAR48 DestQName;
   MQCHAR48 DestQMgrName;

   MQLONG Encoding;

   MQLONG CodedCharSetId;

   MQCHAR8 Format;

   MQLONG PutApplType;


   MQCHAR28 PutApplName;


   MQCHAR8 PutDate;


   MQCHAR8 PutTime;


 };
# 4152 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQDMHO MQDMHO;
 typedef MQDMHO * PMQDMHO;
 typedef PMQDMHO * PPMQDMHO;

 struct tagMQDMHO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;
 };
# 4171 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQDMPO MQDMPO;
 typedef MQDMPO * PMQDMPO;
 typedef PMQDMPO * PPMQDMPO;

 struct tagMQDMPO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;
 };
# 4190 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQGMO MQGMO;
 typedef MQGMO * PMQGMO;
 typedef PMQGMO * PPMQGMO;

 struct tagMQGMO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;

   MQLONG WaitInterval;
   MQLONG Signal1;
   MQLONG Signal2;
   MQCHAR48 ResolvedQName;

   MQLONG MatchOptions;

   MQCHAR GroupStatus;

   MQCHAR SegmentStatus;


   MQCHAR Segmentation;


   MQCHAR Reserved1;

   MQBYTE16 MsgToken;
   MQLONG ReturnedLength;


   MQLONG Reserved2;
   MQHMSG MsgHandle;

 };
# 4247 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQIIH MQIIH;
 typedef MQIIH * PMQIIH;

 struct tagMQIIH {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG StrucLength;
   MQLONG Encoding;
   MQLONG CodedCharSetId;
   MQCHAR8 Format;

   MQLONG Flags;
   MQCHAR8 LTermOverride;
   MQCHAR8 MFSMapName;
   MQCHAR8 ReplyToFormat;
   MQCHAR8 Authenticator;
   MQBYTE16 TranInstanceId;
   MQCHAR TranState;
   MQCHAR CommitMode;
   MQCHAR SecurityScope;
   MQCHAR Reserved;
 };
# 4292 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQIMPO MQIMPO;
 typedef MQIMPO * PMQIMPO;
 typedef PMQIMPO * PPMQIMPO;

 struct tagMQIMPO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;

   MQLONG RequestedEncoding;
   MQLONG RequestedCCSID;

   MQLONG ReturnedEncoding;
   MQLONG ReturnedCCSID;

   MQLONG Reserved1;
   MQCHARV ReturnedName;
   MQCHAR8 TypeString;
 };
# 4328 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQMD MQMD;
 typedef MQMD * PMQMD;
 typedef PMQMD * PPMQMD;

 struct tagMQMD {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Report;
   MQLONG MsgType;
   MQLONG Expiry;
   MQLONG Feedback;
   MQLONG Encoding;
   MQLONG CodedCharSetId;

   MQCHAR8 Format;
   MQLONG Priority;
   MQLONG Persistence;
   MQBYTE24 MsgId;
   MQBYTE24 CorrelId;
   MQLONG BackoutCount;
   MQCHAR48 ReplyToQ;
   MQCHAR48 ReplyToQMgr;
   MQCHAR12 UserIdentifier;
   MQBYTE32 AccountingToken;
   MQCHAR32 ApplIdentityData;

   MQLONG PutApplType;

   MQCHAR28 PutApplName;

   MQCHAR8 PutDate;
   MQCHAR8 PutTime;
   MQCHAR4 ApplOriginData;


   MQBYTE24 GroupId;
   MQLONG MsgSeqNumber;

   MQLONG Offset;

   MQLONG MsgFlags;
   MQLONG OriginalLength;

 };
# 4408 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQMDE MQMDE;
 typedef MQMDE * PMQMDE;

 struct tagMQMDE {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG StrucLength;
   MQLONG Encoding;

   MQLONG CodedCharSetId;

   MQCHAR8 Format;

   MQLONG Flags;
   MQBYTE24 GroupId;
   MQLONG MsgSeqNumber;

   MQLONG Offset;

   MQLONG MsgFlags;
   MQLONG OriginalLength;
 };
# 4449 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQMD1 MQMD1;
 typedef MQMD1 * PMQMD1;

 struct tagMQMD1 {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Report;
   MQLONG MsgType;
   MQLONG Expiry;
   MQLONG Feedback;
   MQLONG Encoding;
   MQLONG CodedCharSetId;

   MQCHAR8 Format;
   MQLONG Priority;
   MQLONG Persistence;
   MQBYTE24 MsgId;
   MQBYTE24 CorrelId;
   MQLONG BackoutCount;
   MQCHAR48 ReplyToQ;
   MQCHAR48 ReplyToQMgr;
   MQCHAR12 UserIdentifier;
   MQBYTE32 AccountingToken;
   MQCHAR32 ApplIdentityData;

   MQLONG PutApplType;

   MQCHAR28 PutApplName;

   MQCHAR8 PutDate;
   MQCHAR8 PutTime;
   MQCHAR4 ApplOriginData;

 };
# 4514 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQMD2 MQMD2;
 typedef MQMD2 * PMQMD2;

 struct tagMQMD2 {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Report;
   MQLONG MsgType;
   MQLONG Expiry;
   MQLONG Feedback;
   MQLONG Encoding;
   MQLONG CodedCharSetId;

   MQCHAR8 Format;
   MQLONG Priority;
   MQLONG Persistence;
   MQBYTE24 MsgId;
   MQBYTE24 CorrelId;
   MQLONG BackoutCount;
   MQCHAR48 ReplyToQ;
   MQCHAR48 ReplyToQMgr;
   MQCHAR12 UserIdentifier;
   MQBYTE32 AccountingToken;
   MQCHAR32 ApplIdentityData;

   MQLONG PutApplType;

   MQCHAR28 PutApplName;

   MQCHAR8 PutDate;
   MQCHAR8 PutTime;
   MQCHAR4 ApplOriginData;


   MQBYTE24 GroupId;
   MQLONG MsgSeqNumber;

   MQLONG Offset;

   MQLONG MsgFlags;
   MQLONG OriginalLength;

 };
# 4593 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQMHBO MQMHBO;
 typedef MQMHBO * PMQMHBO;
 typedef PMQMHBO * PPMQMHBO;

 struct tagMQMHBO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;
 };
# 4612 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQOD MQOD;
 typedef MQOD * PMQOD;
 typedef PMQOD * PPMQOD;

 struct tagMQOD {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG ObjectType;
   MQCHAR48 ObjectName;
   MQCHAR48 ObjectQMgrName;
   MQCHAR48 DynamicQName;
   MQCHAR12 AlternateUserId;

   MQLONG RecsPresent;

   MQLONG KnownDestCount;

   MQLONG UnknownDestCount;
   MQLONG InvalidDestCount;

   MQLONG ObjectRecOffset;

   MQLONG ResponseRecOffset;

   MQPTR ObjectRecPtr;
   MQPTR ResponseRecPtr;


   MQBYTE40 AlternateSecurityId;
   MQCHAR48 ResolvedQName;
   MQCHAR48 ResolvedQMgrName;

   MQCHARV ObjectString;
   MQCHARV SelectionString;
   MQCHARV ResObjectString;
   MQLONG ResolvedType;


 };
# 4680 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQOR MQOR;
 typedef MQOR * PMQOR;

 struct tagMQOR {
   MQCHAR48 ObjectName;
   MQCHAR48 ObjectQMgrName;
 };
# 4696 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQPD MQPD;
 typedef MQPD * PMQPD;

 struct tagMQPD {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;

   MQLONG Support;
   MQLONG Context;
   MQLONG CopyOptions;
 };
# 4721 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQPMO MQPMO;
 typedef MQPMO * PMQPMO;
 typedef PMQPMO * PPMQPMO;

 struct tagMQPMO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;

   MQLONG Timeout;
   MQHOBJ Context;
   MQLONG KnownDestCount;

   MQLONG UnknownDestCount;

   MQLONG InvalidDestCount;

   MQCHAR48 ResolvedQName;

   MQCHAR48 ResolvedQMgrName;


   MQLONG RecsPresent;

   MQLONG PutMsgRecFields;

   MQLONG PutMsgRecOffset;

   MQLONG ResponseRecOffset;

   MQPTR PutMsgRecPtr;

   MQPTR ResponseRecPtr;

   MQHMSG OriginalMsgHandle;
   MQHMSG NewMsgHandle;
   MQLONG Action;
   MQLONG PubLevel;

 };
# 4788 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQRFH MQRFH;
 typedef MQRFH * PMQRFH;

 struct tagMQRFH {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG StrucLength;

   MQLONG Encoding;

   MQLONG CodedCharSetId;

   MQCHAR8 Format;

   MQLONG Flags;
 };
# 4818 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQRFH2 MQRFH2;
 typedef MQRFH2 * PMQRFH2;

 struct tagMQRFH2 {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG StrucLength;


   MQLONG Encoding;

   MQLONG CodedCharSetId;

   MQCHAR8 Format;

   MQLONG Flags;
   MQLONG NameValueCCSID;

 };
# 4852 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQRMH MQRMH;
 typedef MQRMH * PMQRMH;

 struct tagMQRMH {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG StrucLength;


   MQLONG Encoding;
   MQLONG CodedCharSetId;

   MQCHAR8 Format;
   MQLONG Flags;
   MQCHAR8 ObjectType;
   MQBYTE24 ObjectInstanceId;
   MQLONG SrcEnvLength;

   MQLONG SrcEnvOffset;

   MQLONG SrcNameLength;
   MQLONG SrcNameOffset;
   MQLONG DestEnvLength;

   MQLONG DestEnvOffset;

   MQLONG DestNameLength;

   MQLONG DestNameOffset;

   MQLONG DataLogicalLength;
   MQLONG DataLogicalOffset;
   MQLONG DataLogicalOffset2;
 };
# 4913 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQRR MQRR;
 typedef MQRR * PMQRR;

 struct tagMQRR {
   MQLONG CompCode;
   MQLONG Reason;
 };
# 4929 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQSD MQSD;
 typedef MQSD * PMQSD;
 typedef PMQSD * PPMQSD;

 struct tagMQSD {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;

   MQCHAR48 ObjectName;
   MQCHAR12 AlternateUserId;
   MQBYTE40 AlternateSecurityId;
   MQLONG SubExpiry;
   MQCHARV ObjectString;
   MQCHARV SubName;
   MQCHARV SubUserData;
   MQBYTE24 SubCorrelId;

   MQLONG PubPriority;
   MQBYTE32 PubAccountingToken;

   MQCHAR32 PubApplIdentityData;

   MQCHARV SelectionString;
   MQLONG SubLevel;
   MQCHARV ResObjectString;
 };
# 4980 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQSMPO MQSMPO;
 typedef MQSMPO * PMQSMPO;
 typedef PMQSMPO * PPMQSMPO;

 struct tagMQSMPO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;

   MQLONG ValueEncoding;
   MQLONG ValueCCSID;
 };
# 5004 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQSRO MQSRO;
 typedef MQSRO * PMQSRO;
 typedef PMQSRO * PPMQSRO;

 struct tagMQSRO {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG Options;
   MQLONG NumPubs;
 };
# 5025 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQSTS MQSTS;
 typedef MQSTS * PMQSTS;
 typedef PMQSTS * PPMQSTS;

 struct tagMQSTS {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG CompCode;
   MQLONG Reason;
   MQLONG PutSuccessCount;

   MQLONG PutWarningCount;

   MQLONG PutFailureCount;

   MQLONG ObjectType;
   MQCHAR48 ObjectName;
   MQCHAR48 ObjectQMgrName;
   MQCHAR48 ResolvedObjectName;

   MQCHAR48 ResolvedQMgrName;


   MQCHARV ObjectString;
   MQCHARV SubName;
   MQLONG OpenOptions;
   MQLONG SubOptions;

 };
# 5077 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQTM MQTM;
 typedef MQTM * PMQTM;

 struct tagMQTM {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQCHAR48 QName;
   MQCHAR48 ProcessName;
   MQCHAR64 TriggerData;
   MQLONG ApplType;
   MQCHAR256 ApplId;
   MQCHAR128 EnvData;
   MQCHAR128 UserData;
 };
# 5107 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQTMC2 MQTMC2;
 typedef MQTMC2 * PMQTMC2;

 struct tagMQTMC2 {
   MQCHAR4 StrucId;
   MQCHAR4 Version;
   MQCHAR48 QName;
   MQCHAR48 ProcessName;
   MQCHAR64 TriggerData;
   MQCHAR4 ApplType;
   MQCHAR256 ApplId;
   MQCHAR128 EnvData;
   MQCHAR128 UserData;

   MQCHAR48 QMgrName;

 };
# 5141 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQWIH MQWIH;
 typedef MQWIH * PMQWIH;

 struct tagMQWIH {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQLONG StrucLength;
   MQLONG Encoding;

   MQLONG CodedCharSetId;

   MQCHAR8 Format;

   MQLONG Flags;
   MQCHAR32 ServiceName;
   MQCHAR8 ServiceStep;
   MQBYTE16 MsgToken;
   MQCHAR32 Reserved;
 };
# 5184 "/opt/mqm/inc/cmqc.h"
 typedef struct tagMQXQH MQXQH;
 typedef MQXQH * PMQXQH;

 struct tagMQXQH {
   MQCHAR4 StrucId;
   MQLONG Version;
   MQCHAR48 RemoteQName;
   MQCHAR48 RemoteQMgrName;
   MQMD1 MsgDesc;
 };
# 5220 "/opt/mqm/inc/cmqc.h"
 void MQBACK (
   MQHCONN Hconn,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_BACK_CALL (
   MQHCONN Hconn,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_BACK_CALL * PMQ_BACK_CALL;






 void MQBEGIN (
   MQHCONN Hconn,
   PMQVOID pBeginOptions,

   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_BEGIN_CALL (
   MQHCONN Hconn,
   PMQVOID pBeginOptions,

   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_BEGIN_CALL * PMQ_BEGIN_CALL;






 void MQBUFMH (
   MQHCONN Hconn,
   MQHMSG Hmsg,
   PMQVOID pBufMsgHOpts,

   PMQVOID pMsgDesc,
   MQLONG BufferLength,
   PMQVOID pBuffer,
   PMQLONG pDataLength,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_BUFMH_CALL (
   MQHCONN Hconn,
   MQHMSG Hmsg,
   PMQVOID pBufMsgHOpts,

   PMQVOID pMsgDesc,
   MQLONG BufferLength,
   PMQVOID pBuffer,
   PMQLONG pDataLength,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_BUFMH_CALL * PMQ_BUFMH_CALL;






 void MQCB (
   MQHCONN Hconn,
   MQLONG Operation,
   PMQVOID pCallbackDesc,
   MQHOBJ Hobj,
   PMQVOID pMsgDesc,
   PMQVOID pGetMsgOpts,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_CB_CALL (
   MQHCONN Hconn,
   MQLONG Operation,
   PMQVOID pCallbackDesc,
   MQHOBJ Hobj,
   PMQVOID pMsgDesc,
   PMQVOID pGetMsgOpts,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_CB_CALL * PMQ_CB_CALL;






 void MQCLOSE (
   MQHCONN Hconn,
   PMQHOBJ pHobj,
   MQLONG Options,

   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_CLOSE_CALL (
   MQHCONN Hconn,
   PMQHOBJ pHobj,
   MQLONG Options,

   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_CLOSE_CALL * PMQ_CLOSE_CALL;






 void MQCMIT (
   MQHCONN Hconn,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_CMIT_CALL (
   MQHCONN Hconn,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_CMIT_CALL * PMQ_CMIT_CALL;






 void MQCONN (
   PMQCHAR pQMgrName,
   PMQHCONN pHconn,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_CONN_CALL (
   PMQCHAR pQMgrName,
   PMQHCONN pHconn,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_CONN_CALL * PMQ_CONN_CALL;






 void MQCONNX (
   PMQCHAR pQMgrName,
   PMQCNO pConnectOpts,

   PMQHCONN pHconn,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_CONNX_CALL (
   PMQCHAR pQMgrName,
   PMQCNO pConnectOpts,

   PMQHCONN pHconn,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_CONNX_CALL * PMQ_CONNX_CALL;






 void MQCRTMH (
   MQHCONN Hconn,
   PMQVOID pCrtMsgHOpts,

   PMQHMSG pHmsg,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_CRTMH_CALL (
   MQHCONN Hconn,
   PMQVOID pCrtMsgHOpts,

   PMQHMSG pHmsg,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_CRTMH_CALL * PMQ_CRTMH_CALL;






 void MQCTL (
   MQHCONN Hconn,
   MQLONG Operation,
   PMQVOID pControlOpts,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_CTL_CALL (
   MQHCONN Hconn,
   MQLONG Operation,
   PMQVOID pControlOpts,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_CTL_CALL * PMQ_CTL_CALL;






 void MQDISC (
   PMQHCONN pHconn,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_DISC_CALL (
   PMQHCONN pHconn,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_DISC_CALL * PMQ_DISC_CALL;






 void MQDLTMH (
   MQHCONN Hconn,
   PMQHMSG pHmsg,
   PMQVOID pDltMsgHOpts,

   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_DLTMH_CALL (
   MQHCONN Hconn,
   PMQHMSG pHmsg,
   PMQVOID pDltMsgHOpts,

   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_DLTMH_CALL * PMQ_DLTMH_CALL;






 void MQDLTMP (
   MQHCONN Hconn,
   MQHMSG Hmsg,
   PMQVOID pDltPropOpts,

   PMQVOID pName,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_DLTMP_CALL (
   MQHCONN Hconn,
   MQHMSG Hmsg,
   PMQVOID pDltPropOpts,

   PMQVOID pName,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_DLTMP_CALL * PMQ_DLTMP_CALL;






 void MQGET (
   MQHCONN Hconn,
   MQHOBJ Hobj,
   PMQVOID pMsgDesc,
   PMQVOID pGetMsgOpts,

   MQLONG BufferLength,
   PMQVOID pBuffer,
   PMQLONG pDataLength,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_GET_CALL (
   MQHCONN Hconn,
   MQHOBJ Hobj,
   PMQVOID pMsgDesc,
   PMQVOID pGetMsgOpts,

   MQLONG BufferLength,
   PMQVOID pBuffer,
   PMQLONG pDataLength,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_GET_CALL * PMQ_GET_CALL;






 void MQINQ (
   MQHCONN Hconn,
   MQHOBJ Hobj,
   MQLONG SelectorCount,
   PMQLONG pSelectors,
   MQLONG IntAttrCount,
   PMQLONG pIntAttrs,
   MQLONG CharAttrLength,

   PMQCHAR pCharAttrs,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_INQ_CALL (
   MQHCONN Hconn,
   MQHOBJ Hobj,
   MQLONG SelectorCount,
   PMQLONG pSelectors,
   MQLONG IntAttrCount,
   PMQLONG pIntAttrs,
   MQLONG CharAttrLength,

   PMQCHAR pCharAttrs,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_INQ_CALL * PMQ_INQ_CALL;






 void MQINQMP (
   MQHCONN Hconn,
   MQHMSG Hmsg,
   PMQVOID pInqPropOpts,

   PMQVOID pName,
   PMQVOID pPropDesc,
   PMQLONG pType,
   MQLONG ValueLength,
   PMQVOID pValue,
   PMQLONG pDataLength,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_INQMP_CALL (
   MQHCONN Hconn,
   MQHMSG Hmsg,
   PMQVOID pInqPropOpts,

   PMQVOID pName,
   PMQVOID pPropDesc,
   PMQLONG pType,
   MQLONG ValueLength,
   PMQVOID pValue,
   PMQLONG pDataLength,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_INQMP_CALL * PMQ_INQMP_CALL;






 void MQMHBUF (
   MQHCONN Hconn,
   MQHMSG Hmsg,
   PMQVOID pMsgHBufOpts,

   PMQVOID pName,
   PMQVOID pMsgDesc,
   MQLONG BufferLength,
   PMQVOID pBuffer,
   PMQLONG pDataLength,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_MHBUF_CALL (
   MQHCONN Hconn,
   MQHMSG Hmsg,
   PMQVOID pMsgHBufOpts,

   PMQVOID pName,
   PMQVOID pMsgDesc,
   MQLONG BufferLength,
   PMQVOID pBuffer,
   PMQLONG pDataLength,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_MHBUF_CALL * PMQ_MHBUF_CALL;






 void MQOPEN (
   MQHCONN Hconn,
   PMQVOID pObjDesc,
   MQLONG Options,

   PMQHOBJ pHobj,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_OPEN_CALL (
   MQHCONN Hconn,
   PMQVOID pObjDesc,
   MQLONG Options,

   PMQHOBJ pHobj,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_OPEN_CALL * PMQ_OPEN_CALL;






 void MQPUT (
   MQHCONN Hconn,
   MQHOBJ Hobj,
   PMQVOID pMsgDesc,
   PMQVOID pPutMsgOpts,

   MQLONG BufferLength,
   PMQVOID pBuffer,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_PUT_CALL (
   MQHCONN Hconn,
   MQHOBJ Hobj,
   PMQVOID pMsgDesc,
   PMQVOID pPutMsgOpts,

   MQLONG BufferLength,
   PMQVOID pBuffer,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_PUT_CALL * PMQ_PUT_CALL;






 void MQPUT1 (
   MQHCONN Hconn,
   PMQVOID pObjDesc,
   PMQVOID pMsgDesc,
   PMQVOID pPutMsgOpts,

   MQLONG BufferLength,
   PMQVOID pBuffer,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_PUT1_CALL (
   MQHCONN Hconn,
   PMQVOID pObjDesc,
   PMQVOID pMsgDesc,
   PMQVOID pPutMsgOpts,

   MQLONG BufferLength,
   PMQVOID pBuffer,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_PUT1_CALL * PMQ_PUT1_CALL;






 void MQSET (
   MQHCONN Hconn,
   MQHOBJ Hobj,
   MQLONG SelectorCount,
   PMQLONG pSelectors,
   MQLONG IntAttrCount,
   PMQLONG pIntAttrs,
   MQLONG CharAttrLength,

   PMQCHAR pCharAttrs,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_SET_CALL (
   MQHCONN Hconn,
   MQHOBJ Hobj,
   MQLONG SelectorCount,
   PMQLONG pSelectors,
   MQLONG IntAttrCount,
   PMQLONG pIntAttrs,
   MQLONG CharAttrLength,

   PMQCHAR pCharAttrs,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_SET_CALL * PMQ_SET_CALL;






 void MQSETMP (
   MQHCONN Hconn,
   MQHMSG Hmsg,
   PMQVOID pSetPropOpts,

   PMQVOID pName,
   PMQVOID pPropDesc,
   MQLONG Type,
   MQLONG ValueLength,
   PMQVOID pValue,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_SETMP_CALL (
   MQHCONN Hconn,
   MQHMSG Hmsg,
   PMQVOID pSetPropOpts,

   PMQVOID pName,
   PMQVOID pPropDesc,
   MQLONG Type,
   MQLONG ValueLength,
   PMQVOID pValue,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_SETMP_CALL * PMQ_SETMP_CALL;






 void MQSTAT (
   MQHCONN Hconn,
   MQLONG Type,
   PMQVOID pStatus,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_STAT_CALL (
   MQHCONN Hconn,
   MQLONG Type,
   PMQVOID pStatus,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_STAT_CALL * PMQ_STAT_CALL;






 void MQSUB (
   MQHCONN Hconn,
   PMQVOID pSubDesc,
   PMQHOBJ pHobj,
   PMQHOBJ pHsub,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_SUB_CALL (
   MQHCONN Hconn,
   PMQVOID pSubDesc,
   PMQHOBJ pHobj,
   PMQHOBJ pHsub,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_SUB_CALL * PMQ_SUB_CALL;






 void MQSUBRQ (
   MQHCONN Hconn,
   MQHOBJ Hsub,
   MQLONG Action,
   PMQVOID pSubRqOpts,
   PMQLONG pCompCode,
   PMQLONG pReason);

 typedef void MQ_SUBRQ_CALL (
   MQHCONN Hconn,
   MQHOBJ Hsub,
   MQLONG Action,
   PMQVOID pSubRqOpts,
   PMQLONG pCompCode,
   PMQLONG pReason);
 typedef MQ_SUBRQ_CALL * PMQ_SUBRQ_CALL;






 typedef void MQCB_FUNCTION (
   MQHCONN Hconn,
   PMQVOID pMsgDesc,
   PMQVOID pGetMsgOpts,
   PMQVOID pBuffer,
   PMQCBC pContext);
 typedef MQCB_FUNCTION * PMQCB_FUNCTION;
