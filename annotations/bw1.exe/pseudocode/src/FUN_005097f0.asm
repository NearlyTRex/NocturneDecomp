; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005097f0(int param_1)
;
;
; Called Functions:
;   FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005097f0
        ;   Label: FUN_005097f0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005097f3
    PUSH dword ptr [EAX + 0x580]        ; 005097f7
    PUSH dword ptr [EAX + 0x57c]        ; 005097fd
    CALL FUN_0040cc00                   ; 00509803
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xc],EAX       ; 00509808
    FLD float ptr [ESP + 0xc]           ; 0050980c
    ADD ESP,0x8                         ; 00509810
    FSTP float ptr [ESP]                ; 00509813
    MOV EAX,dword ptr [ESP]             ; 00509816
    ADD ESP,0x8                         ; 00509819
    LEA EAX,[EAX]                       ; 0050981c
    RET                                 ; 00509820
        ;   Label: LAB_00509820

