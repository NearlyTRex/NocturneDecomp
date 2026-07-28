; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(CStrList *this_ptr,int index)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[16]:
;   core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20 at 004d9cb4
;   core_script.cpp_FUN_004fe9d0 at 004feb27
;   core_script.cpp_FUN_004fee30 at 004fee6f
;   core_sound.cpp_FUN_0052d030 at 0052d06c
;   core_sound.cpp_filterSoundFilesByPattern_FUN_0052c930 at 0052c958
;   shape_edittool.cpp_CPickList_handleInput_FUN_00474ea0 at 00475178
;   shape_edittool.cpp_CStrList_copyFrom_FUN_00473c00 at 00473c35
;   shape_edittool.cpp_CStrList_copyToClipboard_FUN_00474380 at 00474397
;   shape_edittool.cpp_CStrList_findByFirstField_FUN_00474180 at 004741b8
;   shape_edittool.cpp_CStrList_findString_FUN_00474140 at 00474156
;   ... and 6 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00474080
        ;   Label: shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
    MOV EDX,dword ptr [ESP + 0x8]       ; 00474084
    MOV EAX,dword ptr [EAX + 0x8]       ; 00474088
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 0047408b
    RET                                 ; 0047408e

