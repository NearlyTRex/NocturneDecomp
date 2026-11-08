; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004625f0(int param_1,char *param_2)
;
;
; XREF[71]:
;   FUN_0040b9b0 at 0040b9e1
;   FUN_0040de60 at 0040de9a
;   FUN_0040e0f0 at 0040e112
;   FUN_0040e260 at 0040e282
;   FUN_0040e3d0 at 0040e3f2
;   FUN_0040e5c0 at 0040e5fa
;   FUN_0040ede0 at 0040ee7d
;   FUN_0040f4a0 at 0040f4d8
;   FUN_0040f780 at 0040f7a2
;   FUN_004103f0 at 00410412
;   ... and 61 more
;
; Called Functions:
;   FUN_00462520
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004625f0
        ;   Label: FUN_004625f0
    PUSH EDI                            ; 004625f1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004625f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004625f6
    LEA EDI,[EDX + 0x78]                ; 004625fa
    PUSH EDI                            ; 004625fd
    MOV AL,byte ptr [ESI]               ; 004625fe
        ;   Label: LAB_004625fe
    MOV byte ptr [EDI],AL               ; 00462600
    CMP AL,0x0                          ; 00462602
    JZ 0x00462616                       ; 00462604
        ;   XREF to: 00462616 (CONDITIONAL_JUMP)  ; LAB_00462616
    MOV AL,byte ptr [ESI + 0x1]         ; 00462606
    ADD ESI,0x2                         ; 00462609
    MOV byte ptr [EDI + 0x1],AL         ; 0046260c
    ADD EDI,0x2                         ; 0046260f
    CMP AL,0x0                          ; 00462612
    JNZ 0x004625fe                      ; 00462614
        ;   XREF to: 004625fe (CONDITIONAL_JUMP)  ; LAB_004625fe
    POP EDI                             ; 00462616
        ;   Label: LAB_00462616
    PUSH EDX                            ; 00462617
    MOV dword ptr [EDX + 0x178],0x0     ; 00462618
    CALL FUN_00462520                   ; 00462622
        ;   XREF to: 00462520 (UNCONDITIONAL_CALL)  ; undefined FUN_00462520()
    ADD ESP,0x4                         ; 00462627
    POP EDI                             ; 0046262a
    POP ESI                             ; 0046262b
    RET                                 ; 0046262c

