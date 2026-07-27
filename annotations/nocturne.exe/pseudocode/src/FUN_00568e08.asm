; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568e08(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005635c0 at 00563682
;
; Called Functions:
;   FUN_00568d58
;   FUN_0056f2d0
;
; *****************************************************************************

section .text

    CALL FUN_0056f2d0                   ; 00568e08
        ;   XREF to: 0056f2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f2d0()
        ;   Label: FUN_00568e08
    MOV EDX,dword ptr [ESP + 0x4]       ; 00568e0d
    PUSH EDX                            ; 00568e11
    CALL FUN_00568d58                   ; 00568e12
        ;   XREF to: 00568d58 (UNCONDITIONAL_CALL)  ; undefined FUN_00568d58()
    ADD ESP,0x4                         ; 00568e17
    RET                                 ; 00568e1a

