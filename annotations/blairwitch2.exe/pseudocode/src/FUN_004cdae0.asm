; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cdae0(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cdae0
        ;   Label: FUN_004cdae0
    ADD EAX,0x2b4                       ; 004cdae4
    PUSH EAX                            ; 004cdae9
    CALL FUN_0044fd00                   ; 004cdaea
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 004cdaef
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cdaf2
    PUSH EDX                            ; 004cdaf6
    CALL FUN_00408a80                   ; 004cdaf7
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 004cdafc
    RET                                 ; 004cdaff

