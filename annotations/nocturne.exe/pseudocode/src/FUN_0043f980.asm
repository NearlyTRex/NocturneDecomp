; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043f980(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0043f8e0 at 0043f8f5
;
; Referenced Globals:
;   undefined4 DAT_0059bd90
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59bd90                       ; 0043f980 | DAT_0059bd90
        ;   Label: FUN_0043f980
    PUSH 0x3e8                          ; 0043f985
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043f98a
    PUSH EDX                            ; 0043f98e
    CALL FUN_0056494f                   ; 0043f98f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0043f994
    RET                                 ; 0043f997

