; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_1000fe40(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_1000fc30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 1000fe40
        ;   Label: FUN_1000fe40
    PUSH 0x1                            ; 1000fe44
    MOV ECX,dword ptr [ESP + 0xc]       ; 1000fe46
    PUSH EAX                            ; 1000fe4a
    MOV EDX,dword ptr [ESP + 0xc]       ; 1000fe4b
    PUSH ECX                            ; 1000fe4f
    PUSH EDX                            ; 1000fe50
    CALL FUN_1000fc30                   ; 1000fe51
        ;   XREF to: 1000fc30 (UNCONDITIONAL_CALL)  ; undefined FUN_1000fc30()
    ADD ESP,0x10                        ; 1000fe56
    RET                                 ; 1000fe59

