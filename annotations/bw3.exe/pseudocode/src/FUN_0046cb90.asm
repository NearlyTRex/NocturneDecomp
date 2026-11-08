; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046cb90(undefined4 param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[12]:
;   FUN_00412c50 at 00412d79
;   FUN_00448ff0 at 004491d7
;   FUN_00449840 at 0044999e
;   FUN_0045c530 at 0045c5c8
;   FUN_004dbe70 at 004dc0da
;   FUN_004f4070 at 004f4080
;   FUN_004f9670 at 004f96fc
;   FUN_005365c0 at 005368ee
;   FUN_0053af20 at 0053af2f
;   FUN_0053f940 at 00540330
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_005bc4f3
;
; Called Functions:
;   FUN_004e6a40
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046cb90
        ;   Label: FUN_0046cb90
    SUB ESP,0x8                         ; 0046cb91
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046cb94
    FLD double ptr [0x005bc4f3]         ; 0046cb98 | DAT_005bc4f3
    FLD float ptr [EAX + 0x8]           ; 0046cb9e
    FMUL ST1                            ; 0046cba1
    FLD float ptr [EAX + 0x4]           ; 0046cba3
    FMUL ST2                            ; 0046cba6
    FLD float ptr [EAX]                 ; 0046cba8
    FMULP ST3                           ; 0046cbaa
    FXCH                                ; 0046cbac
    CALL FUN_005a3120                   ; 0046cbae
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 0046cbb3
    CALL FUN_005a3120                   ; 0046cbb5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 0046cbba
    FISTP dword ptr [ESP]               ; 0046cbbc
    FISTP dword ptr [ESP + 0x4]         ; 0046cbbf
    MOV EDX,dword ptr [ESP]             ; 0046cbc3
    MOV ECX,dword ptr [ESP + 0x4]       ; 0046cbc6
    PUSH EDX                            ; 0046cbca
    CALL FUN_005a3120                   ; 0046cbcb
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH ECX                            ; 0046cbd0
    FISTP dword ptr [ESP + 0xc]         ; 0046cbd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046cbd5
    PUSH EBX                            ; 0046cbd9
    CALL FUN_004e6a40                   ; 0046cbda
        ;   XREF to: 004e6a40 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6a40()
    ADD ESP,0xc                         ; 0046cbdf
    ADD ESP,0x8                         ; 0046cbe2
    POP EBX                             ; 0046cbe5
    RET                                 ; 0046cbe6

