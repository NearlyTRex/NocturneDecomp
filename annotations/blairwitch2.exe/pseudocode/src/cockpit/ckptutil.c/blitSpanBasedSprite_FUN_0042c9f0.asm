; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitSpanBasedSprite_FUN_0042c9f0(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
; int              Stack[0xc]:4   screen_x
; int              Stack[0x10]:4   screen_y
; int              Stack[0x14]:4   src_x
; int              Stack[0x18]:4   src_y
; int              Stack[0x1c]:4   width
; int              Stack[0x20]:4   height
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042c410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c9f0
        ;   Label: cockpit_ckptutil.c_blitSpanBasedSprite_FUN_0042c9f0
    PUSH ESI                            ; 0042c9f1
    PUSH EDI                            ; 0042c9f2
    PUSH EBP                            ; 0042c9f3
    SUB ESP,0x34                        ; 0042c9f4
    MOV EDI,dword ptr [ESP + 0x54]      ; 0042c9f7
    MOV EDX,dword ptr [0x01c2a38c]      ; 0042c9fb | DAT_01c2a38c
    MOV EAX,[0x01c2a390]                ; 0042ca01 | DAT_01c2a390
    SUB EAX,EDX                         ; 0042ca06
    MOV dword ptr [ESP + 0x10],EAX      ; 0042ca08
    MOV EAX,[0x006141b8]                ; 0042ca0c | DAT_006141b8
    MOV EDX,EAX                         ; 0042ca11
    SAR EDX,0x1f                        ; 0042ca13
    SUB EAX,EDX                         ; 0042ca16
    SAR EAX,0x1                         ; 0042ca18
    MOV EBX,dword ptr [ESP + 0x58]      ; 0042ca1a
    ADD EBX,EAX                         ; 0042ca1e
    MOV ECX,dword ptr [ESP + 0x48]      ; 0042ca20
    LEA ESI,[EBX + 0x1]                 ; 0042ca24
    TEST ECX,ECX                        ; 0042ca27
    JNZ 0x0042ca33                      ; 0042ca29
        ;   XREF to: 0042ca33 (CONDITIONAL_JUMP)  ; LAB_0042ca33
    ADD ESP,0x34                        ; 0042ca2b
        ;   Label: LAB_0042ca2b
    POP EBP                             ; 0042ca2e
    POP EDI                             ; 0042ca2f
    POP ESI                             ; 0042ca30
    POP EBX                             ; 0042ca31
    RET                                 ; 0042ca32
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042ca33
        ;   Label: LAB_0042ca33
    IMUL EAX,EDI                        ; 0042ca37
    ADD EAX,dword ptr [ESP + 0x50]      ; 0042ca3a
    LEA EDX,[ECX + EAX*0x1]             ; 0042ca3e
    MOV EBP,EDI                         ; 0042ca41
    MOV dword ptr [ESP + 0x48],EDX      ; 0042ca43
    CALL cockpit_ckptutil.c_FUN_0042c410 ; 0042ca47
        ;   XREF to: 0042c410 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042c410()
    SHL EBP,0x5                         ; 0042ca4c
    MOV EDX,dword ptr [ESP + 0x64]      ; 0042ca4f
    MOV dword ptr [ESP + 0x30],EAX      ; 0042ca53
    MOV EAX,EDX                         ; 0042ca57
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0042ca59
    SHL EAX,0x5                         ; 0042ca5d
    ADD EBP,EDI                         ; 0042ca60
    ADD EAX,EDX                         ; 0042ca62
    SHL EBP,0x2                         ; 0042ca64
    SHL EAX,0x2                         ; 0042ca67
    ADD ECX,EDI                         ; 0042ca6a
    MOV dword ptr [ESP],EAX             ; 0042ca6c
    MOV EAX,[0x006141c0]                ; 0042ca6f | DAT_006141c0
    SHL ECX,0x2                         ; 0042ca74
    CMP EAX,0x8                         ; 0042ca77
    JNZ 0x0042cb3b                      ; 0042ca7a
        ;   XREF to: 0042cb3b (CONDITIONAL_JUMP)  ; LAB_0042cb3b
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042ca80
    MOV EAX,dword ptr [ECX + 0x1c2a38c] ; 0042ca84
    ADD EDX,EAX                         ; 0042ca8a
    MOV ECX,dword ptr [ESP + 0x64]      ; 0042ca8c
    MOV dword ptr [ESP + 0x28],EDX      ; 0042ca90
    CMP EDI,ECX                         ; 0042ca94
    JGE 0x0042ca2b                      ; 0042ca96
        ;   XREF to: 0042ca2b (CONDITIONAL_JUMP)  ; LAB_0042ca2b
    MOV EAX,dword ptr [ESP]             ; 0042ca98
    MOV dword ptr [ESP + 0x14],EBP      ; 0042ca9b
    MOV dword ptr [ESP + 0xc],EAX       ; 0042ca9f
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042caa3
        ;   Label: LAB_0042caa3
    XOR EBP,EBP                         ; 0042caa7
    XOR EDI,EDI                         ; 0042caa9
    MOV dword ptr [ESP + 0x20],EAX      ; 0042caab
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042caaf
        ;   Label: LAB_0042caaf
    ADD EAX,dword ptr [ESP + 0x20]      ; 0042cab3
    CMP EDI,dword ptr [EAX]             ; 0042cab7
    JGE 0x0042cad5                      ; 0042cab9
        ;   XREF to: 0042cad5 (CONDITIONAL_JUMP)  ; LAB_0042cad5
    LEA EDX,[EAX + EBP*0x1]             ; 0042cabb
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042cabe
    MOV EDX,dword ptr [EDX + 0x44]      ; 0042cac1
    ADD EDX,EAX                         ; 0042cac4
    DEC EDX                             ; 0042cac6
    CMP EAX,EBX                         ; 0042cac7
    JGE 0x0042cb11                      ; 0042cac9
        ;   XREF to: 0042cb11 (CONDITIONAL_JUMP)  ; LAB_0042cb11
    CMP EDX,EBX                         ; 0042cacb
    JGE 0x0042cb0f                      ; 0042cacd
        ;   XREF to: 0042cb0f (CONDITIONAL_JUMP)  ; LAB_0042cb0f
    INC EDI                             ; 0042cacf
        ;   Label: LAB_0042cacf
    ADD EBP,0x4                         ; 0042cad0
    JMP 0x0042caaf                      ; 0042cad3
        ;   XREF to: 0042caaf (UNCONDITIONAL_JUMP)  ; LAB_0042caaf
    MOV EDI,dword ptr [ESP + 0x14]      ; 0042cad5
        ;   Label: LAB_0042cad5
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042cad9
    MOV EBP,dword ptr [ESP + 0x28]      ; 0042cadd
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042cae1
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042cae5
    DEC EBX                             ; 0042cae9
    INC ESI                             ; 0042caea
    ADD EDI,0x84                        ; 0042caeb
    ADD EBP,EAX                         ; 0042caf1
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042caf3
    MOV dword ptr [ESP + 0x14],EDI      ; 0042caf7
    ADD EDX,EAX                         ; 0042cafb
    MOV dword ptr [ESP + 0x28],EBP      ; 0042cafd
    MOV dword ptr [ESP + 0x48],EDX      ; 0042cb01
    CMP EDI,ECX                         ; 0042cb05
    JGE 0x0042ca2b                      ; 0042cb07
        ;   XREF to: 0042ca2b (CONDITIONAL_JUMP)  ; LAB_0042ca2b
    JMP 0x0042caa3                      ; 0042cb0d
        ;   XREF to: 0042caa3 (UNCONDITIONAL_JUMP)  ; LAB_0042caa3
    MOV EAX,EBX                         ; 0042cb0f
        ;   Label: LAB_0042cb0f
    CMP EDX,ESI                         ; 0042cb11
        ;   Label: LAB_0042cb11
    JLE 0x0042cb1b                      ; 0042cb13
        ;   XREF to: 0042cb1b (CONDITIONAL_JUMP)  ; LAB_0042cb1b
    CMP EAX,ESI                         ; 0042cb15
    JG 0x0042cacf                       ; 0042cb17
        ;   XREF to: 0042cacf (CONDITIONAL_JUMP)  ; LAB_0042cacf
    MOV EDX,ESI                         ; 0042cb19
    SUB EDX,EAX                         ; 0042cb1b
        ;   Label: LAB_0042cb1b
    INC EDX                             ; 0042cb1d
    PUSH EDX                            ; 0042cb1e
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0042cb1f
    ADD EDX,EAX                         ; 0042cb23
    PUSH EDX                            ; 0042cb25
    ADD EAX,dword ptr [ESP + 0x30]      ; 0042cb26
    PUSH EAX                            ; 0042cb2a
    CALL dword ptr [ESP + 0x3c]         ; 0042cb2b
    ADD ESP,0xc                         ; 0042cb2f
    INC EDI                             ; 0042cb32
    ADD EBP,0x4                         ; 0042cb33
    JMP 0x0042caaf                      ; 0042cb36
        ;   XREF to: 0042caaf (UNCONDITIONAL_JUMP)  ; LAB_0042caaf
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042cb3b
        ;   Label: LAB_0042cb3b
    MOV EDX,dword ptr [ECX + 0x1c2a38c] ; 0042cb3f
    ADD EAX,EAX                         ; 0042cb45
    ADD EDX,EAX                         ; 0042cb47
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042cb49
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042cb4d
    MOV EDX,EAX                         ; 0042cb51
    SAR EDX,0x1f                        ; 0042cb53
    SUB EAX,EDX                         ; 0042cb56
    SAR EAX,0x1                         ; 0042cb58
    MOV EDX,dword ptr [ESP + 0x64]      ; 0042cb5a
    MOV dword ptr [ESP + 0x10],EAX      ; 0042cb5e
    CMP EDI,EDX                         ; 0042cb62
    JGE 0x0042ca2b                      ; 0042cb64
        ;   XREF to: 0042ca2b (CONDITIONAL_JUMP)  ; LAB_0042ca2b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0042cb6a
    ADD EAX,EAX                         ; 0042cb6e
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042cb70
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042cb74
    ADD EAX,EAX                         ; 0042cb78
    MOV dword ptr [ESP + 0x4],EAX       ; 0042cb7a
    MOV EAX,dword ptr [ESP]             ; 0042cb7e
    MOV dword ptr [ESP + 0x18],EBP      ; 0042cb81
    MOV dword ptr [ESP + 0x8],EAX       ; 0042cb85
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042cb89
        ;   Label: LAB_0042cb89
    XOR EBP,EBP                         ; 0042cb8d
    XOR EDI,EDI                         ; 0042cb8f
    MOV dword ptr [ESP + 0x24],EAX      ; 0042cb91
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042cb95
        ;   Label: LAB_0042cb95
    ADD EAX,dword ptr [ESP + 0x24]      ; 0042cb99
    CMP EDI,dword ptr [EAX]             ; 0042cb9d
    JGE 0x0042cbbb                      ; 0042cb9f
        ;   XREF to: 0042cbbb (CONDITIONAL_JUMP)  ; LAB_0042cbbb
    LEA EDX,[EAX + EBP*0x1]             ; 0042cba1
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042cba4
    MOV EDX,dword ptr [EDX + 0x44]      ; 0042cba7
    ADD EDX,EAX                         ; 0042cbaa
    DEC EDX                             ; 0042cbac
    CMP EAX,EBX                         ; 0042cbad
    JGE 0x0042cbf7                      ; 0042cbaf
        ;   XREF to: 0042cbf7 (CONDITIONAL_JUMP)  ; LAB_0042cbf7
    CMP EDX,EBX                         ; 0042cbb1
    JGE 0x0042cbf5                      ; 0042cbb3
        ;   XREF to: 0042cbf5 (CONDITIONAL_JUMP)  ; LAB_0042cbf5
    INC EDI                             ; 0042cbb5
        ;   Label: LAB_0042cbb5
    ADD EBP,0x4                         ; 0042cbb6
    JMP 0x0042cb95                      ; 0042cbb9
        ;   XREF to: 0042cb95 (UNCONDITIONAL_JUMP)  ; LAB_0042cb95
    MOV EDI,dword ptr [ESP + 0x18]      ; 0042cbbb
        ;   Label: LAB_0042cbbb
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042cbbf
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0042cbc3
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042cbc7
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042cbcb
    DEC EBX                             ; 0042cbcf
    INC ESI                             ; 0042cbd0
    ADD EDI,0x84                        ; 0042cbd1
    ADD EBP,EAX                         ; 0042cbd7
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042cbd9
    MOV dword ptr [ESP + 0x18],EDI      ; 0042cbdd
    ADD EDX,EAX                         ; 0042cbe1
    MOV dword ptr [ESP + 0x2c],EBP      ; 0042cbe3
    MOV dword ptr [ESP + 0x48],EDX      ; 0042cbe7
    CMP EDI,ECX                         ; 0042cbeb
    JGE 0x0042ca2b                      ; 0042cbed
        ;   XREF to: 0042ca2b (CONDITIONAL_JUMP)  ; LAB_0042ca2b
    JMP 0x0042cb89                      ; 0042cbf3
        ;   XREF to: 0042cb89 (UNCONDITIONAL_JUMP)  ; LAB_0042cb89
    MOV EAX,EBX                         ; 0042cbf5
        ;   Label: LAB_0042cbf5
    CMP EDX,ESI                         ; 0042cbf7
        ;   Label: LAB_0042cbf7
    JLE 0x0042cc01                      ; 0042cbf9
        ;   XREF to: 0042cc01 (CONDITIONAL_JUMP)  ; LAB_0042cc01
    CMP EAX,ESI                         ; 0042cbfb
    JG 0x0042cbb5                       ; 0042cbfd
        ;   XREF to: 0042cbb5 (CONDITIONAL_JUMP)  ; LAB_0042cbb5
    MOV EDX,ESI                         ; 0042cbff
    SUB EDX,EAX                         ; 0042cc01
        ;   Label: LAB_0042cc01
    INC EDX                             ; 0042cc03
    PUSH EDX                            ; 0042cc04
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0042cc05
    ADD EDX,EAX                         ; 0042cc09
    PUSH EDX                            ; 0042cc0b
    ADD EAX,EAX                         ; 0042cc0c
    MOV EDX,dword ptr [ESP + 0x34]      ; 0042cc0e
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042cc12
    ADD EAX,EDX                         ; 0042cc16
    SUB EAX,ECX                         ; 0042cc18
    PUSH EAX                            ; 0042cc1a
    CALL dword ptr [ESP + 0x3c]         ; 0042cc1b
    ADD ESP,0xc                         ; 0042cc1f
    INC EDI                             ; 0042cc22
    ADD EBP,0x4                         ; 0042cc23
    JMP 0x0042cb95                      ; 0042cc26
        ;   XREF to: 0042cb95 (UNCONDITIONAL_JUMP)  ; LAB_0042cb95

