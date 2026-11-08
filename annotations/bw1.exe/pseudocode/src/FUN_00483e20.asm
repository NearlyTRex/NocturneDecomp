; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483e20(int param_1,undefined4 param_2)
;
;
; XREF[17]:
;   FUN_00418e50 at 00418f1e
;   FUN_00420990 at 00420a58
;   FUN_00441800 at 00441a1c
;   FUN_00457f70 at 00457fa7
;   FUN_004673a0 at 0046749a
;   FUN_00522b90 at 00522db3
;   FUN_00522dd0 at 00522ed1
;   FUN_0054eef0 at 0054f000
;   FUN_00550260 at 0055041e
;   FUN_00550da0 at 00550f88
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 DAT_0061b4c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00483e20
        ;   Label: FUN_00483e20
    MOV EDX,dword ptr [ESP + 0x4]       ; 00483e24
    MOV [0x0061b4c0],EAX                ; 00483e28 | DAT_0061b4c0
    MOV dword ptr [EDX + 0x10],EAX      ; 00483e2d
    RET                                 ; 00483e30

