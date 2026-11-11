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
;   core_fldnotes.cpp_SNotesEntry_layout_FUN_004bbd10 at 004bbe2d
;   core_mission.cpp_FUN_0051c240 at 0051c2d6
;   core_script.cpp_CScript_buildParsedLines_FUN_00543fd0 at 0054400f
;   core_script.cpp_CScript_renderEditor_FUN_00543c00 at 00543d57
;   core_sound.cpp_FUN_0057be00 at 0057be3c
;   core_sound.cpp_filterSoundFilesByPattern_FUN_0057b6e0 at 0057b708
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_0049b060 at 0049b0f3
;   shape_edittool.cpp_CPickList_handleInput_FUN_0049a9b0 at 0049ab38
;   shape_edittool.cpp_CPickList_renderDialog_FUN_0049b830 at 0049bc60
;   shape_edittool.cpp_CStrList_copyFrom_FUN_00499420 at 00499455
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

