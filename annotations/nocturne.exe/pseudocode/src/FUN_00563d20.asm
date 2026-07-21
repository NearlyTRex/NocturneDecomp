; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00563d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4)
;
;
; XREF[1]:
;   crt_stdlib.c__qsort_FUN_00563db8 at 00564025
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563d20
        ;   Label: FUN_00563d20
    PUSH ESI                            ; 00563d21
    PUSH EDI                            ; 00563d22
    PUSH ES                             ; 00563d23
    PUSH FS                             ; 00563d24
    PUSH GS                             ; 00563d26
    PUSH EBP                            ; 00563d28
    MOV EBP,dword ptr [ESP + 0x20]      ; 00563d29
    MOV ESI,dword ptr [ESP + 0x28]      ; 00563d2d
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00563d31
    MOV EDX,dword ptr [ESP + 0x24]      ; 00563d35
    PUSH EDX                            ; 00563d39
    PUSH EBP                            ; 00563d3a
    CALL EDI                            ; 00563d3b
    ADD ESP,0x8                         ; 00563d3d
    TEST EAX,EAX                        ; 00563d40
    JLE 0x00563d60                      ; 00563d42
        ;   XREF to: 00563d60 (CONDITIONAL_JUMP)  ; LAB_00563d60
    PUSH ESI                            ; 00563d44
    PUSH EBP                            ; 00563d45
    CALL EDI                            ; 00563d46
    ADD ESP,0x8                         ; 00563d48
    TEST EAX,EAX                        ; 00563d4b
    JLE 0x00563d6b                      ; 00563d4d
        ;   XREF to: 00563d6b (CONDITIONAL_JUMP)  ; LAB_00563d6b
    PUSH ESI                            ; 00563d4f
    MOV ECX,dword ptr [ESP + 0x28]      ; 00563d50
    PUSH ECX                            ; 00563d54
    CALL EDI                            ; 00563d55
    ADD ESP,0x8                         ; 00563d57
    TEST EAX,EAX                        ; 00563d5a
    JLE 0x00563d7e                      ; 00563d5c
        ;   XREF to: 00563d7e (CONDITIONAL_JUMP)  ; LAB_00563d7e
    JMP 0x00563d82                      ; 00563d5e
        ;   XREF to: 00563d82 (UNCONDITIONAL_JUMP)  ; LAB_00563d82
    PUSH ESI                            ; 00563d60
        ;   Label: LAB_00563d60
    PUSH EBP                            ; 00563d61
    CALL EDI                            ; 00563d62
    ADD ESP,0x8                         ; 00563d64
    TEST EAX,EAX                        ; 00563d67
    JL 0x00563d6f                       ; 00563d69
        ;   XREF to: 00563d6f (CONDITIONAL_JUMP)  ; LAB_00563d6f
    MOV EAX,EBP                         ; 00563d6b
        ;   Label: LAB_00563d6b
    JMP 0x00563d86                      ; 00563d6d
        ;   XREF to: 00563d86 (UNCONDITIONAL_JUMP)  ; LAB_00563d86
    PUSH ESI                            ; 00563d6f
        ;   Label: LAB_00563d6f
    MOV EBX,dword ptr [ESP + 0x28]      ; 00563d70
    PUSH EBX                            ; 00563d74
    CALL EDI                            ; 00563d75
    ADD ESP,0x8                         ; 00563d77
    TEST EAX,EAX                        ; 00563d7a
    JLE 0x00563d82                      ; 00563d7c
        ;   XREF to: 00563d82 (CONDITIONAL_JUMP)  ; LAB_00563d82
    MOV EAX,ESI                         ; 00563d7e
        ;   Label: LAB_00563d7e
    JMP 0x00563d86                      ; 00563d80
        ;   XREF to: 00563d86 (UNCONDITIONAL_JUMP)  ; LAB_00563d86
    MOV EAX,dword ptr [ESP + 0x24]      ; 00563d82
        ;   Label: LAB_00563d82
    POP EBP                             ; 00563d86
        ;   Label: LAB_00563d86
    POP GS                              ; 00563d87
    POP FS                              ; 00563d89
    POP ES                              ; 00563d8b
    POP EDI                             ; 00563d8c
    POP ESI                             ; 00563d8d
    POP EBX                             ; 00563d8e
    RET                                 ; 00563d8f

