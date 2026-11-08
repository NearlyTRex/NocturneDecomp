; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9890(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0964
;   TerminatedCString s_BurnComplete_005f096a
;   TerminatedCString s_Death_005f0977
;   TerminatedCString s_Animation_005f097d
;   undefined4 DAT_005f0987
;
; Called Functions:
;   FUN_005035c0
;   FUN_00503620
;   FUN_0059d7f0
;   FUN_0059daa0
;   FUN_005a8180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9890
        ;   Label: FUN_005a9890
    PUSH ESI                            ; 005a9891
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a9892
    LEA EAX,[EBX + 0x264]               ; 005a9896
    PUSH dword ptr [ESP + 0x10]         ; 005a989c
    PUSH EAX                            ; 005a98a0
    CALL FUN_005a8180                   ; 005a98a1
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8180()
    FLD float ptr [EBX + 0x11430]       ; 005a98a6
    FLDZ                                ; 005a98ac
    ADD ESP,0x8                         ; 005a98ae
    FCOMPP                              ; 005a98b1
    FNSTSW AX                           ; 005a98b3
    SAHF                                ; 005a98b5
    JC 0x005a98f4                       ; 005a98b6
        ;   XREF to: 005a98f4 (CONDITIONAL_JUMP)  ; LAB_005a98f4
    LEA EAX,[EBX + 0x2b4]               ; 005a98b8
        ;   Label: LAB_005a98b8
    PUSH EAX                            ; 005a98be
    CALL FUN_005035c0                   ; 005a98bf
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a98c4
    ADD ESP,0x4                         ; 005a98c7
    CMP EAX,0xb                         ; 005a98ca
    JNZ 0x005a98d9                      ; 005a98cd
        ;   XREF to: 005a98d9 (CONDITIONAL_JUMP)  ; LAB_005a98d9
    MOV dword ptr [EBX + 0x10a28],0x0   ; 005a98cf
    PUSH 0x5f0977                       ; 005a98d9 | = "Death"
        ;   Label: LAB_005a98d9
    LEA ESI,[EBX + 0x10af8]             ; 005a98de
    PUSH ESI                            ; 005a98e4
    CALL FUN_0059daa0                   ; 005a98e5
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a98ea
    TEST EAX,EAX                        ; 005a98ed
    JZ 0x005a9945                       ; 005a98ef
        ;   XREF to: 005a9945 (CONDITIONAL_JUMP)  ; LAB_005a9945
    POP ESI                             ; 005a98f1
        ;   Label: LAB_005a98f1
    POP EBX                             ; 005a98f2
    RET                                 ; 005a98f3
    LEA ESI,[EBX + 0x2b4]               ; 005a98f4
        ;   Label: LAB_005a98f4
    PUSH ESI                            ; 005a98fa
    CALL FUN_005035c0                   ; 005a98fb
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a9900
    ADD ESP,0x4                         ; 005a9903
    CMP EAX,0xb                         ; 005a9906
    JZ 0x005a98b8                       ; 005a9909
        ;   XREF to: 005a98b8 (CONDITIONAL_JUMP)  ; LAB_005a98b8
    PUSH ESI                            ; 005a990b
    CALL FUN_005035c0                   ; 005a990c
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a9911
    ADD ESP,0x4                         ; 005a9914
    CMP EAX,0xc                         ; 005a9917
    JZ 0x005a98b8                       ; 005a991a
        ;   XREF to: 005a98b8 (CONDITIONAL_JUMP)  ; LAB_005a98b8
    PUSH 0x5f0964                       ; 005a991c | = "Death"
    PUSH 0x5f096a                       ; 005a9921 | = "BurnComplete"
    ADD EBX,0x10af8                     ; 005a9926
    PUSH EBX                            ; 005a992c
    CALL FUN_0059d7f0                   ; 005a992d
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a9932
    PUSH 0x1                            ; 005a9935
    PUSH 0xc                            ; 005a9937
    PUSH ESI                            ; 005a9939
    CALL FUN_00503620                   ; 005a993a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a993f
    POP ESI                             ; 005a9942
    POP EBX                             ; 005a9943
    RET                                 ; 005a9944
    PUSH 0x5f097d                       ; 005a9945 | = "Animation"
        ;   Label: LAB_005a9945
    PUSH ESI                            ; 005a994a
    CALL FUN_0059daa0                   ; 005a994b
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a9950
    TEST EAX,EAX                        ; 005a9953
    JNZ 0x005a98f1                      ; 005a9955
        ;   XREF to: 005a98f1 (CONDITIONAL_JUMP)  ; LAB_005a98f1
    PUSH 0x5f0987                       ; 005a9957 | DAT_005f0987
    PUSH ESI                            ; 005a995c
    CALL FUN_0059daa0                   ; 005a995d
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a9962
    TEST EAX,EAX                        ; 005a9965
    JNZ 0x005a98f1                      ; 005a9967
        ;   XREF to: 005a98f1 (CONDITIONAL_JUMP)  ; LAB_005a98f1
    PUSH EBX                            ; 005a9969
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a996a
    CALL dword ptr [EAX + 0x17c]        ; 005a9970
    ADD ESP,0x4                         ; 005a9976
    POP ESI                             ; 005a9979
    POP EBX                             ; 005a997a
    RET                                 ; 005a997b

