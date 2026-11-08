; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0057cf20(int *param_1)
;
;
; XREF[1]:
;   FUN_004a7d00 at 004a7eb4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057cf20
        ;   Label: FUN_0057cf20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057cf21
    PUSH EBX                            ; 0057cf25
    MOV EAX,dword ptr [EBX]             ; 0057cf26
    CALL dword ptr [EAX + 0xc]          ; 0057cf28
    ADD ESP,0x4                         ; 0057cf2b
    MOV EDX,EAX                         ; 0057cf2e
    TEST EAX,EAX                        ; 0057cf30
    JL 0x0057cf37                       ; 0057cf32
        ;   XREF to: 0057cf37 (CONDITIONAL_JUMP)  ; LAB_0057cf37
    INC dword ptr [EBX + 0x10]          ; 0057cf34
    MOV EAX,EDX                         ; 0057cf37
        ;   Label: LAB_0057cf37
    POP EBX                             ; 0057cf39
    RET                                 ; 0057cf3a

