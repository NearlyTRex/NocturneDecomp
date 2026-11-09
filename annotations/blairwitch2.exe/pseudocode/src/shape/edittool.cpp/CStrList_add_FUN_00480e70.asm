; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_add_FUN_00480e70(CStrList *this_ptr,char *string_data)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   string_data
;
; XREF[19]:
;   core_fldnotes.cpp_FUN_004a41b0 at 004a4ff0
;   core_game.cpp_FUN_004b6170 at 004b673d
;   core_menu.cpp_FUN_004ed260 at 004ee0d1
;   core_menu.cpp_FUN_004eed60 at 004ef9fa
;   core_mission.cpp_FUN_004fd280 at 004fd2bd
;   core_script.cpp_FUN_00521cf0 at 00521e00
;   core_script.cpp_FUN_00522350 at 005247b6
;   core_script.cpp_FUN_00529750 at 0052981c
;   core_sound.cpp_FUN_0055b110 at 0055b133
;   engine_pod.cpp_FUN_0051aa7e at 0051ac80
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480e70
        ;   Label: shape_edittool.cpp_CStrList_add_FUN_00480e70
    MOV EDX,dword ptr [ESP + 0x8]       ; 00480e71
    MOV ECX,dword ptr [ESP + 0xc]       ; 00480e75
    PUSH ECX                            ; 00480e79
    MOV EBX,dword ptr [EDX]             ; 00480e7a
    PUSH EBX                            ; 00480e7c
    MOV EAX,dword ptr [EDX + 0xc]       ; 00480e7d
    PUSH EDX                            ; 00480e80
    CALL dword ptr [EAX + 0xc]          ; 00480e81
    ADD ESP,0xc                         ; 00480e84
    POP EBX                             ; 00480e87
    RET                                 ; 00480e88

