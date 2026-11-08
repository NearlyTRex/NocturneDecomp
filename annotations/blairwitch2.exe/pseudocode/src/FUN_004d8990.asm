; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d8990(char *param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_004d8910 at 004d8925
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d8990
        ;   Label: FUN_004d8990
    PUSH EDI                            ; 004d8991
    MOV EDI,dword ptr [ESP + 0xc]       ; 004d8992
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d8996
    TEST ESI,ESI                        ; 004d899a
    JNZ 0x004d89a4                      ; 004d899c
        ;   XREF to: 004d89a4 (CONDITIONAL_JUMP)  ; LAB_004d89a4
    MOV byte ptr [EDI],0x0              ; 004d899e
    POP EDI                             ; 004d89a1
    POP ESI                             ; 004d89a2
    RET                                 ; 004d89a3
    PUSH EDI                            ; 004d89a4
        ;   Label: LAB_004d89a4
    MOV AL,byte ptr [ESI]               ; 004d89a5
        ;   Label: LAB_004d89a5
    MOV byte ptr [EDI],AL               ; 004d89a7
    CMP AL,0x0                          ; 004d89a9
    JZ 0x004d89bd                       ; 004d89ab
        ;   XREF to: 004d89bd (CONDITIONAL_JUMP)  ; LAB_004d89bd
    MOV AL,byte ptr [ESI + 0x1]         ; 004d89ad
    ADD ESI,0x2                         ; 004d89b0
    MOV byte ptr [EDI + 0x1],AL         ; 004d89b3
    ADD EDI,0x2                         ; 004d89b6
    CMP AL,0x0                          ; 004d89b9
    JNZ 0x004d89a5                      ; 004d89bb
        ;   XREF to: 004d89a5 (CONDITIONAL_JUMP)  ; LAB_004d89a5
    POP EDI                             ; 004d89bd
        ;   Label: LAB_004d89bd
    POP EDI                             ; 004d89be
    POP ESI                             ; 004d89bf
    RET                                 ; 004d89c0

