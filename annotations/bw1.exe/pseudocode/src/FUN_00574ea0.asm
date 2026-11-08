; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574ea0(void)
;
;
; XREF[1]:
;   thunk_FUN_00574ea0 at 0057cb90
;
; Referenced Globals:
;   undefined4 DAT_02c745bc
;
; Called Functions:
;   FUN_005746a0
;   FUN_005750e0
;   FUN_00575670
;   FUN_00575940
;   FUN_00575b70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c745bc]      ; 00574ea0 | DAT_02c745bc
        ;   Label: FUN_00574ea0
    TEST EDX,EDX                        ; 00574ea6
    JLE 0x00574eab                      ; 00574ea8
        ;   XREF to: 00574eab (CONDITIONAL_JUMP)  ; LAB_00574eab
    RET                                 ; 00574eaa
    LEA ECX,[EDX + 0x1]                 ; 00574eab
        ;   Label: LAB_00574eab
    MOV dword ptr [0x02c745bc],ECX      ; 00574eae | DAT_02c745bc
    CALL FUN_005750e0                   ; 00574eb4
        ;   XREF to: 005750e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005750e0()
    CALL FUN_00575670                   ; 00574eb9
        ;   XREF to: 00575670 (UNCONDITIONAL_CALL)  ; undefined FUN_00575670()
    CALL FUN_00575b70                   ; 00574ebe
        ;   XREF to: 00575b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00575b70()
    CALL FUN_00575940                   ; 00574ec3
        ;   XREF to: 00575940 (UNCONDITIONAL_CALL)  ; undefined FUN_00575940()
    CALL FUN_005746a0                   ; 00574ec8
        ;   XREF to: 005746a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005746a0()
    DEC dword ptr [0x02c745bc]          ; 00574ecd | DAT_02c745bc
    RET                                 ; 00574ed3

