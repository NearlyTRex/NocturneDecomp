; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005558e0(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00553960 at 00553aba
;   FUN_0055cb20 at 0055cbcd
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005558e0
        ;   Label: FUN_005558e0
    MOV ECX,dword ptr [EDX + 0x108]     ; 005558e4
    IMUL ECX,dword ptr [EDX + 0x104]    ; 005558ea
    MOV EDX,dword ptr [ESP + 0x8]       ; 005558f1
    SHL EDX,0x3                         ; 005558f5
    MOV EAX,EDX                         ; 005558f8
    SAR EDX,0x1f                        ; 005558fa
    IDIV ECX                            ; 005558fd
    RET                                 ; 005558ff

