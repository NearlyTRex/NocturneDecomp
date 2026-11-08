; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00560760(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005eb00c
;   undefined4 DAT_006141f0
;
; Called Functions:
;   FUN_00408cf0
;   FUN_0040cf60
;   FUN_0048e340
;   FUN_00560cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560760
        ;   Label: FUN_00560760
    PUSH ESI                            ; 00560761
    PUSH EDI                            ; 00560762
    PUSH EBP                            ; 00560763
    SUB ESP,0x58                        ; 00560764
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00560767
    MOV EDX,dword ptr [EBX + 0x430]     ; 0056076b
    TEST EDX,EDX                        ; 00560771
    JZ 0x0056077e                       ; 00560773
        ;   XREF to: 0056077e (CONDITIONAL_JUMP)  ; LAB_0056077e
    CMP EDX,0x1                         ; 00560775
    JNZ 0x005608fc                      ; 00560778
        ;   XREF to: 005608fc (CONDITIONAL_JUMP)  ; LAB_005608fc
    LEA EAX,[EBX + 0x44c]               ; 0056077e
        ;   Label: LAB_0056077e
    PUSH EAX                            ; 00560784
    MOV EBP,dword ptr [0x006141f0]      ; 00560785 | DAT_006141f0
    PUSH EBP                            ; 0056078b
    CALL FUN_0048e340                   ; 0056078c
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 00560791
    TEST EAX,EAX                        ; 00560794
    JZ 0x005607a2                       ; 00560796
        ;   XREF to: 005607a2 (CONDITIONAL_JUMP)  ; LAB_005607a2
    MOV dword ptr [EBX + 0x438],0x1     ; 00560798
    LEA EAX,[EBX + 0x4b0]               ; 005607a2
        ;   Label: LAB_005607a2
    PUSH EAX                            ; 005607a8
    MOV EAX,[0x006141f0]                ; 005607a9 | DAT_006141f0
    PUSH EAX                            ; 005607ae
    CALL FUN_0048e340                   ; 005607af
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 005607b4
    TEST EAX,EAX                        ; 005607b7
    JZ 0x00560949                       ; 005607b9
        ;   XREF to: 00560949 (CONDITIONAL_JUMP)  ; LAB_00560949
    MOV dword ptr [EBX + 0x438],0x0     ; 005607bf
    MOV ECX,dword ptr [EBX + 0x434]     ; 005607c9
        ;   Label: LAB_005607c9
    TEST ECX,ECX                        ; 005607cf
    JZ 0x005608f4                       ; 005607d1
        ;   XREF to: 005608f4 (CONDITIONAL_JUMP)  ; LAB_005608f4
    CMP ECX,0x2                         ; 005607d7
    JNZ 0x005607e6                      ; 005607da
        ;   XREF to: 005607e6 (CONDITIONAL_JUMP)  ; LAB_005607e6
    MOV dword ptr [EBX + 0x434],0x3     ; 005607dc
    FLD float ptr [EBX + 0x5e4]         ; 005607e6
        ;   Label: LAB_005607e6
    FSUB float ptr [ESP + 0x70]         ; 005607ec
    FST float ptr [EBX + 0x5e4]         ; 005607f0
    FLDZ                                ; 005607f6
    FCOMPP                              ; 005607f8
    FNSTSW AX                           ; 005607fa
    SAHF                                ; 005607fc
    JC 0x005608f4                       ; 005607fd
        ;   XREF to: 005608f4 (CONDITIONAL_JUMP)  ; LAB_005608f4
    MOV EDI,dword ptr [EBX + 0x434]     ; 00560803
    MOV dword ptr [EBX + 0x5e4],0x0     ; 00560809
    TEST EDI,EDI                        ; 00560813
    JNZ 0x0056095b                      ; 00560815
        ;   XREF to: 0056095b (CONDITIONAL_JUMP)  ; LAB_0056095b
    MOV dword ptr [EBX + 0x434],0x1     ; 0056081b
    MOV dword ptr [EBX + 0x6b8],EDI     ; 00560825
    LEA EDI,[ESP + 0x18]                ; 0056082b
        ;   Label: LAB_0056082b
    LEA ESI,[EBX + 0x20]                ; 0056082f
    MOVSD ES:EDI,ESI                    ; 00560832
    MOVSD ES:EDI,ESI                    ; 00560833
    MOVSD ES:EDI,ESI                    ; 00560834
    FLD float ptr [EBX + 0x448]         ; 00560835
    FMUL float ptr [EBX + 0x6b8]        ; 0056083b
    XOR EAX,EAX                         ; 00560841
    FSTP float ptr [ESP + 0x54]         ; 00560843
    MOV dword ptr [ESP + 0x30],EAX      ; 00560847
    MOV dword ptr [ESP + 0x34],EAX      ; 0056084b
    MOV EAX,dword ptr [ESP + 0x54]      ; 0056084f
    MOV dword ptr [ESP + 0x38],EAX      ; 00560853
    LEA EAX,[ESP + 0x30]                ; 00560857
    PUSH EAX                            ; 0056085b
    PUSH EBX                            ; 0056085c
    LEA ESI,[ESP + 0x2c]                ; 0056085d
    LEA EDI,[ESP + 0x8]                 ; 00560861
    CALL FUN_00408cf0                   ; 00560865
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    LEA ESI,[ESP + 0x2c]                ; 0056086a
    ADD ESP,0x8                         ; 0056086e
    LEA EAX,[EBX + 0x43c]               ; 00560871
    MOVSD ES:EDI,ESI                    ; 00560877
    MOVSD ES:EDI,ESI                    ; 00560878
    MOVSD ES:EDI,ESI                    ; 00560879
    FLD float ptr [EAX]                 ; 0056087a
    FLD float ptr [EAX + 0x4]           ; 0056087c
    FLD float ptr [EAX + 0x8]           ; 0056087f
    LEA EDI,[ESP + 0xc]                 ; 00560882
    LEA ESI,[ESP + 0x3c]                ; 00560886
    FXCH ST2                            ; 0056088a
    FADD float ptr [ESP]                ; 0056088c
    FXCH                                ; 0056088f
    FADD float ptr [ESP + 0x4]          ; 00560891
    FXCH ST2                            ; 00560895
    FADD float ptr [ESP + 0x8]          ; 00560897
    FXCH                                ; 0056089b
    FSTP float ptr [ESP + 0x3c]         ; 0056089d
    FXCH                                ; 005608a1
    FSTP float ptr [ESP + 0x40]         ; 005608a3
    FSTP float ptr [ESP + 0x44]         ; 005608a7
    MOVSD ES:EDI,ESI                    ; 005608ab
    MOVSD ES:EDI,ESI                    ; 005608ac
    MOVSD ES:EDI,ESI                    ; 005608ad
    LEA EDX,[EBX + 0x20]                ; 005608ae
    MOV EAX,dword ptr [ESP + 0xc]       ; 005608b1
    FLD float ptr [ESP + 0x18]          ; 005608b5
    MOV dword ptr [EDX],EAX             ; 005608b9
    MOV EAX,dword ptr [ESP + 0x10]      ; 005608bb
    FSUB float ptr [EDX]                ; 005608bf
    FMUL ST0                            ; 005608c1
    MOV dword ptr [EDX + 0x4],EAX       ; 005608c3
    FLD float ptr [ESP + 0x1c]          ; 005608c6
    FSUB float ptr [EDX + 0x4]          ; 005608ca
    FMUL ST0                            ; 005608cd
    MOV EAX,dword ptr [ESP + 0x14]      ; 005608cf
    FLD float ptr [ESP + 0x20]          ; 005608d3
    MOV dword ptr [EDX + 0x8],EAX       ; 005608d7
    FXCH                                ; 005608da
    FADDP ST2,ST0                       ; 005608dc
    FSUB float ptr [EDX + 0x8]          ; 005608de
    FMUL ST0                            ; 005608e1
    FADDP                               ; 005608e3
    FCOMP double ptr [0x005eb00c]       ; 005608e5 | DAT_005eb00c
    FNSTSW AX                           ; 005608eb
    SAHF                                ; 005608ed
    JA 0x00560a7d                       ; 005608ee
        ;   XREF to: 00560a7d (CONDITIONAL_JUMP)  ; LAB_00560a7d
    ADD ESP,0x58                        ; 005608f4
        ;   Label: LAB_005608f4
    POP EBP                             ; 005608f7
    POP EDI                             ; 005608f8
    POP ESI                             ; 005608f9
    POP EBX                             ; 005608fa
    RET                                 ; 005608fb
    LEA EAX,[EBX + 0x514]               ; 005608fc
        ;   Label: LAB_005608fc
    PUSH EAX                            ; 00560902
    MOV ESI,dword ptr [0x006141f0]      ; 00560903 | DAT_006141f0
    PUSH ESI                            ; 00560909
    CALL FUN_0048e340                   ; 0056090a
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 0056090f
    TEST EAX,EAX                        ; 00560912
    JZ 0x00560920                       ; 00560914
        ;   XREF to: 00560920 (CONDITIONAL_JUMP)  ; LAB_00560920
    MOV dword ptr [EBX + 0x438],0x1     ; 00560916
    LEA EAX,[EBX + 0x578]               ; 00560920
        ;   Label: LAB_00560920
    PUSH EAX                            ; 00560926
    MOV EDI,dword ptr [0x006141f0]      ; 00560927 | DAT_006141f0
    PUSH EDI                            ; 0056092d
    CALL FUN_0048e340                   ; 0056092e
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 00560933
    TEST EAX,EAX                        ; 00560936
    JZ 0x00560949                       ; 00560938
        ;   XREF to: 00560949 (CONDITIONAL_JUMP)  ; LAB_00560949
    MOV dword ptr [EBX + 0x438],0x1     ; 0056093a
    JMP 0x005607e6                      ; 00560944
        ;   XREF to: 005607e6 (UNCONDITIONAL_JUMP)  ; LAB_005607e6
    CMP dword ptr [EBX + 0x438],0x0     ; 00560949
        ;   Label: LAB_00560949
    JZ 0x005607c9                       ; 00560950
        ;   XREF to: 005607c9 (CONDITIONAL_JUMP)  ; LAB_005607c9
    JMP 0x005607e6                      ; 00560956
        ;   XREF to: 005607e6 (UNCONDITIONAL_JUMP)  ; LAB_005607e6
    CMP EDI,0x1                         ; 0056095b
        ;   Label: LAB_0056095b
    JNZ 0x005609f6                      ; 0056095e
        ;   XREF to: 005609f6 (CONDITIONAL_JUMP)  ; LAB_005609f6
    FLD float ptr [ESP + 0x70]          ; 00560964
    FDIV float ptr [EBX + 0x5dc]        ; 00560968
    FADD float ptr [EBX + 0x6b8]        ; 0056096e
    FST float ptr [EBX + 0x6b8]         ; 00560974
    FLD1                                ; 0056097a
    FCOMPP                              ; 0056097c
    FNSTSW AX                           ; 0056097e
    SAHF                                ; 00560980
    JNC 0x0056082b                      ; 00560981
        ;   XREF to: 0056082b (CONDITIONAL_JUMP)  ; LAB_0056082b
    MOV dword ptr [EBX + 0x434],0x2     ; 00560987
    MOV EDI,dword ptr [EBX + 0x430]     ; 00560991
    MOV dword ptr [EBX + 0x6b8],0x3f800000 ; 00560997
    CMP EDI,0x2                         ; 005609a1
    JZ 0x005609bc                       ; 005609a4
        ;   XREF to: 005609bc (CONDITIONAL_JUMP)  ; LAB_005609bc
    CMP EDI,0x1                         ; 005609a6
    JZ 0x005609cb                       ; 005609a9
        ;   XREF to: 005609cb (CONDITIONAL_JUMP)  ; LAB_005609cb
    MOV EAX,dword ptr [EBX + 0x6b0]     ; 005609ab
    MOV dword ptr [EBX + 0x5e4],EAX     ; 005609b1
    JMP 0x0056082b                      ; 005609b7
        ;   XREF to: 0056082b (UNCONDITIONAL_JUMP)  ; LAB_0056082b
    MOV dword ptr [EBX + 0x438],0x0     ; 005609bc
        ;   Label: LAB_005609bc
    JMP 0x0056082b                      ; 005609c6
        ;   XREF to: 0056082b (UNCONDITIONAL_JUMP)  ; LAB_0056082b
    PUSH 0x3fa00000                     ; 005609cb
        ;   Label: LAB_005609cb
    PUSH 0x3f400000                     ; 005609d0
    CALL FUN_0040cf60                   ; 005609d5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x5c],EAX      ; 005609da
    FLD float ptr [ESP + 0x5c]          ; 005609de
    FMUL float ptr [EBX + 0x6b0]        ; 005609e2
    ADD ESP,0x8                         ; 005609e8
    FSTP float ptr [EBX + 0x5e4]        ; 005609eb
    JMP 0x0056082b                      ; 005609f1
        ;   XREF to: 0056082b (UNCONDITIONAL_JUMP)  ; LAB_0056082b
    CMP EDI,0x2                         ; 005609f6
        ;   Label: LAB_005609f6
    JNZ 0x00560a14                      ; 005609f9
        ;   XREF to: 00560a14 (CONDITIONAL_JUMP)  ; LAB_00560a14
    MOV dword ptr [EBX + 0x6b8],0x3f800000 ; 005609fb
    MOV dword ptr [EBX + 0x434],0x3     ; 00560a05
    JMP 0x0056082b                      ; 00560a0f
        ;   XREF to: 0056082b (UNCONDITIONAL_JUMP)  ; LAB_0056082b
    CMP EDI,0x3                         ; 00560a14
        ;   Label: LAB_00560a14
    JNZ 0x0056082b                      ; 00560a17
        ;   XREF to: 0056082b (CONDITIONAL_JUMP)  ; LAB_0056082b
    FLD float ptr [ESP + 0x70]          ; 00560a1d
    FDIV float ptr [EBX + 0x5e0]        ; 00560a21
    FSUBR float ptr [EBX + 0x6b8]       ; 00560a27
    FST float ptr [EBX + 0x6b8]         ; 00560a2d
    FLDZ                                ; 00560a33
    FCOMPP                              ; 00560a35
    FNSTSW AX                           ; 00560a37
    SAHF                                ; 00560a39
    JBE 0x0056082b                      ; 00560a3a
        ;   XREF to: 0056082b (CONDITIONAL_JUMP)  ; LAB_0056082b
    MOV dword ptr [EBX + 0x434],0x0     ; 00560a40
    MOV ECX,dword ptr [EBX + 0x430]     ; 00560a4a
    MOV dword ptr [EBX + 0x6b8],0x0     ; 00560a50
    CMP ECX,0x2                         ; 00560a5a
    JZ 0x005609bc                       ; 00560a5d
        ;   XREF to: 005609bc (CONDITIONAL_JUMP)  ; LAB_005609bc
    CMP ECX,0x1                         ; 00560a63
    JZ 0x005609cb                       ; 00560a66
        ;   XREF to: 005609cb (CONDITIONAL_JUMP)  ; LAB_005609cb
    MOV EAX,dword ptr [EBX + 0x6b0]     ; 00560a6c
    MOV dword ptr [EBX + 0x5e4],EAX     ; 00560a72
    JMP 0x0056082b                      ; 00560a78
        ;   XREF to: 0056082b (UNCONDITIONAL_JUMP)  ; LAB_0056082b
    PUSH EBX                            ; 00560a7d
        ;   Label: LAB_00560a7d
    CALL FUN_00560cb0                   ; 00560a7e
        ;   XREF to: 00560cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00560cb0()
    ADD ESP,0x4                         ; 00560a83
    ADD ESP,0x58                        ; 00560a86
    POP EBP                             ; 00560a89
    POP EDI                             ; 00560a8a
    POP ESI                             ; 00560a8b
    POP EBX                             ; 00560a8c
    RET                                 ; 00560a8d

