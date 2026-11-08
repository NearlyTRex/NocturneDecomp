; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004abdc0(undefined4 param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_00529a70 at 0052ec90
;
; Referenced Globals:
;   undefined4 DAT_005fe370
;   undefined4 DAT_01d0cfa8
;   undefined4 DAT_01d0cfa9
;   undefined4 DAT_01d0cfaa
;   undefined4 DAT_01d0cfab
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004abdc0
        ;   Label: FUN_004abdc0
    PUSH EDI                            ; 004abdc1
    MOV ESI,dword ptr [ESP + 0x10]      ; 004abdc2
    MOV EDI,0x1d0cfa8                   ; 004abdc6
    MOV EDX,0x1                         ; 004abdcb
    PUSH EDI                            ; 004abdd0 | DAT_01d0cfa8
    MOV AL,byte ptr [ESI]               ; 004abdd1
        ;   Label: LAB_004abdd1
    MOV byte ptr [EDI],AL               ; 004abdd3 | DAT_01d0cfa8 | DAT_01d0cfaa
    CMP AL,0x0                          ; 004abdd5
    JZ 0x004abde9                       ; 004abdd7
        ;   XREF to: 004abde9 (CONDITIONAL_JUMP)  ; LAB_004abde9
    MOV AL,byte ptr [ESI + 0x1]         ; 004abdd9
    ADD ESI,0x2                         ; 004abddc
    MOV byte ptr [EDI + 0x1],AL         ; 004abddf | DAT_01d0cfa9 | DAT_01d0cfab
    ADD EDI,0x2                         ; 004abde2
    CMP AL,0x0                          ; 004abde5
    JNZ 0x004abdd1                      ; 004abde7
        ;   XREF to: 004abdd1 (CONDITIONAL_JUMP)  ; LAB_004abdd1
    POP EDI                             ; 004abde9
        ;   Label: LAB_004abde9
    MOV dword ptr [0x005fe370],EDX      ; 004abdea | DAT_005fe370
    POP EDI                             ; 004abdf0
    POP ESI                             ; 004abdf1
    RET                                 ; 004abdf2

