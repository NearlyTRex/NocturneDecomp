; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pcx_c_saveScreenRaw16_FUN_004f2620(char *param_1)
;
; Local Variables:
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x6f]:1  local_6f
; undefined1       Stack[-0x6d]:1  local_6d
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004f2990 at 004f2b3a
;
; Referenced Globals:
;   TerminatedCString s_engine_pcx_c_0058cee5
;   TerminatedCString s_saveScreenRaw16_No_ext_f_0058cef5
;   TerminatedCString s_RAW_0058cf14
;   undefined4 s_RAW_0058cf14+1
;   undefined4 s_RAW_0058cf14+2
;   undefined4 s_RAW_0058cf14+3
;   TerminatedCString s_wb_0058cf19
;   TerminatedCString s_engine_pcx_c_0058cf1c
;   TerminatedCString s_saveScreenRaw16_Unable_t_0058cf2c
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00628
;   ... and 6 more
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_fputc_FUN_00566cc0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2620
        ;   Label: engine_pcx.c_saveScreenRaw16_FUN_004f2620
    PUSH ESI                            ; 004f2621
    PUSH EDI                            ; 004f2622
    PUSH EBP                            ; 004f2623
    SUB ESP,0x60                        ; 004f2624
    MOV ESI,dword ptr [ESP + 0x74]      ; 004f2627
    MOV EDI,ESP                         ; 004f262b
    MOV DL,0x2e                         ; 004f262d
    PUSH EDI                            ; 004f262f
    MOV AL,byte ptr [ESI]               ; 004f2630
        ;   Label: LAB_004f2630
    MOV byte ptr [EDI],AL               ; 004f2632
    CMP AL,0x0                          ; 004f2634
    JZ 0x004f2648                       ; 004f2636
        ;   XREF to: 004f2648 (CONDITIONAL_JUMP)  ; LAB_004f2648
    MOV AL,byte ptr [ESI + 0x1]         ; 004f2638
    ADD ESI,0x2                         ; 004f263b
    MOV byte ptr [EDI + 0x1],AL         ; 004f263e
    ADD EDI,0x2                         ; 004f2641
    CMP AL,0x0                          ; 004f2644
    JNZ 0x004f2630                      ; 004f2646
        ;   XREF to: 004f2630 (CONDITIONAL_JUMP)  ; LAB_004f2630
    POP EDI                             ; 004f2648
        ;   Label: LAB_004f2648
    MOV ESI,ESP                         ; 004f2649
    MOV AL,byte ptr [ESI]               ; 004f264b
        ;   Label: LAB_004f264b
    CMP AL,DL                           ; 004f264d
    JZ 0x004f2663                       ; 004f264f
        ;   XREF to: 004f2663 (CONDITIONAL_JUMP)  ; LAB_004f2663
    CMP AL,0x0                          ; 004f2651
    JZ 0x004f2661                       ; 004f2653
        ;   XREF to: 004f2661 (CONDITIONAL_JUMP)  ; LAB_004f2661
    INC ESI                             ; 004f2655
    MOV AL,byte ptr [ESI]               ; 004f2656
    CMP AL,DL                           ; 004f2658
    JZ 0x004f2663                       ; 004f265a
        ;   XREF to: 004f2663 (CONDITIONAL_JUMP)  ; LAB_004f2663
    INC ESI                             ; 004f265c
    CMP AL,0x0                          ; 004f265d
    JNZ 0x004f264b                      ; 004f265f
        ;   XREF to: 004f264b (CONDITIONAL_JUMP)  ; LAB_004f264b
    SUB ESI,ESI                         ; 004f2661
        ;   Label: LAB_004f2661
    MOV EDI,ESI                         ; 004f2663
        ;   Label: LAB_004f2663
    TEST ESI,ESI                        ; 004f2665
    JZ 0x004f27b7                       ; 004f2667
        ;   XREF to: 004f27b7 (CONDITIONAL_JUMP)  ; LAB_004f27b7
    MOV ESI,0x58cf14                    ; 004f266d | = ".RAW"
        ;   Label: LAB_004f266d
    PUSH EDI                            ; 004f2672
    MOV AL,byte ptr [ESI]               ; 004f2673 | = ".RAW" | s_RAW_0058cf14+2
        ;   Label: LAB_004f2673
    MOV byte ptr [EDI],AL               ; 004f2675
    CMP AL,0x0                          ; 004f2677
    JZ 0x004f268b                       ; 004f2679
        ;   XREF to: 004f268b (CONDITIONAL_JUMP)  ; LAB_004f268b
    MOV AL,byte ptr [ESI + 0x1]         ; 004f267b | s_RAW_0058cf14+1 | s_RAW_0058cf14+3
    ADD ESI,0x2                         ; 004f267e
    MOV byte ptr [EDI + 0x1],AL         ; 004f2681
    ADD EDI,0x2                         ; 004f2684
    CMP AL,0x0                          ; 004f2687
    JNZ 0x004f2673                      ; 004f2689
        ;   XREF to: 004f2673 (CONDITIONAL_JUMP)  ; LAB_004f2673
    POP EDI                             ; 004f268b
        ;   Label: LAB_004f268b
    PUSH 0x58cf19                       ; 004f268c | = "wb"
    LEA EAX,[ESP + 0x4]                 ; 004f2691
    PUSH EAX                            ; 004f2695
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004f2696
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_0056568c()
    ADD ESP,0x8                         ; 004f269b
    MOV EDI,EAX                         ; 004f269e
    TEST EAX,EAX                        ; 004f26a0
    JNZ 0x004f26c7                      ; 004f26a2
        ;   XREF to: 004f26c7 (CONDITIONAL_JUMP)  ; LAB_004f26c7
    MOV EBX,0x58cf1c                    ; 004f26a4 | = "..\\engine\\pcx.c"
    MOV ESI,0x6e                        ; 004f26a9
    PUSH 0x58cf2c                       ; 004f26ae | = "saveScreenRaw16 - Unable to open output"
    MOV dword ptr [0x01cc4800],EBX      ; 004f26b3 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004f26b9 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004f26bf
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004f26c4
    XOR EBP,EBP                         ; 004f26c7
        ;   Label: LAB_004f26c7
    MOV EAX,[0x005b7620]                ; 004f26c9 | DAT_005b7620
    MOV dword ptr [ESP + 0x5c],EBP      ; 004f26ce
    TEST EAX,EAX                        ; 004f26d2
    JLE 0x004f27a6                      ; 004f26d4
        ;   XREF to: 004f27a6 (CONDITIONAL_JUMP)  ; LAB_004f27a6
    MOV dword ptr [ESP + 0x58],EBP      ; 004f26da
    MOV ESI,dword ptr [ESP + 0x58]      ; 004f26de
        ;   Label: LAB_004f26de
    MOV EBP,dword ptr [0x005b761c]      ; 004f26e2 | DAT_005b761c
    XOR EBX,EBX                         ; 004f26e8
    MOV ESI,dword ptr [ESI + 0x1bd2fa0] ; 004f26ea | DAT_01bd2fa0 | DAT_01bd2fa4
    TEST EBP,EBP                        ; 004f26f0
    JLE 0x004f2784                      ; 004f26f2
        ;   XREF to: 004f2784 (CONDITIONAL_JUMP)  ; LAB_004f2784
    XOR EAX,EAX                         ; 004f26f8
        ;   Label: LAB_004f26f8
    MOV AX,word ptr [ESI]               ; 004f26fa
    MOV CL,byte ptr [0x01c00624]        ; 004f26fd | DAT_01c00624
    MOV EDX,EAX                         ; 004f2703
    SHR EDX,CL                          ; 004f2705
    IMUL EDX,dword ptr [0x01c00628]     ; 004f2707 | DAT_01c00628
    AND EDX,0xff                        ; 004f270e
    MOV CL,byte ptr [0x01c00630]        ; 004f2714 | DAT_01c00630
    MOV dword ptr [ESP + 0x50],EDX      ; 004f271a
    MOV EDX,EAX                         ; 004f271e
    MOV EBP,dword ptr [0x01c00634]      ; 004f2720 | DAT_01c00634
    SHR EDX,CL                          ; 004f2726
    IMUL EDX,EBP                        ; 004f2728
    MOV CL,byte ptr [0x01c0063c]        ; 004f272b | DAT_01c0063c
    AND EDX,0xff                        ; 004f2731
    MOV EBP,EAX                         ; 004f2737
    MOV dword ptr [ESP + 0x54],EDX      ; 004f2739
    SHR EBP,CL                          ; 004f273d
    IMUL EBP,dword ptr [0x01c00640]     ; 004f273f | DAT_01c00640
    PUSH EDI                            ; 004f2746
    MOV ECX,dword ptr [ESP + 0x54]      ; 004f2747
    PUSH ECX                            ; 004f274b
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 004f274c
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_00566cc0()
    ADD ESP,0x8                         ; 004f2751
    PUSH EDI                            ; 004f2754
    MOV EAX,dword ptr [ESP + 0x58]      ; 004f2755
    PUSH EAX                            ; 004f2759
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 004f275a
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_00566cc0()
    ADD ESP,0x8                         ; 004f275f
    PUSH EDI                            ; 004f2762
    AND EBP,0xff                        ; 004f2763
    PUSH EBP                            ; 004f2769
    ADD ESI,0x2                         ; 004f276a
    INC EBX                             ; 004f276d
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 004f276e
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_00566cc0()
    MOV EDX,dword ptr [0x005b761c]      ; 004f2773 | DAT_005b761c
    ADD ESP,0x8                         ; 004f2779
    CMP EBX,EDX                         ; 004f277c
    JL 0x004f26f8                       ; 004f277e
        ;   XREF to: 004f26f8 (CONDITIONAL_JUMP)  ; LAB_004f26f8
    MOV EDX,dword ptr [ESP + 0x58]      ; 004f2784
        ;   Label: LAB_004f2784
    MOV ECX,dword ptr [ESP + 0x5c]      ; 004f2788
    MOV EBX,dword ptr [0x005b7620]      ; 004f278c | DAT_005b7620
    ADD EDX,0x4                         ; 004f2792
    INC ECX                             ; 004f2795
    MOV dword ptr [ESP + 0x58],EDX      ; 004f2796
    MOV dword ptr [ESP + 0x5c],ECX      ; 004f279a
    CMP ECX,EBX                         ; 004f279e
    JL 0x004f26de                       ; 004f27a0
        ;   XREF to: 004f26de (CONDITIONAL_JUMP)  ; LAB_004f26de
    PUSH EDI                            ; 004f27a6
        ;   Label: LAB_004f27a6
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f27a7
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004f27ac
    ADD ESP,0x60                        ; 004f27af
    POP EBP                             ; 004f27b2
    POP EDI                             ; 004f27b3
    POP ESI                             ; 004f27b4
    POP EBX                             ; 004f27b5
    RET                                 ; 004f27b6
    MOV EDX,0x58cee5                    ; 004f27b7 | = "..\\engine\\pcx.c"
        ;   Label: LAB_004f27b7
    MOV ECX,0x68                        ; 004f27bc
    PUSH 0x58cef5                       ; 004f27c1 | = "saveScreenRaw16 - No ext found"
    MOV dword ptr [0x01cc4800],EDX      ; 004f27c6 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004f27cc | DAT_01cc4804
    CALL FUN_004c8440                   ; 004f27d2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004f27d7
    JMP 0x004f266d                      ; 004f27da
        ;   XREF to: 004f266d (UNCONDITIONAL_JUMP)  ; LAB_004f266d

