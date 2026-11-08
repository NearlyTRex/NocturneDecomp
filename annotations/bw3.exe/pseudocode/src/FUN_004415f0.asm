; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004415f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00440800
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004415f0
        ;   Label: FUN_004415f0
    PUSH EDX                            ; 004415f4
    CALL FUN_00440800                   ; 004415f5
        ;   XREF to: 00440800 (UNCONDITIONAL_CALL)  ; undefined FUN_00440800()
    ADD ESP,0x4                         ; 004415fa
    MOV dword ptr [EAX],0x5dd4f4        ; 004415fd
    RET                                 ; 00441603

