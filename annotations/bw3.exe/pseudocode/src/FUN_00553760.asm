; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00553760(int param_1)
;
;
; XREF[3]:
;   FUN_00551d20 at 005520c1
;   FUN_00553520 at 00553554
;   FUN_00553960 at 00553efc
;
; Referenced Globals:
;   undefined4 DAT_02cf3280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553760
        ;   Label: FUN_00553760
    PUSH EBP                            ; 00553761
    MOV EBX,dword ptr [ESP + 0xc]       ; 00553762
    CMP dword ptr [EBX + 0x1ac],0x0     ; 00553766
    JZ 0x00553799                       ; 0055376d
        ;   XREF to: 00553799 (CONDITIONAL_JUMP)  ; LAB_00553799
    PUSH ESI                            ; 0055376f
    MOV ECX,dword ptr [EBX + 0x158]     ; 00553770
    TEST ECX,ECX                        ; 00553776
    JZ 0x00553784                       ; 00553778
        ;   XREF to: 00553784 (CONDITIONAL_JUMP)  ; LAB_00553784
    MOV ESI,dword ptr [0x02cf3280]      ; 0055377a | DAT_02cf3280
    TEST ESI,ESI                        ; 00553780
    JNZ 0x0055379c                      ; 00553782
        ;   XREF to: 0055379c (CONDITIONAL_JUMP)  ; LAB_0055379c
    MOV dword ptr [EBX + 0x1ac],0x0     ; 00553784
        ;   Label: LAB_00553784
    MOV dword ptr [EBX + 0x1a8],0x0     ; 0055378e
    POP ESI                             ; 00553798
    POP EBP                             ; 00553799
        ;   Label: LAB_00553799
    POP EBX                             ; 0055379a
    RET                                 ; 0055379b
    PUSH EDI                            ; 0055379c
        ;   Label: LAB_0055379c
    MOV EDI,dword ptr [EBX + 0x1ac]     ; 0055379d
    PUSH EDI                            ; 005537a3
    MOV EBP,dword ptr [EBX + 0x1a8]     ; 005537a4
    PUSH EBP                            ; 005537aa
    PUSH ECX                            ; 005537ab
    MOV EDX,dword ptr [ESI]             ; 005537ac
    PUSH ESI                            ; 005537ae
    CALL dword ptr [EDX + 0x3c]         ; 005537af
    ADD ESP,0x10                        ; 005537b2
    POP EDI                             ; 005537b5
    JMP 0x00553784                      ; 005537b6
        ;   XREF to: 00553784 (UNCONDITIONAL_JUMP)  ; LAB_00553784

