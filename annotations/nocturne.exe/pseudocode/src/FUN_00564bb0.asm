; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00564bb0(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004f1c90 at 004f1dad
;   FUN_00522480 at 00522529
;   FUN_005279e0 at 00527b7d
;
; Called Functions:
;   FUN_0056b215
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00564bb0
        ;   Label: FUN_00564bb0
    PUSH EDX                            ; 00564bb4
    CALL FUN_0056b215                   ; 00564bb5
        ;   XREF to: 0056b215 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b215()
    ADD ESP,0x4                         ; 00564bba
    RET                                 ; 00564bbd

