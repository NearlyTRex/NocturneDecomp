; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00485ff0(void)
;
;
; XREF[2]:
;   FUN_00483c00 at 00483fa4
;   FUN_004843d0 at 004844d1
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;
; Called Functions:
;   FUN_00485fd0
;
; *****************************************************************************

section .text

    CALL FUN_00485fd0                   ; 00485ff0
        ;   XREF to: 00485fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00485fd0()
        ;   Label: FUN_00485ff0
    MOV EDX,dword ptr [0x005fba1c]      ; 00485ff5 | DAT_005fba1c
    IMUL EDX,EAX                        ; 00485ffb
    MOV ECX,dword ptr [0x005fba18]      ; 00485ffe | DAT_005fba18
    MOV EAX,EDX                         ; 00486004
    SAR EDX,0x1f                        ; 00486006
    IDIV ECX                            ; 00486009
    LEA EDX,[EAX*0x4 + 0x0]             ; 0048600b
    MOV ECX,0x3                         ; 00486012
    MOV EAX,EDX                         ; 00486017
    SAR EDX,0x1f                        ; 00486019
    IDIV ECX                            ; 0048601c
    RET                                 ; 0048601e

