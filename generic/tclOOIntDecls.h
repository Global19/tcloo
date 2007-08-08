/*
 * $Id: tclOOIntDecls.h,v 1.6 2007/08/08 12:26:58 dkf Exp $
 *
 * This file is (mostly) automatically generated from tclOO.decls.
 */

/* !BEGIN!: Do not edit below this line. */

#define TCLOOINT_STUBS_EPOCH 0
#define TCLOOINT_STUBS_REVISION 31

#if !defined(USE_TCLOO_STUBS)

/*
 * Exported function declarations:
 */

/* 0 */
TCLOOAPI Tcl_Object	TclOOGetDefineCmdContext (Tcl_Interp * interp);
/* 1 */
TCLOOAPI Tcl_Method	TclOOMakeProcObjectMethod (Tcl_Interp * interp, 
				Object * oPtr, int flags, Tcl_Obj * nameObj, 
				Tcl_Obj * argsObj, Tcl_Obj * bodyObj, 
				const Tcl_MethodType * typePtr, 
				ClientData clientData, Proc ** procPtrPtr);
/* 2 */
TCLOOAPI Tcl_Method	TclOOMakeProcClassMethod (Tcl_Interp * interp, 
				Class * clsPtr, int flags, Tcl_Obj * nameObj, 
				const char * namePtr, Tcl_Obj * argsObj, 
				Tcl_Obj * bodyObj, 
				const Tcl_MethodType * typePtr, 
				ClientData clientData, Proc ** procPtrPtr);
/* 3 */
TCLOOAPI Method *	TclOONewProcMethod (Tcl_Interp * interp, 
				Object * oPtr, int flags, Tcl_Obj * nameObj, 
				Tcl_Obj * argsObj, Tcl_Obj * bodyObj, 
				ProcedureMethod ** pmPtrPtr);
/* 4 */
TCLOOAPI Method *	TclOONewProcClassMethod (Tcl_Interp * interp, 
				Class * clsPtr, int flags, Tcl_Obj * nameObj, 
				Tcl_Obj * argsObj, Tcl_Obj * bodyObj, 
				ProcedureMethod ** pmPtrPtr);
/* 5 */
TCLOOAPI int		TclOOObjectCmdCore (Object * oPtr, 
				Tcl_Interp * interp, int objc, 
				Tcl_Obj *const * objv, int publicOnly, 
				Tcl_HashTable * cachePtr, Class * startCls);
/* 6 */
TCLOOAPI int		TclOOIsReachable (Class * targetPtr, 
				Class * startPtr);

#endif /* !defined(USE_TCLOO_STUBS) */

typedef struct TclOOIntStubs {
    int magic;
    int epoch;
    int revision;
    struct TclOOIntStubHooks *hooks;

    Tcl_Object (*tclOOGetDefineCmdContext) (Tcl_Interp * interp); /* 0 */
    Tcl_Method (*tclOOMakeProcObjectMethod) (Tcl_Interp * interp, Object * oPtr, int flags, Tcl_Obj * nameObj, Tcl_Obj * argsObj, Tcl_Obj * bodyObj, const Tcl_MethodType * typePtr, ClientData clientData, Proc ** procPtrPtr); /* 1 */
    Tcl_Method (*tclOOMakeProcClassMethod) (Tcl_Interp * interp, Class * clsPtr, int flags, Tcl_Obj * nameObj, const char * namePtr, Tcl_Obj * argsObj, Tcl_Obj * bodyObj, const Tcl_MethodType * typePtr, ClientData clientData, Proc ** procPtrPtr); /* 2 */
    Method * (*tclOONewProcMethod) (Tcl_Interp * interp, Object * oPtr, int flags, Tcl_Obj * nameObj, Tcl_Obj * argsObj, Tcl_Obj * bodyObj, ProcedureMethod ** pmPtrPtr); /* 3 */
    Method * (*tclOONewProcClassMethod) (Tcl_Interp * interp, Class * clsPtr, int flags, Tcl_Obj * nameObj, Tcl_Obj * argsObj, Tcl_Obj * bodyObj, ProcedureMethod ** pmPtrPtr); /* 4 */
    int (*tclOOObjectCmdCore) (Object * oPtr, Tcl_Interp * interp, int objc, Tcl_Obj *const * objv, int publicOnly, Tcl_HashTable * cachePtr, Class * startCls); /* 5 */
    int (*tclOOIsReachable) (Class * targetPtr, Class * startPtr); /* 6 */
} TclOOIntStubs;

#ifdef __cplusplus
extern "C" {
#endif
extern const TclOOIntStubs *tclOOIntStubsPtr;
#ifdef __cplusplus
}
#endif

#if defined(USE_TCLOO_STUBS)

/*
 * Inline function declarations:
 */

#ifndef TclOOGetDefineCmdContext
#define TclOOGetDefineCmdContext \
	(tclOOIntStubsPtr->tclOOGetDefineCmdContext) /* 0 */
#endif
#ifndef TclOOMakeProcObjectMethod
#define TclOOMakeProcObjectMethod \
	(tclOOIntStubsPtr->tclOOMakeProcObjectMethod) /* 1 */
#endif
#ifndef TclOOMakeProcClassMethod
#define TclOOMakeProcClassMethod \
	(tclOOIntStubsPtr->tclOOMakeProcClassMethod) /* 2 */
#endif
#ifndef TclOONewProcMethod
#define TclOONewProcMethod \
	(tclOOIntStubsPtr->tclOONewProcMethod) /* 3 */
#endif
#ifndef TclOONewProcClassMethod
#define TclOONewProcClassMethod \
	(tclOOIntStubsPtr->tclOONewProcClassMethod) /* 4 */
#endif
#ifndef TclOOObjectCmdCore
#define TclOOObjectCmdCore \
	(tclOOIntStubsPtr->tclOOObjectCmdCore) /* 5 */
#endif
#ifndef TclOOIsReachable
#define TclOOIsReachable \
	(tclOOIntStubsPtr->tclOOIsReachable) /* 6 */
#endif

#endif /* defined(USE_TCLOO_STUBS) */

/* !END!: Do not edit above this line. */

struct TclOOStubAPI {
    TclOOStubs *stubsPtr;
    TclOOIntStubs *intStubsPtr;
};
