; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0056f900(int *param_1)
;
;
; Called Functions:
;   FUN_0056fc30
;   Ordinal_23
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f900
        ;   Label: FUN_0056f900
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f901
    PUSH EBX                            ; 0056f905
    CALL FUN_0056fc30                   ; 0056f906
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fc30()
    ADD ESP,0x4                         ; 0056f90b
    PUSH 0x0                            ; 0056f90e
    PUSH 0x1                            ; 0056f910
    PUSH 0x2                            ; 0056f912
    CALL Ordinal_23                     ; 0056f914
        ;   XREF to: 005b25c8 (UNCONDITIONAL_CALL)  ; undefined Ordinal_23()
    MOV dword ptr [EBX],EAX             ; 0056f919
    CMP EAX,-0x1                        ; 0056f91b
    SETNZ AL                            ; 0056f91e
    AND EAX,0xff                        ; 0056f921
    POP EBX                             ; 0056f926
    RET                                 ; 0056f927

