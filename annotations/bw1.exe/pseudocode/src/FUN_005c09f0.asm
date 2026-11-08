; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c09f0(undefined4 param_1)
;
;
; XREF[65]:
;   FUN_0040d1c0 at 0040d1d5
;   FUN_0043a200 at 0043a2dc
;   FUN_00442fb0 at 00442fcb
;   FUN_00443f00 at 00443f7e
;   FUN_0044cdf0 at 0044ce40
;   FUN_00457d70 at 00457d9d
;   FUN_0045da10 at 0045da1f
;   FUN_0045dd90 at 0045dd9f
;   FUN_0045f100 at 0045f112
;   FUN_00462670 at 00462694
;   ... and 55 more
;
; Called Functions:
;   FUN_005c0a00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c09f0
        ;   Label: FUN_005c09f0
    PUSH EDX                            ; 005c09f4
    CALL FUN_005c0a00                   ; 005c09f5
        ;   XREF to: 005c0a00 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0a00()
    ADD ESP,0x4                         ; 005c09fa
    RET                                 ; 005c09fd

