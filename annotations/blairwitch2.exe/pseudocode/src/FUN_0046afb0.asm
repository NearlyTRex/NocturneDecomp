; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046afb0(undefined4 param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[12]:
;   FUN_0043b7f0 at 0043b9d7
;   FUN_0043c040 at 0043c19e
;   FUN_0044a020 at 0044a0b8
;   FUN_004dbd80 at 004dbfb9
;   FUN_004e1600 at 004e16cc
;   FUN_004f9950 at 004f9960
;   FUN_00502510 at 00502598
;   FUN_0052fad0 at 0052fdfe
;   FUN_005342e0 at 005342ef
;   FUN_005389b0 at 005389fe
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_005d1563
;
; Called Functions:
;   FUN_004ea360
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046afb0
        ;   Label: FUN_0046afb0
    SUB ESP,0x8                         ; 0046afb1
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046afb4
    FLD double ptr [0x005d1563]         ; 0046afb8 | DAT_005d1563
    FLD float ptr [EAX + 0x8]           ; 0046afbe
    FMUL ST1                            ; 0046afc1
    FLD float ptr [EAX + 0x4]           ; 0046afc3
    FMUL ST2                            ; 0046afc6
    FLD float ptr [EAX]                 ; 0046afc8
    FMULP ST3                           ; 0046afca
    FXCH                                ; 0046afcc
    CALL FUN_005b7ff0                   ; 0046afce
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0046afd3
    CALL FUN_005b7ff0                   ; 0046afd5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0046afda
    FISTP dword ptr [ESP]               ; 0046afdc
    FISTP dword ptr [ESP + 0x4]         ; 0046afdf
    MOV EDX,dword ptr [ESP]             ; 0046afe3
    MOV ECX,dword ptr [ESP + 0x4]       ; 0046afe6
    PUSH EDX                            ; 0046afea
    CALL FUN_005b7ff0                   ; 0046afeb
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    PUSH ECX                            ; 0046aff0
    FISTP dword ptr [ESP + 0xc]         ; 0046aff1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046aff5
    PUSH EBX                            ; 0046aff9
    CALL FUN_004ea360                   ; 0046affa
        ;   XREF to: 004ea360 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea360()
    ADD ESP,0xc                         ; 0046afff
    ADD ESP,0x8                         ; 0046b002
    POP EBX                             ; 0046b005
    RET                                 ; 0046b006

