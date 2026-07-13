; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056b4eb(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0056b538
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b4eb
        ;   Label: FUN_0056b4eb
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056b4ef
    MOV EDX,dword ptr [EAX + -0x4]      ; 0056b4f3
    PUSH ECX                            ; 0056b4f6
    SUB EAX,EDX                         ; 0056b4f7
    PUSH EAX                            ; 0056b4f9
    CALL FUN_0056b538                   ; 0056b4fa
        ;   XREF to: 0056b538 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b538()
    ADD ESP,0x8                         ; 0056b4ff
    RET                                 ; 0056b502

