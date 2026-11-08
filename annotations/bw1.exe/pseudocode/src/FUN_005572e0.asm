; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005572e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004a0980 at 004a0a8a
;   FUN_0050fba0 at 0050ff4c
;
; Referenced Globals:
;   undefined4 DAT_01fe5c1c
;
; Called Functions:
;   FUN_0048e9b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 005572e0
        ;   Label: FUN_005572e0
    PUSH EDX                            ; 005572e4
    MOV ECX,dword ptr [ESP + 0xc]       ; 005572e5
    PUSH ECX                            ; 005572e9
    PUSH 0x1fe5c1c                      ; 005572ea | DAT_01fe5c1c
    CALL FUN_0048e9b0                   ; 005572ef
        ;   XREF to: 0048e9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e9b0()
    ADD ESP,0xc                         ; 005572f4
    RET                                 ; 005572f7

