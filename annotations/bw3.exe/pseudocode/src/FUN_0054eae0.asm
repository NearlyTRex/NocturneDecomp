; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054eae0(int param_1,char *param_2)
;
;
; XREF[71]:
;   FUN_0040ba30 at 0040ba61
;   FUN_0040f9f0 at 0040fa87
;   FUN_00417400 at 00417444
;   FUN_004198e0 at 00419902
;   FUN_00419980 at 004199a2
;   FUN_00419a20 at 00419a42
;   FUN_00419ac0 at 00419ae2
;   FUN_00420ea0 at 00420f49
;   FUN_00425960 at 00425988
;   FUN_00442420 at 00442466
;   ... and 61 more
;
; Called Functions:
;   FUN_0054e670
;   FUN_0054e690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054eae0
        ;   Label: FUN_0054eae0
    PUSH ESI                            ; 0054eae1
    PUSH EDI                            ; 0054eae2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054eae3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0054eae7
    LEA EDI,[EBX + 0x2350]              ; 0054eaeb
    PUSH EDI                            ; 0054eaf1
    MOV AL,byte ptr [ESI]               ; 0054eaf2
        ;   Label: LAB_0054eaf2
    MOV byte ptr [EDI],AL               ; 0054eaf4
    CMP AL,0x0                          ; 0054eaf6
    JZ 0x0054eb0a                       ; 0054eaf8
        ;   XREF to: 0054eb0a (CONDITIONAL_JUMP)  ; LAB_0054eb0a
    MOV AL,byte ptr [ESI + 0x1]         ; 0054eafa
    ADD ESI,0x2                         ; 0054eafd
    MOV byte ptr [EDI + 0x1],AL         ; 0054eb00
    ADD EDI,0x2                         ; 0054eb03
    CMP AL,0x0                          ; 0054eb06
    JNZ 0x0054eaf2                      ; 0054eb08
        ;   XREF to: 0054eaf2 (CONDITIONAL_JUMP)  ; LAB_0054eaf2
    POP EDI                             ; 0054eb0a
        ;   Label: LAB_0054eb0a
    PUSH EBX                            ; 0054eb0b
    MOV dword ptr [EBX + 0x23a0],0x0    ; 0054eb0c
    CALL FUN_0054e670                   ; 0054eb16
        ;   XREF to: 0054e670 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e670()
    ADD ESP,0x4                         ; 0054eb1b
    PUSH EBX                            ; 0054eb1e
    CALL FUN_0054e690                   ; 0054eb1f
        ;   XREF to: 0054e690 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e690()
    ADD ESP,0x4                         ; 0054eb24
    MOV dword ptr [EBX + 0x2320],0xffffffff ; 0054eb27
    POP EDI                             ; 0054eb31
    POP ESI                             ; 0054eb32
    POP EBX                             ; 0054eb33
    RET                                 ; 0054eb34

