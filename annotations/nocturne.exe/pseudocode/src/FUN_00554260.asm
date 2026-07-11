; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00554260(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   string s_CIcePick_00597bf2
;   string s_CHero_00597bfb
;   undefined4 DAT_00597c01
;
; Called Functions:
;   FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554260
        ;   Label: FUN_00554260
    PUSH EBP                            ; 00554261
    MOV EBX,dword ptr [ESP + 0xc]       ; 00554262
    CMP dword ptr [EBX + 0x2fc],0x0     ; 00554266
    JNZ 0x005542a6                      ; 0055426d
        ;   XREF to: 005542a6 (CONDITIONAL_JUMP)  ; LAB_005542a6
    CMP dword ptr [EBX + 0x2cc],0x0     ; 0055426f
    JNZ 0x005542a6                      ; 00554276
        ;   XREF to: 005542a6 (CONDITIONAL_JUMP)  ; LAB_005542a6
    CMP dword ptr [EBX + 0x554],0x0     ; 00554278
    JZ 0x005542a6                       ; 0055427f
        ;   XREF to: 005542a6 (CONDITIONAL_JUMP)  ; LAB_005542a6
    LEA EAX,[EBX + 0x34c]               ; 00554281
    FLD float ptr [EAX + 0x4]           ; 00554287
    FMUL ST0                            ; 0055428a
    FLD float ptr [EAX]                 ; 0055428c
    FMUL ST0                            ; 0055428e
    FADDP                               ; 00554290
    FLD float ptr [EAX + 0x8]           ; 00554292
    FMUL ST0                            ; 00554295
    FADDP                               ; 00554297
    FSQRT                               ; 00554299
    FCOMP double ptr [0x00597c01]       ; 0055429b | DAT_00597c01
    FNSTSW AX                           ; 005542a1
    SAHF                                ; 005542a3
    JA 0x005542af                       ; 005542a4
        ;   XREF to: 005542af (CONDITIONAL_JUMP)  ; LAB_005542af
    CMP dword ptr [EBX + 0x2fc],0x0     ; 005542a6
        ;   Label: LAB_005542a6
    JZ 0x005542b4                       ; 005542ad
        ;   XREF to: 005542b4 (CONDITIONAL_JUMP)  ; LAB_005542b4
    XOR EAX,EAX                         ; 005542af
        ;   Label: LAB_005542af
    POP EBP                             ; 005542b1
    POP EBX                             ; 005542b2
    RET                                 ; 005542b3
    PUSH 0x597bf2                       ; 005542b4 | = "CIcePick"
        ;   Label: LAB_005542b4
    MOV EBP,dword ptr [ESP + 0x14]      ; 005542b9
    PUSH EBP                            ; 005542bd
    CALL FUN_0040d7e0                   ; 005542be
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d7e0()
    ADD ESP,0x8                         ; 005542c3
    TEST EAX,EAX                        ; 005542c6
    JZ 0x005542d2                       ; 005542c8
        ;   XREF to: 005542d2 (CONDITIONAL_JUMP)  ; LAB_005542d2
    MOV EAX,0x3                         ; 005542ca
        ;   Label: LAB_005542ca
    POP EBP                             ; 005542cf
    POP EBX                             ; 005542d0
    RET                                 ; 005542d1
    PUSH 0x597bfb                       ; 005542d2 | = "CHero"
        ;   Label: LAB_005542d2
    PUSH EBP                            ; 005542d7
    CALL FUN_0040d7e0                   ; 005542d8
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d7e0()
    ADD ESP,0x8                         ; 005542dd
    TEST EAX,EAX                        ; 005542e0
    JNZ 0x005542f6                      ; 005542e2
        ;   XREF to: 005542f6 (CONDITIONAL_JUMP)  ; LAB_005542f6
    MOV EDX,dword ptr [EBX + 0x2cc]     ; 005542e4
    TEST EDX,EDX                        ; 005542ea
    JZ 0x005542ca                       ; 005542ec
        ;   XREF to: 005542ca (CONDITIONAL_JUMP)  ; LAB_005542ca
    CMP EDX,0x3                         ; 005542ee
    JZ 0x005542ca                       ; 005542f1
        ;   XREF to: 005542ca (CONDITIONAL_JUMP)  ; LAB_005542ca
    POP EBP                             ; 005542f3
    POP EBX                             ; 005542f4
    RET                                 ; 005542f5
    MOV EAX,0x2                         ; 005542f6
        ;   Label: LAB_005542f6
    POP EBP                             ; 005542fb
    POP EBX                             ; 005542fc
    RET                                 ; 005542fd

