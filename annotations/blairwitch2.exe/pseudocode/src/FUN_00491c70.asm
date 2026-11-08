; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00491c70(int param_1)
;
;
; XREF[2]:
;   FUN_00489670 at 00489833
;   FUN_0048e7e0 at 0048e91e
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00491c70
        ;   Label: FUN_00491c70
    MOV AL,DL                           ; 00491c74
    INC AL                              ; 00491c76
    AND EAX,0xff                        ; 00491c78
    TEST byte ptr [EAX + 0x61ed94],0xe0 ; 00491c7d | DAT_0061ed94
    JNZ 0x00491c94                      ; 00491c84
        ;   XREF to: 00491c94 (CONDITIONAL_JUMP)  ; LAB_00491c94
    CMP EDX,0x5f                        ; 00491c86
    JZ 0x00491c94                       ; 00491c89
        ;   XREF to: 00491c94 (CONDITIONAL_JUMP)  ; LAB_00491c94
    CMP EDX,0x2d                        ; 00491c8b
    JNZ 0x00491538                      ; 00491c8e
        ;   XREF to: 00491538 (CONDITIONAL_JUMP)  ; LAB_00491538
    MOV EAX,0x1                         ; 00491c94
        ;   Label: LAB_00491c94
    RET                                 ; 00491c99

