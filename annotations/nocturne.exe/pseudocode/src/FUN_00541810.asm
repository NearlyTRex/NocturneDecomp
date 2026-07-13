; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00541810(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   FUN_00479f70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00541810
        ;   Label: FUN_00541810
    PUSH EAX                            ; 00541814
    MOV EDX,dword ptr [ESP + 0x8]       ; 00541815
    PUSH EDX                            ; 00541819
    MOV dword ptr [EAX + 0x4],0x0       ; 0054181a
    CALL FUN_00479f70                   ; 00541821
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00479f70()
    ADD ESP,0x8                         ; 00541826
    RET                                 ; 00541829

