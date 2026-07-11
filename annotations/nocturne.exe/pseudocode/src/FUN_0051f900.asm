; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051f900(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005993f0
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993f0                       ; 0051f900 | DAT_005993f0
        ;   Label: FUN_0051f900
    PUSH 0x64                           ; 0051f905
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051f907
    PUSH EDX                            ; 0051f90b
    CALL FUN_0056494f                   ; 0051f90c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0051f911
    RET                                 ; 0051f914

