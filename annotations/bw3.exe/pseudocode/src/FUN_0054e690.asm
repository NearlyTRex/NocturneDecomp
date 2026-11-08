; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054e690(int param_1)
;
;
; XREF[2]:
;   FUN_0040bba0 at 0040bc55
;   FUN_0054eae0 at 0054eb1f
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054e690
        ;   Label: FUN_0054e690
    MOV EAX,EDX                         ; 0054e694
    ADD EDX,0xf0                        ; 0054e696
    ADD EAX,0x4                         ; 0054e69c
        ;   Label: LAB_0054e69c
    MOV dword ptr [EAX + 0x222c],0x0    ; 0054e69f
    CMP EAX,EDX                         ; 0054e6a9
    JNZ 0x0054e69c                      ; 0054e6ab
        ;   XREF to: 0054e69c (CONDITIONAL_JUMP)  ; LAB_0054e69c
    RET                                 ; 0054e6ad

