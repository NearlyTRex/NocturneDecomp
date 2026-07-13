; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00565106(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00565264
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00565106
        ;   Label: FUN_00565106
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056510a
    MOV EDX,dword ptr [EAX + -0x4]      ; 0056510e
    PUSH ECX                            ; 00565111
    SUB EAX,EDX                         ; 00565112
    PUSH EAX                            ; 00565114
    CALL FUN_00565264                   ; 00565115
        ;   XREF to: 00565264 (UNCONDITIONAL_CALL)  ; undefined FUN_00565264()
    ADD ESP,0x8                         ; 0056511a
    RET                                 ; 0056511d

