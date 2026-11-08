; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047e760(undefined4 param_1)
;
;
; XREF[9]:
;   FUN_0047b1f0 at 0047b4c3
;   FUN_0047b800 at 0047bac0
;   FUN_0047c0f0 at 0047c742
;   FUN_0047d270 at 0047d54b
;   FUN_00482250 at 004822ff
;   FUN_004b6170 at 004b66b0
;   FUN_004eb7c0 at 004eb9fc
;   FUN_004ebf10 at 004ecb8d
;   FUN_0050b8d0 at 0050ba48
;
; Called Functions:
;   FUN_0047bbd0
;   FUN_0047bca0
;   FUN_0047e780
;
; *****************************************************************************

section .text

    CALL FUN_0047bca0                   ; 0047e760
        ;   XREF to: 0047bca0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bca0()
        ;   Label: FUN_0047e760
    CALL FUN_0047bbd0                   ; 0047e765
        ;   XREF to: 0047bbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bbd0()
    MOV EDX,dword ptr [ESP + 0x4]       ; 0047e76a
    PUSH EDX                            ; 0047e76e
    CALL FUN_0047e780                   ; 0047e76f
        ;   XREF to: 0047e780 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e780()
    ADD ESP,0x4                         ; 0047e774
    RET                                 ; 0047e777

