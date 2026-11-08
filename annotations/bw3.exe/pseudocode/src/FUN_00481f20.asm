; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00481f20(undefined4 *param_1)
;
;
; XREF[5]:
;   FUN_0047d8c0 at 0047d903
;   FUN_004831c0 at 004831c8
;   FUN_004a98f0 at 004a98fa
;   FUN_00528ce0 at 00528ce8
;   FUN_0055e7a0 at 0055e7b2
;
; Referenced Globals:
;   undefined1* PTR_FUN_005df024 = 00481f40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00481f20
        ;   Label: FUN_00481f20
    MOV dword ptr [EAX],0x0             ; 00481f24
    MOV dword ptr [EAX + 0x8],0x0       ; 00481f2a
    MOV dword ptr [EAX + 0x4],0x0       ; 00481f31
    MOV dword ptr [EAX + 0xc],0x5df024  ; 00481f38 | PTR_FUN_005df024
    RET                                 ; 00481f3f

