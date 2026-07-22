; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00403780(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   string s_..\\engine\\2d.c_00577296
;   string s_draw320x200SizeDot:_unknown_grap_005772a5
;   undefined4 DAT_005b7620
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401530
;   engine_2d.c_project3DPointToScreen_FUN_00401da0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403780
        ;   Label: engine_2d.c_FUN_00403780
    PUSH ESI                            ; 00403781
    PUSH EDI                            ; 00403782
    PUSH EBP                            ; 00403783
    MOV EAX,dword ptr [ESP + 0x14]      ; 00403784
    MOV ESI,dword ptr [ESP + 0x18]      ; 00403788
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0040378c
    TEST ECX,ECX                        ; 00403790
    JLE 0x004037d1                      ; 00403792
        ;   XREF to: 004037d1 (CONDITIONAL_JUMP)  ; LAB_004037d1
    CMP EAX,ECX                         ; 00403794
    JG 0x004037d1                       ; 00403796
        ;   XREF to: 004037d1 (CONDITIONAL_JUMP)  ; LAB_004037d1
    MOV EDX,ECX                         ; 00403798
    NEG EDX                             ; 0040379a
    CMP EAX,EDX                         ; 0040379c
    JL 0x004037d1                       ; 0040379e
        ;   XREF to: 004037d1 (CONDITIONAL_JUMP)  ; LAB_004037d1
    CMP ESI,ECX                         ; 004037a0
    JG 0x004037d1                       ; 004037a2
        ;   XREF to: 004037d1 (CONDITIONAL_JUMP)  ; LAB_004037d1
    CMP ESI,EDX                         ; 004037a4
    JL 0x004037d1                       ; 004037a6
        ;   XREF to: 004037d1 (CONDITIONAL_JUMP)  ; LAB_004037d1
    MOV EDI,dword ptr [0x005b7620]      ; 004037a8 | DAT_005b7620
    CMP EDI,0x190                       ; 004037ae
    JNC 0x004038c4                      ; 004037b4
        ;   XREF to: 004038c4 (CONDITIONAL_JUMP)  ; LAB_004038c4
    CMP EDI,0xc8                        ; 004037ba
    JNZ 0x004038d6                      ; 004037c0
        ;   XREF to: 004038d6 (CONDITIONAL_JUMP)  ; LAB_004038d6
    PUSH ECX                            ; 004037c6
    PUSH ESI                            ; 004037c7
    PUSH EAX                            ; 004037c8
    CALL engine_2d.c_project3DPointToScreen_FUN_00401da0 ; 004037c9
        ;   XREF to: 00401da0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_project3DPointToScreen_FUN_00401da0()
    ADD ESP,0xc                         ; 004037ce
    POP EBP                             ; 004037d1
        ;   Label: LAB_004037d1
    POP EDI                             ; 004037d2
    POP ESI                             ; 004037d3
    POP EBX                             ; 004037d4
    RET                                 ; 004037d5
    MOV EDX,dword ptr [0x01c00c48]      ; 004037d6 | DAT_01c00c48
        ;   Label: LAB_004037d6
    MOV EBX,ECX                         ; 004037dc
    IMUL EDX                            ; 004037de
    IDIV EBX                            ; 004037e0
    MOV EBX,dword ptr [0x01c00c50]      ; 004037e2 | DAT_01c00c50
    MOV EDX,dword ptr [0x01c00c4c]      ; 004037e8 | DAT_01c00c4c
    LEA EDI,[EAX + EBX*0x1]             ; 004037ee
    MOV EBX,ECX                         ; 004037f1
    MOV EAX,ESI                         ; 004037f3
    IMUL EDX                            ; 004037f5
    IDIV EBX                            ; 004037f7
    MOV ESI,dword ptr [0x01c00c54]      ; 004037f9 | DAT_01c00c54
    ADD ESI,EAX                         ; 004037ff
    SAR EDI,0x10                        ; 00403801
    SAR ESI,0x10                        ; 00403804
    TEST EDI,EDI                        ; 00403807
    JL 0x004037d1                       ; 00403809
        ;   XREF to: 004037d1 (CONDITIONAL_JUMP)  ; LAB_004037d1
    CMP EDI,0x13f                       ; 0040380b
    JG 0x004037d1                       ; 00403811
        ;   XREF to: 004037d1 (CONDITIONAL_JUMP)  ; LAB_004037d1
    TEST ESI,ESI                        ; 00403813
    JL 0x004037d1                       ; 00403815
        ;   XREF to: 004037d1 (CONDITIONAL_JUMP)  ; LAB_004037d1
    CMP ESI,0x18e                       ; 00403817
    JG 0x004037d1                       ; 0040381d
        ;   XREF to: 004037d1 (CONDITIONAL_JUMP)  ; LAB_004037d1
    PUSH ESI                            ; 0040381f
    PUSH EDI                            ; 00403820
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 00403821
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_plotPixel_FUN_00401530()
    ADD ESP,0x8                         ; 00403826
    INC ESI                             ; 00403829
    PUSH ESI                            ; 0040382a
    PUSH EDI                            ; 0040382b
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 0040382c
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_plotPixel_FUN_00401530()
    ADD ESP,0x8                         ; 00403831
    POP EBP                             ; 00403834
    POP EDI                             ; 00403835
    POP ESI                             ; 00403836
    POP EBX                             ; 00403837
    RET                                 ; 00403838
    MOV EDX,dword ptr [0x01c00c48]      ; 00403839 | DAT_01c00c48
        ;   Label: LAB_00403839
    MOV EBX,ECX                         ; 0040383f
    IMUL EDX                            ; 00403841
    IDIV EBX                            ; 00403843
    MOV EDX,dword ptr [0x01c00c50]      ; 00403845 | DAT_01c00c50
    MOV EBX,ECX                         ; 0040384b
    LEA EDI,[EAX + EDX*0x1]             ; 0040384d
    MOV EDX,dword ptr [0x01c00c4c]      ; 00403850 | DAT_01c00c4c
    MOV EAX,ESI                         ; 00403856
    IMUL EDX                            ; 00403858
    IDIV EBX                            ; 0040385a
    MOV ECX,dword ptr [0x01c00c54]      ; 0040385c | DAT_01c00c54
    LEA ESI,[EAX + ECX*0x1]             ; 00403862
    SAR EDI,0x10                        ; 00403865
    SAR ESI,0x10                        ; 00403868
    TEST EDI,EDI                        ; 0040386b
    JL 0x004037d1                       ; 0040386d
        ;   XREF to: 004037d1 (CONDITIONAL_JUMP)  ; LAB_004037d1
    CMP EDI,0x27e                       ; 00403873
    JG 0x004037d1                       ; 00403879
        ;   XREF to: 004037d1 (CONDITIONAL_JUMP)  ; LAB_004037d1
    TEST ESI,ESI                        ; 0040387f
    JL 0x004037d1                       ; 00403881
        ;   XREF to: 004037d1 (CONDITIONAL_JUMP)  ; LAB_004037d1
    CMP ESI,0x1de                       ; 00403887
    JG 0x004037d1                       ; 0040388d
        ;   XREF to: 004037d1 (CONDITIONAL_JUMP)  ; LAB_004037d1
    PUSH ESI                            ; 00403893
    PUSH EDI                            ; 00403894
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 00403895
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_plotPixel_FUN_00401530()
    ADD ESP,0x8                         ; 0040389a
    PUSH ESI                            ; 0040389d
    LEA EBX,[EDI + 0x1]                 ; 0040389e
    PUSH EBX                            ; 004038a1
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 004038a2
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_plotPixel_FUN_00401530()
    ADD ESP,0x8                         ; 004038a7
    INC ESI                             ; 004038aa
    PUSH ESI                            ; 004038ab
    PUSH EBX                            ; 004038ac
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 004038ad
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_plotPixel_FUN_00401530()
    ADD ESP,0x8                         ; 004038b2
    PUSH ESI                            ; 004038b5
    PUSH EDI                            ; 004038b6
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 004038b7
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_plotPixel_FUN_00401530()
    ADD ESP,0x8                         ; 004038bc
    POP EBP                             ; 004038bf
    POP EDI                             ; 004038c0
    POP ESI                             ; 004038c1
    POP EBX                             ; 004038c2
    RET                                 ; 004038c3
    JBE 0x004037d6                      ; 004038c4
        ;   XREF to: 004037d6 (CONDITIONAL_JUMP)  ; LAB_004037d6
        ;   Label: LAB_004038c4
    CMP EDI,0x1e0                       ; 004038ca
    JZ 0x00403839                       ; 004038d0
        ;   XREF to: 00403839 (CONDITIONAL_JUMP)  ; LAB_00403839
    MOV EDI,0x577296                    ; 004038d6 | = "..\\engine\\2d.c"
        ;   Label: LAB_004038d6
    MOV EBP,0x7dd                       ; 004038db
    PUSH 0x5772a5                       ; 004038e0 | = "draw320x200SizeDot: unknown graphics ..."
    MOV dword ptr [0x01cc4800],EDI      ; 004038e5 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004038eb | DAT_01cc4804
    CALL FUN_004c8440                   ; 004038f1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004038f6
    POP EBP                             ; 004038f9
    POP EDI                             ; 004038fa
    POP ESI                             ; 004038fb
    POP EBX                             ; 004038fc
    RET                                 ; 004038fd

