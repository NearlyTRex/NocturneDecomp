; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059e7a0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00522350 at 00527484
;
; Called Functions:
;   FUN_0059d8e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0059e7a0
        ;   Label: FUN_0059e7a0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059e7a4
    PUSH EDX                            ; 0059e7a8
    ADD EAX,0x10af8                     ; 0059e7a9
    PUSH EAX                            ; 0059e7ae
    CALL FUN_0059d8e0                   ; 0059e7af
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 0059e7b4
    RET                                 ; 0059e7b7

