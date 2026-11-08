; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d1cb0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e12d0
;
; Called Functions:
;   FUN_0057aed0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1cb0
        ;   Label: FUN_004d1cb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d1cb1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d1cb5
    JNZ 0x004d1cd6                      ; 004d1cba
        ;   XREF to: 004d1cd6 (CONDITIONAL_JUMP)  ; LAB_004d1cd6
    PUSH 0x1                            ; 004d1cbc
    PUSH EBX                            ; 004d1cbe
    CALL FUN_0057aed0                   ; 004d1cbf
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057aed0()
    ADD ESP,0x8                         ; 004d1cc4
    MOV DL,byte ptr [ESP + 0xc]         ; 004d1cc7
    MOV EBX,EAX                         ; 004d1ccb
    TEST DL,0x2                         ; 004d1ccd
    JNZ 0x004d1cf1                      ; 004d1cd0
        ;   XREF to: 004d1cf1 (CONDITIONAL_JUMP)  ; LAB_004d1cf1
    MOV EAX,EBX                         ; 004d1cd2
    POP EBX                             ; 004d1cd4
    RET                                 ; 004d1cd5
    PUSH 0x5e12d0                       ; 004d1cd6 | DAT_005e12d0
        ;   Label: LAB_004d1cd6
    PUSH EBX                            ; 004d1cdb
    CALL FUN_005a308f                   ; 004d1cdc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004d1ce1
    PUSH EAX                            ; 004d1ce4
    CALL FUN_005a30b6                   ; 004d1ce5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004d1cea
    MOV EAX,EBX                         ; 004d1ced
    POP EBX                             ; 004d1cef
    RET                                 ; 004d1cf0
    PUSH EAX                            ; 004d1cf1
        ;   Label: LAB_004d1cf1
    CALL FUN_005a30c4                   ; 004d1cf2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004d1cf7
    MOV EAX,EBX                         ; 004d1cfa
    POP EBX                             ; 004d1cfc
    RET                                 ; 004d1cfd

