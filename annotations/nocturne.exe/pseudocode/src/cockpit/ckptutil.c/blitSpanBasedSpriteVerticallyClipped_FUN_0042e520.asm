; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteVerticallyClipped_FUN_0042e520(void *sprite_data,void *span_data)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c64
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042d130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e520
        ;   Label: cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_0042e520
    PUSH ESI                            ; 0042e521
    PUSH EDI                            ; 0042e522
    PUSH EBP                            ; 0042e523
    SUB ESP,0x30                        ; 0042e524
    MOV EBP,dword ptr [ESP + 0x48]      ; 0042e527
    CALL cockpit_ckptutil.c_FUN_0042d130 ; 0042e52b
        ;   XREF to: 0042d130 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_FUN_0042d130()
    MOV EDX,dword ptr [0x005b7624]      ; 0042e530 | DAT_005b7624
    MOV EDI,EAX                         ; 0042e536
    CMP EDX,0x8                         ; 0042e538
    JNZ 0x0042e601                      ; 0042e53b
        ;   XREF to: 0042e601 (CONDITIONAL_JUMP)  ; LAB_0042e601
    MOV EAX,[0x01c00c5c]                ; 0042e541 | DAT_01c00c5c
    MOV EBX,dword ptr [0x01c00c64]      ; 0042e546 | DAT_01c00c64
    MOV dword ptr [ESP + 0x14],EAX      ; 0042e54c
    CMP EAX,EBX                         ; 0042e550
    JG 0x0042e5d6                       ; 0042e552
        ;   XREF to: 0042e5d6 (CONDITIONAL_JUMP)  ; LAB_0042e5d6
    MOV EDX,EAX                         ; 0042e558
    SHL EAX,0x5                         ; 0042e55a
    ADD EAX,EDX                         ; 0042e55d
    SHL EAX,0x2                         ; 0042e55f
    MOV dword ptr [ESP + 0xc],EAX       ; 0042e562
    MOV EAX,EDX                         ; 0042e566
    SHL EAX,0x2                         ; 0042e568
    MOV dword ptr [ESP + 0x8],EAX       ; 0042e56b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042e56f
        ;   Label: LAB_0042e56f
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 0042e573
    MOV ECX,dword ptr [0x005b761c]      ; 0042e579 | g_WindowWidth
    MOV dword ptr [ESP + 0x18],EAX      ; 0042e57f
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042e583
    IMUL EAX,ECX                        ; 0042e587
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042e58a
    XOR EBX,EBX                         ; 0042e58e
    XOR ESI,ESI                         ; 0042e590
    ADD EDX,EAX                         ; 0042e592
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042e594
    MOV dword ptr [ESP + 0x24],EDX      ; 0042e598
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042e59c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042e5a0
        ;   Label: LAB_0042e5a0
    ADD EAX,EBP                         ; 0042e5a4
    CMP EBX,dword ptr [EAX]             ; 0042e5a6
    JL 0x0042e5de                       ; 0042e5a8
        ;   XREF to: 0042e5de (CONDITIONAL_JUMP)  ; LAB_0042e5de
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042e5aa
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042e5ae
    MOV ESI,dword ptr [ESP + 0x14]      ; 0042e5b2
    MOV EDX,dword ptr [0x01c00c64]      ; 0042e5b6 | DAT_01c00c64
    ADD ECX,0x84                        ; 0042e5bc
    ADD EBX,0x4                         ; 0042e5c2
    INC ESI                             ; 0042e5c5
    MOV dword ptr [ESP + 0xc],ECX       ; 0042e5c6
    MOV dword ptr [ESP + 0x8],EBX       ; 0042e5ca
    MOV dword ptr [ESP + 0x14],ESI      ; 0042e5ce
    CMP ESI,EDX                         ; 0042e5d2
    JLE 0x0042e56f                      ; 0042e5d4
        ;   XREF to: 0042e56f (CONDITIONAL_JUMP)  ; LAB_0042e56f
    ADD ESP,0x30                        ; 0042e5d6
        ;   Label: LAB_0042e5d6
    POP EBP                             ; 0042e5d9
    POP EDI                             ; 0042e5da
    POP ESI                             ; 0042e5db
    POP EBX                             ; 0042e5dc
    RET                                 ; 0042e5dd
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x44] ; 0042e5de
        ;   Label: LAB_0042e5de
    MOV EDX,dword ptr [ESP + 0x24]      ; 0042e5e2
    PUSH ECX                            ; 0042e5e6
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0042e5e7
    ADD EDX,ECX                         ; 0042e5eb
    PUSH EDX                            ; 0042e5ed
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042e5ee
    LEA EAX,[EDX + ECX*0x1]             ; 0042e5f2
    PUSH EAX                            ; 0042e5f5
    ADD ESI,0x4                         ; 0042e5f6
    INC EBX                             ; 0042e5f9
    CALL EDI                            ; 0042e5fa
    ADD ESP,0xc                         ; 0042e5fc
    JMP 0x0042e5a0                      ; 0042e5ff
        ;   XREF to: 0042e5a0 (UNCONDITIONAL_JUMP)  ; LAB_0042e5a0
    MOV EAX,[0x01c00c5c]                ; 0042e601 | DAT_01c00c5c
        ;   Label: LAB_0042e601
    MOV ECX,dword ptr [0x01c00c64]      ; 0042e606 | DAT_01c00c64
    MOV dword ptr [ESP + 0x10],EAX      ; 0042e60c
    CMP EAX,ECX                         ; 0042e610
    JG 0x0042e5d6                       ; 0042e612
        ;   XREF to: 0042e5d6 (CONDITIONAL_JUMP)  ; LAB_0042e5d6
    MOV EDX,EAX                         ; 0042e614
    SHL EAX,0x5                         ; 0042e616
    ADD EAX,EDX                         ; 0042e619
    SHL EAX,0x2                         ; 0042e61b
    MOV dword ptr [ESP + 0x4],EAX       ; 0042e61e
    MOV EAX,EDX                         ; 0042e622
    SHL EAX,0x2                         ; 0042e624
    MOV dword ptr [ESP],EAX             ; 0042e627
    MOV EAX,dword ptr [ESP]             ; 0042e62a
        ;   Label: LAB_0042e62a
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 0042e62d
    MOV EBX,dword ptr [0x005b761c]      ; 0042e633 | g_WindowWidth
    MOV dword ptr [ESP + 0x28],EAX      ; 0042e639
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042e63d
    IMUL EAX,EBX                        ; 0042e641
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042e644
    XOR ESI,ESI                         ; 0042e648
    ADD EDX,EAX                         ; 0042e64a
    XOR EBX,EBX                         ; 0042e64c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042e64e
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042e652
    MOV dword ptr [ESP + 0x20],EAX      ; 0042e656
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042e65a
        ;   Label: LAB_0042e65a
    ADD EAX,EBP                         ; 0042e65e
    CMP ESI,dword ptr [EAX]             ; 0042e660
    JL 0x0042e694                       ; 0042e662
        ;   XREF to: 0042e694 (CONDITIONAL_JUMP)  ; LAB_0042e694
    MOV ESI,dword ptr [ESP + 0x4]       ; 0042e664
    MOV EAX,dword ptr [ESP]             ; 0042e668
    MOV EDX,dword ptr [ESP + 0x10]      ; 0042e66b
    MOV ECX,dword ptr [0x01c00c64]      ; 0042e66f | DAT_01c00c64
    ADD ESI,0x84                        ; 0042e675
    ADD EAX,0x4                         ; 0042e67b
    INC EDX                             ; 0042e67e
    MOV dword ptr [ESP + 0x4],ESI       ; 0042e67f
    MOV dword ptr [ESP],EAX             ; 0042e683
    MOV dword ptr [ESP + 0x10],EDX      ; 0042e686
    CMP EDX,ECX                         ; 0042e68a
    JG 0x0042e5d6                       ; 0042e68c
        ;   XREF to: 0042e5d6 (CONDITIONAL_JUMP)  ; LAB_0042e5d6
    JMP 0x0042e62a                      ; 0042e692
        ;   XREF to: 0042e62a (UNCONDITIONAL_JUMP)  ; LAB_0042e62a
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x44] ; 0042e694
        ;   Label: LAB_0042e694
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042e698
    PUSH ECX                            ; 0042e69c
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0042e69d
    ADD EDX,ECX                         ; 0042e6a1
    PUSH EDX                            ; 0042e6a3
    LEA EAX,[ECX + ECX*0x1]             ; 0042e6a4
    ADD EAX,dword ptr [ESP + 0x30]      ; 0042e6a7
    PUSH EAX                            ; 0042e6ab
    ADD EBX,0x4                         ; 0042e6ac
    INC ESI                             ; 0042e6af
    CALL EDI                            ; 0042e6b0
    ADD ESP,0xc                         ; 0042e6b2
    JMP 0x0042e65a                      ; 0042e6b5
        ;   XREF to: 0042e65a (UNCONDITIONAL_JUMP)  ; LAB_0042e65a

