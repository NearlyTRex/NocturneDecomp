; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00428810(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00428a80 at 00428a99
;
; Referenced Globals:
;   undefined1* switchdataD_004287f4 = 0042884d
;   TerminatedCString s_limb_wav_005b7e27
;   undefined4 DAT_005b7e37
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d21320
;   undefined4 DAT_01d21510
;
; Called Functions:
;   FUN_0040cf40
;   FUN_00414550
;   FUN_004157c0
;   FUN_00430520
;   FUN_00430590
;   FUN_00434810
;   FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428810
        ;   Label: FUN_00428810
    PUSH ESI                            ; 00428811
    PUSH EDI                            ; 00428812
    PUSH EBP                            ; 00428813
    SUB ESP,0xc                         ; 00428814
    MOV EBX,dword ptr [ESP + 0x20]      ; 00428817
    MOV ESI,dword ptr [ESP + 0x24]      ; 0042881b
    FLD float ptr [ESI + 0x2c]          ; 0042881f
    FLDZ                                ; 00428822
    FCOMPP                              ; 00428824
    FNSTSW AX                           ; 00428826
    SAHF                                ; 00428828
    JNC 0x00428855                      ; 00428829
        ;   XREF to: 00428855 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0042882b
    JNZ 0x00428855                      ; 0042882e
        ;   XREF to: 00428855 (CONDITIONAL_JUMP)  ; default
    CALL FUN_005a35cc                   ; 00428830
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
    MOV EDX,EAX                         ; 00428835
    MOV EDI,0x6                         ; 00428837
    SAR EDX,0x1f                        ; 0042883c
    IDIV EDI                            ; 0042883f
    CMP EDX,0x5                         ; 00428841
    JA 0x00428855                       ; 00428844
        ;   XREF to: 00428855 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4287f4]  ; 00428846 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xd0a4]    ; 0042884d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 00428853
        ;   Label: LAB_00428853
    MOV ECX,dword ptr [EBX + 0xd0a4]    ; 00428855
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0042885b
    CMP EAX,ECX                         ; 0042885d
    JNZ 0x00428909                      ; 0042885f
        ;   XREF to: 00428909 (CONDITIONAL_JUMP)  ; LAB_00428909
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00428865
        ;   Label: LAB_00428865
    MOV EBP,dword ptr [EBX + 0xd0bc]    ; 00428868
    MOV dword ptr [ESP + 0x8],EAX       ; 0042886e
    CMP EBP,dword ptr [ESI]             ; 00428872
    JNZ 0x0042887e                      ; 00428874
        ;   XREF to: 0042887e (CONDITIONAL_JUMP)  ; LAB_0042887e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 00428876
    MOV EDX,dword ptr [EBX + 0xd0b8]    ; 0042887e
        ;   Label: LAB_0042887e
    CMP EDX,dword ptr [ESI]             ; 00428884
    JNZ 0x00428890                      ; 00428886
        ;   XREF to: 00428890 (CONDITIONAL_JUMP)  ; LAB_00428890
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 00428888
    MOV EAX,[0x005fe9dc]                ; 00428890 | DAT_005fe9dc
        ;   Label: LAB_00428890
    CMP dword ptr [EAX + 0x204],0x0     ; 00428895 | DAT_01d21510
    JZ 0x004288a6                       ; 0042889c
        ;   XREF to: 004288a6 (CONDITIONAL_JUMP)  ; LAB_004288a6
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0042889e
    MOV EAX,[0x005fe9dc]                ; 004288a6 | DAT_005fe9dc
        ;   Label: LAB_004288a6
    MOV EDX,dword ptr [EAX + 0x14]      ; 004288ab | DAT_01d21320
    TEST EDX,EDX                        ; 004288ae
    JNZ 0x004288b6                      ; 004288b0
        ;   XREF to: 004288b6 (CONDITIONAL_JUMP)  ; LAB_004288b6
    MOV dword ptr [ESP + 0x8],EDX       ; 004288b2
    PUSH dword ptr [ESP + 0x8]          ; 004288b6
        ;   Label: LAB_004288b6
    CALL FUN_0040cf40                   ; 004288ba
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf40()
    ADD ESP,0x4                         ; 004288bf
    TEST EAX,EAX                        ; 004288c2
    JNZ 0x0042894d                      ; 004288c4
        ;   XREF to: 0042894d (CONDITIONAL_JUMP)  ; LAB_0042894d
    ADD ESP,0xc                         ; 004288ca
        ;   Label: LAB_004288ca
    POP EBP                             ; 004288cd
    POP EDI                             ; 004288ce
    POP ESI                             ; 004288cf
    POP EBX                             ; 004288d0
    RET                                 ; 004288d1
    MOV EAX,dword ptr [EBX + 0xd0a8]    ; 004288d2
        ;   Label: caseD_1
    JMP 0x00428853                      ; 004288d8
        ;   XREF to: 00428853 (UNCONDITIONAL_JUMP)  ; LAB_00428853
    MOV EAX,dword ptr [EBX + 0xd0ac]    ; 004288dd
        ;   Label: caseD_2
    JMP 0x00428853                      ; 004288e3
        ;   XREF to: 00428853 (UNCONDITIONAL_JUMP)  ; LAB_00428853
    MOV EAX,dword ptr [EBX + 0xd0b0]    ; 004288e8
        ;   Label: caseD_3
    JMP 0x00428853                      ; 004288ee
        ;   XREF to: 00428853 (UNCONDITIONAL_JUMP)  ; LAB_00428853
    MOV EAX,dword ptr [EBX + 0xd0bc]    ; 004288f3
        ;   Label: caseD_4
    JMP 0x00428853                      ; 004288f9
        ;   XREF to: 00428853 (UNCONDITIONAL_JUMP)  ; LAB_00428853
    MOV EAX,dword ptr [EBX + 0xd0b8]    ; 004288fe
        ;   Label: caseD_5
    JMP 0x00428853                      ; 00428904
        ;   XREF to: 00428853 (UNCONDITIONAL_JUMP)  ; LAB_00428853
    CMP EAX,dword ptr [EBX + 0xd0a8]    ; 00428909
        ;   Label: LAB_00428909
    JZ 0x00428865                       ; 0042890f
        ;   XREF to: 00428865 (CONDITIONAL_JUMP)  ; LAB_00428865
    CMP EAX,dword ptr [EBX + 0xd0ac]    ; 00428915
    JZ 0x00428865                       ; 0042891b
        ;   XREF to: 00428865 (CONDITIONAL_JUMP)  ; LAB_00428865
    CMP EAX,dword ptr [EBX + 0xd0b0]    ; 00428921
    JZ 0x00428865                       ; 00428927
        ;   XREF to: 00428865 (CONDITIONAL_JUMP)  ; LAB_00428865
    CMP EAX,dword ptr [EBX + 0xd0b8]    ; 0042892d
    JZ 0x00428865                       ; 00428933
        ;   XREF to: 00428865 (CONDITIONAL_JUMP)  ; LAB_00428865
    CMP EAX,dword ptr [EBX + 0xd0bc]    ; 00428939
    JZ 0x00428865                       ; 0042893f
        ;   XREF to: 00428865 (CONDITIONAL_JUMP)  ; LAB_00428865
    ADD ESP,0xc                         ; 00428945
    POP EBP                             ; 00428948
    POP EDI                             ; 00428949
    POP ESI                             ; 0042894a
    POP EBX                             ; 0042894b
    RET                                 ; 0042894c
    PUSH 0x0                            ; 0042894d
        ;   Label: LAB_0042894d
    PUSH 0x0                            ; 0042894f
    PUSH 0x0                            ; 00428951
    PUSH EBX                            ; 00428953
    LEA EAX,[ESI + 0xc]                 ; 00428954
    PUSH EAX                            ; 00428957
    LEA EAX,[EBX + 0x30]                ; 00428958
    PUSH EAX                            ; 0042895b
    LEA EAX,[EBX + 0x20]                ; 0042895c
    PUSH EAX                            ; 0042895f
    CALL FUN_00414550                   ; 00428960
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; undefined FUN_00414550()
    ADD ESP,0x1c                        ; 00428965
    MOV EDI,EAX                         ; 00428968
    PUSH 0x1                            ; 0042896a
    MOV EBP,EAX                         ; 0042896c
    MOV EAX,dword ptr [ESI]             ; 0042896e
    PUSH EAX                            ; 00428970
    PUSH EDI                            ; 00428971
    PUSH EBX                            ; 00428972
    CALL FUN_00430590                   ; 00428973
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    MOV EAX,dword ptr [ESI]             ; 00428978
    MOV EDX,dword ptr [EBX + 0xd0a4]    ; 0042897a
    ADD ESP,0x10                        ; 00428980
    CMP EAX,EDX                         ; 00428983
    JNZ 0x0042899a                      ; 00428985
        ;   XREF to: 0042899a (CONDITIONAL_JUMP)  ; LAB_0042899a
    PUSH 0x1                            ; 00428987
    MOV ECX,dword ptr [EBX + 0xd0a8]    ; 00428989
    PUSH ECX                            ; 0042898f
    PUSH EDI                            ; 00428990
    PUSH EBX                            ; 00428991
    CALL FUN_00430590                   ; 00428992
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    ADD ESP,0x10                        ; 00428997
    MOV EDI,dword ptr [EBX + 0xd0ac]    ; 0042899a
        ;   Label: LAB_0042899a
    CMP EDI,dword ptr [ESI]             ; 004289a0
    JNZ 0x004289b7                      ; 004289a2
        ;   XREF to: 004289b7 (CONDITIONAL_JUMP)  ; LAB_004289b7
    PUSH 0x1                            ; 004289a4
    MOV EAX,dword ptr [EBX + 0xd0b0]    ; 004289a6
    PUSH EAX                            ; 004289ac
    PUSH EBP                            ; 004289ad
    PUSH EBX                            ; 004289ae
    CALL FUN_00430590                   ; 004289af
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    ADD ESP,0x10                        ; 004289b4
    MOV EDX,dword ptr [EBX + 0xd0b8]    ; 004289b7
        ;   Label: LAB_004289b7
    CMP EDX,dword ptr [ESI]             ; 004289bd
    JNZ 0x00428a23                      ; 004289bf
        ;   XREF to: 00428a23 (CONDITIONAL_JUMP)  ; LAB_00428a23
    PUSH 0x1                            ; 004289c1
    LEA EDI,[ESI + 0xc]                 ; 004289c3
    PUSH EDI                            ; 004289c6
    MOV ECX,dword ptr [EBX + 0xd0ac]    ; 004289c7
    PUSH ECX                            ; 004289cd
    PUSH EBX                            ; 004289ce
    CALL FUN_00430520                   ; 004289cf
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004289d4
    PUSH 0x1                            ; 004289d7
    PUSH EDI                            ; 004289d9
    MOV EAX,dword ptr [EBX + 0xd0b0]    ; 004289da
    PUSH EAX                            ; 004289e0
    PUSH EBX                            ; 004289e1
    CALL FUN_00430520                   ; 004289e2
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004289e7
    PUSH 0x1                            ; 004289ea
    PUSH EDI                            ; 004289ec
    MOV EDX,dword ptr [EBX + 0xd0a4]    ; 004289ed
    PUSH EDX                            ; 004289f3
    PUSH EBX                            ; 004289f4
    CALL FUN_00430520                   ; 004289f5
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004289fa
    PUSH 0x1                            ; 004289fd
    PUSH EDI                            ; 004289ff
    MOV ECX,dword ptr [EBX + 0xd0a8]    ; 00428a00
    PUSH ECX                            ; 00428a06
    PUSH EBX                            ; 00428a07
    CALL FUN_00430520                   ; 00428a08
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 00428a0d
    PUSH 0x1                            ; 00428a10
    PUSH EDI                            ; 00428a12
    MOV EDI,dword ptr [EBX + 0xd0bc]    ; 00428a13
    PUSH EDI                            ; 00428a19
    PUSH EBX                            ; 00428a1a
    CALL FUN_00430520                   ; 00428a1b
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 00428a20
    PUSH 0x5b7e27                       ; 00428a23 | = "limb?.wav"
        ;   Label: LAB_00428a23
    PUSH EBX                            ; 00428a28
    CALL FUN_00434810                   ; 00428a29
        ;   XREF to: 00434810 (UNCONDITIONAL_CALL)  ; undefined FUN_00434810()
    ADD ESP,0x8                         ; 00428a2e
    PUSH EBP                            ; 00428a31
    CALL FUN_004157c0                   ; 00428a32
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004157c0()
    MOV EAX,dword ptr [EBX + 0xd0bc]    ; 00428a37
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00428a3d
    ADD ESP,0x4                         ; 00428a44
    TEST EBP,EBP                        ; 00428a47
    JZ 0x00428a77                       ; 00428a49
        ;   XREF to: 00428a77 (CONDITIONAL_JUMP)  ; LAB_00428a77
    FLD float ptr [ESI + 0x8]           ; 00428a4b
        ;   Label: LAB_00428a4b
    FLD ST0                             ; 00428a4e
    FMUL double ptr [0x005b7e37]        ; 00428a50 | DAT_005b7e37
    FSTP ST1                            ; 00428a56
    FSTP float ptr [ESI + 0x8]          ; 00428a58
    CMP dword ptr [EBX + 0xd0b4],0x0    ; 00428a5b
    JGE 0x004288ca                      ; 00428a62
        ;   XREF to: 004288ca (CONDITIONAL_JUMP)  ; LAB_004288ca
    MOV dword ptr [ESI + 0x4],0x4479c000 ; 00428a68
    ADD ESP,0xc                         ; 00428a6f
    POP EBP                             ; 00428a72
    POP EDI                             ; 00428a73
    POP ESI                             ; 00428a74
    POP EBX                             ; 00428a75
    RET                                 ; 00428a76
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00428a77
        ;   Label: LAB_00428a77
    JMP 0x00428a4b                      ; 00428a7e
        ;   XREF to: 00428a4b (UNCONDITIONAL_JUMP)  ; LAB_00428a4b

