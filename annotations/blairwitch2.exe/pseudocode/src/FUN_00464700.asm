; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00464700(int param_1,float *param_2,float param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x108]:4  local_108
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00462ff0 at 0046316b
;
; Referenced Globals:
;   undefined4 DAT_005d10bc
;   undefined4 DAT_006167e0
;
; Called Functions:
;   FUN_00408d70
;   FUN_0040cf60
;   FUN_00449280
;   FUN_00449530
;   FUN_00464a00
;   FUN_004c9850
;   FUN_00547810
;   FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464700
        ;   Label: FUN_00464700
    PUSH ESI                            ; 00464701
    PUSH EDI                            ; 00464702
    PUSH EBP                            ; 00464703
    MOV EBP,ESP                         ; 00464704
    SUB ESP,0xf4                        ; 00464706
    AND ESP,0xfffffff8                  ; 0046470c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046470f
    MOV EBX,dword ptr [EBP + 0x18]      ; 00464712
    MOV dword ptr [ESP],EAX             ; 00464715
    MOV ESI,dword ptr [EBP + 0x14]      ; 00464718
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046471b
    MOV DL,byte ptr [ESI + 0x2514]      ; 0046471e
    ADD EAX,0x2b4                       ; 00464724
    TEST DL,DL                          ; 00464729
    JZ 0x004647ae                       ; 0046472b
        ;   XREF to: 004647ae (CONDITIONAL_JUMP)  ; LAB_004647ae
    PUSH EAX                            ; 00464731
    CALL FUN_00547810                   ; 00464732
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    ADD ESP,0x4                         ; 00464737
    MOV EAX,dword ptr [EAX + 0xc00]     ; 0046473a
    MOV dword ptr [ESP + 0xe8],EAX      ; 00464740
    CMP EAX,0x1                         ; 00464747
    JLE 0x004647ae                      ; 0046474a
        ;   XREF to: 004647ae (CONDITIONAL_JUMP)  ; LAB_004647ae
    FLD float ptr [ESP]                 ; 0046474c
    FLDZ                                ; 0046474f
    FCOMPP                              ; 00464751
    FNSTSW AX                           ; 00464753
    SAHF                                ; 00464755
    JBE 0x0046475f                      ; 00464756
        ;   XREF to: 0046475f (CONDITIONAL_JUMP)  ; LAB_0046475f
    MOV dword ptr [ESP],0x41a00000      ; 00464758
    XOR ECX,ECX                         ; 0046475f
        ;   Label: LAB_0046475f
    MOV ESI,dword ptr [ESP + 0xe8]      ; 00464761
    MOV dword ptr [ESP + 0xec],ECX      ; 00464768
    TEST ESI,ESI                        ; 0046476f
    JLE 0x004647ae                      ; 00464771
        ;   XREF to: 004647ae (CONDITIONAL_JUMP)  ; LAB_004647ae
    TEST EBX,EBX                        ; 00464773
        ;   Label: LAB_00464773
    JNZ 0x004648aa                      ; 00464775
        ;   XREF to: 004648aa (CONDITIONAL_JUMP)  ; LAB_004648aa
    MOV ECX,dword ptr [EBP + 0x20]      ; 0046477b
        ;   Label: LAB_0046477b
    PUSH ECX                            ; 0046477e
    PUSH EBX                            ; 0046477f
    MOV ESI,dword ptr [ESP + 0xf4]      ; 00464780
    PUSH ESI                            ; 00464787
    MOV EDI,dword ptr [EBP + 0x14]      ; 00464788
    PUSH EDI                            ; 0046478b
    CALL FUN_00464a00                   ; 0046478c
        ;   XREF to: 00464a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00464a00()
        ;   Label: LAB_0046478c
    ADD ESP,0x10                        ; 00464791
    MOV EDI,dword ptr [ESP + 0xec]      ; 00464794
    INC EDI                             ; 0046479b
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0046479c
    MOV dword ptr [ESP + 0xec],EDI      ; 004647a3
    CMP EDI,EDX                         ; 004647aa
    JL 0x00464773                       ; 004647ac
        ;   XREF to: 00464773 (CONDITIONAL_JUMP)  ; LAB_00464773
    MOV EDX,dword ptr [EBP + 0x14]      ; 004647ae
        ;   Label: LAB_004647ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 004647b1
    PUSH EDX                            ; 004647b4
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004647b5
    LEA ESI,[ESP + 0x30]                ; 004647bb
    LEA EDI,[ESP + 0x48]                ; 004647bf
    CALL dword ptr [EAX + 0x24]         ; 004647c3
    MOV ECX,0x6                         ; 004647c6
    LEA ESI,[ESP + 0x30]                ; 004647cb
    ADD ESP,0x4                         ; 004647cf
    MOVSD.REP ES:EDI,ESI                ; 004647d2
    FLD float ptr [ESP + 0x44]          ; 004647d4
    FLD float ptr [ESP + 0x48]          ; 004647d8
    LEA ESI,[ESP + 0x44]                ; 004647dc
    FLD float ptr [ESP + 0x4c]          ; 004647e0
    LEA EDI,[ESP + 0x98]                ; 004647e4
    FXCH ST2                            ; 004647eb
    FADD float ptr [ESI + 0xc]          ; 004647ed
    FXCH                                ; 004647f0
    FADD float ptr [ESI + 0x10]         ; 004647f2
    FXCH ST2                            ; 004647f5
    FADD float ptr [ESI + 0x14]         ; 004647f7
    FXCH                                ; 004647fa
    FSTP float ptr [ESP + 0xc8]         ; 004647fc
    FXCH                                ; 00464803
    FSTP float ptr [ESP + 0xcc]         ; 00464805
    LEA ESI,[ESP + 0xc8]                ; 0046480c
    FSTP float ptr [ESP + 0xd0]         ; 00464813
    MOVSD ES:EDI,ESI                    ; 0046481a
    MOVSD ES:EDI,ESI                    ; 0046481b
    MOVSD ES:EDI,ESI                    ; 0046481c
    FLD float ptr [0x005d10bc]          ; 0046481d | DAT_005d10bc
    FLD float ptr [ESP + 0x98]          ; 00464823
    FMUL ST1                            ; 0046482a
    FLD float ptr [ESP + 0x9c]          ; 0046482c
    FMUL ST2                            ; 00464833
    LEA EAX,[ESP + 0x8c]                ; 00464835
    FLD float ptr [ESP + 0xa0]          ; 0046483c
    FMULP ST3                           ; 00464843
    PUSH EAX                            ; 00464845
    MOV ECX,dword ptr [EBP + 0x14]      ; 00464846
    LEA EDI,[ESP + 0x90]                ; 00464849
    LEA ESI,[ESP + 0xc0]                ; 00464850
    FXCH                                ; 00464857
    FSTP float ptr [ESP + 0xc0]         ; 00464859
    FSTP float ptr [ESP + 0xc4]         ; 00464860
    FSTP float ptr [ESP + 0xc8]         ; 00464867
    MOVSD ES:EDI,ESI                    ; 0046486e
    MOVSD ES:EDI,ESI                    ; 0046486f
    MOVSD ES:EDI,ESI                    ; 00464870
    PUSH ECX                            ; 00464871
    LEA ESI,[ESP + 0x64]                ; 00464872
    LEA EDI,[ESP + 0x70]                ; 00464876
    CALL FUN_00408d70                   ; 0046487a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 0046487f
    LEA ESI,[ESP + 0x5c]                ; 00464882
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464886
    MOVSD ES:EDI,ESI                    ; 00464889
    MOVSD ES:EDI,ESI                    ; 0046488a
    MOVSD ES:EDI,ESI                    ; 0046488b
    CMP dword ptr [EAX + 0x10224],0x0   ; 0046488c
    JZ 0x004649d6                       ; 00464893
        ;   XREF to: 004649d6 (CONDITIONAL_JUMP)  ; LAB_004649d6
    MOV dword ptr [EAX + 0x3564],0x0    ; 00464899
    MOV ESP,EBP                         ; 004648a3
    POP EBP                             ; 004648a5
    POP EDI                             ; 004648a6
    POP ESI                             ; 004648a7
    POP EBX                             ; 004648a8
    RET                                 ; 004648a9
    FLD float ptr [ESP]                 ; 004648aa
        ;   Label: LAB_004648aa
    FLDZ                                ; 004648ad
    FCOMPP                              ; 004648af
    FNSTSW AX                           ; 004648b1
    SAHF                                ; 004648b3
    JNC 0x0046477b                      ; 004648b4
        ;   XREF to: 0046477b (CONDITIONAL_JUMP)  ; LAB_0046477b
    PUSH EBX                            ; 004648ba
    LEA ESI,[ESP + 0x78]                ; 004648bb
    LEA EDI,[ESP + 0xb4]                ; 004648bf
    CALL FUN_005838f0                   ; 004648c6
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    ADD ESP,0x4                         ; 004648cb
    LEA ESI,[ESP + 0x74]                ; 004648ce
    PUSH dword ptr [ESP]                ; 004648d2
    FLD float ptr [ESP + 0x4]           ; 004648d5
    FCHS                                ; 004648d9
    FSTP float ptr [ESP + 0xe8]         ; 004648db
    PUSH dword ptr [ESP + 0xe8]         ; 004648e2
    MOVSD ES:EDI,ESI                    ; 004648e9
    MOVSD ES:EDI,ESI                    ; 004648ea
    MOVSD ES:EDI,ESI                    ; 004648eb
    CALL FUN_0040cf60                   ; 004648ec
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xf8],EAX      ; 004648f1
    FLD float ptr [ESP + 0xf8]          ; 004648f8
    ADD ESP,0x8                         ; 004648ff
    PUSH dword ptr [ESP]                ; 00464902
    FADD float ptr [ESP + 0xb8]         ; 00464905
    PUSH dword ptr [ESP + 0xe8]         ; 0046490c
    FSTP float ptr [ESP + 0xbc]         ; 00464913
    CALL FUN_0040cf60                   ; 0046491a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xf8],EAX      ; 0046491f
    FLD float ptr [ESP + 0xf8]          ; 00464926
    ADD ESP,0x8                         ; 0046492d
    LEA ESI,[ESP + 0xb0]                ; 00464930
    PUSH ESI                            ; 00464937
    LEA ESI,[ESP + 0x8]                 ; 00464938
    FADD float ptr [ESP + 0xb4]         ; 0046493c
    PUSH ESI                            ; 00464943
    FSTP float ptr [ESP + 0xb8]         ; 00464944
    CALL FUN_00449280                   ; 0046494b
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    FLD float ptr [EBX + 0x4]           ; 00464950
    FMUL ST0                            ; 00464953
    FLD float ptr [EBX]                 ; 00464955
    FMUL ST0                            ; 00464957
    FADDP                               ; 00464959
    FLD float ptr [EBX + 0x8]           ; 0046495b
    FMUL ST0                            ; 0046495e
    FADDP                               ; 00464960
    ADD ESP,0x8                         ; 00464962
    FSQRT                               ; 00464965
    LEA ESI,[ESP + 0xa4]                ; 00464967
    LEA EDI,[ESP + 0x80]                ; 0046496e
    PUSH ESI                            ; 00464975
    LEA ESI,[ESP + 0x8]                 ; 00464976
    XOR ECX,ECX                         ; 0046497a
    PUSH ESI                            ; 0046497c
    LEA ESI,[ESP + 0xdc]                ; 0046497d
    MOV dword ptr [ESP + 0xac],ECX      ; 00464984
    FSTP float ptr [ESP + 0xe8]         ; 0046498b
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00464992
    MOV dword ptr [ESP + 0xb0],ECX      ; 00464999
    MOV dword ptr [ESP + 0xb4],EAX      ; 004649a0
    CALL FUN_00449530                   ; 004649a7
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0xdc]                ; 004649ac
    ADD ESP,0x8                         ; 004649b3
    MOVSD ES:EDI,ESI                    ; 004649b6
    MOVSD ES:EDI,ESI                    ; 004649b7
    MOVSD ES:EDI,ESI                    ; 004649b8
    MOV EDI,dword ptr [EBP + 0x20]      ; 004649b9
    PUSH EDI                            ; 004649bc
    LEA ESI,[ESP + 0x84]                ; 004649bd
    PUSH ESI                            ; 004649c4
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004649c5
    PUSH EAX                            ; 004649cc
    MOV EDX,dword ptr [EBP + 0x14]      ; 004649cd
    PUSH EDX                            ; 004649d0
    JMP 0x0046478c                      ; 004649d1
        ;   XREF to: 0046478c (UNCONDITIONAL_JUMP)  ; LAB_0046478c
    MOV EDI,dword ptr [EAX + 0x280c]    ; 004649d6
        ;   Label: LAB_004649d6
    PUSH EDI                            ; 004649dc
    PUSH 0x64                           ; 004649dd
    PUSH EBX                            ; 004649df
    LEA EAX,[ESP + 0x74]                ; 004649e0
    PUSH EAX                            ; 004649e4
    MOV EAX,[0x006167e0]                ; 004649e5 | DAT_006167e0
    PUSH EAX                            ; 004649ea
    CALL FUN_004c9850                   ; 004649eb
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9850()
    ADD ESP,0x14                        ; 004649f0
    MOV ESP,EBP                         ; 004649f3
    POP EBP                             ; 004649f5
    POP EDI                             ; 004649f6
    POP ESI                             ; 004649f7
    POP EBX                             ; 004649f8
    RET                                 ; 004649f9

