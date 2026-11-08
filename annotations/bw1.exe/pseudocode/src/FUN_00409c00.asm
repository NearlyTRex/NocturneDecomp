; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00409c00(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00433e50 at 00433e68
;
; Referenced Globals:
;   undefined4 DAT_0061dca4
;
; Called Functions:
;   FUN_004c0970
;   FUN_004e64d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00409c00
        ;   Label: FUN_00409c00
    PUSH EDX                            ; 00409c04
    CALL FUN_004c0970                   ; 00409c05
        ;   XREF to: 004c0970 (UNCONDITIONAL_CALL)  ; undefined FUN_004c0970()
    ADD ESP,0x4                         ; 00409c0a
    TEST EAX,EAX                        ; 00409c0d
    JZ 0x00409c12                       ; 00409c0f
        ;   XREF to: 00409c12 (CONDITIONAL_JUMP)  ; LAB_00409c12
    RET                                 ; 00409c11
    PUSH ESI                            ; 00409c12
        ;   Label: LAB_00409c12
    PUSH EBX                            ; 00409c13
    PUSH EAX                            ; 00409c14
    MOV ECX,dword ptr [ESP + 0x14]      ; 00409c15
    PUSH dword ptr [ESP + 0x18]         ; 00409c19
    PUSH ECX                            ; 00409c1d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00409c1e
    PUSH EBX                            ; 00409c22
    MOV ESI,dword ptr [0x0061dca4]      ; 00409c23 | DAT_0061dca4
    PUSH ESI                            ; 00409c29
    CALL FUN_004e64d0                   ; 00409c2a
        ;   XREF to: 004e64d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e64d0()
    ADD ESP,0x14                        ; 00409c2f
    POP EBX                             ; 00409c32
    POP ESI                             ; 00409c33
    RET                                 ; 00409c34

