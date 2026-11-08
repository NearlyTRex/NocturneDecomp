; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dfed0(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004b7140 at 004b72f7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004dfed0
        ;   Label: FUN_004dfed0
    XOR DL,DL                           ; 004dfed4
    MOV byte ptr [EAX + 0x1c37790],DL   ; 004dfed6
    RET                                 ; 004dfedc

