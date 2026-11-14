; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_00482440(CStrList *this_ptr,int index)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[18]:
;   core_fldnotes.cpp_SNotesEntry_layout_FUN_004a9950 at 004a9a7b
;   core_mission.cpp_FUN_004f7a20 at 004f7ab6
;   core_script.cpp_CScript_buildParsedLines_FUN_005295e0 at 0052961f
;   core_script.cpp_CScript_renderEditor_FUN_00529210 at 00529367
;   core_sound.cpp_CSound_findRandomSoundFile_FUN_0055ef30 at 0055ef6c
;   core_sound.cpp_filterSoundFilesByPattern_FUN_0055e810 at 0055e838
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00483c00 at 00483c93
;   shape_edittool.cpp_CPickList_handleInput_FUN_00483550 at 004836d8
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004843d0 at 00484800
;   shape_edittool.cpp_CStrList_copyFrom_FUN_00481fc0 at 00481ff5
;   ... and 8 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00482440
        ;   Label: shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
    MOV EDX,dword ptr [ESP + 0x8]       ; 00482444
    MOV EAX,dword ptr [EAX + 0x8]       ; 00482448
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 0048244b
    RET                                 ; 0048244e

