; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005503a0(uint param_1)
;
;
; XREF[4]:
;   FUN_00450c60 at 00453169
;   FUN_00491be0 at 00491c30
;   FUN_0055ac50 at 0055ad51
;   FUN_00563060 at 00565642
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 005503a0 | DAT_0264161c
        ;   Label: FUN_005503a0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005503a6
    SUB EAX,EDX                         ; 005503ad
    SHL EAX,0x5                         ; 005503af
    MOV EDX,dword ptr [ESP + 0x4]       ; 005503b2
    OR dword ptr [EAX + 0x264166c],EDX  ; 005503b6
    RET                                 ; 005503bc

