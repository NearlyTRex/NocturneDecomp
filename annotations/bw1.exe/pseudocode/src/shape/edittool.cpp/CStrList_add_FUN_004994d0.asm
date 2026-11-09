; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_add_FUN_004994d0(CStrList *this_ptr,char *string_data)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   string_data
;
; XREF[19]:
;   core_fldnotes.cpp_FUN_004bcba0 at 004bd9e0
;   core_game.cpp_FUN_004cf5e0 at 004cfc30
;   core_game.cpp_FUN_004d7250 at 004d75d2
;   core_menu.cpp_FUN_0050ba70 at 0050c8c0
;   core_menu.cpp_FUN_0050d640 at 0050e5ec
;   core_mission.cpp_FUN_0051c240 at 0051c27d
;   core_script.cpp_CScript_step_FUN_00544460 at 0054666b
;   core_script.cpp_FUN_00543e00 at 00543f10
;   core_script.cpp_FUN_0054aa60 at 0054ab2c
;   core_sound.cpp_FUN_0057db60 at 0057db83
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004994d0
        ;   Label: shape_edittool.cpp_CStrList_add_FUN_004994d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004994d1
    MOV ECX,dword ptr [ESP + 0xc]       ; 004994d5
    PUSH ECX                            ; 004994d9
    MOV EBX,dword ptr [EDX]             ; 004994da
    PUSH EBX                            ; 004994dc
    MOV EAX,dword ptr [EDX + 0xc]       ; 004994dd
    PUSH EDX                            ; 004994e0
    CALL dword ptr [EAX + 0xc]          ; 004994e1
    ADD ESP,0xc                         ; 004994e4
    POP EBX                             ; 004994e7
    RET                                 ; 004994e8

