; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047a260(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047a260
        ;   Label: FUN_0047a260
    MOV DL,byte ptr [EAX]               ; 0047a264
        ;   Label: LAB_0047a264
    INC DL                              ; 0047a266
    AND EDX,0xff                        ; 0047a268
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047a26e | DAT_005c168c
    JZ 0x0047a250                       ; 0047a275
        ;   XREF to: 0047a250 (CONDITIONAL_JUMP)  ; LAB_0047a250
    INC EAX                             ; 0047a277
    JMP 0x0047a264                      ; 0047a278
        ;   XREF to: 0047a264 (UNCONDITIONAL_JUMP)  ; LAB_0047a264

