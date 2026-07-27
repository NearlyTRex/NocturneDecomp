; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pcx_c_writePCXScanline_FUN_004f2550(int param_1,int *param_2)
;
;
; XREF[1]:
;   engine_pcx.c_FUN_004f2990 at 004f2ab8
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_01bd2fa0
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_00566cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2550
        ;   Label: engine_pcx.c_writePCXScanline_FUN_004f2550
    PUSH ESI                            ; 004f2551
    PUSH EDI                            ; 004f2552
    PUSH EBP                            ; 004f2553
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f2554
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f2558
    MOV EDX,dword ptr [0x005b761c]      ; 004f255c | DAT_005b761c
    XOR EDI,EDI                         ; 004f2562
    MOV ESI,dword ptr [ESI*0x4 + 0x1bd2fa0] ; 004f2564 | DAT_01bd2fa0
    TEST EDX,EDX                        ; 004f256b
    JLE 0x004f25ae                      ; 004f256d
        ;   XREF to: 004f25ae (CONDITIONAL_JUMP)  ; LAB_004f25ae
    XOR EAX,EAX                         ; 004f256f
        ;   Label: LAB_004f256f
    MOV AL,byte ptr [ESI]               ; 004f2571
    CMP EAX,0xc0                        ; 004f2573
    JL 0x004f258e                       ; 004f2578
        ;   XREF to: 004f258e (CONDITIONAL_JUMP)  ; LAB_004f258e
    TEST byte ptr [EBX + 0xd],0x4       ; 004f257a
    JZ 0x004f25b3                       ; 004f257e
        ;   XREF to: 004f25b3 (CONDITIONAL_JUMP)  ; LAB_004f25b3
    PUSH EBX                            ; 004f2580
        ;   Label: LAB_004f2580
    PUSH 0xc1                           ; 004f2581
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 004f2586
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_00566cc0()
        ;   Label: LAB_004f2586
    ADD ESP,0x8                         ; 004f258b
    TEST byte ptr [EBX + 0xd],0x4       ; 004f258e
        ;   Label: LAB_004f258e
    JZ 0x004f25e8                       ; 004f2592
        ;   XREF to: 004f25e8 (CONDITIONAL_JUMP)  ; LAB_004f25e8
    XOR EAX,EAX                         ; 004f2594
        ;   Label: LAB_004f2594
    PUSH EBX                            ; 004f2596
    MOV AL,byte ptr [ESI]               ; 004f2597
    PUSH EAX                            ; 004f2599
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 004f259a
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_00566cc0()
        ;   Label: LAB_004f259a
    ADD ESP,0x8                         ; 004f259f
    MOV ECX,dword ptr [0x005b761c]      ; 004f25a2 | DAT_005b761c
        ;   Label: LAB_004f25a2
    INC EDI                             ; 004f25a8
    INC ESI                             ; 004f25a9
    CMP EDI,ECX                         ; 004f25aa
    JL 0x004f256f                       ; 004f25ac
        ;   XREF to: 004f256f (CONDITIONAL_JUMP)  ; LAB_004f256f
    POP EBP                             ; 004f25ae
        ;   Label: LAB_004f25ae
    POP EDI                             ; 004f25af
    POP ESI                             ; 004f25b0
    POP EBX                             ; 004f25b1
    RET                                 ; 004f25b2
    MOV EBP,dword ptr [EBX + 0x4]       ; 004f25b3
        ;   Label: LAB_004f25b3
    MOV EAX,dword ptr [EBX + 0x14]      ; 004f25b6
    SUB EAX,EBP                         ; 004f25b9
    CMP EAX,0x1                         ; 004f25bb
    JBE 0x004f2580                      ; 004f25be
        ;   XREF to: 004f2580 (CONDITIONAL_JUMP)  ; LAB_004f2580
    MOV EAX,dword ptr [EBX]             ; 004f25c0
    MOV byte ptr [EAX],0xc1             ; 004f25c2
    MOV EAX,dword ptr [EBX]             ; 004f25c5
    CMP byte ptr [EAX],0xa              ; 004f25c7
    JZ 0x004f25e3                       ; 004f25ca
        ;   XREF to: 004f25e3 (CONDITIONAL_JUMP)  ; LAB_004f25e3
    MOV DH,byte ptr [EBX + 0xd]         ; 004f25cc
    OR DH,0x10                          ; 004f25cf
    MOV EAX,dword ptr [EBX + 0x4]       ; 004f25d2
    MOV byte ptr [EBX + 0xd],DH         ; 004f25d5
    INC EAX                             ; 004f25d8
    MOV EDX,dword ptr [EBX]             ; 004f25d9
    MOV dword ptr [EBX + 0x4],EAX       ; 004f25db
    INC EDX                             ; 004f25de
    MOV dword ptr [EBX],EDX             ; 004f25df
    JMP 0x004f258e                      ; 004f25e1
        ;   XREF to: 004f258e (UNCONDITIONAL_JUMP)  ; LAB_004f258e
    PUSH EBX                            ; 004f25e3
        ;   Label: LAB_004f25e3
    PUSH 0xa                            ; 004f25e4
    JMP 0x004f2586                      ; 004f25e6
        ;   XREF to: 004f2586 (UNCONDITIONAL_JUMP)  ; LAB_004f2586
    MOV ECX,dword ptr [EBX + 0x4]       ; 004f25e8
        ;   Label: LAB_004f25e8
    MOV EAX,dword ptr [EBX + 0x14]      ; 004f25eb
    SUB EAX,ECX                         ; 004f25ee
    CMP EAX,0x1                         ; 004f25f0
    JBE 0x004f2594                      ; 004f25f3
        ;   XREF to: 004f2594 (CONDITIONAL_JUMP)  ; LAB_004f2594
    MOV EAX,dword ptr [EBX]             ; 004f25f5
    MOV DL,byte ptr [ESI]               ; 004f25f7
    MOV byte ptr [EAX],DL               ; 004f25f9
    MOV EAX,dword ptr [EBX]             ; 004f25fb
    CMP byte ptr [EAX],0xa              ; 004f25fd
    JZ 0x004f2618                       ; 004f2600
        ;   XREF to: 004f2618 (CONDITIONAL_JUMP)  ; LAB_004f2618
    MOV AL,byte ptr [EBX + 0xd]         ; 004f2602
    OR AL,0x10                          ; 004f2605
    MOV EBP,dword ptr [EBX + 0x4]       ; 004f2607
    MOV byte ptr [EBX + 0xd],AL         ; 004f260a
    INC EBP                             ; 004f260d
    MOV EAX,dword ptr [EBX]             ; 004f260e
    MOV dword ptr [EBX + 0x4],EBP       ; 004f2610
    INC EAX                             ; 004f2613
    MOV dword ptr [EBX],EAX             ; 004f2614
    JMP 0x004f25a2                      ; 004f2616
        ;   XREF to: 004f25a2 (UNCONDITIONAL_JUMP)  ; LAB_004f25a2
    PUSH EBX                            ; 004f2618
        ;   Label: LAB_004f2618
    PUSH 0xa                            ; 004f2619
    JMP 0x004f259a                      ; 004f261b
        ;   XREF to: 004f259a (UNCONDITIONAL_JUMP)  ; LAB_004f259a

