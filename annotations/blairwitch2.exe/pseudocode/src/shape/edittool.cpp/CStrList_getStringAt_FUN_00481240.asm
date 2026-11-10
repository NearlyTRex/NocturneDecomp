; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(CStrList *this_ptr,int index)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[17]:
;   core_fldnotes.cpp_FUN_004a32e0 at 004a336d
;   core_mission.cpp_FUN_004fd280 at 004fd316
;   core_script.cpp_CScript_buildParsedLines_FUN_00521ec0 at 00521eff
;   core_script.cpp_CScript_renderEditor_FUN_00521af0 at 00521c47
;   core_sound.cpp_FUN_005593d0 at 0055940c
;   core_sound.cpp_filterSoundFilesByPattern_FUN_00558cb0 at 00558cd8
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00482a00 at 00482a93
;   shape_edittool.cpp_CPickList_handleInput_FUN_00482350 at 004824d8
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004831d0 at 00483600
;   shape_edittool.cpp_CStrList_copyFrom_FUN_00480dc0 at 00480df5
;   ... and 7 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00481240
        ;   Label: shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
    MOV EDX,dword ptr [ESP + 0x8]       ; 00481244
    MOV EAX,dword ptr [EAX + 0x8]       ; 00481248
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 0048124b
    RET                                 ; 0048124e

