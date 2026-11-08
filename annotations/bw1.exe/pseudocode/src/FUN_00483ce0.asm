; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483ce0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00425650 at 0042574c
;   FUN_005a9f10 at 005aa50e
;
; Referenced Globals:
;   undefined4 DAT_00713a5c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00483ce0
        ;   Label: FUN_00483ce0
    MOV [0x00713a5c],EAX                ; 00483ce4 | DAT_00713a5c
    RET                                 ; 00483ce9

