; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040c660(void)
;
;
; XREF[1]:
;   FUN_0051a4f0 at 0051a660
;
; Referenced Globals:
;   undefined4 DAT_007c3044
;   undefined4 DAT_007c3048
;   undefined4 DAT_007c304c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c660
        ;   Label: FUN_0040c660
    MOV EBX,dword ptr [0x007c3044]      ; 0040c661 | DAT_007c3044
    XOR EDX,EDX                         ; 0040c667
    TEST EBX,EBX                        ; 0040c669
    JLE 0x0040c690                      ; 0040c66b
        ;   XREF to: 0040c690 (CONDITIONAL_JUMP)  ; LAB_0040c690
    XOR EAX,EAX                         ; 0040c66d
    MOV ECX,dword ptr [EAX + 0x7c3048]  ; 0040c66f | DAT_007c3048 | DAT_007c304c
        ;   Label: LAB_0040c66f
    MOV ECX,dword ptr [ECX + 0x30]      ; 0040c675
    ADD EAX,0x4                         ; 0040c678
    INC EDX                             ; 0040c67b
    MOV dword ptr [ECX],0x1             ; 0040c67c
    CMP EDX,EBX                         ; 0040c682
    JL 0x0040c66f                       ; 0040c684
        ;   XREF to: 0040c66f (CONDITIONAL_JUMP)  ; LAB_0040c66f
    LEA EAX,[EAX]                       ; 0040c686
    LEA EDX,[EDX]                       ; 0040c68c
    MOV dword ptr [0x007c3044],EBX      ; 0040c690 | DAT_007c3044
        ;   Label: LAB_0040c690
    POP EBX                             ; 0040c696
    RET                                 ; 0040c697

