; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005522d0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a3ff0
;
; Called Functions:
;   FUN_00409ea0
;   FUN_00552360
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005522d0
        ;   Label: FUN_005522d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005522d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005522d5
    JNZ 0x0055230d                      ; 005522da
        ;   XREF to: 0055230d (CONDITIONAL_JUMP)  ; LAB_0055230d
    PUSH 0x0                            ; 005522dc
    ADD EBX,0x294                       ; 005522de
    PUSH EBX                            ; 005522e4
    CALL FUN_00552360                   ; 005522e5
        ;   XREF to: 00552360 (UNCONDITIONAL_CALL)  ; undefined FUN_00552360()
    ADD ESP,0x8                         ; 005522ea
    PUSH 0x1                            ; 005522ed
    LEA EBX,[EAX + 0xfffffd6c]          ; 005522ef
    PUSH EBX                            ; 005522f5
    CALL FUN_00409ea0                   ; 005522f6
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 005522fb
    MOV DL,byte ptr [ESP + 0xc]         ; 005522fe
    MOV EBX,EAX                         ; 00552302
    TEST DL,0x2                         ; 00552304
    JNZ 0x00552328                      ; 00552307
        ;   XREF to: 00552328 (CONDITIONAL_JUMP)  ; LAB_00552328
    MOV EAX,EBX                         ; 00552309
    POP EBX                             ; 0055230b
    RET                                 ; 0055230c
    PUSH 0x5a3ff0                       ; 0055230d | DAT_005a3ff0
        ;   Label: LAB_0055230d
    PUSH EBX                            ; 00552312
    CALL FUN_0056445f                   ; 00552313
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00552318
    PUSH EAX                            ; 0055231b
    CALL FUN_00564486                   ; 0055231c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00552321
    MOV EAX,EBX                         ; 00552324
    POP EBX                             ; 00552326
    RET                                 ; 00552327
    PUSH EAX                            ; 00552328
        ;   Label: LAB_00552328
    CALL FUN_00564494                   ; 00552329
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0055232e
    MOV EAX,EBX                         ; 00552331
    POP EBX                             ; 00552333
    RET                                 ; 00552334

