; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00552360(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005522d0 at 005522e5
;
; Referenced Globals:
;   undefined4 DAT_005a3fd0
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a3fd0                       ; 00552360 | DAT_005a3fd0
        ;   Label: FUN_00552360
    PUSH 0x3e8                          ; 00552365
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055236a
    PUSH EDX                            ; 0055236e
    CALL FUN_0056494f                   ; 0055236f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 00552374
    RET                                 ; 00552377

