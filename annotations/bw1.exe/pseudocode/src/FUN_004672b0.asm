; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004672b0(int param_1,int param_2)
;
;
; XREF[6]:
;   FUN_004672f0 at 0046730c
;   FUN_00467c00 at 00467ca2
;   FUN_004c5c60 at 004c5cd9
;   FUN_005224f0 at 0052251a
;   FUN_005226a0 at 005226b5
;   FUN_005a21a0 at 005a21e5
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004672b0
        ;   Label: FUN_004672b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004672b4
    MOV EDX,dword ptr [ECX + 0x100]     ; 004672b8
    CMP EAX,EDX                         ; 004672be
    JL 0x004672c5                       ; 004672c0
        ;   XREF to: 004672c5 (CONDITIONAL_JUMP)  ; LAB_004672c5
    LEA EAX,[EDX + -0x1]                ; 004672c2
    TEST EAX,EAX                        ; 004672c5
        ;   Label: LAB_004672c5
    JL 0x004672eb                       ; 004672c7
        ;   XREF to: 004672eb (CONDITIONAL_JUMP)  ; LAB_004672eb
    MOV EDX,dword ptr [ECX + 0x104]     ; 004672c9
        ;   Label: LAB_004672c9
    IMUL EDX,EAX                        ; 004672cf
    LEA EAX,[EDX*0x4 + 0x0]             ; 004672d2
    SUB EAX,EDX                         ; 004672d9
    LEA EDX,[EAX*0x4 + 0x0]             ; 004672db
    MOV EAX,dword ptr [ECX + 0x10c]     ; 004672e2
    ADD EAX,EDX                         ; 004672e8
    RET                                 ; 004672ea
    XOR EAX,EAX                         ; 004672eb
        ;   Label: LAB_004672eb
    JMP 0x004672c9                      ; 004672ed
        ;   XREF to: 004672c9 (UNCONDITIONAL_JUMP)  ; LAB_004672c9

