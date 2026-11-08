; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00421ad0(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_00489b80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00421ad0
        ;   Label: FUN_00421ad0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00421ad4
    MOV ECX,dword ptr [EAX + 0x27b0]    ; 00421ad8
    TEST ECX,ECX                        ; 00421ade
    JZ 0x00421ae3                       ; 00421ae0
        ;   XREF to: 00421ae3 (CONDITIONAL_JUMP)  ; LAB_00421ae3
    RET                                 ; 00421ae2
    PUSH EDX                            ; 00421ae3
        ;   Label: LAB_00421ae3
    PUSH EAX                            ; 00421ae4
    MOV dword ptr [EDX + 0x4],ECX       ; 00421ae5
    CALL FUN_00489b80                   ; 00421ae8
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00489b80()
    ADD ESP,0x8                         ; 00421aed
    RET                                 ; 00421af0

