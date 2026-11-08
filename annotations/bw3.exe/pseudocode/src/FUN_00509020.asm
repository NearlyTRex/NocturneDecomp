; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00509020(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   FUN_0050a610 at 0050a618
;   FUN_005275c0 at 005275c8
;   FUN_0059a060 at 0059a068
;   FUN_0059aba0 at 0059aba8
;   FUN_005a0b00 at 005a0b07
;
; Referenced Globals:
;   TerminatedCString s_priest_dfm_005cb531
;   TerminatedCString s_Bip01_L_Hand_005cb53c
;   TerminatedCString s_Bip01_R_Hand_005cb549
;   undefined4 DAT_005cb558
;   undefined4 DAT_005cb560
;   undefined4 DAT_01dd6a3c
;   undefined4 DAT_01dd6a40
;
; Called Functions:
;   FUN_0042b0e0
;   FUN_00548090
;   FUN_0054eac0
;   FUN_005a3120
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509020
        ;   Label: FUN_00509020
    PUSH ESI                            ; 00509021
    PUSH EBP                            ; 00509022
    MOV EBP,ESP                         ; 00509023
    SUB ESP,0x4                         ; 00509025
    MOV EBX,dword ptr [EBP + 0x10]      ; 00509028
    PUSH EBX                            ; 0050902b
    CALL FUN_0042b0e0                   ; 0050902c
        ;   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b0e0()
    ADD ESP,0x4                         ; 00509031
    PUSH 0x5cb531                       ; 00509034 | = "priest.dfm"
    LEA EAX,[EBX + 0x24a8]              ; 00509039
    PUSH EAX                            ; 0050903f
    CALL FUN_005a3260                   ; 00509040
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00509045
    TEST EAX,EAX                        ; 00509048
    JNZ 0x00509056                      ; 0050904a
        ;   XREF to: 00509056 (CONDITIONAL_JUMP)  ; LAB_00509056
    MOV dword ptr [EBX + 0x27a0],0x2    ; 0050904c
    LEA EAX,[EBX + 0x158]               ; 00509056
        ;   Label: LAB_00509056
    PUSH EAX                            ; 0050905c
    CALL FUN_0054eac0                   ; 0050905d
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 00509062
    PUSH 0x0                            ; 00509065
    PUSH 0x5cb53c                       ; 00509067 | = "Bip01 L Hand"
    PUSH EAX                            ; 0050906c
    MOV ESI,EAX                         ; 0050906d
    CALL FUN_00548090                   ; 0050906f
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00509074
    PUSH 0x0                            ; 00509077
    PUSH 0x5cb549                       ; 00509079 | = "Bip01 R Hand"
    PUSH ESI                            ; 0050907e
    MOV [0x01dd6a3c],EAX                ; 0050907f | DAT_01dd6a3c
    CALL FUN_00548090                   ; 00509084
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    MOV ESI,dword ptr [0x01dd6a3c]      ; 00509089 | DAT_01dd6a3c
    ADD ESP,0xc                         ; 0050908f
    MOV dword ptr [EBX + 0x2620],EAX    ; 00509092
    MOV [0x01dd6a40],EAX                ; 00509098 | DAT_01dd6a40
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 0050909d
    MOV dword ptr [EBX + 0x25a8],ESI    ; 005090a3
    TEST EDX,EDX                        ; 005090a9
    JZ 0x005090b7                       ; 005090ab
        ;   XREF to: 005090b7 (CONDITIONAL_JUMP)  ; LAB_005090b7
    MOV dword ptr [EBX + 0xfc],0x1      ; 005090ad
    FILD dword ptr [EBX + 0x206bc]      ; 005090b7
        ;   Label: LAB_005090b7
    FMUL double ptr [0x005cb558]        ; 005090bd | DAT_005cb558
    FMUL double ptr [0x005cb560]        ; 005090c3 | DAT_005cb560
    CALL FUN_005a3120                   ; 005090c9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [EBP + -0x4]        ; 005090ce
    MOV ECX,dword ptr [EBP + -0x4]      ; 005090d1
    CMP ECX,0x10000                     ; 005090d4
    JNZ 0x005090e2                      ; 005090da
        ;   XREF to: 005090e2 (CONDITIONAL_JUMP)  ; LAB_005090e2
    MOV ESP,EBP                         ; 005090dc
    POP EBP                             ; 005090de
    POP ESI                             ; 005090df
    POP EBX                             ; 005090e0
    RET                                 ; 005090e1
    MOV dword ptr [EBX + 0xf8],0x0      ; 005090e2
        ;   Label: LAB_005090e2
    MOV dword ptr [EBX + 0x206b8],0xfffffffe ; 005090ec
    MOV dword ptr [EBX + 0x206c0],0x0   ; 005090f6
    MOV dword ptr [EBX + 0xfc],0x1      ; 00509100
    MOV dword ptr [EBX + 0x206b4],ECX   ; 0050910a
    MOV ESP,EBP                         ; 00509110
    POP EBP                             ; 00509112
    POP ESI                             ; 00509113
    POP EBX                             ; 00509114
    RET                                 ; 00509115

