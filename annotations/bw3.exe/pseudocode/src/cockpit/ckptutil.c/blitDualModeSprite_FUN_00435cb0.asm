; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitDualModeSprite_FUN_00435cb0(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
; int              Stack[0xc]:4   dest_x
; int              Stack[0x10]:4   dest_y
; int              Stack[0x14]:4   width
; int              Stack[0x18]:4   height
;
; XREF[1]:
;   cockpit_ckptutil.c_blitFullScreen_FUN_00436140 at 0043615e
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00434e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435cb0
        ;   Label: cockpit_ckptutil.c_blitDualModeSprite_FUN_00435cb0
    PUSH ESI                            ; 00435cb1
    PUSH EDI                            ; 00435cb2
    PUSH EBP                            ; 00435cb3
    SUB ESP,0x28                        ; 00435cb4
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00435cb7
    MOV EDX,dword ptr [0x01c5faec]      ; 00435cbb | DAT_01c5faec
    MOV EAX,[0x01c5faf0]                ; 00435cc1 | DAT_01c5faf0
    SUB EAX,EDX                         ; 00435cc6
    MOV dword ptr [ESP + 0xc],EAX       ; 00435cc8
    TEST EDI,EDI                        ; 00435ccc
    JNZ 0x00435cd8                      ; 00435cce
        ;   XREF to: 00435cd8 (CONDITIONAL_JUMP)  ; LAB_00435cd8
    ADD ESP,0x28                        ; 00435cd0
        ;   Label: LAB_00435cd0
    POP EBP                             ; 00435cd3
    POP EDI                             ; 00435cd4
    POP ESI                             ; 00435cd5
    POP EBX                             ; 00435cd6
    RET                                 ; 00435cd7
    CALL cockpit_ckptutil.c_FUN_00434e80 ; 00435cd8
        ;   XREF to: 00434e80 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00434e80()
        ;   Label: LAB_00435cd8
    MOV EDX,dword ptr [ESP + 0x50]      ; 00435cdd
    MOV ESI,dword ptr [ESP + 0x48]      ; 00435ce1
    MOV EBX,EDX                         ; 00435ce5
    MOV ECX,dword ptr [0x005fba20]      ; 00435ce7 | DAT_005fba20
    SHL EBX,0x5                         ; 00435ced
    MOV EBP,EAX                         ; 00435cf0
    ADD EBX,EDX                         ; 00435cf2
    SHL ESI,0x2                         ; 00435cf4
    SHL EBX,0x2                         ; 00435cf7
    CMP ECX,0x8                         ; 00435cfa
    JNZ 0x00435da9                      ; 00435cfd
        ;   XREF to: 00435da9 (CONDITIONAL_JUMP)  ; LAB_00435da9
    MOV EDX,dword ptr [ESP + 0x44]      ; 00435d03
    MOV EAX,dword ptr [ESI + 0x1c5faec] ; 00435d07
    ADD EDX,EAX                         ; 00435d0d
    MOV EAX,dword ptr [ESP + 0x50]      ; 00435d0f
    MOV dword ptr [ESP + 0x20],EDX      ; 00435d13
    TEST EAX,EAX                        ; 00435d17
    JLE 0x00435cd0                      ; 00435d19
        ;   XREF to: 00435cd0 (CONDITIONAL_JUMP)  ; LAB_00435cd0
    XOR ECX,ECX                         ; 00435d1b
    MOV dword ptr [ESP + 0x8],EBX       ; 00435d1d
    MOV dword ptr [ESP + 0x10],ECX      ; 00435d21
    CMP dword ptr [ESP + 0x40],0x0      ; 00435d25
        ;   Label: LAB_00435d25
    JZ 0x00435d97                       ; 00435d2a
        ;   XREF to: 00435d97 (CONDITIONAL_JUMP)  ; LAB_00435d97
    MOV EAX,dword ptr [ESP + 0x10]      ; 00435d2c
    XOR ESI,ESI                         ; 00435d30
    XOR EBX,EBX                         ; 00435d32
    MOV dword ptr [ESP + 0x1c],EAX      ; 00435d34
    MOV EAX,dword ptr [ESP + 0x40]      ; 00435d38
        ;   Label: LAB_00435d38
    ADD EAX,dword ptr [ESP + 0x1c]      ; 00435d3c
    CMP EBX,dword ptr [EAX]             ; 00435d40
    JGE 0x00435d67                      ; 00435d42
        ;   XREF to: 00435d67 (CONDITIONAL_JUMP)  ; LAB_00435d67
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x44] ; 00435d44
    PUSH EDX                            ; 00435d48
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00435d49
    ADD EDX,EDI                         ; 00435d4d
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00435d4f
    PUSH EDX                            ; 00435d53
    MOV EDX,dword ptr [ESP + 0x28]      ; 00435d54
    LEA EAX,[EDX + ECX*0x1]             ; 00435d58
    PUSH EAX                            ; 00435d5b
    ADD ESI,0x4                         ; 00435d5c
    INC EBX                             ; 00435d5f
    CALL EBP                            ; 00435d60
    ADD ESP,0xc                         ; 00435d62
    JMP 0x00435d38                      ; 00435d65
        ;   XREF to: 00435d38 (UNCONDITIONAL_JUMP)  ; LAB_00435d38
    MOV EBX,dword ptr [ESP + 0x10]      ; 00435d67
        ;   Label: LAB_00435d67
    MOV EAX,dword ptr [ESP + 0xc]       ; 00435d6b
    MOV ESI,dword ptr [ESP + 0x20]      ; 00435d6f
    MOV EDX,dword ptr [ESP + 0x8]       ; 00435d73
    ADD EBX,0x84                        ; 00435d77
    ADD ESI,EAX                         ; 00435d7d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00435d7f
    MOV dword ptr [ESP + 0x10],EBX      ; 00435d83
    MOV dword ptr [ESP + 0x20],ESI      ; 00435d87
    ADD EDI,EAX                         ; 00435d8b
    CMP EBX,EDX                         ; 00435d8d
    JGE 0x00435cd0                      ; 00435d8f
        ;   XREF to: 00435cd0 (CONDITIONAL_JUMP)  ; LAB_00435cd0
    JMP 0x00435d25                      ; 00435d95
        ;   XREF to: 00435d25 (UNCONDITIONAL_JUMP)  ; LAB_00435d25
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00435d97
        ;   Label: LAB_00435d97
    PUSH ESI                            ; 00435d9b
    PUSH EDI                            ; 00435d9c
    MOV EAX,dword ptr [ESP + 0x28]      ; 00435d9d
    PUSH EAX                            ; 00435da1
    CALL EBP                            ; 00435da2
    ADD ESP,0xc                         ; 00435da4
    JMP 0x00435d67                      ; 00435da7
        ;   XREF to: 00435d67 (UNCONDITIONAL_JUMP)  ; LAB_00435d67
    MOV EDX,dword ptr [ESP + 0x44]      ; 00435da9
        ;   Label: LAB_00435da9
    MOV EAX,dword ptr [ESI + 0x1c5faec] ; 00435dad
    ADD EDX,EDX                         ; 00435db3
    ADD EAX,EDX                         ; 00435db5
    MOV dword ptr [ESP + 0x24],EAX      ; 00435db7
    MOV EAX,dword ptr [ESP + 0xc]       ; 00435dbb
    MOV EDX,EAX                         ; 00435dbf
    SAR EDX,0x1f                        ; 00435dc1
    SUB EAX,EDX                         ; 00435dc4
    SAR EAX,0x1                         ; 00435dc6
    MOV ESI,dword ptr [ESP + 0x50]      ; 00435dc8
    MOV dword ptr [ESP + 0xc],EAX       ; 00435dcc
    TEST ESI,ESI                        ; 00435dd0
    JLE 0x00435cd0                      ; 00435dd2
        ;   XREF to: 00435cd0 (CONDITIONAL_JUMP)  ; LAB_00435cd0
    ADD EAX,EAX                         ; 00435dd8
    MOV dword ptr [ESP],EAX             ; 00435dda
    XOR EAX,EAX                         ; 00435ddd
    MOV dword ptr [ESP + 0x4],EBX       ; 00435ddf
    MOV dword ptr [ESP + 0x14],EAX      ; 00435de3
    CMP dword ptr [ESP + 0x40],0x0      ; 00435de7
        ;   Label: LAB_00435de7
    JZ 0x00435e59                       ; 00435dec
        ;   XREF to: 00435e59 (CONDITIONAL_JUMP)  ; LAB_00435e59
    MOV EAX,dword ptr [ESP + 0x14]      ; 00435dee
    XOR ESI,ESI                         ; 00435df2
    XOR EBX,EBX                         ; 00435df4
    MOV dword ptr [ESP + 0x18],EAX      ; 00435df6
    MOV EAX,dword ptr [ESP + 0x40]      ; 00435dfa
        ;   Label: LAB_00435dfa
    ADD EAX,dword ptr [ESP + 0x18]      ; 00435dfe
    CMP EBX,dword ptr [EAX]             ; 00435e02
    JGE 0x00435e2a                      ; 00435e04
        ;   XREF to: 00435e2a (CONDITIONAL_JUMP)  ; LAB_00435e2a
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x44] ; 00435e06
    MOV ECX,dword ptr [ESP + 0x24]      ; 00435e0a
    PUSH EDX                            ; 00435e0e
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00435e0f
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00435e13
    ADD EDX,EDI                         ; 00435e17
    ADD EAX,EAX                         ; 00435e19
    PUSH EDX                            ; 00435e1b
    ADD EAX,ECX                         ; 00435e1c
    PUSH EAX                            ; 00435e1e
    ADD ESI,0x4                         ; 00435e1f
    INC EBX                             ; 00435e22
    CALL EBP                            ; 00435e23
    ADD ESP,0xc                         ; 00435e25
    JMP 0x00435dfa                      ; 00435e28
        ;   XREF to: 00435dfa (UNCONDITIONAL_JUMP)  ; LAB_00435dfa
    MOV EDX,dword ptr [ESP + 0x14]      ; 00435e2a
        ;   Label: LAB_00435e2a
    MOV EAX,dword ptr [ESP]             ; 00435e2e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00435e31
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00435e35
    MOV ESI,dword ptr [ESP + 0x4]       ; 00435e39
    ADD EDX,0x84                        ; 00435e3d
    ADD ECX,EAX                         ; 00435e43
    ADD EDI,EBX                         ; 00435e45
    MOV dword ptr [ESP + 0x14],EDX      ; 00435e47
    MOV dword ptr [ESP + 0x24],ECX      ; 00435e4b
    CMP EDX,ESI                         ; 00435e4f
    JGE 0x00435cd0                      ; 00435e51
        ;   XREF to: 00435cd0 (CONDITIONAL_JUMP)  ; LAB_00435cd0
    JMP 0x00435de7                      ; 00435e57
        ;   XREF to: 00435de7 (UNCONDITIONAL_JUMP)  ; LAB_00435de7
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00435e59
        ;   Label: LAB_00435e59
    PUSH ECX                            ; 00435e5d
    PUSH EDI                            ; 00435e5e
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00435e5f
    PUSH EBX                            ; 00435e63
    CALL EBP                            ; 00435e64
    ADD ESP,0xc                         ; 00435e66
    JMP 0x00435e2a                      ; 00435e69
        ;   XREF to: 00435e2a (UNCONDITIONAL_JUMP)  ; LAB_00435e2a

