; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040deb0(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040deb0
        ;   Label: FUN_0040deb0
    ADD EAX,0x2b4                       ; 0040deb4
    PUSH EAX                            ; 0040deb9
    CALL FUN_0044fd00                   ; 0040deba
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 0040debf
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040dec2
    PUSH EDX                            ; 0040dec6
    CALL FUN_00408a80                   ; 0040dec7
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 0040decc
    RET                                 ; 0040decf

