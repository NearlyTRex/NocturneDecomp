; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005171e0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00516d70 at 00516dc3
;
; Called Functions:
;   FUN_00517130
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005171e0
        ;   Label: FUN_005171e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005171e4
    PUSH EDX                            ; 005171e8
    PUSH EAX                            ; 005171e9
    PUSH EAX                            ; 005171ea
    CALL FUN_00517130                   ; 005171eb
        ;   XREF to: 00517130 (UNCONDITIONAL_CALL)  ; undefined FUN_00517130()
    ADD ESP,0xc                         ; 005171f0
    RET                                 ; 005171f3

