; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00415250(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059a560
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0040fe10
;   FUN_0040fe30
;   FUN_0040fe50
;   FUN_00438250
;   FUN_0051b6e0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415250
        ;   Label: FUN_00415250
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415251
    TEST byte ptr [ESP + 0xc],0x4       ; 00415255
    JNZ 0x004152e1                      ; 0041525a
        ;   XREF to: 004152e1 (CONDITIONAL_JUMP)  ; LAB_004152e1
    PUSH 0x0                            ; 00415260
    ADD EBX,0x33c4                      ; 00415262
    PUSH EBX                            ; 00415268
    CALL FUN_0040fe50                   ; 00415269
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 0041526e
    PUSH 0x0                            ; 00415271
    SUB EAX,0x4b0                       ; 00415273
    PUSH EAX                            ; 00415278
    CALL FUN_0040fe30                   ; 00415279
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 0041527e
    PUSH 0x0                            ; 00415281
    SUB EAX,0x20c                       ; 00415283
    PUSH EAX                            ; 00415288
    CALL FUN_0040fe10                   ; 00415289
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 0041528e
    PUSH 0x0                            ; 00415291
    SUB EAX,0xb4                        ; 00415293
    PUSH EAX                            ; 00415298
    CALL FUN_0040fe10                   ; 00415299
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 0041529e
    PUSH 0x0                            ; 004152a1
    SUB EAX,0x1c8                       ; 004152a3
    PUSH EAX                            ; 004152a8
    CALL FUN_00438250                   ; 004152a9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 004152ae
    PUSH 0x0                            ; 004152b1
    SUB EAX,0x293c                      ; 004152b3
    PUSH EAX                            ; 004152b8
    CALL FUN_0051b6e0                   ; 004152b9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 004152be
    PUSH 0x1                            ; 004152c1
    LEA EBX,[EAX + 0xfffffeb0]          ; 004152c3
    PUSH EBX                            ; 004152c9
    CALL FUN_00409ea0                   ; 004152ca
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 004152cf
    MOV DL,byte ptr [ESP + 0xc]         ; 004152d2
    MOV EBX,EAX                         ; 004152d6
    TEST DL,0x2                         ; 004152d8
    JNZ 0x004152fc                      ; 004152db
        ;   XREF to: 004152fc (CONDITIONAL_JUMP)  ; LAB_004152fc
    MOV EAX,EBX                         ; 004152dd
    POP EBX                             ; 004152df
    RET                                 ; 004152e0
    PUSH 0x59a560                       ; 004152e1 | DAT_0059a560
        ;   Label: LAB_004152e1
    PUSH EBX                            ; 004152e6
    CALL FUN_0056445f                   ; 004152e7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 004152ec
    PUSH EAX                            ; 004152ef
    CALL FUN_00564486                   ; 004152f0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004152f5
    MOV EAX,EBX                         ; 004152f8
    POP EBX                             ; 004152fa
    RET                                 ; 004152fb
    PUSH EAX                            ; 004152fc
        ;   Label: LAB_004152fc
    CALL FUN_00564494                   ; 004152fd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00415302
    MOV EAX,EBX                         ; 00415305
    POP EBX                             ; 00415307
    RET                                 ; 00415308

