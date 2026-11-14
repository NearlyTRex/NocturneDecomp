; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_clear_FUN_00483d10(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b6490
;   core_script.cpp_CScript_clear_FUN_00521630 at 0052165d
;   core_script.cpp_FUN_00521ff0 at 0052201c
;   shape_edittool.cpp_CPickList_dtor_FUN_004820b0 at 004820c4
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;   shape_edittool.cpp_CStrList_clear_FUN_00480e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483d10
        ;   Label: shape_edittool.cpp_CPickList_clear_FUN_00483d10
    PUSH ESI                            ; 00483d11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00483d12
    MOV EDX,dword ptr [EBX + 0x1b0]     ; 00483d16
    TEST EDX,EDX                        ; 00483d1c
    JNZ 0x00483d4a                      ; 00483d1e
        ;   XREF to: 00483d4a (CONDITIONAL_JUMP)  ; LAB_00483d4a
    MOV ESI,dword ptr [EBX + 0x1b8]     ; 00483d20
        ;   Label: LAB_00483d20
    MOV dword ptr [EBX + 0x1ac],0x0     ; 00483d26
    TEST ESI,ESI                        ; 00483d30
    JNZ 0x00483d5f                      ; 00483d32
        ;   XREF to: 00483d5f (CONDITIONAL_JUMP)  ; LAB_00483d5f
    PUSH EBX                            ; 00483d34
        ;   Label: LAB_00483d34
    MOV dword ptr [EBX + 0x1b4],0x0     ; 00483d35
    CALL shape_edittool.cpp_CStrList_clear_FUN_00480e10 ; 00483d3f
        ;   XREF to: 00480e10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_clear_FUN_00480e10(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00483d44
    POP ESI                             ; 00483d47
    POP EBX                             ; 00483d48
    RET                                 ; 00483d49
    PUSH EDX                            ; 00483d4a
        ;   Label: LAB_00483d4a
    CALL crt_unknown.c_FUN_005b86a0     ; 00483d4b
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00483d50
    MOV dword ptr [EBX + 0x1b0],0x0     ; 00483d53
    JMP 0x00483d20                      ; 00483d5d
        ;   XREF to: 00483d20 (UNCONDITIONAL_JUMP)  ; LAB_00483d20
    PUSH ESI                            ; 00483d5f
        ;   Label: LAB_00483d5f
    CALL crt_unknown.c_FUN_005b86a0     ; 00483d60
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00483d65
    MOV dword ptr [EBX + 0x1b8],0x0     ; 00483d68
    JMP 0x00483d34                      ; 00483d72
        ;   XREF to: 00483d34 (UNCONDITIONAL_JUMP)  ; LAB_00483d34

