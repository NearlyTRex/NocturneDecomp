; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pcx_c_writePCXScanline_FUN_0050d620(int param_1,int *param_2)
;
;
; XREF[1]:
;   engine_pcx.c_saveScreenshotGeneral_FUN_0050da60 at 0050db88
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_01c5faec
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005a5d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d620
        ;   Label: engine_pcx.c_writePCXScanline_FUN_0050d620
    PUSH ESI                            ; 0050d621
    PUSH EDI                            ; 0050d622
    PUSH EBP                            ; 0050d623
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050d624
    MOV ESI,dword ptr [ESP + 0x14]      ; 0050d628
    MOV EDX,dword ptr [0x005fba18]      ; 0050d62c | DAT_005fba18
    XOR EDI,EDI                         ; 0050d632
    MOV ESI,dword ptr [ESI*0x4 + 0x1c5faec] ; 0050d634 | DAT_01c5faec
    TEST EDX,EDX                        ; 0050d63b
    JLE 0x0050d67e                      ; 0050d63d
        ;   XREF to: 0050d67e (CONDITIONAL_JUMP)  ; LAB_0050d67e
    XOR EAX,EAX                         ; 0050d63f
        ;   Label: LAB_0050d63f
    MOV AL,byte ptr [ESI]               ; 0050d641
    CMP EAX,0xc0                        ; 0050d643
    JL 0x0050d65e                       ; 0050d648
        ;   XREF to: 0050d65e (CONDITIONAL_JUMP)  ; LAB_0050d65e
    TEST byte ptr [EBX + 0xd],0x4       ; 0050d64a
    JZ 0x0050d683                       ; 0050d64e
        ;   XREF to: 0050d683 (CONDITIONAL_JUMP)  ; LAB_0050d683
    PUSH EBX                            ; 0050d650
        ;   Label: LAB_0050d650
    PUSH 0xc1                           ; 0050d651
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 0050d656
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
        ;   Label: LAB_0050d656
    ADD ESP,0x8                         ; 0050d65b
    TEST byte ptr [EBX + 0xd],0x4       ; 0050d65e
        ;   Label: LAB_0050d65e
    JZ 0x0050d6b8                       ; 0050d662
        ;   XREF to: 0050d6b8 (CONDITIONAL_JUMP)  ; LAB_0050d6b8
    XOR EAX,EAX                         ; 0050d664
        ;   Label: LAB_0050d664
    PUSH EBX                            ; 0050d666
    MOV AL,byte ptr [ESI]               ; 0050d667
    PUSH EAX                            ; 0050d669
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 0050d66a
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
        ;   Label: LAB_0050d66a
    ADD ESP,0x8                         ; 0050d66f
    MOV ECX,dword ptr [0x005fba18]      ; 0050d672 | DAT_005fba18
        ;   Label: LAB_0050d672
    INC EDI                             ; 0050d678
    INC ESI                             ; 0050d679
    CMP EDI,ECX                         ; 0050d67a
    JL 0x0050d63f                       ; 0050d67c
        ;   XREF to: 0050d63f (CONDITIONAL_JUMP)  ; LAB_0050d63f
    POP EBP                             ; 0050d67e
        ;   Label: LAB_0050d67e
    POP EDI                             ; 0050d67f
    POP ESI                             ; 0050d680
    POP EBX                             ; 0050d681
    RET                                 ; 0050d682
    MOV EBP,dword ptr [EBX + 0x4]       ; 0050d683
        ;   Label: LAB_0050d683
    MOV EAX,dword ptr [EBX + 0x14]      ; 0050d686
    SUB EAX,EBP                         ; 0050d689
    CMP EAX,0x1                         ; 0050d68b
    JBE 0x0050d650                      ; 0050d68e
        ;   XREF to: 0050d650 (CONDITIONAL_JUMP)  ; LAB_0050d650
    MOV EAX,dword ptr [EBX]             ; 0050d690
    MOV byte ptr [EAX],0xc1             ; 0050d692
    MOV EAX,dword ptr [EBX]             ; 0050d695
    CMP byte ptr [EAX],0xa              ; 0050d697
    JZ 0x0050d6b3                       ; 0050d69a
        ;   XREF to: 0050d6b3 (CONDITIONAL_JUMP)  ; LAB_0050d6b3
    MOV DH,byte ptr [EBX + 0xd]         ; 0050d69c
    OR DH,0x10                          ; 0050d69f
    MOV EAX,dword ptr [EBX + 0x4]       ; 0050d6a2
    MOV byte ptr [EBX + 0xd],DH         ; 0050d6a5
    INC EAX                             ; 0050d6a8
    MOV EDX,dword ptr [EBX]             ; 0050d6a9
    MOV dword ptr [EBX + 0x4],EAX       ; 0050d6ab
    INC EDX                             ; 0050d6ae
    MOV dword ptr [EBX],EDX             ; 0050d6af
    JMP 0x0050d65e                      ; 0050d6b1
        ;   XREF to: 0050d65e (UNCONDITIONAL_JUMP)  ; LAB_0050d65e
    PUSH EBX                            ; 0050d6b3
        ;   Label: LAB_0050d6b3
    PUSH 0xa                            ; 0050d6b4
    JMP 0x0050d656                      ; 0050d6b6
        ;   XREF to: 0050d656 (UNCONDITIONAL_JUMP)  ; LAB_0050d656
    MOV ECX,dword ptr [EBX + 0x4]       ; 0050d6b8
        ;   Label: LAB_0050d6b8
    MOV EAX,dword ptr [EBX + 0x14]      ; 0050d6bb
    SUB EAX,ECX                         ; 0050d6be
    CMP EAX,0x1                         ; 0050d6c0
    JBE 0x0050d664                      ; 0050d6c3
        ;   XREF to: 0050d664 (CONDITIONAL_JUMP)  ; LAB_0050d664
    MOV EAX,dword ptr [EBX]             ; 0050d6c5
    MOV DL,byte ptr [ESI]               ; 0050d6c7
    MOV byte ptr [EAX],DL               ; 0050d6c9
    MOV EAX,dword ptr [EBX]             ; 0050d6cb
    CMP byte ptr [EAX],0xa              ; 0050d6cd
    JZ 0x0050d6e8                       ; 0050d6d0
        ;   XREF to: 0050d6e8 (CONDITIONAL_JUMP)  ; LAB_0050d6e8
    MOV AL,byte ptr [EBX + 0xd]         ; 0050d6d2
    OR AL,0x10                          ; 0050d6d5
    MOV EBP,dword ptr [EBX + 0x4]       ; 0050d6d7
    MOV byte ptr [EBX + 0xd],AL         ; 0050d6da
    INC EBP                             ; 0050d6dd
    MOV EAX,dword ptr [EBX]             ; 0050d6de
    MOV dword ptr [EBX + 0x4],EBP       ; 0050d6e0
    INC EAX                             ; 0050d6e3
    MOV dword ptr [EBX],EAX             ; 0050d6e4
    JMP 0x0050d672                      ; 0050d6e6
        ;   XREF to: 0050d672 (UNCONDITIONAL_JUMP)  ; LAB_0050d672
    PUSH EBX                            ; 0050d6e8
        ;   Label: LAB_0050d6e8
    PUSH 0xa                            ; 0050d6e9
    JMP 0x0050d66a                      ; 0050d6eb
        ;   XREF to: 0050d66a (UNCONDITIONAL_JUMP)  ; LAB_0050d66a

