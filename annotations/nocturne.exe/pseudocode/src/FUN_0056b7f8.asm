; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056b7f8(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0056b810
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b7f8
        ;   Label: FUN_0056b7f8
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056b7fc
    MOV EDX,dword ptr [EAX + -0x4]      ; 0056b800
    PUSH ECX                            ; 0056b803
    SUB EAX,EDX                         ; 0056b804
    PUSH EAX                            ; 0056b806
    CALL FUN_0056b810                   ; 0056b807
        ;   XREF to: 0056b810 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b810()
    ADD ESP,0x8                         ; 0056b80c
    RET                                 ; 0056b80f

