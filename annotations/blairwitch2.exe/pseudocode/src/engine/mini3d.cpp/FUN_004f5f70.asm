; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f5f70(int param_1)
;
;
; XREF[1]:
;   unkafter_minecar.cpp_FUN_004f22be at 004f22c7
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5f70
        ;   Label: engine_mini3d.cpp_FUN_004f5f70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f5f71
    TEST EBX,EBX                        ; 004f5f75
    JZ 0x004f5f8e                       ; 004f5f77
        ;   XREF to: 004f5f8e (CONDITIONAL_JUMP)  ; LAB_004f5f8e
    MOV AL,byte ptr [EBX + -0x1]        ; 004f5f79
        ;   Label: LAB_004f5f79
    AND EAX,0xff                        ; 004f5f7c
    SUB EBX,EAX                         ; 004f5f81
    PUSH EBX                            ; 004f5f83
    CALL crt_unknown.c_FUN_005b86a0     ; 004f5f84
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 004f5f89
    POP EBX                             ; 004f5f8c
    RET                                 ; 004f5f8d
    MOV EDX,0x5ddea1                    ; 004f5f8e
        ;   Label: LAB_004f5f8e
    MOV ECX,0xe11                       ; 004f5f93
    PUSH 0x5ddeb6                       ; 004f5f98
    MOV dword ptr [0x01d046a0],EDX      ; 004f5f9d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004f5fa3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f5fa9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f5fae
    JMP 0x004f5f79                      ; 004f5fb1
        ;   XREF to: 004f5f79 (UNCONDITIONAL_JUMP)  ; LAB_004f5f79

