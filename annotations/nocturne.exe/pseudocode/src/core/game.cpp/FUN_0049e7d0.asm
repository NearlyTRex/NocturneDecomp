; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049e7d0(int param_1)
;
;
; XREF[1]:
;   FUN_0049da10 at 0049de2e
;
; Referenced Globals:
;   undefined4 s_..\\core\\game.cpp_005829a9+1
;   string s_CGame::playerControls_-_unknown_c_005829bb
;   undefined4 DAT_005bdee0
;   undefined4 DAT_005be368
;   undefined4 DAT_01bd1d94
;   undefined4 DAT_01c02598
;   undefined4 DAT_01c0259c
;   undefined4 DAT_01c781c0
;   undefined4 DAT_01c781c4
;   undefined4 DAT_01c78418
;   undefined4 DAT_01c7841c
;   undefined4 DAT_01c78420
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01cea280
;   ... and 1 more
;
; Called Functions:
;   FUN_0049ec80
;   FUN_0049ee30
;   FUN_0049f710
;   FUN_0049f8c0
;   FUN_004c8440
;   FUN_004eda40
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049e7d0
        ;   Label: FUN_0049e7d0
    PUSH EBP                            ; 0049e7d1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0049e7d2
    CMP dword ptr [0x01c78420],0x0      ; 0049e7d6 | DAT_01c78420
    JNZ 0x0049e7f8                      ; 0049e7dd
        ;   XREF to: 0049e7f8 (CONDITIONAL_JUMP)  ; LAB_0049e7f8
    CMP dword ptr [ESI + 0x1fc],0x0     ; 0049e7df
    JNZ 0x0049e7f5                      ; 0049e7e6
        ;   XREF to: 0049e7f5 (CONDITIONAL_JUMP)  ; LAB_0049e7f5
    CMP dword ptr [ESI + 0x238],0x0     ; 0049e7e8
    JZ 0x0049e85d                       ; 0049e7ef
        ;   XREF to: 0049e85d (CONDITIONAL_JUMP)  ; LAB_0049e85d
    POP EBP                             ; 0049e7f5
        ;   Label: LAB_0049e7f5
    POP ESI                             ; 0049e7f6
    RET                                 ; 0049e7f7
    PUSH ESI                            ; 0049e7f8
        ;   Label: LAB_0049e7f8
    CALL FUN_0049f8c0                   ; 0049e7f9
        ;   XREF to: 0049f8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049f8c0()
    ADD ESP,0x4                         ; 0049e7fe
    POP EBP                             ; 0049e801
    POP ESI                             ; 0049e802
    RET                                 ; 0049e803
    PUSH EDX                            ; 0049e804
        ;   Label: LAB_0049e804
    PUSH ESI                            ; 0049e805
    CALL FUN_0049ee30                   ; 0049e806
        ;   XREF to: 0049ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0049ee30()
    ADD ESP,0x8                         ; 0049e80b
        ;   Label: LAB_0049e80b
    MOV ECX,0x258                       ; 0049e80e
        ;   Label: LAB_0049e80e
    MOV ESI,0x1c02598                   ; 0049e813
    MOV EDI,0x1c781c0                   ; 0049e818
    PUSH EDI                            ; 0049e81d | DAT_01c781c0
    MOV EAX,ECX                         ; 0049e81e
    SHR ECX,0x2                         ; 0049e820
    MOVSD.REP ES:EDI,ESI                ; 0049e823 | DAT_01c02598 | DAT_01c781c0 | DAT_01c0259c
    MOV CL,AL                           ; 0049e825
    AND CL,0x3                          ; 0049e827
    MOVSB.REP ES:EDI,ESI                ; 0049e82a | DAT_01c0259c | DAT_01c781c4
    POP EDI                             ; 0049e82c
    MOV EAX,[0x01bd1d94]                ; 0049e82d | DAT_01bd1d94
    MOV [0x01c78418],EAX                ; 0049e832 | DAT_01c78418
    MOV EAX,[0x005be368]                ; 0049e837 | DAT_005be368
    MOV EAX,dword ptr [EAX + 0x15aabc]  ; 0049e83c | DAT_01fb1d40
    MOV [0x01c7841c],EAX                ; 0049e842 | DAT_01c7841c
    POP EDI                             ; 0049e847
    POP EBP                             ; 0049e848
    POP ESI                             ; 0049e849
    RET                                 ; 0049e84a
    PUSH EDX                            ; 0049e84b
        ;   Label: LAB_0049e84b
    PUSH ESI                            ; 0049e84c
    CALL FUN_0049ec80                   ; 0049e84d
        ;   XREF to: 0049ec80 (UNCONDITIONAL_CALL)  ; undefined FUN_0049ec80()
    JMP 0x0049e80b                      ; 0049e852
        ;   XREF to: 0049e80b (UNCONDITIONAL_JUMP)  ; LAB_0049e80b
    PUSH EDX                            ; 0049e854
        ;   Label: LAB_0049e854
    PUSH ESI                            ; 0049e855
    CALL FUN_0049f710                   ; 0049e856
        ;   XREF to: 0049f710 (UNCONDITIONAL_CALL)  ; undefined FUN_0049f710()
    JMP 0x0049e80b                      ; 0049e85b
        ;   XREF to: 0049e80b (UNCONDITIONAL_JUMP)  ; LAB_0049e80b
    PUSH EDI                            ; 0049e85d
        ;   Label: LAB_0049e85d
    MOV EDI,dword ptr [0x005bdee0]      ; 0049e85e | DAT_005bdee0
    PUSH EDI                            ; 0049e864 | DAT_01cea280
    CALL FUN_004eda40                   ; 0049e865
        ;   XREF to: 004eda40 (UNCONDITIONAL_CALL)  ; undefined FUN_004eda40()
    MOV EDX,EAX                         ; 0049e86a
    MOV EAX,dword ptr [ESI + 0xbc]      ; 0049e86c
    ADD ESP,0x4                         ; 0049e872
    CMP EAX,0x1                         ; 0049e875
    JNC 0x0049e880                      ; 0049e878
        ;   XREF to: 0049e880 (CONDITIONAL_JUMP)  ; LAB_0049e880
    TEST EAX,EAX                        ; 0049e87a
    JZ 0x0049e804                       ; 0049e87c
        ;   XREF to: 0049e804 (CONDITIONAL_JUMP)  ; LAB_0049e804
    JMP 0x0049e887                      ; 0049e87e
        ;   XREF to: 0049e887 (UNCONDITIONAL_JUMP)  ; LAB_0049e887
    JBE 0x0049e854                      ; 0049e880
        ;   XREF to: 0049e854 (CONDITIONAL_JUMP)  ; LAB_0049e854
        ;   Label: LAB_0049e880
    CMP EAX,0x2                         ; 0049e882
    JZ 0x0049e84b                       ; 0049e885
        ;   XREF to: 0049e84b (CONDITIONAL_JUMP)  ; LAB_0049e84b
    MOV EBP,0x5829aa                    ; 0049e887 | s_..\core\game.cpp_005829a9+1
        ;   Label: LAB_0049e887
    MOV EAX,0x71d                       ; 0049e88c
    PUSH 0x5829bb                       ; 0049e891 | = "CGame::playerControls - unknown contr..."
    MOV dword ptr [0x01cc4800],EBP      ; 0049e896 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0049e89c | DAT_01cc4804
    CALL FUN_004c8440                   ; 0049e8a1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0049e8a6
    JMP 0x0049e80e                      ; 0049e8a9
        ;   XREF to: 0049e80e (UNCONDITIONAL_JUMP)  ; LAB_0049e80e

