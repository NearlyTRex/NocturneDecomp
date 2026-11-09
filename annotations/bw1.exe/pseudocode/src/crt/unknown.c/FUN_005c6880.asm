; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * crt_unknown_c_FUN_005c6880(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c68f8 at 005c6970
;
; Referenced Globals:
;   undefined4 DAT_00626220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6880
        ;   Label: crt_unknown.c_FUN_005c6880
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c6881
    MOV EAX,[0x00626220]                ; 005c6885 | DAT_00626220
    XOR EBX,EBX                         ; 005c688a
    TEST EAX,EAX                        ; 005c688c
    JZ 0x005c689d                       ; 005c688e
        ;   XREF to: 005c689d (CONDITIONAL_JUMP)  ; LAB_005c689d
    CMP EDX,EAX                         ; 005c6890
        ;   Label: LAB_005c6890
    JC 0x005c689d                       ; 005c6892
        ;   XREF to: 005c689d (CONDITIONAL_JUMP)  ; LAB_005c689d
    MOV EBX,EAX                         ; 005c6894
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c6896
    TEST EAX,EAX                        ; 005c6899
    JNZ 0x005c6890                      ; 005c689b
        ;   XREF to: 005c6890 (CONDITIONAL_JUMP)  ; LAB_005c6890
    MOV dword ptr [EDX + 0x4],EBX       ; 005c689d
        ;   Label: LAB_005c689d
    MOV dword ptr [EDX + 0x8],EAX       ; 005c68a0
    TEST EBX,EBX                        ; 005c68a3
    JZ 0x005c68ac                       ; 005c68a5
        ;   XREF to: 005c68ac (CONDITIONAL_JUMP)  ; LAB_005c68ac
    MOV dword ptr [EBX + 0x8],EDX       ; 005c68a7
    JMP 0x005c68b2                      ; 005c68aa
        ;   XREF to: 005c68b2 (UNCONDITIONAL_JUMP)  ; LAB_005c68b2
    MOV dword ptr [0x00626220],EDX      ; 005c68ac | DAT_00626220
        ;   Label: LAB_005c68ac
    TEST EAX,EAX                        ; 005c68b2
        ;   Label: LAB_005c68b2
    JZ 0x005c68b9                       ; 005c68b4
        ;   XREF to: 005c68b9 (CONDITIONAL_JUMP)  ; LAB_005c68b9
    MOV dword ptr [EAX + 0x4],EDX       ; 005c68b6
    LEA EBX,[EDX + 0x20]                ; 005c68b9
        ;   Label: LAB_005c68b9
    ADD EDX,0x2c                        ; 005c68bc
    MOV dword ptr [EDX + -0xc],0x0      ; 005c68bf
    MOV dword ptr [EDX + -0x1c],0x0     ; 005c68c6
    MOV dword ptr [EDX + -0x14],0x0     ; 005c68cd
    MOV dword ptr [EDX + -0x10],0x0     ; 005c68d4
    MOV dword ptr [EDX + -0x8],EBX      ; 005c68db
    MOV EAX,dword ptr [EDX + -0x2c]     ; 005c68de
    MOV dword ptr [EDX + -0x4],EBX      ; 005c68e1
    SUB EAX,0x2c                        ; 005c68e4
    MOV dword ptr [EDX + -0x20],EBX     ; 005c68e7
    MOV dword ptr [EDX],EAX             ; 005c68ea
    MOV dword ptr [EDX + EAX*0x1],0xffffffff ; 005c68ec
    MOV EAX,EDX                         ; 005c68f3
    POP EBX                             ; 005c68f5
    RET                                 ; 005c68f6

