; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f27a0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004f2490 at 004f254b
;   FUN_004f2a10 at 004f2ad0
;
; Referenced Globals:
;   undefined4 DAT_01c60dac
;   undefined4 DAT_01c60db0
;   undefined4 DAT_01d76cf8
;   undefined4 DAT_01d80844
;   undefined4 DAT_01d80848
;   undefined4 DAT_01d80850
;   undefined4 DAT_01d80898
;   undefined4 DAT_01d808a0
;   undefined4 DAT_01d80d48
;   undefined4 DAT_01d80d4c
;
; Called Functions:
;   FUN_004f2610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f27a0
        ;   Label: FUN_004f27a0
    PUSH ESI                            ; 004f27a1
    PUSH EDI                            ; 004f27a2
    PUSH EBP                            ; 004f27a3
    SUB ESP,0x1c                        ; 004f27a4
    MOV EBX,dword ptr [0x01d80844]      ; 004f27a7 | DAT_01d80844
    MOV EDI,dword ptr [ESP + 0x30]      ; 004f27ad
    MOV ESI,dword ptr [ESP + 0x34]      ; 004f27b1
    MOV EBP,dword ptr [ESP + 0x38]      ; 004f27b5
    FLD float ptr [EBP + 0x14]          ; 004f27b9
    FLD float ptr [ESI + 0x18]          ; 004f27bc
    FSUB float ptr [EDI + 0x18]         ; 004f27bf
    FXCH                                ; 004f27c2
    FSUB float ptr [ESI + 0x14]         ; 004f27c4
    FXCH                                ; 004f27c7
    FSTP float ptr [ESP + 0x14]         ; 004f27c9
    FSTP float ptr [ESP]                ; 004f27cd
    FLD float ptr [ESP + 0x14]          ; 004f27d0
    FMUL float ptr [ESP]                ; 004f27d4
    FLD float ptr [EBP + 0x18]          ; 004f27d7
    FLD float ptr [ESI + 0x14]          ; 004f27da
    FSUB float ptr [EDI + 0x14]         ; 004f27dd
    FXCH                                ; 004f27e0
    FSUB float ptr [ESI + 0x18]         ; 004f27e2
    FXCH                                ; 004f27e5
    FSTP float ptr [ESP + 0x4]          ; 004f27e7
    FSTP float ptr [ESP + 0x10]         ; 004f27eb
    FLD float ptr [ESP + 0x4]           ; 004f27ef
    FMUL float ptr [ESP + 0x10]         ; 004f27f3
    MOV EDX,dword ptr [0x01d76cf8]      ; 004f27f7 | DAT_01d76cf8
    FXCH                                ; 004f27fd
    FSTP float ptr [ESP + 0x8]          ; 004f27ff
    FSTP float ptr [ESP + 0x18]         ; 004f2803
    TEST EDX,EDX                        ; 004f2807
    JNZ 0x004f29a5                      ; 004f2809
        ;   XREF to: 004f29a5 (CONDITIONAL_JUMP)  ; LAB_004f29a5
    FLD float ptr [ESP + 0x18]          ; 004f280f
    FCOMP float ptr [ESP + 0x8]         ; 004f2813
    FNSTSW AX                           ; 004f2817
    SAHF                                ; 004f2819
    JBE 0x004f29b6                      ; 004f281a
        ;   XREF to: 004f29b6 (CONDITIONAL_JUMP)  ; LAB_004f29b6
    MOV ECX,0x4b0                       ; 004f2820
        ;   Label: LAB_004f2820
    PUSH ESI                            ; 004f2825
    XOR EBX,EBX                         ; 004f2826
    MOV dword ptr [0x01d80d48],ECX      ; 004f2828 | DAT_01d80d48
    PUSH EDI                            ; 004f282e
    MOV dword ptr [0x01d80d4c],EBX      ; 004f282f | DAT_01d80d4c
    MOV dword ptr [0x01d80844],EBX      ; 004f2835 | DAT_01d80844
    CALL FUN_004f2610                   ; 004f283b
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)  ; undefined FUN_004f2610()
    ADD ESP,0x8                         ; 004f2840
    PUSH EBP                            ; 004f2843
    PUSH ESI                            ; 004f2844
    CALL FUN_004f2610                   ; 004f2845
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)  ; undefined FUN_004f2610()
    ADD ESP,0x8                         ; 004f284a
    PUSH EDI                            ; 004f284d
    PUSH EBP                            ; 004f284e
    CALL FUN_004f2610                   ; 004f284f
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)  ; undefined FUN_004f2610()
    MOV EAX,0x1d80848                   ; 004f2854
    MOV EBX,dword ptr [0x01d80844]      ; 004f2859 | DAT_01d80844
    MOV ECX,dword ptr [0x01d80d48]      ; 004f285f | DAT_01d80d48
    ADD ESP,0x8                         ; 004f2865
    XOR EDX,EDX                         ; 004f2868
    TEST EBX,EBX                        ; 004f286a
    JLE 0x004f29d0                      ; 004f286c
        ;   XREF to: 004f29d0 (CONDITIONAL_JUMP)  ; LAB_004f29d0
    CMP ECX,dword ptr [EAX]             ; 004f2872 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f2872
    JNZ 0x004f29c4                      ; 004f2874
        ;   XREF to: 004f29c4 (CONDITIONAL_JUMP)  ; LAB_004f29c4
    TEST EAX,EAX                        ; 004f287a
    JZ 0x004f29c4                       ; 004f287c
        ;   XREF to: 004f29c4 (CONDITIONAL_JUMP)  ; LAB_004f29c4
    MOV EDI,EAX                         ; 004f2882
        ;   Label: LAB_004f2882
    TEST EAX,EAX                        ; 004f2884
    JZ 0x004f29b6                       ; 004f2886
        ;   XREF to: 004f29b6 (CONDITIONAL_JUMP)  ; LAB_004f29b6
    MOV ECX,dword ptr [0x01d80d48]      ; 004f288c | DAT_01d80d48
    MOV ESI,EAX                         ; 004f2892
    XOR EDX,EDX                         ; 004f2894
    MOV EAX,0x1d80848                   ; 004f2896
    TEST EBX,EBX                        ; 004f289b
    JLE 0x004f29e3                      ; 004f289d
        ;   XREF to: 004f29e3 (CONDITIONAL_JUMP)  ; LAB_004f29e3
    CMP ECX,dword ptr [EAX]             ; 004f28a3 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f28a3
    JNZ 0x004f29d7                      ; 004f28a5
        ;   XREF to: 004f29d7 (CONDITIONAL_JUMP)  ; LAB_004f29d7
    CMP EAX,ESI                         ; 004f28ab
    JZ 0x004f29d7                       ; 004f28ad
        ;   XREF to: 004f29d7 (CONDITIONAL_JUMP)  ; LAB_004f29d7
    MOV EBP,EAX                         ; 004f28b3
        ;   Label: LAB_004f28b3
    TEST EAX,EAX                        ; 004f28b5
    JZ 0x004f29b6                       ; 004f28b7
        ;   XREF to: 004f29b6 (CONDITIONAL_JUMP)  ; LAB_004f29b6
    MOV EAX,[0x01d80d48]                ; 004f28bd | DAT_01d80d48
    MOV dword ptr [ESP + 0xc],EAX       ; 004f28c2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f28c6
        ;   Label: LAB_004f28c6
    CMP EAX,dword ptr [EDI + 0x4]       ; 004f28ca
    JL 0x004f2902                       ; 004f28cd
        ;   XREF to: 004f2902 (CONDITIONAL_JUMP)  ; LAB_004f2902
    MOV ESI,EAX                         ; 004f28cf
    MOV ECX,EBP                         ; 004f28d1
    MOV dword ptr [EDI],0xffffffff      ; 004f28d3
    XOR EDX,EDX                         ; 004f28d9
    MOV EAX,0x1d80848                   ; 004f28db
    TEST EBX,EBX                        ; 004f28e0
    JLE 0x004f29f6                      ; 004f28e2
        ;   XREF to: 004f29f6 (CONDITIONAL_JUMP)  ; LAB_004f29f6
    CMP ESI,dword ptr [EAX]             ; 004f28e8 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f28e8
    JNZ 0x004f29ea                      ; 004f28ea
        ;   XREF to: 004f29ea (CONDITIONAL_JUMP)  ; LAB_004f29ea
    CMP EAX,ECX                         ; 004f28f0
    JZ 0x004f29ea                       ; 004f28f2
        ;   XREF to: 004f29ea (CONDITIONAL_JUMP)  ; LAB_004f29ea
    MOV EDI,EAX                         ; 004f28f8
        ;   Label: LAB_004f28f8
    TEST EAX,EAX                        ; 004f28fa
    JZ 0x004f29b6                       ; 004f28fc
        ;   XREF to: 004f29b6 (CONDITIONAL_JUMP)  ; LAB_004f29b6
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f2902
        ;   Label: LAB_004f2902
    CMP EAX,dword ptr [EBP + 0x4]       ; 004f2906
    JL 0x004f293f                       ; 004f2909
        ;   XREF to: 004f293f (CONDITIONAL_JUMP)  ; LAB_004f293f
    MOV ECX,EAX                         ; 004f290b
    MOV ESI,EDI                         ; 004f290d
    MOV dword ptr [EBP],0xffffffff      ; 004f290f
    XOR EDX,EDX                         ; 004f2916
    MOV EAX,0x1d80848                   ; 004f2918
    TEST EBX,EBX                        ; 004f291d
    JLE 0x004f2a09                      ; 004f291f
        ;   XREF to: 004f2a09 (CONDITIONAL_JUMP)  ; LAB_004f2a09
    CMP ECX,dword ptr [EAX]             ; 004f2925 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f2925
    JNZ 0x004f29fd                      ; 004f2927
        ;   XREF to: 004f29fd (CONDITIONAL_JUMP)  ; LAB_004f29fd
    CMP EAX,ESI                         ; 004f292d
    JZ 0x004f29fd                       ; 004f292f
        ;   XREF to: 004f29fd (CONDITIONAL_JUMP)  ; LAB_004f29fd
    MOV EBP,EAX                         ; 004f2935
        ;   Label: LAB_004f2935
    TEST EAX,EAX                        ; 004f2937
    JZ 0x004f29b6                       ; 004f2939
        ;   XREF to: 004f29b6 (CONDITIONAL_JUMP)  ; LAB_004f29b6
    MOV EAX,dword ptr [EDI + 0x8]       ; 004f293f | DAT_01d80850
        ;   Label: LAB_004f293f
    MOV ECX,dword ptr [EBP + 0x8]       ; 004f2942 | DAT_01d808a0 | DAT_01d80850
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f2945
    CMP EAX,ECX                         ; 004f2949
    JLE 0x004f2953                      ; 004f294b
        ;   XREF to: 004f2953 (CONDITIONAL_JUMP)  ; LAB_004f2953
    MOV EDX,EAX                         ; 004f294d
    MOV EAX,ECX                         ; 004f294f
    MOV ECX,EDX                         ; 004f2951
    LEA EDX,[ESI*0x4 + 0x0]             ; 004f2953
        ;   Label: LAB_004f2953
    SAR EAX,0x10                        ; 004f295a
    LEA ESI,[EAX*0x4 + 0x0]             ; 004f295d
    MOV EDX,dword ptr [EDX + 0x1c5faec] ; 004f2964 | DAT_01c60dac | DAT_01c60db0
    SAR ECX,0x10                        ; 004f296a
    ADD EDX,ESI                         ; 004f296d
    CMP EAX,ECX                         ; 004f296f
    JGE 0x004f2981                      ; 004f2971
        ;   XREF to: 004f2981 (CONDITIONAL_JUMP)  ; LAB_004f2981
    INC EAX                             ; 004f2973
        ;   Label: LAB_004f2973
    MOV dword ptr [EDX],0x80000000      ; 004f2974
    ADD EDX,0x4                         ; 004f297a
    CMP EAX,ECX                         ; 004f297d
    JL 0x004f2973                       ; 004f297f
        ;   XREF to: 004f2973 (CONDITIONAL_JUMP)  ; LAB_004f2973
    MOV EDX,dword ptr [EDI + 0x8]       ; 004f2981
        ;   Label: LAB_004f2981
    MOV EAX,dword ptr [EDI + 0xc]       ; 004f2984
    ADD EDX,EAX                         ; 004f2987
    MOV dword ptr [EDI + 0x8],EDX       ; 004f2989
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f298c
    MOV EAX,dword ptr [EBP + 0xc]       ; 004f2990
    MOV ECX,dword ptr [EBP + 0x8]       ; 004f2993
    INC ESI                             ; 004f2996
    ADD ECX,EAX                         ; 004f2997
    MOV dword ptr [ESP + 0xc],ESI       ; 004f2999
    MOV dword ptr [EBP + 0x8],ECX       ; 004f299d
    JMP 0x004f28c6                      ; 004f29a0
        ;   XREF to: 004f28c6 (UNCONDITIONAL_JUMP)  ; LAB_004f28c6
    FLD float ptr [ESP + 0x18]          ; 004f29a5
        ;   Label: LAB_004f29a5
    FCOMP float ptr [ESP + 0x8]         ; 004f29a9
    FNSTSW AX                           ; 004f29ad
    SAHF                                ; 004f29af
    JC 0x004f2820                       ; 004f29b0
        ;   XREF to: 004f2820 (CONDITIONAL_JUMP)  ; LAB_004f2820
    MOV dword ptr [0x01d80844],EBX      ; 004f29b6 | DAT_01d80844
        ;   Label: LAB_004f29b6
    ADD ESP,0x1c                        ; 004f29bc
    POP EBP                             ; 004f29bf
    POP EDI                             ; 004f29c0
    POP ESI                             ; 004f29c1
    POP EBX                             ; 004f29c2
    RET                                 ; 004f29c3
    INC EDX                             ; 004f29c4
        ;   Label: LAB_004f29c4
    ADD EAX,0x50                        ; 004f29c5
    CMP EDX,EBX                         ; 004f29c8
    JL 0x004f2872                       ; 004f29ca
        ;   XREF to: 004f2872 (CONDITIONAL_JUMP)  ; LAB_004f2872
    XOR EAX,EAX                         ; 004f29d0
        ;   Label: LAB_004f29d0
    JMP 0x004f2882                      ; 004f29d2
        ;   XREF to: 004f2882 (UNCONDITIONAL_JUMP)  ; LAB_004f2882
    INC EDX                             ; 004f29d7
        ;   Label: LAB_004f29d7
    ADD EAX,0x50                        ; 004f29d8
    CMP EDX,EBX                         ; 004f29db
    JL 0x004f28a3                       ; 004f29dd
        ;   XREF to: 004f28a3 (CONDITIONAL_JUMP)  ; LAB_004f28a3
    XOR EAX,EAX                         ; 004f29e3
        ;   Label: LAB_004f29e3
    JMP 0x004f28b3                      ; 004f29e5
        ;   XREF to: 004f28b3 (UNCONDITIONAL_JUMP)  ; LAB_004f28b3
    INC EDX                             ; 004f29ea
        ;   Label: LAB_004f29ea
    ADD EAX,0x50                        ; 004f29eb
    CMP EDX,EBX                         ; 004f29ee
    JL 0x004f28e8                       ; 004f29f0
        ;   XREF to: 004f28e8 (CONDITIONAL_JUMP)  ; LAB_004f28e8
    XOR EAX,EAX                         ; 004f29f6
        ;   Label: LAB_004f29f6
    JMP 0x004f28f8                      ; 004f29f8
        ;   XREF to: 004f28f8 (UNCONDITIONAL_JUMP)  ; LAB_004f28f8
    INC EDX                             ; 004f29fd
        ;   Label: LAB_004f29fd
    ADD EAX,0x50                        ; 004f29fe
    CMP EDX,EBX                         ; 004f2a01
    JL 0x004f2925                       ; 004f2a03
        ;   XREF to: 004f2925 (CONDITIONAL_JUMP)  ; LAB_004f2925
    XOR EAX,EAX                         ; 004f2a09
        ;   Label: LAB_004f2a09
    JMP 0x004f2935                      ; 004f2a0b
        ;   XREF to: 004f2935 (UNCONDITIONAL_JUMP)  ; LAB_004f2935

