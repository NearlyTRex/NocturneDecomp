; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_motion_cpp_FUN_00523db0(int *param_1,undefined4 param_2)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523db0
        ;   Label: core_motion.cpp_FUN_00523db0
    PUSH ESI                            ; 00523db1
    PUSH EDI                            ; 00523db2
    PUSH EBP                            ; 00523db3
    SUB ESP,0x8                         ; 00523db4
    MOV EDI,dword ptr [ESP + 0x20]      ; 00523db7
    PUSH 0x5eaa7f                       ; 00523dbb
    PUSH EDI                            ; 00523dc0
    CALL crt_unknown.c_FUN_005c03c0     ; 00523dc1
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 00523dc6
    PUSH 0x3                            ; 00523dc9
    PUSH 0x5eaa97                       ; 00523dcb
    PUSH EDI                            ; 00523dd0
    CALL crt_unknown.c_FUN_005c03c0     ; 00523dd1
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00523dd6
    PUSH 0x5eaa9b                       ; 00523dd9
    PUSH EDI                            ; 00523dde
    CALL crt_unknown.c_FUN_005c03c0     ; 00523ddf
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 00523de4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00523de7
    MOV EDX,dword ptr [EAX]             ; 00523deb
    PUSH EDX                            ; 00523ded
    PUSH 0x5eaaaa                       ; 00523dee
    PUSH EDI                            ; 00523df3
    CALL crt_unknown.c_FUN_005c03c0     ; 00523df4
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00523df9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00523dfc
    MOV ECX,dword ptr [EAX]             ; 00523e00
    XOR EBX,EBX                         ; 00523e02
    TEST ECX,ECX                        ; 00523e04
    JLE 0x00523e30                      ; 00523e06
        ;   XREF to: 00523e30 (CONDITIONAL_JUMP)  ; LAB_00523e30
    LEA ESI,[EAX + 0x4]                 ; 00523e08
    PUSH ESI                            ; 00523e0b
        ;   Label: LAB_00523e0b
    PUSH 0x5eaaae                       ; 00523e0c
    PUSH EDI                            ; 00523e11
    CALL crt_unknown.c_FUN_005c03c0     ; 00523e12
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00523e17
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00523e1a
    INC EBX                             ; 00523e1e
    MOV EBP,dword ptr [EAX]             ; 00523e1f
    ADD ESI,0x1e                        ; 00523e21
    CMP EBX,EBP                         ; 00523e24
    JL 0x00523e0b                       ; 00523e26
        ;   XREF to: 00523e0b (CONDITIONAL_JUMP)  ; LAB_00523e0b
    LEA EAX,[EAX]                       ; 00523e28

