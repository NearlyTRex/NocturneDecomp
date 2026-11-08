; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00404410(void)
;
;
; XREF[1]:
;   FUN_00404440 at 00404447
;
; Referenced Globals:
;   undefined4 DAT_005f08d0
;   undefined4 DAT_007303dc
;   undefined4 DAT_01c6b5c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x007303dc]      ; 00404410 | DAT_007303dc
        ;   Label: FUN_00404410
    TEST EDX,EDX                        ; 00404416
    JL 0x0040442e                       ; 00404418
        ;   XREF to: 0040442e (CONDITIONAL_JUMP)  ; LAB_0040442e
    MOV ECX,dword ptr [EDX*0x4 + 0x5f08d0] ; 0040441a | DAT_005f08d0
    MOV dword ptr [0x01c6b5c0],ECX      ; 00404421 | DAT_01c6b5c0
    MOV dword ptr [0x007303dc],EDX      ; 00404427 | DAT_007303dc
    RET                                 ; 0040442d
    MOV ECX,EDX                         ; 0040442e
        ;   Label: LAB_0040442e
    NEG ECX                             ; 00404430
    MOV dword ptr [0x01c6b5c0],ECX      ; 00404432 | DAT_01c6b5c0
    MOV dword ptr [0x007303dc],EDX      ; 00404438 | DAT_007303dc
    RET                                 ; 0040443e

