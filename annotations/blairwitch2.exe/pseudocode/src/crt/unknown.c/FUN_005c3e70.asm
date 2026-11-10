; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c3e70(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bfdd4 at 005bfdfa
;
; Called Functions:
;   crt_unknown.c_FUN_005c0dc0
;   crt_unknown.c_FUN_005c0e00
;   crt_unknown.c_FUN_005c4260
;   crt_unknown.c_FUN_005c5810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3e70
        ;   Label: crt_unknown.c_FUN_005c3e70
    PUSH ESI                            ; 005c3e71
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c3e72
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c3e76
    PUSH EBX                            ; 005c3e7a
        ;   Label: LAB_005c3e7a
    CALL crt_unknown.c_FUN_005c4260     ; 005c3e7b
        ;   XREF to: 005c4260 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4260()
    ADD ESP,0x4                         ; 005c3e80
    TEST EAX,EAX                        ; 005c3e83
    JNZ 0x005c3eb0                      ; 005c3e85
        ;   XREF to: 005c3eb0 (CONDITIONAL_JUMP)  ; LAB_005c3eb0
    PUSH EBX                            ; 005c3e87
    CALL crt_unknown.c_FUN_005c0dc0     ; 005c3e88
        ;   XREF to: 005c0dc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0dc0()
    ADD ESP,0x4                         ; 005c3e8d
    PUSH EAX                            ; 005c3e90
    PUSH ESI                            ; 005c3e91
    CALL crt_unknown.c_FUN_005c5810     ; 005c3e92
        ;   XREF to: 005c5810 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5810()
    ADD ESP,0x8                         ; 005c3e97
    TEST EAX,EAX                        ; 005c3e9a
    JZ 0x005c3ea3                       ; 005c3e9c
        ;   XREF to: 005c3ea3 (CONDITIONAL_JUMP)  ; LAB_005c3ea3
    MOV EAX,EBX                         ; 005c3e9e
    POP ESI                             ; 005c3ea0
    POP EBX                             ; 005c3ea1
    RET                                 ; 005c3ea2
    PUSH EBX                            ; 005c3ea3
        ;   Label: LAB_005c3ea3
    CALL crt_unknown.c_FUN_005c0e00     ; 005c3ea4
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    ADD ESP,0x4                         ; 005c3ea9
    MOV EBX,EAX                         ; 005c3eac
    JMP 0x005c3e7a                      ; 005c3eae
        ;   XREF to: 005c3e7a (UNCONDITIONAL_JUMP)  ; LAB_005c3e7a
    XOR EAX,EAX                         ; 005c3eb0
        ;   Label: LAB_005c3eb0
    POP ESI                             ; 005c3eb2
    POP EBX                             ; 005c3eb3
    RET                                 ; 005c3eb4

