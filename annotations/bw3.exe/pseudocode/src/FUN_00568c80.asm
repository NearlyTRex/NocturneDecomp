; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00568c80(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e5110
;
; Called Functions:
;   FUN_0057aed0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568c80
        ;   Label: FUN_00568c80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00568c81
    TEST byte ptr [ESP + 0xc],0x4       ; 00568c85
    JNZ 0x00568ca6                      ; 00568c8a
        ;   XREF to: 00568ca6 (CONDITIONAL_JUMP)  ; LAB_00568ca6
    PUSH 0x1                            ; 00568c8c
    PUSH EBX                            ; 00568c8e
    CALL FUN_0057aed0                   ; 00568c8f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057aed0()
    ADD ESP,0x8                         ; 00568c94
    MOV DL,byte ptr [ESP + 0xc]         ; 00568c97
    MOV EBX,EAX                         ; 00568c9b
    TEST DL,0x2                         ; 00568c9d
    JNZ 0x00568cc1                      ; 00568ca0
        ;   XREF to: 00568cc1 (CONDITIONAL_JUMP)  ; LAB_00568cc1
    MOV EAX,EBX                         ; 00568ca2
    POP EBX                             ; 00568ca4
    RET                                 ; 00568ca5
    PUSH 0x5e5110                       ; 00568ca6 | DAT_005e5110
        ;   Label: LAB_00568ca6
    PUSH EBX                            ; 00568cab
    CALL FUN_005a308f                   ; 00568cac
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00568cb1
    PUSH EAX                            ; 00568cb4
    CALL FUN_005a30b6                   ; 00568cb5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00568cba
    MOV EAX,EBX                         ; 00568cbd
    POP EBX                             ; 00568cbf
    RET                                 ; 00568cc0
    PUSH EAX                            ; 00568cc1
        ;   Label: LAB_00568cc1
    CALL FUN_005a30c4                   ; 00568cc2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00568cc7
    MOV EAX,EBX                         ; 00568cca
    POP EBX                             ; 00568ccc
    RET                                 ; 00568ccd

