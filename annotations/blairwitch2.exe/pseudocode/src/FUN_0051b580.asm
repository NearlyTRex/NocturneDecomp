; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b580(undefined4 param_1,char *param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00481870 at 004818d1
;   FUN_00481a70 at 00481ad1
;
; Called Functions:
;   FUN_0051b5d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0051b580
        ;   Label: FUN_0051b580
    PUSH EDI                            ; 0051b581
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051b582
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051b586
    LEA EDI,[EDX + 0x214]               ; 0051b58a
    PUSH EDI                            ; 0051b590
    MOV AL,byte ptr [ESI]               ; 0051b591
        ;   Label: LAB_0051b591
    MOV byte ptr [EDI],AL               ; 0051b593
    CMP AL,0x0                          ; 0051b595
    JZ 0x0051b5a9                       ; 0051b597
        ;   XREF to: 0051b5a9 (CONDITIONAL_JUMP)  ; LAB_0051b5a9
    MOV AL,byte ptr [ESI + 0x1]         ; 0051b599
    ADD ESI,0x2                         ; 0051b59c
    MOV byte ptr [EDI + 0x1],AL         ; 0051b59f
    ADD EDI,0x2                         ; 0051b5a2
    CMP AL,0x0                          ; 0051b5a5
    JNZ 0x0051b591                      ; 0051b5a7
        ;   XREF to: 0051b591 (CONDITIONAL_JUMP)  ; LAB_0051b591
    POP EDI                             ; 0051b5a9
        ;   Label: LAB_0051b5a9
    MOV dword ptr [EDX + 0x314],0x0     ; 0051b5aa
    PUSH EDX                            ; 0051b5b4
    MOV dword ptr [EDX + 0x318],0x0     ; 0051b5b5
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051b5bf
    PUSH EDX                            ; 0051b5c3
    CALL FUN_0051b5d0                   ; 0051b5c4
        ;   XREF to: 0051b5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b5d0()
    ADD ESP,0x8                         ; 0051b5c9
    POP EDI                             ; 0051b5cc
    POP ESI                             ; 0051b5cd
    RET                                 ; 0051b5ce

