; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004965f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0049d5b0 at 0049d5f0
;
; Called Functions:
;   FUN_00510e00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004965f0
        ;   Label: FUN_004965f0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004965f4
    MOV dword ptr [EAX + 0x4c],EDX      ; 004965f8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004965fb
    PUSH EDX                            ; 004965ff
    MOV ECX,dword ptr [ESP + 0xc]       ; 00496600
    PUSH ECX                            ; 00496604
    PUSH EAX                            ; 00496605
    CALL FUN_00510e00                   ; 00496606
        ;   XREF to: 00510e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00510e00()
    ADD ESP,0xc                         ; 0049660b
    MOV EAX,EAX                         ; 0049660e

