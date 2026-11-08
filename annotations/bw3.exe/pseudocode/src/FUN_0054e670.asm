; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054e670(int param_1)
;
;
; XREF[5]:
;   FUN_0040bba0 at 0040bbf2
;   FUN_004179b0 at 00417d06
;   FUN_00419b40 at 00419e79
;   FUN_00442a20 at 004432a0
;   FUN_0054eae0 at 0054eb16
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054e670
        ;   Label: FUN_0054e670
    MOV EAX,EDX                         ; 0054e674
    ADD EDX,0xf0                        ; 0054e676
    ADD EAX,0x4                         ; 0054e67c
        ;   Label: LAB_0054e67c
    MOV dword ptr [EAX + 0x213c],0x1    ; 0054e67f
    CMP EAX,EDX                         ; 0054e689
    JNZ 0x0054e67c                      ; 0054e68b
        ;   XREF to: 0054e67c (CONDITIONAL_JUMP)  ; LAB_0054e67c
    RET                                 ; 0054e68d

