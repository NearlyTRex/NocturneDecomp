; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pcx_c_writePCXScanline_FUN_005145f0(int param_1,int *param_2)
;
;
; XREF[1]:
;   engine_pcx.c_saveScreenshotGeneral_FUN_00514a30 at 00514b58
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_01c2a38c
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005bab40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005145f0
        ;   Label: engine_pcx.c_writePCXScanline_FUN_005145f0
    PUSH ESI                            ; 005145f1
    PUSH EDI                            ; 005145f2
    PUSH EBP                            ; 005145f3
    MOV EBX,dword ptr [ESP + 0x18]      ; 005145f4
    MOV ESI,dword ptr [ESP + 0x14]      ; 005145f8
    MOV EDX,dword ptr [0x006141b8]      ; 005145fc | DAT_006141b8
    XOR EDI,EDI                         ; 00514602
    MOV ESI,dword ptr [ESI*0x4 + 0x1c2a38c] ; 00514604 | DAT_01c2a38c
    TEST EDX,EDX                        ; 0051460b
    JLE 0x0051464e                      ; 0051460d
        ;   XREF to: 0051464e (CONDITIONAL_JUMP)  ; LAB_0051464e
    XOR EAX,EAX                         ; 0051460f
        ;   Label: LAB_0051460f
    MOV AL,byte ptr [ESI]               ; 00514611
    CMP EAX,0xc0                        ; 00514613
    JL 0x0051462e                       ; 00514618
        ;   XREF to: 0051462e (CONDITIONAL_JUMP)  ; LAB_0051462e
    TEST byte ptr [EBX + 0xd],0x4       ; 0051461a
    JZ 0x00514653                       ; 0051461e
        ;   XREF to: 00514653 (CONDITIONAL_JUMP)  ; LAB_00514653
    PUSH EBX                            ; 00514620
        ;   Label: LAB_00514620
    PUSH 0xc1                           ; 00514621
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 00514626
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005bab40()
        ;   Label: LAB_00514626
    ADD ESP,0x8                         ; 0051462b
    TEST byte ptr [EBX + 0xd],0x4       ; 0051462e
        ;   Label: LAB_0051462e
    JZ 0x00514688                       ; 00514632
        ;   XREF to: 00514688 (CONDITIONAL_JUMP)  ; LAB_00514688
    XOR EAX,EAX                         ; 00514634
        ;   Label: LAB_00514634
    PUSH EBX                            ; 00514636
    MOV AL,byte ptr [ESI]               ; 00514637
    PUSH EAX                            ; 00514639
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 0051463a
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005bab40()
        ;   Label: LAB_0051463a
    ADD ESP,0x8                         ; 0051463f
    MOV ECX,dword ptr [0x006141b8]      ; 00514642 | DAT_006141b8
        ;   Label: LAB_00514642
    INC EDI                             ; 00514648
    INC ESI                             ; 00514649
    CMP EDI,ECX                         ; 0051464a
    JL 0x0051460f                       ; 0051464c
        ;   XREF to: 0051460f (CONDITIONAL_JUMP)  ; LAB_0051460f
    POP EBP                             ; 0051464e
        ;   Label: LAB_0051464e
    POP EDI                             ; 0051464f
    POP ESI                             ; 00514650
    POP EBX                             ; 00514651
    RET                                 ; 00514652
    MOV EBP,dword ptr [EBX + 0x4]       ; 00514653
        ;   Label: LAB_00514653
    MOV EAX,dword ptr [EBX + 0x14]      ; 00514656
    SUB EAX,EBP                         ; 00514659
    CMP EAX,0x1                         ; 0051465b
    JBE 0x00514620                      ; 0051465e
        ;   XREF to: 00514620 (CONDITIONAL_JUMP)  ; LAB_00514620
    MOV EAX,dword ptr [EBX]             ; 00514660
    MOV byte ptr [EAX],0xc1             ; 00514662
    MOV EAX,dword ptr [EBX]             ; 00514665
    CMP byte ptr [EAX],0xa              ; 00514667
    JZ 0x00514683                       ; 0051466a
        ;   XREF to: 00514683 (CONDITIONAL_JUMP)  ; LAB_00514683
    MOV DH,byte ptr [EBX + 0xd]         ; 0051466c
    OR DH,0x10                          ; 0051466f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00514672
    MOV byte ptr [EBX + 0xd],DH         ; 00514675
    INC EAX                             ; 00514678
    MOV EDX,dword ptr [EBX]             ; 00514679
    MOV dword ptr [EBX + 0x4],EAX       ; 0051467b
    INC EDX                             ; 0051467e
    MOV dword ptr [EBX],EDX             ; 0051467f
    JMP 0x0051462e                      ; 00514681
        ;   XREF to: 0051462e (UNCONDITIONAL_JUMP)  ; LAB_0051462e
    PUSH EBX                            ; 00514683
        ;   Label: LAB_00514683
    PUSH 0xa                            ; 00514684
    JMP 0x00514626                      ; 00514686
        ;   XREF to: 00514626 (UNCONDITIONAL_JUMP)  ; LAB_00514626
    MOV ECX,dword ptr [EBX + 0x4]       ; 00514688
        ;   Label: LAB_00514688
    MOV EAX,dword ptr [EBX + 0x14]      ; 0051468b
    SUB EAX,ECX                         ; 0051468e
    CMP EAX,0x1                         ; 00514690
    JBE 0x00514634                      ; 00514693
        ;   XREF to: 00514634 (CONDITIONAL_JUMP)  ; LAB_00514634
    MOV EAX,dword ptr [EBX]             ; 00514695
    MOV DL,byte ptr [ESI]               ; 00514697
    MOV byte ptr [EAX],DL               ; 00514699
    MOV EAX,dword ptr [EBX]             ; 0051469b
    CMP byte ptr [EAX],0xa              ; 0051469d
    JZ 0x005146b8                       ; 005146a0
        ;   XREF to: 005146b8 (CONDITIONAL_JUMP)  ; LAB_005146b8
    MOV AL,byte ptr [EBX + 0xd]         ; 005146a2
    OR AL,0x10                          ; 005146a5
    MOV EBP,dword ptr [EBX + 0x4]       ; 005146a7
    MOV byte ptr [EBX + 0xd],AL         ; 005146aa
    INC EBP                             ; 005146ad
    MOV EAX,dword ptr [EBX]             ; 005146ae
    MOV dword ptr [EBX + 0x4],EBP       ; 005146b0
    INC EAX                             ; 005146b3
    MOV dword ptr [EBX],EAX             ; 005146b4
    JMP 0x00514642                      ; 005146b6
        ;   XREF to: 00514642 (UNCONDITIONAL_JUMP)  ; LAB_00514642
    PUSH EBX                            ; 005146b8
        ;   Label: LAB_005146b8
    PUSH 0xa                            ; 005146b9
    JMP 0x0051463a                      ; 005146bb
        ;   XREF to: 0051463a (UNCONDITIONAL_JUMP)  ; LAB_0051463a

