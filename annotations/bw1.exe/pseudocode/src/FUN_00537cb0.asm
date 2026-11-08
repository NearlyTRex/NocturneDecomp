; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00537cb0(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005380c0 at 00538124
;
; Called Functions:
;   FUN_0043b2e0
;   FUN_00537d00
;   FUN_005380b0
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537cb0
        ;   Label: FUN_00537cb0
    PUSH ESI                            ; 00537cb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00537cb2
    MOV ESI,dword ptr [EBX + 0x18]      ; 00537cb6
    IMUL ESI,dword ptr [EBX + 0x1c]     ; 00537cb9
    PUSH ESI                            ; 00537cbd
    PUSH 0x0                            ; 00537cbe
    PUSH EBX                            ; 00537cc0
    CALL FUN_0043b2e0                   ; 00537cc1
        ;   XREF to: 0043b2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b2e0()
    MOV ESI,EAX                         ; 00537cc6
    ADD ESP,0xc                         ; 00537cc8
    TEST EAX,EAX                        ; 00537ccb
    JNZ 0x00537cd2                      ; 00537ccd
        ;   XREF to: 00537cd2 (CONDITIONAL_JUMP)  ; LAB_00537cd2
    POP ESI                             ; 00537ccf
        ;   Label: LAB_00537ccf
    POP EBX                             ; 00537cd0
    RET                                 ; 00537cd1
    MOV ECX,dword ptr [EBX + 0x18]      ; 00537cd2
        ;   Label: LAB_00537cd2
    PUSH ECX                            ; 00537cd5
    PUSH EAX                            ; 00537cd6
    PUSH EBX                            ; 00537cd7
    CALL FUN_00537d00                   ; 00537cd8
        ;   XREF to: 00537d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00537d00()
    ADD ESP,0xc                         ; 00537cdd
    PUSH ESI                            ; 00537ce0
    CALL FUN_005c09f0                   ; 00537ce1
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 00537ce6
    CMP dword ptr [ESP + 0x10],0x0      ; 00537ce9
    JZ 0x00537ccf                       ; 00537cee
        ;   XREF to: 00537ccf (CONDITIONAL_JUMP)  ; LAB_00537ccf
    PUSH EBX                            ; 00537cf0
    CALL FUN_005380b0                   ; 00537cf1
        ;   XREF to: 005380b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005380b0()
    ADD ESP,0x4                         ; 00537cf6
    POP ESI                             ; 00537cf9
    POP EBX                             ; 00537cfa
    RET                                 ; 00537cfb

