; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00460e10(int param_1)
;
;
; XREF[5]:
;   FUN_00481870 at 004819a9
;   FUN_00481a70 at 00481b9c
;   FUN_00481ca0 at 00481cf8
;   FUN_00481e20 at 00481edf
;   FUN_0051c000 at 0051c02e
;
; Called Functions:
;   FUN_00460f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460e10
        ;   Label: FUN_00460e10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00460e11
    PUSH EBX                            ; 00460e15
    MOV dword ptr [EBX + 0x10c],0x0     ; 00460e16
    CALL FUN_00460f90                   ; 00460e20
        ;   XREF to: 00460f90 (UNCONDITIONAL_CALL)  ; undefined FUN_00460f90()
    ADD ESP,0x4                         ; 00460e25
    MOV EAX,EBX                         ; 00460e28
    POP EBX                             ; 00460e2a
    RET                                 ; 00460e2b

