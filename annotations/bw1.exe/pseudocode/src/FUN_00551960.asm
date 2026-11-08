; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00551960(undefined4 param_1,int param_2)
;
;
; XREF[8]:
;   FUN_00422f90 at 004230b4
;   FUN_004301e0 at 00430301
;   FUN_0049f310 at 0049f4a3
;   FUN_004ae300 at 004ae3b1
;   FUN_004af340 at 004af384
;   FUN_004fc590 at 004fc61e
;   FUN_0055de50 at 0055eab2
;   FUN_005adb20 at 005add3d
;
; Referenced Globals:
;   undefined4 DAT_01fe55d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01fe55d0]      ; 00551960 | DAT_01fe55d0
        ;   Label: FUN_00551960
    MOV ECX,dword ptr [ESP + 0x8]       ; 00551966
    CMP dword ptr [ECX + 0xc],0x100     ; 0055196a
    JL 0x00551978                       ; 00551971
        ;   XREF to: 00551978 (CONDITIONAL_JUMP)  ; LAB_00551978
    CMP EDX,0x64                        ; 00551973
    JL 0x0055197f                       ; 00551976
        ;   XREF to: 0055197f (CONDITIONAL_JUMP)  ; LAB_0055197f
    MOV dword ptr [0x01fe55d0],EDX      ; 00551978 | DAT_01fe55d0
        ;   Label: LAB_00551978
    RET                                 ; 0055197e
    INC EDX                             ; 0055197f
        ;   Label: LAB_0055197f
    MOV dword ptr [EDX*0x4 + 0x1fe55d0],ECX ; 00551980 | DAT_01fe55d0
    MOV dword ptr [0x01fe55d0],EDX      ; 00551987 | DAT_01fe55d0
    RET                                 ; 0055198d

