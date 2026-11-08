; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd8f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004fd9f0 at 004fdab6
;
; Called Functions:
;   FUN_004fd810
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004fd8f0
        ;   Label: FUN_004fd8f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004fd8f2
    PUSH EDX                            ; 004fd8f6
    CALL FUN_004fd810                   ; 004fd8f7
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd810()
    ADD ESP,0x8                         ; 004fd8fc
    RET                                 ; 004fd8ff

