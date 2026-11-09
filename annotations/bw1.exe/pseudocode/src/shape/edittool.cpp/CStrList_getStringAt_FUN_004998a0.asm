; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0(CStrList *this_ptr,int index)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[17]:
;   core_fldnotes.cpp_FUN_004bbd10 at 004bbe2d
;   core_mission.cpp_FUN_0051c240 at 0051c2d6
;   core_script.cpp_FUN_00543c00 at 00543d57
;   core_script.cpp_FUN_00543fd0 at 0054400f
;   core_sound.cpp_FUN_0057be00 at 0057be3c
;   core_sound.cpp_filterSoundFilesByPattern_FUN_0057b6e0 at 0057b708
;   shape_edittool.cpp_CStrList_copyFrom_FUN_00499420 at 00499455
;   shape_edittool.cpp_CStrList_copyToClipboard_FUN_00499ba0 at 00499bb7
;   shape_edittool.cpp_CStrList_findByFirstField_FUN_004999a0 at 004999d8
;   shape_edittool.cpp_CStrList_findString_FUN_00499960 at 00499976
;   ... and 7 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004998a0
        ;   Label: shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004998a4
    MOV EAX,dword ptr [EAX + 0x8]       ; 004998a8
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 004998ab
    RET                                 ; 004998ae

