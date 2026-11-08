; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00517f10(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00492a40 at 00492aa7
;   FUN_00497870 at 004979df
;
; Called Functions:
;   FUN_00518010
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00517f10
        ;   Label: FUN_00517f10
    MOV EDX,dword ptr [ESP + 0x8]       ; 00517f14
    PUSH EDX                            ; 00517f18
    PUSH EAX                            ; 00517f19
    PUSH EDX                            ; 00517f1a
    PUSH EAX                            ; 00517f1b
    CALL FUN_00518010                   ; 00517f1c
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; undefined FUN_00518010()
    ADD ESP,0x10                        ; 00517f21
    RET                                 ; 00517f24

