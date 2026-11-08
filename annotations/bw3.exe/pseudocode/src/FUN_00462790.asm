; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00462790(int param_1)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00462780 = 0046280b
;   TerminatedCString s_Bip01_Spine1_005bbbcf
;   TerminatedCString s_Bip01_Head_005bbbdc
;
; Called Functions:
;   FUN_00489110
;   FUN_00548090
;   FUN_0054e6b0
;   FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462790
        ;   Label: FUN_00462790
    PUSH ESI                            ; 00462791
    MOV EBX,dword ptr [ESP + 0xc]       ; 00462792
    LEA ESI,[EBX + 0x158]               ; 00462796
    PUSH ESI                            ; 0046279c
    CALL FUN_0054e6b0                   ; 0046279d
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6b0()
    ADD ESP,0x4                         ; 004627a2
    PUSH ESI                            ; 004627a5
    CALL FUN_0054eac0                   ; 004627a6
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 004627ab
    PUSH 0x1                            ; 004627ae
    PUSH 0x5bbbcf                       ; 004627b0 | = "Bip01 Spine1"
    PUSH EAX                            ; 004627b5
    MOV ESI,EAX                         ; 004627b6
    CALL FUN_00548090                   ; 004627b8
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004627bd
    PUSH 0x1                            ; 004627c0
    PUSH 0x5bbbdc                       ; 004627c2 | = "Bip01 Head"
    PUSH ESI                            ; 004627c7
    MOV dword ptr [EBX + 0xd054],EAX    ; 004627c8
    CALL FUN_00548090                   ; 004627ce
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004627d3
    PUSH EBX                            ; 004627d6
    MOV dword ptr [EBX + 0xd058],EAX    ; 004627d7
    CALL FUN_00489110                   ; 004627dd
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; undefined FUN_00489110()
    ADD ESP,0x4                         ; 004627e2
    MOV EDX,dword ptr [EBX + 0x3268]    ; 004627e5
    MOV dword ptr [EBX + 0xcde0],0x0    ; 004627eb
    TEST EDX,EDX                        ; 004627f5
    JNZ 0x00462829                      ; 004627f7
        ;   XREF to: 00462829 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0xd060]    ; 004627f9
    CMP EAX,0x3                         ; 004627ff
    JA 0x00462829                       ; 00462802
        ;   XREF to: 00462829 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x462780]  ; 00462804 | caseD_1 | caseD_3 | switchdataD_00462780
        ;   Label: switchD
    MOV dword ptr [EBX + 0xce5c],0x40a00000 ; 0046280b
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 00462815
    MOV dword ptr [EBX + 0x2538],0x41a00000 ; 0046281f
    POP ESI                             ; 00462829
        ;   Label: default
    POP EBX                             ; 0046282a
    RET                                 ; 0046282b
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 0046282c
        ;   Label: caseD_2
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 00462836
    MOV dword ptr [EBX + 0x2538],0x41f00000 ; 00462840
    POP ESI                             ; 0046284a
    POP EBX                             ; 0046284b
    RET                                 ; 0046284c

