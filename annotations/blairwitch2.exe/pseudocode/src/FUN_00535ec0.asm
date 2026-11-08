; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00535ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00488320 at 0048842a
;   FUN_004f0e10 at 004f11bc
;
; Referenced Globals:
;   undefined4 DAT_01fc9c68
;
; Called Functions:
;   FUN_004764c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 00535ec0
        ;   Label: FUN_00535ec0
    PUSH EDX                            ; 00535ec4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00535ec5
    PUSH ECX                            ; 00535ec9
    PUSH 0x1fc9c68                      ; 00535eca | DAT_01fc9c68
    CALL FUN_004764c0                   ; 00535ecf
        ;   XREF to: 004764c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004764c0()
    ADD ESP,0xc                         ; 00535ed4
    RET                                 ; 00535ed7

