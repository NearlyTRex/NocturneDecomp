; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051dcb0(int param_1)
;
;
; XREF[2]:
;   FUN_0040cbf0 at 0040cca5
;   FUN_0051e0c0 at 0051e0ff
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051dcb0
        ;   Label: FUN_0051dcb0
    MOV EAX,EDX                         ; 0051dcb4
    ADD EDX,0x78                        ; 0051dcb6
    ADD EAX,0x4                         ; 0051dcb9
        ;   Label: LAB_0051dcb9
    MOV dword ptr [EAX + 0x21b4],0x0    ; 0051dcbc
    CMP EAX,EDX                         ; 0051dcc6
    JNZ 0x0051dcb9                      ; 0051dcc8
        ;   XREF to: 0051dcb9 (CONDITIONAL_JUMP)  ; LAB_0051dcb9
    RET                                 ; 0051dcca

