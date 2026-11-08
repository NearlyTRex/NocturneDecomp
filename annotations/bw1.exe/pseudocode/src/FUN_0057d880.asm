; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057d880(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[11]:
;   FUN_00417230 at 00417549
;   FUN_004a1d00 at 004a4a8d
;   FUN_004d27b0 at 004d282f
;   FUN_004f6bb0 at 004f6cfe
;   FUN_004f9f10 at 004fa2de
;   FUN_0054aa60 at 0054abda
;   FUN_0057cc00 at 0057ccf5
;   FUN_0057d810 at 0057d862
;   FUN_005a6da0 at 005a6fe1
;   FUN_005ae190 at 005ae544
;   ... and 1 more
;
; Called Functions:
;   FUN_0057bef0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0057d880
        ;   Label: FUN_0057d880
    PUSH 0x0                            ; 0057d882
    PUSH 0x0                            ; 0057d884
    PUSH 0x0                            ; 0057d886
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0057d888
    PUSH 0x0                            ; 0057d88c
    PUSH EDX                            ; 0057d88e
    MOV ECX,dword ptr [ESP + 0x20]      ; 0057d88f
    PUSH ECX                            ; 0057d893
    CALL FUN_0057bef0                   ; 0057d894
        ;   XREF to: 0057bef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057bef0()
    ADD ESP,0x1c                        ; 0057d899
    RET                                 ; 0057d89c

