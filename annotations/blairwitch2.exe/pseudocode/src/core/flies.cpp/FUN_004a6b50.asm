; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flies_cpp_FUN_004a6b50(CFlies *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;   core_flies.cpp_FUN_004a7560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6b50
        ;   Label: core_flies.cpp_FUN_004a6b50
    PUSH ESI                            ; 004a6b51
    MOV ESI,dword ptr [ESP + 0xc]       ; 004a6b52
    PUSH ESI                            ; 004a6b56
    CALL core_actor.cpp_FUN_00408a80    ; 004a6b57
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    XOR EBX,EBX                         ; 004a6b5c
    MOV EDX,dword ptr [ESI + 0x2c0]     ; 004a6b5e
    ADD ESP,0x4                         ; 004a6b64
    TEST EDX,EDX                        ; 004a6b67
    JLE 0x004a6b80                      ; 004a6b69
        ;   XREF to: 004a6b80 (CONDITIONAL_JUMP)  ; LAB_004a6b80
    PUSH EBX                            ; 004a6b6b
        ;   Label: LAB_004a6b6b
    PUSH ESI                            ; 004a6b6c
    CALL core_flies.cpp_FUN_004a7560    ; 004a6b6d
        ;   XREF to: 004a7560 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_FUN_004a7560(CFlies * this_ptr, int fly_index)
    INC EBX                             ; 004a6b72
    MOV ECX,dword ptr [ESI + 0x2c0]     ; 004a6b73
    ADD ESP,0x8                         ; 004a6b79
    CMP EBX,ECX                         ; 004a6b7c
    JL 0x004a6b6b                       ; 004a6b7e
        ;   XREF to: 004a6b6b (CONDITIONAL_JUMP)  ; LAB_004a6b6b
    MOV dword ptr [ESI + 0x2b78],0x1    ; 004a6b80
        ;   Label: LAB_004a6b80
    POP ESI                             ; 004a6b8a
    POP EBX                             ; 004a6b8b
    RET                                 ; 004a6b8c

