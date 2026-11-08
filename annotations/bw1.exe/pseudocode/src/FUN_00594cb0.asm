; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00594cb0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00606860
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_00533060
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594cb0
        ;   Label: FUN_00594cb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00594cb1
    TEST byte ptr [ESP + 0xc],0x4       ; 00594cb5
    JNZ 0x00594d1d                      ; 00594cba
        ;   XREF to: 00594d1d (CONDITIONAL_JUMP)  ; LAB_00594d1d
    PUSH 0x0                            ; 00594cbc
    ADD EBX,0xc1d0                      ; 00594cbe
    PUSH EBX                            ; 00594cc4
    CALL FUN_00533060                   ; 00594cc5
        ;   XREF to: 00533060 (UNCONDITIONAL_CALL)  ; undefined FUN_00533060()
    ADD ESP,0x8                         ; 00594cca
    PUSH 0x0                            ; 00594ccd
    SUB EAX,0x8bf4                      ; 00594ccf
    PUSH EAX                            ; 00594cd4
    CALL FUN_0040ee30                   ; 00594cd5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 00594cda
    PUSH 0x0                            ; 00594cdd
    SUB EAX,0x93c                       ; 00594cdf
    PUSH EAX                            ; 00594ce4
    CALL FUN_00441ca0                   ; 00594ce5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 00594cea
    PUSH 0x0                            ; 00594ced
    SUB EAX,0x2b48                      ; 00594cef
    PUSH EAX                            ; 00594cf4
    CALL FUN_005673f0                   ; 00594cf5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 00594cfa
    PUSH 0x1                            ; 00594cfd
    LEA EBX,[EAX + 0xfffffea8]          ; 00594cff
    PUSH EBX                            ; 00594d05
    CALL FUN_00408730                   ; 00594d06
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00594d0b
    MOV DL,byte ptr [ESP + 0xc]         ; 00594d0e
    MOV EBX,EAX                         ; 00594d12
    TEST DL,0x2                         ; 00594d14
    JNZ 0x00594d38                      ; 00594d17
        ;   XREF to: 00594d38 (CONDITIONAL_JUMP)  ; LAB_00594d38
    MOV EAX,EBX                         ; 00594d19
    POP EBX                             ; 00594d1b
    RET                                 ; 00594d1c
    PUSH 0x606860                       ; 00594d1d | DAT_00606860
        ;   Label: LAB_00594d1d
    PUSH EBX                            ; 00594d22
    CALL FUN_005c030f                   ; 00594d23
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00594d28
    PUSH EAX                            ; 00594d2b
    CALL FUN_005c0336                   ; 00594d2c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00594d31
    MOV EAX,EBX                         ; 00594d34
    POP EBX                             ; 00594d36
    RET                                 ; 00594d37
    PUSH EAX                            ; 00594d38
        ;   Label: LAB_00594d38
    CALL FUN_005c0344                   ; 00594d39
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00594d3e
    MOV EAX,EBX                         ; 00594d41
    POP EBX                             ; 00594d43
    RET                                 ; 00594d44

