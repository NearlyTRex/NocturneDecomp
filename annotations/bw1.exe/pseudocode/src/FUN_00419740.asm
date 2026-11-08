; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00419740(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_disableBodyPartDamage_005d448c
;   undefined4 DAT_005d44a9
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_00622c18
;   undefined4 DAT_01e82168
;   undefined4 DAT_02c8af28
;   undefined4 DAT_02c8af2c
;   undefined4 DAT_02c8af30
;
; Called Functions:
;   FUN_004088b0
;   FUN_0040cc00
;   FUN_00418d00
;   FUN_00419940
;   FUN_0041aef0
;   FUN_0041e0d0
;   FUN_0042c010
;   FUN_004a6c30
;   FUN_00559350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419740
        ;   Label: FUN_00419740
    PUSH ESI                            ; 00419741
    PUSH EDI                            ; 00419742
    PUSH EBP                            ; 00419743
    MOV EBP,ESP                         ; 00419744
    SUB ESP,0x4c                        ; 00419746
    AND ESP,0xfffffff8                  ; 00419749
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041974c
    CMP dword ptr [EBX + 0x174],0x3     ; 0041974f
    JL 0x004197d2                       ; 00419756
        ;   XREF to: 004197d2 (CONDITIONAL_JUMP)  ; LAB_004197d2
    CMP dword ptr [EBX + 0x180],0x1     ; 0041975c
    JL 0x004197d2                       ; 00419763
        ;   XREF to: 004197d2 (CONDITIONAL_JUMP)  ; LAB_004197d2
    CMP dword ptr [EBX + 0x158],0x0     ; 00419765
    JZ 0x00419777                       ; 0041976c
        ;   XREF to: 00419777 (CONDITIONAL_JUMP)  ; LAB_00419777
    CMP dword ptr [EBX + 0xf24],0x0     ; 0041976e
    JZ 0x004197bf                       ; 00419775
        ;   XREF to: 004197bf (CONDITIONAL_JUMP)  ; LAB_004197bf
    CMP dword ptr [EBX + 0xf2c],0x0     ; 00419777
        ;   Label: LAB_00419777
    JZ 0x00419830                       ; 0041977e
        ;   XREF to: 00419830 (CONDITIONAL_JUMP)  ; LAB_00419830
    PUSH EBX                            ; 00419784
        ;   Label: LAB_00419784
    CALL FUN_0041aef0                   ; 00419785
        ;   XREF to: 0041aef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041aef0()
    ADD ESP,0x4                         ; 0041978a
    MOV ECX,dword ptr [EBX + 0xf2c]     ; 0041978d
        ;   Label: LAB_0041978d
    TEST ECX,ECX                        ; 00419793
    JNZ 0x004197bf                      ; 00419795
        ;   XREF to: 004197bf (CONDITIONAL_JUMP)  ; LAB_004197bf
    FLD float ptr [EBX + 0xcbc]         ; 00419797
    FSUB float ptr [EBP + 0x18]         ; 0041979d
    FST float ptr [EBX + 0xcbc]         ; 004197a0
    FLDZ                                ; 004197a6
    FCOMPP                              ; 004197a8
    FNSTSW AX                           ; 004197aa
    SAHF                                ; 004197ac
    JBE 0x00419842                      ; 004197ad
        ;   XREF to: 00419842 (CONDITIONAL_JUMP)  ; LAB_00419842
    MOV dword ptr [EBX + 0xf24],ECX     ; 004197b3
    MOV dword ptr [EBX + 0xcbc],ECX     ; 004197b9
    PUSH dword ptr [EBP + 0x18]         ; 004197bf
        ;   Label: LAB_004197bf
    PUSH EBX                            ; 004197c2
    CALL FUN_00419940                   ; 004197c3
        ;   XREF to: 00419940 (UNCONDITIONAL_CALL)  ; undefined FUN_00419940()
    ADD ESP,0x8                         ; 004197c8
    MOV ESP,EBP                         ; 004197cb
        ;   Label: LAB_004197cb
    POP EBP                             ; 004197cd
    POP EDI                             ; 004197ce
    POP ESI                             ; 004197cf
    POP EBX                             ; 004197d0
    RET                                 ; 004197d1
    PUSH 0x0                            ; 004197d2
        ;   Label: LAB_004197d2
    PUSH 0x0                            ; 004197d4
    PUSH EBX                            ; 004197d6
    MOV dword ptr [EBX + 0x70],0x2      ; 004197d7
    CALL FUN_00418d00                   ; 004197de
        ;   XREF to: 00418d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00418d00()
    LEA EAX,[EBX + 0x168]               ; 004197e3
    ADD ESP,0xc                         ; 004197e9
    MOV ESI,EAX                         ; 004197ec
    CMP EAX,0x2c8af28                   ; 004197ee
    JZ 0x0041980f                       ; 004197f3
        ;   XREF to: 0041980f (CONDITIONAL_JUMP)  ; LAB_0041980f
    MOV EDX,dword ptr [0x02c8af28]      ; 004197f5 | DAT_02c8af28
    MOV dword ptr [EAX],EDX             ; 004197fb
    MOV EDX,dword ptr [0x02c8af2c]      ; 004197fd | DAT_02c8af2c
    MOV dword ptr [EAX + 0x4],EDX       ; 00419803
    MOV EDX,dword ptr [0x02c8af30]      ; 00419806 | DAT_02c8af30
    MOV dword ptr [EAX + 0x8],EDX       ; 0041980c
    ADD EBX,0x15c                       ; 0041980f
        ;   Label: LAB_0041980f
    CMP EBX,ESI                         ; 00419815
    JZ 0x004197cb                       ; 00419817
        ;   XREF to: 004197cb (CONDITIONAL_JUMP)  ; LAB_004197cb
    MOV EAX,dword ptr [ESI]             ; 00419819
    MOV dword ptr [EBX],EAX             ; 0041981b
    MOV EAX,dword ptr [ESI + 0x4]       ; 0041981d
    MOV dword ptr [EBX + 0x4],EAX       ; 00419820
    MOV EAX,dword ptr [ESI + 0x8]       ; 00419823
    MOV dword ptr [EBX + 0x8],EAX       ; 00419826
    MOV ESP,EBP                         ; 00419829
    POP EBP                             ; 0041982b
    POP EDI                             ; 0041982c
    POP ESI                             ; 0041982d
    POP EBX                             ; 0041982e
    RET                                 ; 0041982f
    CMP dword ptr [EBX + 0xf24],0x0     ; 00419830
        ;   Label: LAB_00419830
    JNZ 0x00419784                      ; 00419837
        ;   XREF to: 00419784 (CONDITIONAL_JUMP)  ; LAB_00419784
    JMP 0x0041978d                      ; 0041983d
        ;   XREF to: 0041978d (UNCONDITIONAL_JUMP)  ; LAB_0041978d
    LEA EDI,[ESP + 0x3c]                ; 00419842
        ;   Label: LAB_00419842
    LEA ESI,[EBX + 0x20]                ; 00419846
    MOVSD ES:EDI,ESI                    ; 00419849
    MOVSD ES:EDI,ESI                    ; 0041984a
    MOVSD ES:EDI,ESI                    ; 0041984b
    LEA ESI,[EBX + 0xcd0]               ; 0041984c
    PUSH dword ptr [EBP + 0x18]         ; 00419852
    PUSH ESI                            ; 00419855
    CALL FUN_0041e0d0                   ; 00419856
        ;   XREF to: 0041e0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e0d0()
    LEA EAX,[EBX + 0x20]                ; 0041985b
    MOV EDX,dword ptr [ESI]             ; 0041985e
    MOV dword ptr [EAX],EDX             ; 00419860
    MOV EDX,dword ptr [ESI + 0x4]       ; 00419862
    MOV dword ptr [EAX + 0x4],EDX       ; 00419865
    FLD float ptr [ESI + 0x8]           ; 00419868
    LEA ESI,[EBX + 0x30]                ; 0041986b
    FSTP float ptr [EAX + 0x8]          ; 0041986e
    LEA EAX,[EBX + 0xcdc]               ; 00419871
    ADD ESP,0x8                         ; 00419877
    CMP ESI,EAX                         ; 0041987a
    JZ 0x0041988e                       ; 0041987c
        ;   XREF to: 0041988e (CONDITIONAL_JUMP)  ; LAB_0041988e
    MOV EDX,dword ptr [EAX]             ; 0041987e
    MOV dword ptr [ESI],EDX             ; 00419880
    MOV EDX,dword ptr [EAX + 0x4]       ; 00419882
    MOV dword ptr [ESI + 0x4],EDX       ; 00419885
    MOV EDX,dword ptr [EAX + 0x8]       ; 00419888
    MOV dword ptr [ESI + 0x8],EDX       ; 0041988b
    PUSH EBX                            ; 0041988e
        ;   Label: LAB_0041988e
    CALL FUN_004088b0                   ; 0041988f
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088b0()
    LEA EAX,[EBX + 0xd10]               ; 00419894
    FLD float ptr [EAX + 0x4]           ; 0041989a
    FMUL ST0                            ; 0041989d
    FLD float ptr [EAX]                 ; 0041989f
    FMUL ST0                            ; 004198a1
    FADDP                               ; 004198a3
    FLD float ptr [EAX + 0x8]           ; 004198a5
    FMUL ST0                            ; 004198a8
    FADDP                               ; 004198aa
    ADD ESP,0x4                         ; 004198ac
    FSQRT                               ; 004198af
    FCOMP double ptr [0x005d44a9]       ; 004198b1 | DAT_005d44a9
    FNSTSW AX                           ; 004198b7
    SAHF                                ; 004198b9
    JBE 0x004197bf                      ; 004198ba
        ;   XREF to: 004197bf (CONDITIONAL_JUMP)  ; LAB_004197bf
    PUSH 0x5d448c                       ; 004198c0 | = "disableBodyPartDamage"
    MOV ESI,dword ptr [0x0061b4d0]      ; 004198c5 | DAT_0061b4d0
    PUSH ESI                            ; 004198cb
    CALL FUN_004a6c30                   ; 004198cc
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 004198d1
    TEST EAX,EAX                        ; 004198d4
    JNZ 0x004197bf                      ; 004198d6
        ;   XREF to: 004197bf (CONDITIONAL_JUMP)  ; LAB_004197bf
    MOV EAX,ESP                         ; 004198dc
    PUSH EAX                            ; 004198de
    CALL FUN_0042c010                   ; 004198df
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    ADD ESP,0x4                         ; 004198e4
    PUSH 0x41700000                     ; 004198e7
    PUSH 0x41200000                     ; 004198ec
    CALL FUN_0040cc00                   ; 004198f1
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x50],EAX      ; 004198f6
    FLD float ptr [ESP + 0x50]          ; 004198fa
    ADD ESP,0x8                         ; 004198fe
    MOV EAX,ESP                         ; 00419901
    MOV dword ptr [ESP + 0x34],EBX      ; 00419903
    PUSH EAX                            ; 00419907
    MOV dword ptr [ESP + 0x3c],EBX      ; 00419908
    LEA EAX,[EBX + 0x20]                ; 0041990c
    PUSH EAX                            ; 0041990f
    LEA EAX,[ESP + 0x44]                ; 00419910
    PUSH EAX                            ; 00419914
    MOV EDI,dword ptr [0x00622c18]      ; 00419915 | DAT_00622c18
    PUSH EDI                            ; 0041991b | DAT_01e82168
    FSTP float ptr [ESP + 0x14]         ; 0041991c
    CALL FUN_00559350                   ; 00419920
        ;   XREF to: 00559350 (UNCONDITIONAL_CALL)  ; undefined FUN_00559350()
    ADD ESP,0x10                        ; 00419925
    PUSH dword ptr [EBP + 0x18]         ; 00419928
    PUSH EBX                            ; 0041992b
    CALL FUN_00419940                   ; 0041992c
        ;   XREF to: 00419940 (UNCONDITIONAL_CALL)  ; undefined FUN_00419940()
    ADD ESP,0x8                         ; 00419931
    MOV ESP,EBP                         ; 00419934
    POP EBP                             ; 00419936
    POP EDI                             ; 00419937
    POP ESI                             ; 00419938
    POP EBX                             ; 00419939
    RET                                 ; 0041993a

