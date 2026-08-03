; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_FUN_004e2630(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0058b4e0
;   TerminatedCString s_MPEG_Layer_2_pick_table_0058b4f1
;   TerminatedCString s_sound_mp3_cpp_0058b52a
;   TerminatedCString s_js_bound_bad_layer_modex_0058b53b
;   undefined4 s_CMotionController_005bb246+0xa
;   undefined4 DAT_005bbc48
;   undefined4 DAT_005bbc88
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_01cd8b28
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2630
        ;   Label: sound_mp3.cpp_FUN_004e2630
    PUSH ESI                            ; 004e2631
    PUSH EDI                            ; 004e2632
    PUSH EBP                            ; 004e2633
    SUB ESP,0x14                        ; 004e2634
    MOV EBX,dword ptr [ESP + 0x28]      ; 004e2637
    MOV ESI,dword ptr [EBX]             ; 004e263b
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004e263d
    MOV dword ptr [EBX + 0x4],EAX       ; 004e2640
    CMP EAX,0x3                         ; 004e2643
    SETNZ AL                            ; 004e2646
    AND EAX,0xff                        ; 004e2649
    INC EAX                             ; 004e264e
    MOV dword ptr [EBX + 0x10],EAX      ; 004e264f
    CMP dword ptr [ESI + 0x4],0x2       ; 004e2652
    JZ 0x004e26c1                       ; 004e2656
        ;   XREF to: 004e26c1 (CONDITIONAL_JUMP)  ; LAB_004e26c1
    MOV dword ptr [EBX + 0x18],0x20     ; 004e2658
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004e265f
        ;   Label: LAB_004e265f
    CMP ECX,0x1                         ; 004e2662
    JNZ 0x004e27da                      ; 004e2665
        ;   XREF to: 004e27da (CONDITIONAL_JUMP)  ; LAB_004e27da
    MOV EDI,dword ptr [ESI + 0x4]       ; 004e266b
    MOV ESI,dword ptr [ESI + 0x20]      ; 004e266e
    CMP EDI,ECX                         ; 004e2671
    JL 0x004e267e                       ; 004e2673
        ;   XREF to: 004e267e (CONDITIONAL_JUMP)  ; LAB_004e267e
    CMP EDI,0x3                         ; 004e2675
    JLE 0x004e27c4                      ; 004e2678
        ;   XREF to: 004e27c4 (CONDITIONAL_JUMP)  ; LAB_004e27c4
    PUSH 0x1cd8b28                      ; 004e267e | DAT_01cd8b28
        ;   Label: LAB_004e267e
    PUSH ESI                            ; 004e2683
    PUSH EDI                            ; 004e2684
    MOV EBP,0x58b52a                    ; 004e2685 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x1b1                       ; 004e268a
    PUSH 0x58b53b                       ; 004e268f | = "js_bound bad layer/modext (%d/%d)  Fi..."
    MOV dword ptr [0x01cc4800],EBP      ; 004e2694 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004e269a | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e269f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x10                        ; 004e26a4
    SHL ESI,0x2                         ; 004e26a7
        ;   Label: LAB_004e26a7
    SHL EDI,0x4                         ; 004e26aa
    LEA EAX,[EDI + ESI*0x1]             ; 004e26ad
    MOV EAX,dword ptr [EAX + 0x5bb250]  ; 004e26b0 | s_CMotionController_005bb246+0xa
    MOV dword ptr [EBX + 0x14],EAX      ; 004e26b6
    ADD ESP,0x14                        ; 004e26b9
    POP EBP                             ; 004e26bc
    POP EDI                             ; 004e26bd
    POP ESI                             ; 004e26be
    POP EBX                             ; 004e26bf
    RET                                 ; 004e26c0
    MOV EAX,dword ptr [EBX + 0x18]      ; 004e26c1
        ;   Label: LAB_004e26c1
    MOV ECX,dword ptr [EBX]             ; 004e26c4
    MOV dword ptr [ESP + 0xc],EAX       ; 004e26c6
    MOV EAX,dword ptr [ECX + 0xc]       ; 004e26ca
    MOV EDI,dword ptr [ECX]             ; 004e26cd
    MOV dword ptr [ESP],EAX             ; 004e26cf
    LEA EAX,[EDI*0x4 + 0x0]             ; 004e26d2
    SUB EAX,EDI                         ; 004e26d9
    SHL EAX,0x2                         ; 004e26db
    MOV EDX,EAX                         ; 004e26de
    SHL EAX,0x4                         ; 004e26e0
    MOV EBP,dword ptr [ECX + 0x4]       ; 004e26e3
    SUB EAX,EDX                         ; 004e26e6
    DEC EBP                             ; 004e26e8
    MOV dword ptr [ESP + 0x4],EAX       ; 004e26e9
    LEA EAX,[EBP*0x4 + 0x0]             ; 004e26ed
    MOV EDX,EAX                         ; 004e26f4
    SHL EAX,0x4                         ; 004e26f6
    MOV EBP,dword ptr [ESP + 0x4]       ; 004e26f9
    SUB EAX,EDX                         ; 004e26fd
    MOV EDX,dword ptr [ESP]             ; 004e26ff
    ADD EAX,EBP                         ; 004e2702
    MOV EDX,dword ptr [EAX + EDX*0x4 + 0x5bbc88] ; 004e2704 | DAT_005bbc88
    MOV EBP,dword ptr [EBX + 0x10]      ; 004e270b
    MOV EAX,EDX                         ; 004e270e
    SAR EDX,0x1f                        ; 004e2710
    IDIV EBP                            ; 004e2713
    MOV EDX,EAX                         ; 004e2715
    MOV EAX,dword ptr [ECX + 0x10]      ; 004e2717
    MOV ECX,EDI                         ; 004e271a
    SHL ECX,0x5                         ; 004e271c
    MOV dword ptr [ESP + 0x8],EBX       ; 004e271f
    FLD double ptr [ECX + EAX*0x8 + 0x5bbc48] ; 004e2723 | DAT_005bbc48
    CALL crt_math.c_round_FUN_00563a30  ; 004e272a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x10]        ; 004e272f
    CMP EDI,0x1                         ; 004e2733
    JNZ 0x004e27bd                      ; 004e2736
        ;   XREF to: 004e27bd (CONDITIONAL_JUMP)  ; LAB_004e27bd
    CMP dword ptr [ESP + 0x10],0x30     ; 004e273c
    JNZ 0x004e2786                      ; 004e2741
        ;   XREF to: 004e2786 (CONDITIONAL_JUMP)  ; LAB_004e2786
    CMP EDX,0x38                        ; 004e2743
    JL 0x004e2786                       ; 004e2746
        ;   XREF to: 004e2786 (CONDITIONAL_JUMP)  ; LAB_004e2786
    XOR EAX,EAX                         ; 004e2748
        ;   Label: LAB_004e2748
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e274a
        ;   Label: LAB_004e274a
    CMP EAX,dword ptr [EDX + 0xc]       ; 004e274e
    JZ 0x004e277a                       ; 004e2751
        ;   XREF to: 004e277a (CONDITIONAL_JUMP)  ; LAB_004e277a
    PUSH 0x1cd8b28                      ; 004e2753 | DAT_01cd8b28
    MOV EAX,0x58b4e0                    ; 004e2758 | = "..\\sound\\mp3.cpp"
    MOV EDX,0x1a1                       ; 004e275d
    PUSH 0x58b4f1                       ; 004e2762 | = "MPEG Layer 2 - pick_table - can't loa..."
    MOV [0x01cc4800],EAX                ; 004e2767 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004e276c | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e2772
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e2777
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e277a
        ;   Label: LAB_004e277a
    MOV dword ptr [EBX + 0x18],EAX      ; 004e277e
    JMP 0x004e265f                      ; 004e2781
        ;   XREF to: 004e265f (UNCONDITIONAL_JUMP)  ; LAB_004e265f
    CMP EDX,0x38                        ; 004e2786
        ;   Label: LAB_004e2786
    JL 0x004e2790                       ; 004e2789
        ;   XREF to: 004e2790 (CONDITIONAL_JUMP)  ; LAB_004e2790
    CMP EDX,0x50                        ; 004e278b
    JLE 0x004e2748                      ; 004e278e
        ;   XREF to: 004e2748 (CONDITIONAL_JUMP)  ; LAB_004e2748
    CMP dword ptr [ESP + 0x10],0x30     ; 004e2790
        ;   Label: LAB_004e2790
    JZ 0x004e27a3                       ; 004e2795
        ;   XREF to: 004e27a3 (CONDITIONAL_JUMP)  ; LAB_004e27a3
    CMP EDX,0x60                        ; 004e2797
    JL 0x004e27a3                       ; 004e279a
        ;   XREF to: 004e27a3 (CONDITIONAL_JUMP)  ; LAB_004e27a3
    MOV EAX,0x1                         ; 004e279c
    JMP 0x004e274a                      ; 004e27a1
        ;   XREF to: 004e274a (UNCONDITIONAL_JUMP)  ; LAB_004e274a
    CMP dword ptr [ESP + 0x10],0x20     ; 004e27a3
        ;   Label: LAB_004e27a3
    JZ 0x004e27b6                       ; 004e27a8
        ;   XREF to: 004e27b6 (CONDITIONAL_JUMP)  ; LAB_004e27b6
    CMP EDX,0x30                        ; 004e27aa
    JG 0x004e27b6                       ; 004e27ad
        ;   XREF to: 004e27b6 (CONDITIONAL_JUMP)  ; LAB_004e27b6
    MOV EAX,0x2                         ; 004e27af
    JMP 0x004e274a                      ; 004e27b4
        ;   XREF to: 004e274a (UNCONDITIONAL_JUMP)  ; LAB_004e274a
    MOV EAX,0x3                         ; 004e27b6
        ;   Label: LAB_004e27b6
    JMP 0x004e274a                      ; 004e27bb
        ;   XREF to: 004e274a (UNCONDITIONAL_JUMP)  ; LAB_004e274a
    MOV EAX,0x4                         ; 004e27bd
        ;   Label: LAB_004e27bd
    JMP 0x004e274a                      ; 004e27c2
        ;   XREF to: 004e274a (UNCONDITIONAL_JUMP)  ; LAB_004e274a
    TEST ESI,ESI                        ; 004e27c4
        ;   Label: LAB_004e27c4
    JL 0x004e267e                       ; 004e27c6
        ;   XREF to: 004e267e (CONDITIONAL_JUMP)  ; LAB_004e267e
    CMP ESI,0x3                         ; 004e27cc
    JG 0x004e267e                       ; 004e27cf
        ;   XREF to: 004e267e (CONDITIONAL_JUMP)  ; LAB_004e267e
    JMP 0x004e26a7                      ; 004e27d5
        ;   XREF to: 004e26a7 (UNCONDITIONAL_JUMP)  ; LAB_004e26a7
    MOV EAX,dword ptr [EBX + 0x18]      ; 004e27da
        ;   Label: LAB_004e27da
    MOV dword ptr [EBX + 0x14],EAX      ; 004e27dd
    ADD ESP,0x14                        ; 004e27e0
    POP EBP                             ; 004e27e3
    POP EDI                             ; 004e27e4
    POP ESI                             ; 004e27e5
    POP EBX                             ; 004e27e6
    RET                                 ; 004e27e7

