; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00484350(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004820b0 at 004820f3
;
; Called Functions:
;   FUN_00484370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484350
        ;   Label: FUN_00484350
    MOV EBX,dword ptr [ESP + 0x8]       ; 00484351
    PUSH EBX                            ; 00484355
    CALL FUN_00484370                   ; 00484356
        ;   XREF to: 00484370 (UNCONDITIONAL_CALL)  ; undefined FUN_00484370()
    ADD ESP,0x4                         ; 0048435b
    MOV EAX,EBX                         ; 0048435e
    POP EBX                             ; 00484360
    RET                                 ; 00484361

