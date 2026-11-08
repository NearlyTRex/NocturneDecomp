; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f4b00(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[5]:
;   FUN_004d27b0 at 004d545e
;   FUN_004d7250 at 004d7315
;   FUN_004f4f50 at 004f4f80
;   FUN_004f5760 at 004f5776
;   FUN_00544460 at 00547591
;
; Referenced Globals:
;   void* PTR_FUN_00602964 = 004f4b30
;
; Called Functions:
;   FUN_004f4b80
;   FUN_004f4bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4b00
        ;   Label: FUN_004f4b00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f4b01
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f4b05
    PUSH EDX                            ; 004f4b09
    PUSH EBX                            ; 004f4b0a
    MOV dword ptr [EBX + 0x200],0x602964 ; 004f4b0b | PTR_FUN_00602964
    CALL FUN_004f4b80                   ; 004f4b15
        ;   XREF to: 004f4b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004f4b80()
    ADD ESP,0x8                         ; 004f4b1a
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f4b1d
    PUSH ECX                            ; 004f4b21
    PUSH EBX                            ; 004f4b22
    CALL FUN_004f4bc0                   ; 004f4b23
        ;   XREF to: 004f4bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f4bc0()
    ADD ESP,0x8                         ; 004f4b28
    MOV EAX,EBX                         ; 004f4b2b
    POP EBX                             ; 004f4b2d
    RET                                 ; 004f4b2e

