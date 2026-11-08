; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047dae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[6]:
;   FUN_0047d730 at 0047d75e
;   FUN_0047d800 at 0047d839
;   FUN_0047d900 at 0047d948
;   FUN_004b90d0 at 004b9e5e
;   FUN_004bd3a0 at 004bd3cb
;   FUN_0050cf50 at 0050d817
;
; Called Functions:
;   FUN_0047b1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047dae0
        ;   Label: FUN_0047dae0
    PUSH ESI                            ; 0047dae1
    PUSH 0x0                            ; 0047dae2
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047dae4
    PUSH EDX                            ; 0047dae8
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047dae9
    PUSH ECX                            ; 0047daed
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047daee
    PUSH EBX                            ; 0047daf2
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047daf3
    PUSH ESI                            ; 0047daf7
    CALL FUN_0047b1f0                   ; 0047daf8
        ;   XREF to: 0047b1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047b1f0()
    ADD ESP,0x14                        ; 0047dafd
    POP ESI                             ; 0047db00
    POP EBX                             ; 0047db01
    RET                                 ; 0047db02

