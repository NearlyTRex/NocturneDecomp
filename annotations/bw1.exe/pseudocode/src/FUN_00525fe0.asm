; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00525fe0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005260e0 at 005261a6
;
; Called Functions:
;   FUN_00525f00
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00525fe0
        ;   Label: FUN_00525fe0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00525fe2
    PUSH EDX                            ; 00525fe6
    CALL FUN_00525f00                   ; 00525fe7
        ;   XREF to: 00525f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00525f00()
    ADD ESP,0x8                         ; 00525fec
    RET                                 ; 00525fef

