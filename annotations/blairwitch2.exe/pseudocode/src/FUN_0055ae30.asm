; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055ae30(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[7]:
;   FUN_00489670 at 0048c24b
;   FUN_004b90d0 at 004bab21
;   FUN_00529750 at 005298ca
;   FUN_0055adc0 at 0055ae12
;   FUN_00583160 at 005833a1
;   FUN_0058a660 at 0058aa14
;   FUN_0058acf0 at 0058ad22
;
; Called Functions:
;   FUN_005594c0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0055ae30
        ;   Label: FUN_0055ae30
    PUSH 0x0                            ; 0055ae32
    PUSH 0x0                            ; 0055ae34
    PUSH 0x0                            ; 0055ae36
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0055ae38
    PUSH 0x0                            ; 0055ae3c
    PUSH EDX                            ; 0055ae3e
    MOV ECX,dword ptr [ESP + 0x20]      ; 0055ae3f
    PUSH ECX                            ; 0055ae43
    CALL FUN_005594c0                   ; 0055ae44
        ;   XREF to: 005594c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005594c0()
    ADD ESP,0x1c                        ; 0055ae49
    RET                                 ; 0055ae4c

