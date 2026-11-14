; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_005326b0(int param_1)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_0207bab8
;   undefined4 DAT_0207babc
;   undefined4 DAT_0207bac0
;
; Called Functions:
;   core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005326b0
        ;   Label: core_set.cpp_FUN_005326b0
    PUSH EDI                            ; 005326b1
    PUSH EBP                            ; 005326b2
    SUB ESP,0x14                        ; 005326b3
    MOV ECX,dword ptr [ESP + 0x24]      ; 005326b6
    MOV EAX,dword ptr [ECX + 0x108]     ; 005326ba
    MOV dword ptr [ESP + 0x4],EAX       ; 005326c0
    MOV EAX,dword ptr [ECX + 0x10c]     ; 005326c4
    MOV dword ptr [ESP + 0x8],EAX       ; 005326ca
    MOV EAX,dword ptr [ECX + 0x110]     ; 005326ce
    MOV EDX,dword ptr [0x0207bab8]      ; 005326d4 | DAT_0207bab8
    MOV dword ptr [ESP],EAX             ; 005326da
    CMP ECX,EDX                         ; 005326dd
    JZ 0x00532767                       ; 005326df
        ;   XREF to: 00532767 (CONDITIONAL_JUMP)  ; LAB_00532767
    CMP ECX,dword ptr [0x0207babc]      ; 005326e5 | DAT_0207babc
        ;   Label: LAB_005326e5
    JNZ 0x00532744                      ; 005326eb
        ;   XREF to: 00532744 (CONDITIONAL_JUMP)  ; LAB_00532744
    MOV EAX,dword ptr [ESP + 0x4]       ; 005326ed
    MOV dword ptr [ESP + 0xc],EAX       ; 005326f1
    MOV EAX,dword ptr [ESP + 0x8]       ; 005326f5
    MOV dword ptr [ESP + 0x10],EAX      ; 005326f9
    FILD dword ptr [ESP + 0x10]         ; 005326fd
    FLD1                                ; 00532701
    FLD float ptr [0x0207bac0]          ; 00532703 | DAT_0207bac0
    FXCH                                ; 00532709
    FDIV ST0,ST1                        ; 0053270b
    FILD dword ptr [ESP + 0xc]          ; 0053270d
    FMULP ST2                           ; 00532711
    MOV EAX,dword ptr [ESP]             ; 00532713
    MOV dword ptr [ESP + 0x10],EAX      ; 00532716
    FXCH ST2                            ; 0053271a
    FMUL ST2                            ; 0053271c
    FILD dword ptr [ESP + 0x10]         ; 0053271e
    FMULP ST3                           ; 00532722
    FXCH                                ; 00532724
    CALL crt_math.c_round_FUN_005a3120  ; 00532726
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x4]         ; 0053272b
    CALL crt_math.c_round_FUN_005a3120  ; 0053272f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00532734
    CALL crt_math.c_round_FUN_005a3120  ; 00532736
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0053273b
    FISTP dword ptr [ESP + 0x8]         ; 0053273d
    FISTP dword ptr [ESP]               ; 00532741
    MOV ESI,dword ptr [ESP]             ; 00532744
        ;   Label: LAB_00532744
    PUSH ESI                            ; 00532747
    MOV EDI,dword ptr [ESP + 0xc]       ; 00532748
    PUSH EDI                            ; 0053274c
    MOV EBP,dword ptr [ESP + 0xc]       ; 0053274d
    PUSH EBP                            ; 00532751
    MOV EAX,[0x00603b28]                ; 00532752 | g_CDemonSetPtr
    PUSH EAX                            ; 00532757
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100 ; 00532758
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 0053275d
    ADD ESP,0x14                        ; 00532760
    POP EBP                             ; 00532763
    POP EDI                             ; 00532764
    POP ESI                             ; 00532765
    RET                                 ; 00532766
    MOV EDX,dword ptr [ESP + 0x4]       ; 00532767
        ;   Label: LAB_00532767
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053276b
    SUB EAX,EDX                         ; 00532772
    MOV EDX,EAX                         ; 00532774
    SAR EDX,0x1f                        ; 00532776
    SUB EAX,EDX                         ; 00532779
    SAR EAX,0x1                         ; 0053277b
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053277d
    MOV dword ptr [ESP + 0x4],EAX       ; 00532781
    LEA EAX,[EDX*0x4 + 0x0]             ; 00532785
    SUB EAX,EDX                         ; 0053278c
    MOV EDX,EAX                         ; 0053278e
    SAR EDX,0x1f                        ; 00532790
    SUB EAX,EDX                         ; 00532793
    SAR EAX,0x1                         ; 00532795
    MOV EDX,dword ptr [ESP]             ; 00532797
    MOV dword ptr [ESP + 0x8],EAX       ; 0053279a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053279e
    SUB EAX,EDX                         ; 005327a5
    MOV EDX,EAX                         ; 005327a7
    SAR EDX,0x1f                        ; 005327a9
    SUB EAX,EDX                         ; 005327ac
    SAR EAX,0x1                         ; 005327ae
    MOV dword ptr [ESP],EAX             ; 005327b0
    JMP 0x005326e5                      ; 005327b3
        ;   XREF to: 005326e5 (UNCONDITIONAL_JUMP)  ; LAB_005326e5

