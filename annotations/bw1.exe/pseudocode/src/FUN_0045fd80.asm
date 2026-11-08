; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045fd80(float *param_1,float *param_2,float *param_3)
;
;
; XREF[4]:
;   FUN_0045f3e0 at 0045f3f8
;   FUN_005b5620 at 005b563d
;   FUN_005b5760 at 005b577d
;   FUN_005b7ed0 at 005b7ef6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045fd80
        ;   Label: FUN_0045fd80
    PUSH ESI                            ; 0045fd81
    PUSH EDI                            ; 0045fd82
    PUSH EBP                            ; 0045fd83
    MOV EBP,ESP                         ; 0045fd84
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0045fd86
    FLD float ptr [EBX]                 ; 0045fd8c
    FSINCOS                             ; 0045fd8e
    MOV EBX,dword ptr [EBP + 0x18]      ; 0045fd90
    FSTP float ptr [EBX]                ; 0045fd96
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045fd98
    FSTP float ptr [EBX]                ; 0045fd9e
    MOV ESP,EBP                         ; 0045fda0
    POP EBP                             ; 0045fda2
    POP EDI                             ; 0045fda3
    POP ESI                             ; 0045fda4
    POP EBX                             ; 0045fda5
    RET                                 ; 0045fda6

