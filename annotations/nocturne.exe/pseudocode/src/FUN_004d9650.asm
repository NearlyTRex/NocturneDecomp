; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d9650(undefined4 param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_004ff2c0 at 00500de0
;
; Referenced Globals:
;   undefined4 DAT_01ccbbf0
;   undefined4 DAT_01ccbbf1
;   undefined4 DAT_01ccbbf2
;   undefined4 DAT_01ccbbf3
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d9650
        ;   Label: FUN_004d9650
    PUSH EDI                            ; 004d9651
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d9652
    MOV EDI,0x1ccbbf0                   ; 004d9656
    PUSH EDI                            ; 004d965b | DAT_01ccbbf0
    MOV AL,byte ptr [ESI]               ; 004d965c
        ;   Label: LAB_004d965c
    MOV byte ptr [EDI],AL               ; 004d965e | DAT_01ccbbf0 | DAT_01ccbbf2
    CMP AL,0x0                          ; 004d9660
    JZ 0x004d9674                       ; 004d9662
        ;   XREF to: 004d9674 (CONDITIONAL_JUMP)  ; LAB_004d9674
    MOV AL,byte ptr [ESI + 0x1]         ; 004d9664
    ADD ESI,0x2                         ; 004d9667
    MOV byte ptr [EDI + 0x1],AL         ; 004d966a | DAT_01ccbbf1 | DAT_01ccbbf3
    ADD EDI,0x2                         ; 004d966d
    CMP AL,0x0                          ; 004d9670
    JNZ 0x004d965c                      ; 004d9672
        ;   XREF to: 004d965c (CONDITIONAL_JUMP)  ; LAB_004d965c
    POP EDI                             ; 004d9674
        ;   Label: LAB_004d9674
    POP EDI                             ; 004d9675
    POP ESI                             ; 004d9676
    RET                                 ; 004d9677

