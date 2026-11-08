; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055b1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00489670 at 0048b1cd
;
; Referenced Globals:
;   undefined4 DAT_0264badc
;   undefined4 DAT_0264bae0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0055b1b0
        ;   Label: FUN_0055b1b0
    MOV [0x0264badc],EAX                ; 0055b1b4 | DAT_0264badc
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055b1b9
    MOV [0x0264bae0],EAX                ; 0055b1bd | DAT_0264bae0
    RET                                 ; 0055b1c2

