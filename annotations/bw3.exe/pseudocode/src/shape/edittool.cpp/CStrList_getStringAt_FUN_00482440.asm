; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_00482440(CStrList *this_ptr,int index)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[17]:
;   core_fldnotes.cpp_FUN_004a9950 at 004a9a7b
;   core_mission.cpp_FUN_004f7a20 at 004f7ab6
;   core_script.cpp_FUN_00529210 at 00529367
;   core_script.cpp_FUN_005295e0 at 0052961f
;   core_sound.cpp_FUN_0055ef30 at 0055ef6c
;   core_sound.cpp_filterSoundFilesByPattern_FUN_0055e810 at 0055e838
;   shape_edittool.cpp_CStrList_copyFrom_FUN_00481fc0 at 00481ff5
;   shape_edittool.cpp_CStrList_copyToClipboard_FUN_00482740 at 00482757
;   shape_edittool.cpp_CStrList_findByFirstField_FUN_00482540 at 00482578
;   shape_edittool.cpp_CStrList_findString_FUN_00482500 at 00482516
;   ... and 7 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00482440
        ;   Label: shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
    MOV EDX,dword ptr [ESP + 0x8]       ; 00482444
    MOV EAX,dword ptr [EAX + 0x8]       ; 00482448
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 0048244b
    RET                                 ; 0048244e

