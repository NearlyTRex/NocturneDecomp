; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_rotateCircularBitmap_FUN_00436620(void *bitmap_data,int width,int height,int num_iterations)
;
; Parameters:
; void *           Stack[0x4]:4   bitmap_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   num_iterations
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436620
        ;   Label: cockpit_ckptutil.c_rotateCircularBitmap_FUN_00436620
    PUSH ESI                            ; 00436621
    PUSH EDI                            ; 00436622
    PUSH EBP                            ; 00436623
    SUB ESP,0x18                        ; 00436624
    MOV EDX,dword ptr [ESP + 0x30]      ; 00436627
    MOV EBX,dword ptr [ESP + 0x38]      ; 0043662b
    MOV EAX,EDX                         ; 0043662f
    IMUL EAX,EBX                        ; 00436631
    MOV dword ptr [ESP + 0x8],EAX       ; 00436634
    MOV EAX,EDX                         ; 00436638
    SAR EDX,0x1f                        ; 0043663a
    SUB EAX,EDX                         ; 0043663d
    SAR EAX,0x1                         ; 0043663f
    MOV dword ptr [ESP + 0x10],EAX      ; 00436641
    CMP EBX,0x1                         ; 00436645
    JNZ 0x004366a4                      ; 00436648
        ;   XREF to: 004366a4 (CONDITIONAL_JUMP)  ; LAB_004366a4
    MOV ESI,dword ptr [ESP + 0x34]      ; 0043664a
    XOR EDI,EDI                         ; 0043664e
    TEST ESI,ESI                        ; 00436650
    JBE 0x0043669c                      ; 00436652
        ;   XREF to: 0043669c (CONDITIONAL_JUMP)  ; LAB_0043669c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00436654
    MOV dword ptr [ESP + 0x4],EAX       ; 00436658
    IMUL ESI,EAX,0x0                    ; 0043665c
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0043665f
        ;   Label: LAB_0043665f
    MOV EBP,dword ptr [ESP + 0x8]       ; 00436663
    ADD EDX,ESI                         ; 00436667
    MOV ECX,dword ptr [ESP + 0x10]      ; 00436669
    ADD EBP,EDX                         ; 0043666d
    XOR EAX,EAX                         ; 0043666f
    SUB EBP,EBX                         ; 00436671
    TEST ECX,ECX                        ; 00436673
    JBE 0x0043668d                      ; 00436675
        ;   XREF to: 0043668d (CONDITIONAL_JUMP)  ; LAB_0043668d
    MOV CL,byte ptr [EDX]               ; 00436677
        ;   Label: LAB_00436677
    INC EDX                             ; 00436679
    MOV CH,byte ptr [EBP]               ; 0043667a
    MOV byte ptr [EDX + -0x1],CH        ; 0043667d
    INC EAX                             ; 00436680
    MOV byte ptr [EBP],CL               ; 00436681
    MOV ECX,dword ptr [ESP + 0x10]      ; 00436684
    DEC EBP                             ; 00436688
    CMP EAX,ECX                         ; 00436689
    JC 0x00436677                       ; 0043668b
        ;   XREF to: 00436677 (CONDITIONAL_JUMP)  ; LAB_00436677
    MOV EBP,dword ptr [ESP + 0x4]       ; 0043668d
        ;   Label: LAB_0043668d
    MOV EAX,dword ptr [ESP + 0x34]      ; 00436691
    INC EDI                             ; 00436695
    ADD ESI,EBP                         ; 00436696
    CMP EDI,EAX                         ; 00436698
    JC 0x0043665f                       ; 0043669a
        ;   XREF to: 0043665f (CONDITIONAL_JUMP)  ; LAB_0043665f
    ADD ESP,0x18                        ; 0043669c
        ;   Label: LAB_0043669c
    POP EBP                             ; 0043669f
    POP EDI                             ; 004366a0
    POP ESI                             ; 004366a1
    POP EBX                             ; 004366a2
    RET                                 ; 004366a3
    XOR EDX,EDX                         ; 004366a4
        ;   Label: LAB_004366a4
    MOV ECX,dword ptr [ESP + 0x34]      ; 004366a6
    MOV dword ptr [ESP + 0xc],EDX       ; 004366aa
    TEST ECX,ECX                        ; 004366ae
    JBE 0x0043669c                      ; 004366b0
        ;   XREF to: 0043669c (CONDITIONAL_JUMP)  ; LAB_0043669c
    MOV EDX,dword ptr [ESP + 0xc]       ; 004366b2
        ;   Label: LAB_004366b2
    MOV EAX,dword ptr [ESP + 0x8]       ; 004366b6
    IMUL EDX,EAX                        ; 004366ba
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004366bd
    MOV EDI,dword ptr [ESP + 0x10]      ; 004366c1
    ADD EDX,ECX                         ; 004366c5
    XOR ESI,ESI                         ; 004366c7
    LEA EBP,[EAX + EDX*0x1]             ; 004366c9
    MOV dword ptr [ESP + 0x14],ESI      ; 004366cc
    SUB EBP,EBX                         ; 004366d0
    TEST EDI,EDI                        ; 004366d2
    JBE 0x0043672d                      ; 004366d4
        ;   XREF to: 0043672d (CONDITIONAL_JUMP)  ; LAB_0043672d
    MOV EDI,ESP                         ; 004366d6
        ;   Label: LAB_004366d6
    MOV ECX,EBX                         ; 004366d8
    MOV ESI,EDX                         ; 004366da
    PUSH EDI                            ; 004366dc
    MOV EAX,ECX                         ; 004366dd
    SHR ECX,0x2                         ; 004366df
    MOVSD.REP ES:EDI,ESI                ; 004366e2
    MOV CL,AL                           ; 004366e4
    AND CL,0x3                          ; 004366e6
    MOVSB.REP ES:EDI,ESI                ; 004366e9
    POP EDI                             ; 004366eb
    MOV ECX,EBX                         ; 004366ec
    MOV ESI,EBP                         ; 004366ee
    MOV EDI,EDX                         ; 004366f0
    PUSH EDI                            ; 004366f2
    MOV EAX,ECX                         ; 004366f3
    SHR ECX,0x2                         ; 004366f5
    MOVSD.REP ES:EDI,ESI                ; 004366f8
    MOV CL,AL                           ; 004366fa
    AND CL,0x3                          ; 004366fc
    MOVSB.REP ES:EDI,ESI                ; 004366ff
    POP EDI                             ; 00436701
    MOV ESI,ESP                         ; 00436702
    MOV ECX,EBX                         ; 00436704
    MOV EDI,EBP                         ; 00436706
    PUSH EDI                            ; 00436708
    MOV EAX,ECX                         ; 00436709
    SHR ECX,0x2                         ; 0043670b
    MOVSD.REP ES:EDI,ESI                ; 0043670e
    MOV CL,AL                           ; 00436710
    AND CL,0x3                          ; 00436712
    MOVSB.REP ES:EDI,ESI                ; 00436715
    POP EDI                             ; 00436717
    ADD EDX,EBX                         ; 00436718
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043671a
    MOV ECX,dword ptr [ESP + 0x10]      ; 0043671e
    INC EAX                             ; 00436722
    SUB EBP,EBX                         ; 00436723
    MOV dword ptr [ESP + 0x14],EAX      ; 00436725
    CMP EAX,ECX                         ; 00436729
    JC 0x004366d6                       ; 0043672b
        ;   XREF to: 004366d6 (CONDITIONAL_JUMP)  ; LAB_004366d6
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043672d
        ;   Label: LAB_0043672d
    INC EDI                             ; 00436731
    MOV EBP,dword ptr [ESP + 0x34]      ; 00436732
    MOV dword ptr [ESP + 0xc],EDI       ; 00436736
    CMP EDI,EBP                         ; 0043673a
    JNC 0x0043669c                      ; 0043673c
        ;   XREF to: 0043669c (CONDITIONAL_JUMP)  ; LAB_0043669c
    JMP 0x004366b2                      ; 00436742
        ;   XREF to: 004366b2 (UNCONDITIONAL_JUMP)  ; LAB_004366b2

