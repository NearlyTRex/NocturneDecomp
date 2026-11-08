; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047db10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_004b90d0 at 004b9ecf
;
; Called Functions:
;   FUN_0047b1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047db10
        ;   Label: FUN_0047db10
    PUSH ESI                            ; 0047db11
    PUSH 0x1                            ; 0047db12
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047db14
    PUSH EDX                            ; 0047db18
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047db19
    PUSH ECX                            ; 0047db1d
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047db1e
    PUSH EBX                            ; 0047db22
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047db23
    PUSH ESI                            ; 0047db27
    CALL FUN_0047b1f0                   ; 0047db28
        ;   XREF to: 0047b1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047b1f0()
    ADD ESP,0x14                        ; 0047db2d
    POP ESI                             ; 0047db30
    POP EBX                             ; 0047db31
    RET                                 ; 0047db32

