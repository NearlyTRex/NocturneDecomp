; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e2660(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004e2980 at 004e2990
;
; Referenced Globals:
;   undefined4 DAT_00617e40
;   undefined4 DAT_00617e44
;   undefined4 DAT_00617e48
;   undefined4 DAT_00617e4c
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b70
;   undefined4 DAT_01c38b74
;   undefined4 DAT_01c38b90
;   undefined4 DAT_01c38b94
;   undefined4 DAT_01c38b98
;   undefined4 DAT_01d03510
;   undefined4 DAT_01d03514
;   undefined4 DAT_01d03518
;   undefined4 DAT_01d0351c
;   undefined4 DAT_01d03520
;   ... and 1 more
;
; Called Functions:
;   FUN_004e9ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2660
        ;   Label: FUN_004e2660
    PUSH ESI                            ; 004e2661
    PUSH EDI                            ; 004e2662
    PUSH EBP                            ; 004e2663
    SUB ESP,0x14                        ; 004e2664
    MOV ESI,dword ptr [ESP + 0x28]      ; 004e2667
    MOV EDI,dword ptr [ESP + 0x30]      ; 004e266b
    MOV EDX,dword ptr [0x01c38b90]      ; 004e266f | DAT_01c38b90
    MOV EAX,ESI                         ; 004e2675
    IMUL EDX                            ; 004e2677
    SHRD EAX,EDX,0x10                   ; 004e2679
    MOV EDX,dword ptr [0x01c38b94]      ; 004e267d | DAT_01c38b94
    MOV ECX,EAX                         ; 004e2683
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e2685
    IMUL EDX                            ; 004e2689
    SHRD EAX,EDX,0x10                   ; 004e268b
    MOV EDX,dword ptr [0x01c38b98]      ; 004e268f | DAT_01c38b98
    ADD ECX,EAX                         ; 004e2695
    MOV EAX,EDI                         ; 004e2697
    IMUL EDX                            ; 004e2699
    SHRD EAX,EDX,0x10                   ; 004e269b
    LEA EBX,[ECX + EAX*0x1]             ; 004e269f
    MOV ECX,EBX                         ; 004e26a2
    NEG EBX                             ; 004e26a4
    TEST EBX,EBX                        ; 004e26a6
    JL 0x004e2842                       ; 004e26a8
        ;   XREF to: 004e2842 (CONDITIONAL_JUMP)  ; LAB_004e2842
    CMP EBX,0xffff                      ; 004e26ae
    JLE 0x004e26bb                      ; 004e26b4
        ;   XREF to: 004e26bb (CONDITIONAL_JUMP)  ; LAB_004e26bb
    MOV EBX,0xffff                      ; 004e26b6
    MOV EDX,0xffff                      ; 004e26bb
        ;   Label: LAB_004e26bb
    MOV EBP,dword ptr [0x00617e40]      ; 004e26c0 | DAT_00617e40
    MOV EAX,EBX                         ; 004e26c6
    SUB EDX,EBP                         ; 004e26c8
    IMUL EDX                            ; 004e26ca
    SHRD EAX,EDX,0x10                   ; 004e26cc
    MOV EBX,dword ptr [0x00617e40]      ; 004e26d0 | DAT_00617e40
    ADD EBX,EAX                         ; 004e26d6
    TEST EBX,EBX                        ; 004e26d8
    JL 0x004e2849                       ; 004e26da
        ;   XREF to: 004e2849 (CONDITIONAL_JUMP)  ; LAB_004e2849
    CMP EBX,0xffff                      ; 004e26e0
    JLE 0x004e26ed                      ; 004e26e6
        ;   XREF to: 004e26ed (CONDITIONAL_JUMP)  ; LAB_004e26ed
    MOV EBX,0xffff                      ; 004e26e8
    CMP dword ptr [0x00617e44],0x0      ; 004e26ed | DAT_00617e44
        ;   Label: LAB_004e26ed
    JZ 0x004e2850                       ; 004e26f4
        ;   XREF to: 004e2850 (CONDITIONAL_JUMP)  ; LAB_004e2850
    MOV EAX,ESI                         ; 004e26fa
    MOV EDX,ECX                         ; 004e26fc
    IMUL EDX                            ; 004e26fe
    SHRD EAX,EDX,0x10                   ; 004e2700
    LEA EBP,[EAX + EAX*0x1]             ; 004e2704
    MOV EDX,dword ptr [0x01c38b90]      ; 004e2707 | DAT_01c38b90
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e270d
    SUB EBP,EDX                         ; 004e2711
    MOV EDX,ECX                         ; 004e2713
    IMUL EDX                            ; 004e2715
    SHRD EAX,EDX,0x10                   ; 004e2717
    MOV ESI,dword ptr [0x01c38b94]      ; 004e271b | DAT_01c38b94
    ADD EAX,EAX                         ; 004e2721
    SUB EAX,ESI                         ; 004e2723
    MOV EDX,ECX                         ; 004e2725
    MOV dword ptr [ESP + 0xc],EAX       ; 004e2727
    MOV EAX,EDI                         ; 004e272b
    IMUL EDX                            ; 004e272d
    SHRD EAX,EDX,0x10                   ; 004e272f
    MOV EDI,dword ptr [0x01c38b98]      ; 004e2733 | DAT_01c38b98
    ADD EAX,EAX                         ; 004e2739
    SUB EAX,EDI                         ; 004e273b
    MOV EDX,dword ptr [0x01d03510]      ; 004e273d | DAT_01d03510
    MOV dword ptr [ESP + 0x10],EAX      ; 004e2743
    CMP EDX,dword ptr [0x01c38b6c]      ; 004e2747 | DAT_01c38b6c
    JZ 0x004e2861                       ; 004e274d
        ;   XREF to: 004e2861 (CONDITIONAL_JUMP)  ; LAB_004e2861
    MOV EAX,[0x01c38b6c]                ; 004e2753 | DAT_01c38b6c
        ;   Label: LAB_004e2753
    PUSH 0x1d03510                      ; 004e2758 | DAT_01d03510
    MOV [0x01d03510],EAX                ; 004e275d | DAT_01d03510
    MOV EAX,[0x01c38b70]                ; 004e2762 | DAT_01c38b70
    LEA ESI,[ESP + 0x4]                 ; 004e2767
    MOV [0x01d03514],EAX                ; 004e276b | DAT_01d03514
    MOV EAX,[0x01c38b74]                ; 004e2770 | DAT_01c38b74
    MOV EDI,0x1d0351c                   ; 004e2775
    MOV [0x01d03518],EAX                ; 004e277a | DAT_01d03518
    CALL FUN_004e9ae0                   ; 004e277f
        ;   XREF to: 004e9ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e9ae0()
    LEA ESI,[ESP + 0x4]                 ; 004e2784
    ADD ESP,0x4                         ; 004e2788
    MOVSD ES:EDI,ESI                    ; 004e278b | DAT_01d0351c
    MOVSD ES:EDI,ESI                    ; 004e278c | DAT_01d03520
    MOVSD ES:EDI,ESI                    ; 004e278d | DAT_01d03524
    MOV EDX,dword ptr [0x01d0351c]      ; 004e278e | DAT_01d0351c
        ;   Label: LAB_004e278e
    MOV EAX,EBP                         ; 004e2794
    IMUL EDX                            ; 004e2796
    SHRD EAX,EDX,0x10                   ; 004e2798
    MOV EDX,dword ptr [0x01d03520]      ; 004e279c | DAT_01d03520
    MOV ECX,EAX                         ; 004e27a2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e27a4
    IMUL EDX                            ; 004e27a8
    SHRD EAX,EDX,0x10                   ; 004e27aa
    MOV EDX,dword ptr [0x01d03524]      ; 004e27ae | DAT_01d03524
    ADD ECX,EAX                         ; 004e27b4
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e27b6
    IMUL EDX                            ; 004e27ba
    SHRD EAX,EDX,0x10                   ; 004e27bc
    ADD ECX,EAX                         ; 004e27c0
    NEG ECX                             ; 004e27c2
    TEST ECX,ECX                        ; 004e27c4
    JL 0x004e288a                       ; 004e27c6
        ;   XREF to: 004e288a (CONDITIONAL_JUMP)  ; LAB_004e288a
    CMP ECX,0xffff                      ; 004e27cc
    JLE 0x004e288e                      ; 004e27d2
        ;   XREF to: 004e288e (CONDITIONAL_JUMP)  ; LAB_004e288e
    MOV ECX,0xffff                      ; 004e27d8
    MOV EAX,ECX                         ; 004e27dd
        ;   Label: LAB_004e27dd
    MOV EDX,ECX                         ; 004e27df
    IMUL EDX                            ; 004e27e1
    SHRD EAX,EDX,0x10                   ; 004e27e3
    MOV EDX,EAX                         ; 004e27e7
    IMUL EDX                            ; 004e27e9
    SHRD EAX,EDX,0x10                   ; 004e27eb
    MOV EDX,EAX                         ; 004e27ef
    IMUL EDX                            ; 004e27f1
    SHRD EAX,EDX,0x10                   ; 004e27f3
    MOV EDX,EAX                         ; 004e27f7
    IMUL EDX                            ; 004e27f9
    SHRD EAX,EDX,0x10                   ; 004e27fb
    MOV EDX,EAX                         ; 004e27ff
    IMUL EDX                            ; 004e2801
    SHRD EAX,EDX,0x10                   ; 004e2803
    MOV ECX,EAX                         ; 004e2807
    MOV EAX,[0x00617e48]                ; 004e2809 | DAT_00617e48
        ;   Label: LAB_004e2809
    MOV EDX,EBX                         ; 004e280e
    IMUL EDX                            ; 004e2810
    SHRD EAX,EDX,0x10                   ; 004e2812
    MOV EBX,EAX                         ; 004e2816
    MOV EDX,ECX                         ; 004e2818
    MOV EAX,[0x00617e4c]                ; 004e281a | DAT_00617e4c
    IMUL EDX                            ; 004e281f
    SHRD EAX,EDX,0x10                   ; 004e2821
    LEA EDX,[EBX + EAX*0x1]             ; 004e2825
    MOV EAX,EDX                         ; 004e2828
        ;   Label: LAB_004e2828
    SAR EDX,0x1f                        ; 004e282a
    SHL EDX,0x4                         ; 004e282d
    SBB EAX,EDX                         ; 004e2830
    SAR EAX,0x4                         ; 004e2832
    ADD EAX,0x100                       ; 004e2835
    ADD ESP,0x14                        ; 004e283a
    POP EBP                             ; 004e283d
    POP EDI                             ; 004e283e
    POP ESI                             ; 004e283f
    POP EBX                             ; 004e2840
    RET                                 ; 004e2841
    XOR EBX,EBX                         ; 004e2842
        ;   Label: LAB_004e2842
    JMP 0x004e26bb                      ; 004e2844
        ;   XREF to: 004e26bb (UNCONDITIONAL_JUMP)  ; LAB_004e26bb
    XOR EBX,EBX                         ; 004e2849
        ;   Label: LAB_004e2849
    JMP 0x004e26ed                      ; 004e284b
        ;   XREF to: 004e26ed (UNCONDITIONAL_JUMP)  ; LAB_004e26ed
    MOV EAX,[0x00617e48]                ; 004e2850 | DAT_00617e48
        ;   Label: LAB_004e2850
    MOV EDX,EBX                         ; 004e2855
    IMUL EDX                            ; 004e2857
    SHRD EAX,EDX,0x10                   ; 004e2859
    MOV EDX,EAX                         ; 004e285d
    JMP 0x004e2828                      ; 004e285f
        ;   XREF to: 004e2828 (UNCONDITIONAL_JUMP)  ; LAB_004e2828
    MOV ECX,dword ptr [0x01d03514]      ; 004e2861 | DAT_01d03514
        ;   Label: LAB_004e2861
    CMP ECX,dword ptr [0x01c38b70]      ; 004e2867 | DAT_01c38b70
    JNZ 0x004e2753                      ; 004e286d
        ;   XREF to: 004e2753 (CONDITIONAL_JUMP)  ; LAB_004e2753
    MOV ESI,dword ptr [0x01d03518]      ; 004e2873 | DAT_01d03518
    CMP ESI,dword ptr [0x01c38b74]      ; 004e2879 | DAT_01c38b74
    JNZ 0x004e2753                      ; 004e287f
        ;   XREF to: 004e2753 (CONDITIONAL_JUMP)  ; LAB_004e2753
    JMP 0x004e278e                      ; 004e2885
        ;   XREF to: 004e278e (UNCONDITIONAL_JUMP)  ; LAB_004e278e
    MOV EDX,EBX                         ; 004e288a
        ;   Label: LAB_004e288a
    JMP 0x004e2828                      ; 004e288c
        ;   XREF to: 004e2828 (UNCONDITIONAL_JUMP)  ; LAB_004e2828
    CMP ECX,0xbb80                      ; 004e288e
        ;   Label: LAB_004e288e
    JG 0x004e27dd                       ; 004e2894
        ;   XREF to: 004e27dd (CONDITIONAL_JUMP)  ; LAB_004e27dd
    XOR ECX,ECX                         ; 004e289a
    JMP 0x004e2809                      ; 004e289c
        ;   XREF to: 004e2809 (UNCONDITIONAL_JUMP)  ; LAB_004e2809

