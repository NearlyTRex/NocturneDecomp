; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_clear_FUN_00476160(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_game.cpp_CGame_FUN_004a4b50 at 004a50e4
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dd03
;   core_script.cpp_CScript_FUN_004fe500 at 004fe52d
;   core_script.cpp_CScript_FUN_004febd0 at 004fed2f
;   core_script.cpp_CScript_FUN_004fef60 at 004fef83
;   shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 at 00474d04
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;   shape_edittool.cpp_CStrList_clear_FUN_00473c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476160
        ;   Label: shape_edittool.cpp_CPickList_clear_FUN_00476160
    MOV EBX,dword ptr [ESP + 0x8]       ; 00476161
    MOV EDX,dword ptr [EBX + 0x134]     ; 00476165
    TEST EDX,EDX                        ; 0047616b
    JNZ 0x00476184                      ; 0047616d
        ;   XREF to: 00476184 (CONDITIONAL_JUMP)  ; LAB_00476184
    PUSH EBX                            ; 0047616f
        ;   Label: LAB_0047616f
    MOV dword ptr [EBX + 0x130],0x0     ; 00476170
    CALL shape_edittool.cpp_CStrList_clear_FUN_00473c50 ; 0047617a
        ;   XREF to: 00473c50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_clear_FUN_00473c50(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0047617f
    POP EBX                             ; 00476182
    RET                                 ; 00476183
    PUSH EDX                            ; 00476184
        ;   Label: LAB_00476184
    CALL crt_memory.c_free_FUN_005638d0 ; 00476185
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 0047618a
    MOV dword ptr [EBX + 0x134],0x0     ; 0047618d
    JMP 0x0047616f                      ; 00476197
        ;   XREF to: 0047616f (UNCONDITIONAL_JUMP)  ; LAB_0047616f

