; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00458680(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00458950 at 0045896b
;
; Referenced Globals:
;   undefined1* switchdataD_00458664 = 004586bd
;   TerminatedCString s_limb_wav_005ba8e2
;   undefined4 DAT_005ba8f2
;   undefined4 DAT_005ba8fa
;   undefined4 DAT_005ba902
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

    PUSH EBX                            ; 00458680
        ;   Label: FUN_00458680
    PUSH ESI                            ; 00458681
    PUSH EDI                            ; 00458682
    PUSH EBP                            ; 00458683
    SUB ESP,0xc                         ; 00458684
    MOV EBX,dword ptr [ESP + 0x20]      ; 00458687
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045868b
    FLD float ptr [ESI + 0x2c]          ; 0045868f
    FLDZ                                ; 00458692
    FCOMPP                              ; 00458694
    FNSTSW AX                           ; 00458696
    SAHF                                ; 00458698
    JNC 0x004586c5                      ; 00458699
        ;   XREF to: 004586c5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0045869b
    JNZ 0x004586c5                      ; 0045869e
        ;   XREF to: 004586c5 (CONDITIONAL_JUMP)  ; default
    CALL FUN_005a35cc                   ; 004586a0
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
    MOV EDX,EAX                         ; 004586a5
    MOV EDI,0x6                         ; 004586a7
    SAR EDX,0x1f                        ; 004586ac
    IDIV EDI                            ; 004586af
    CMP EDX,0x5                         ; 004586b1
    JA 0x004586c5                       ; 004586b4
        ;   XREF to: 004586c5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x458664]  ; 004586b6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xd114]    ; 004586bd
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004586c3
        ;   Label: LAB_004586c3
    MOV ECX,dword ptr [EBX + 0xd114]    ; 004586c5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004586cb
    CMP EAX,ECX                         ; 004586cd
    JNZ 0x004588c2                      ; 004586cf
        ;   XREF to: 004588c2 (CONDITIONAL_JUMP)  ; LAB_004588c2
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004586d5
        ;   Label: LAB_004586d5
    MOV EBP,dword ptr [EBX + 0xd12c]    ; 004586d8
    MOV dword ptr [ESP + 0x8],EAX       ; 004586de
    CMP EBP,dword ptr [ESI]             ; 004586e2
    JNZ 0x004586ee                      ; 004586e4
        ;   XREF to: 004586ee (CONDITIONAL_JUMP)  ; LAB_004586ee
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004586e6
    MOV EDX,dword ptr [EBX + 0xd128]    ; 004586ee
        ;   Label: LAB_004586ee
    CMP EDX,dword ptr [ESI]             ; 004586f4
    JNZ 0x00458700                      ; 004586f6
        ;   XREF to: 00458700 (CONDITIONAL_JUMP)  ; LAB_00458700
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004586f8
    MOV EAX,[0x005fe9dc]                ; 00458700 | DAT_005fe9dc
        ;   Label: LAB_00458700
    CMP dword ptr [EAX + 0x204],0x0     ; 00458705 | DAT_01d21510
    JZ 0x00458716                       ; 0045870c
        ;   XREF to: 00458716 (CONDITIONAL_JUMP)  ; LAB_00458716
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0045870e
    MOV EAX,[0x005fe9dc]                ; 00458716 | DAT_005fe9dc
        ;   Label: LAB_00458716
    MOV EDX,dword ptr [EAX + 0x14]      ; 0045871b | DAT_01d21320
    TEST EDX,EDX                        ; 0045871e
    JNZ 0x00458726                      ; 00458720
        ;   XREF to: 00458726 (CONDITIONAL_JUMP)  ; LAB_00458726
    MOV dword ptr [ESP + 0x8],EDX       ; 00458722
    PUSH dword ptr [ESP + 0x8]          ; 00458726
        ;   Label: LAB_00458726
    CALL FUN_0040cf40                   ; 0045872a
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf40()
    ADD ESP,0x4                         ; 0045872f
    TEST EAX,EAX                        ; 00458732
    JZ 0x00458859                       ; 00458734
        ;   XREF to: 00458859 (CONDITIONAL_JUMP)  ; LAB_00458859
    PUSH 0x0                            ; 0045873a
    PUSH 0x0                            ; 0045873c
    PUSH 0x0                            ; 0045873e
    PUSH EBX                            ; 00458740
    LEA EAX,[ESI + 0xc]                 ; 00458741
    PUSH EAX                            ; 00458744
    LEA EAX,[EBX + 0x30]                ; 00458745
    PUSH EAX                            ; 00458748
    LEA EAX,[EBX + 0x20]                ; 00458749
    PUSH EAX                            ; 0045874c
    CALL FUN_00414550                   ; 0045874d
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; undefined FUN_00414550()
    ADD ESP,0x1c                        ; 00458752
    MOV EDI,EAX                         ; 00458755
    PUSH 0x1                            ; 00458757
    MOV EBP,EAX                         ; 00458759
    MOV EAX,dword ptr [ESI]             ; 0045875b
    PUSH EAX                            ; 0045875d
    PUSH EDI                            ; 0045875e
    PUSH EBX                            ; 0045875f
    CALL FUN_00430590                   ; 00458760
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    MOV EAX,dword ptr [ESI]             ; 00458765
    MOV EDX,dword ptr [EBX + 0xd114]    ; 00458767
    ADD ESP,0x10                        ; 0045876d
    CMP EAX,EDX                         ; 00458770
    JNZ 0x00458787                      ; 00458772
        ;   XREF to: 00458787 (CONDITIONAL_JUMP)  ; LAB_00458787
    PUSH 0x1                            ; 00458774
    MOV ECX,dword ptr [EBX + 0xd118]    ; 00458776
    PUSH ECX                            ; 0045877c
    PUSH EDI                            ; 0045877d
    PUSH EBX                            ; 0045877e
    CALL FUN_00430590                   ; 0045877f
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    ADD ESP,0x10                        ; 00458784
    MOV EDI,dword ptr [EBX + 0xd11c]    ; 00458787
        ;   Label: LAB_00458787
    CMP EDI,dword ptr [ESI]             ; 0045878d
    JNZ 0x004587a4                      ; 0045878f
        ;   XREF to: 004587a4 (CONDITIONAL_JUMP)  ; LAB_004587a4
    PUSH 0x1                            ; 00458791
    MOV EAX,dword ptr [EBX + 0xd120]    ; 00458793
    PUSH EAX                            ; 00458799
    PUSH EBP                            ; 0045879a
    PUSH EBX                            ; 0045879b
    CALL FUN_00430590                   ; 0045879c
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    ADD ESP,0x10                        ; 004587a1
    MOV EDX,dword ptr [EBX + 0xd128]    ; 004587a4
        ;   Label: LAB_004587a4
    CMP EDX,dword ptr [ESI]             ; 004587aa
    JNZ 0x00458810                      ; 004587ac
        ;   XREF to: 00458810 (CONDITIONAL_JUMP)  ; LAB_00458810
    PUSH 0x1                            ; 004587ae
    LEA EDI,[ESI + 0xc]                 ; 004587b0
    PUSH EDI                            ; 004587b3
    MOV ECX,dword ptr [EBX + 0xd11c]    ; 004587b4
    PUSH ECX                            ; 004587ba
    PUSH EBX                            ; 004587bb
    CALL FUN_00430520                   ; 004587bc
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004587c1
    PUSH 0x1                            ; 004587c4
    PUSH EDI                            ; 004587c6
    MOV EAX,dword ptr [EBX + 0xd120]    ; 004587c7
    PUSH EAX                            ; 004587cd
    PUSH EBX                            ; 004587ce
    CALL FUN_00430520                   ; 004587cf
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004587d4
    PUSH 0x1                            ; 004587d7
    PUSH EDI                            ; 004587d9
    MOV EDX,dword ptr [EBX + 0xd114]    ; 004587da
    PUSH EDX                            ; 004587e0
    PUSH EBX                            ; 004587e1
    CALL FUN_00430520                   ; 004587e2
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004587e7
    PUSH 0x1                            ; 004587ea
    PUSH EDI                            ; 004587ec
    MOV ECX,dword ptr [EBX + 0xd118]    ; 004587ed
    PUSH ECX                            ; 004587f3
    PUSH EBX                            ; 004587f4
    CALL FUN_00430520                   ; 004587f5
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004587fa
    PUSH 0x1                            ; 004587fd
    PUSH EDI                            ; 004587ff
    MOV EDI,dword ptr [EBX + 0xd12c]    ; 00458800
    PUSH EDI                            ; 00458806
    PUSH EBX                            ; 00458807
    CALL FUN_00430520                   ; 00458808
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 0045880d
    PUSH 0x5ba8e2                       ; 00458810 | = "limb?.wav"
        ;   Label: LAB_00458810
    PUSH EBX                            ; 00458815
    CALL FUN_00434810                   ; 00458816
        ;   XREF to: 00434810 (UNCONDITIONAL_CALL)  ; undefined FUN_00434810()
    ADD ESP,0x8                         ; 0045881b
    PUSH EBP                            ; 0045881e
    CALL FUN_004157c0                   ; 0045881f
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004157c0()
    MOV EAX,dword ptr [EBX + 0xd12c]    ; 00458824
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0045882a
    ADD ESP,0x4                         ; 00458831
    TEST EBP,EBP                        ; 00458834
    JZ 0x00458903                       ; 00458836
        ;   XREF to: 00458903 (CONDITIONAL_JUMP)  ; LAB_00458903
    FLD float ptr [ESI + 0x8]           ; 0045883c
        ;   Label: LAB_0045883c
    FLD ST0                             ; 0045883f
    FMUL double ptr [0x005ba8f2]        ; 00458841 | DAT_005ba8f2
    FSTP ST1                            ; 00458847
    FSTP float ptr [ESI + 0x8]          ; 00458849
    CMP dword ptr [EBX + 0xd124],0x0    ; 0045884c
    JL 0x0045890f                       ; 00458853
        ;   XREF to: 0045890f (CONDITIONAL_JUMP)  ; LAB_0045890f
    MOV EDX,dword ptr [EBX + 0xd12c]    ; 00458859
        ;   Label: LAB_00458859
    MOV EAX,dword ptr [ESI]             ; 0045885f
    CMP EAX,EDX                         ; 00458861
    JZ 0x0045891b                       ; 00458863
        ;   XREF to: 0045891b (CONDITIONAL_JUMP)  ; LAB_0045891b
    CMP EAX,dword ptr [EBX + 0xd124]    ; 00458869
    JZ 0x0045887d                       ; 0045886f
        ;   XREF to: 0045887d (CONDITIONAL_JUMP)  ; LAB_0045887d
    CMP EAX,dword ptr [EBX + 0xd128]    ; 00458871
    JNZ 0x00458933                      ; 00458877
        ;   XREF to: 00458933 (CONDITIONAL_JUMP)  ; LAB_00458933
    MOV EAX,dword ptr [ESI + 0x4]       ; 0045887d
        ;   Label: LAB_0045887d
    MOV dword ptr [ESI + 0x4],EAX       ; 00458880
    ADD ESP,0xc                         ; 00458883
    POP EBP                             ; 00458886
    POP EDI                             ; 00458887
    POP ESI                             ; 00458888
    POP EBX                             ; 00458889
    RET                                 ; 0045888a
    MOV EAX,dword ptr [EBX + 0xd118]    ; 0045888b
        ;   Label: caseD_1
    JMP 0x004586c3                      ; 00458891
        ;   XREF to: 004586c3 (UNCONDITIONAL_JUMP)  ; LAB_004586c3
    MOV EAX,dword ptr [EBX + 0xd11c]    ; 00458896
        ;   Label: caseD_2
    JMP 0x004586c3                      ; 0045889c
        ;   XREF to: 004586c3 (UNCONDITIONAL_JUMP)  ; LAB_004586c3
    MOV EAX,dword ptr [EBX + 0xd120]    ; 004588a1
        ;   Label: caseD_3
    JMP 0x004586c3                      ; 004588a7
        ;   XREF to: 004586c3 (UNCONDITIONAL_JUMP)  ; LAB_004586c3
    MOV EAX,dword ptr [EBX + 0xd12c]    ; 004588ac
        ;   Label: caseD_4
    JMP 0x004586c3                      ; 004588b2
        ;   XREF to: 004586c3 (UNCONDITIONAL_JUMP)  ; LAB_004586c3
    MOV EAX,dword ptr [EBX + 0xd128]    ; 004588b7
        ;   Label: caseD_5
    JMP 0x004586c3                      ; 004588bd
        ;   XREF to: 004586c3 (UNCONDITIONAL_JUMP)  ; LAB_004586c3
    CMP EAX,dword ptr [EBX + 0xd118]    ; 004588c2
        ;   Label: LAB_004588c2
    JZ 0x004586d5                       ; 004588c8
        ;   XREF to: 004586d5 (CONDITIONAL_JUMP)  ; LAB_004586d5
    CMP EAX,dword ptr [EBX + 0xd11c]    ; 004588ce
    JZ 0x004586d5                       ; 004588d4
        ;   XREF to: 004586d5 (CONDITIONAL_JUMP)  ; LAB_004586d5
    CMP EAX,dword ptr [EBX + 0xd120]    ; 004588da
    JZ 0x004586d5                       ; 004588e0
        ;   XREF to: 004586d5 (CONDITIONAL_JUMP)  ; LAB_004586d5
    CMP EAX,dword ptr [EBX + 0xd128]    ; 004588e6
    JZ 0x004586d5                       ; 004588ec
        ;   XREF to: 004586d5 (CONDITIONAL_JUMP)  ; LAB_004586d5
    CMP EAX,dword ptr [EBX + 0xd12c]    ; 004588f2
    JZ 0x004586d5                       ; 004588f8
        ;   XREF to: 004586d5 (CONDITIONAL_JUMP)  ; LAB_004586d5
    JMP 0x00458859                      ; 004588fe
        ;   XREF to: 00458859 (UNCONDITIONAL_JUMP)  ; LAB_00458859
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00458903
        ;   Label: LAB_00458903
    JMP 0x0045883c                      ; 0045890a
        ;   XREF to: 0045883c (UNCONDITIONAL_JUMP)  ; LAB_0045883c
    MOV dword ptr [ESI + 0x4],0x4479c000 ; 0045890f
        ;   Label: LAB_0045890f
    JMP 0x00458859                      ; 00458916
        ;   XREF to: 00458859 (UNCONDITIONAL_JUMP)  ; LAB_00458859
    FLD float ptr [ESI + 0x4]           ; 0045891b
        ;   Label: LAB_0045891b
    FLD ST0                             ; 0045891e
    FMUL double ptr [0x005ba902]        ; 00458920 | DAT_005ba902
    FSTP ST1                            ; 00458926
    FSTP float ptr [ESI + 0x4]          ; 00458928
    ADD ESP,0xc                         ; 0045892b
    POP EBP                             ; 0045892e
    POP EDI                             ; 0045892f
    POP ESI                             ; 00458930
    POP EBX                             ; 00458931
    RET                                 ; 00458932
    FLD float ptr [ESI + 0x4]           ; 00458933
        ;   Label: LAB_00458933
    FLD ST0                             ; 00458936
    FMUL double ptr [0x005ba8fa]        ; 00458938 | DAT_005ba8fa
    FSTP ST1                            ; 0045893e
    FSTP float ptr [ESI + 0x4]          ; 00458940
    ADD ESP,0xc                         ; 00458943
    POP EBP                             ; 00458946
    POP EDI                             ; 00458947
    POP ESI                             ; 00458948
    POP EBX                             ; 00458949
    RET                                 ; 0045894a

