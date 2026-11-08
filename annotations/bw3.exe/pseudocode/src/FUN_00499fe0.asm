; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00499fe0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004a28e0 at 004a2920
;
; Called Functions:
;   FUN_00509e40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00499fe0
        ;   Label: FUN_00499fe0
    MOV EDX,dword ptr [ESP + 0x10]      ; 00499fe4
    MOV dword ptr [EAX + 0x4c],EDX      ; 00499fe8
    MOV EDX,dword ptr [ESP + 0xc]       ; 00499feb
    PUSH EDX                            ; 00499fef
    MOV ECX,dword ptr [ESP + 0xc]       ; 00499ff0
    PUSH ECX                            ; 00499ff4
    PUSH EAX                            ; 00499ff5
    CALL FUN_00509e40                   ; 00499ff6
        ;   XREF to: 00509e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e40()
    ADD ESP,0xc                         ; 00499ffb
    MOV EAX,EAX                         ; 00499ffe

