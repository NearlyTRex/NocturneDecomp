; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00516cb0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00516d60 at 00516d66
;
; Called Functions:
;   FUN_0042c6f0
;   FUN_00516d00
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 00516cb0
        ;   Label: FUN_00516cb0
    MOV EAX,ESP                         ; 00516cb6
    PUSH EAX                            ; 00516cb8
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00516cb9
    PUSH EDX                            ; 00516cc0
    CALL FUN_0042c6f0                   ; 00516cc1
        ;   XREF to: 0042c6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c6f0()
    ADD ESP,0x8                         ; 00516cc6
    MOV EAX,ESP                         ; 00516cc9
    PUSH EAX                            ; 00516ccb
    MOV ECX,dword ptr [ESP + 0x108]     ; 00516ccc
    PUSH ECX                            ; 00516cd3
    CALL FUN_00516d00                   ; 00516cd4
        ;   XREF to: 00516d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00516d00()
    ADD ESP,0x8                         ; 00516cd9
    ADD ESP,0x100                       ; 00516cdc
    LEA EAX,[EAX]                       ; 00516ce2
    LEA EDX,[EDX]                       ; 00516ce8
    MOV EAX,EAX                         ; 00516cee
    RET                                 ; 00516cf0

