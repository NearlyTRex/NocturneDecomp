; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_00545ad0(void)
;
;
; XREF[2]:
;   FUN_00408880 at 004089f5
;   FUN_00408a60 at 00408b62
;
; Referenced Globals:
;   undefined4 DAT_02dd0f80
;   undefined4 DAT_02dd0f84
;   undefined4 DAT_02dd0f88
;   undefined4 DAT_02dd0f8c
;   undefined4 DAT_02dd0f90
;   undefined4 DAT_02dd0f91
;   undefined4 DAT_02dd0f92
;   undefined4 DAT_02dd0f93
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00545ad0
        ;   Label: FUN_00545ad0
    PUSH EDI                            ; 00545ad1
    MOV EDX,0xd                         ; 00545ad2
    MOV ESI,dword ptr [0x02dd0f80]      ; 00545ad7 | DAT_02dd0f80
    MOV EAX,[0x02dd0f80]                ; 00545add | DAT_02dd0f80
    MOV dword ptr [0x02dd0f8c],ESI      ; 00545ae2 | DAT_02dd0f8c
    MOV ESI,dword ptr [0x02dd0f84]      ; 00545ae8 | DAT_02dd0f84
    SHL EAX,0x6                         ; 00545aee
    ADD ESI,0x3008                      ; 00545af1
    MOV EDI,0x2dd0f90                   ; 00545af7
    ADD ESI,EAX                         ; 00545afc
    MOV dword ptr [0x02dd0f88],EDX      ; 00545afe | DAT_02dd0f88
    PUSH EDI                            ; 00545b04
    MOV AL,byte ptr [ESI]               ; 00545b05
        ;   Label: LAB_00545b05
    MOV byte ptr [EDI],AL               ; 00545b07 | DAT_02dd0f90 | DAT_02dd0f92
    CMP AL,0x0                          ; 00545b09
    JZ 0x00545b1d                       ; 00545b0b
        ;   XREF to: 00545b1d (CONDITIONAL_JUMP)  ; LAB_00545b1d
    MOV AL,byte ptr [ESI + 0x1]         ; 00545b0d
    ADD ESI,0x2                         ; 00545b10
    MOV byte ptr [EDI + 0x1],AL         ; 00545b13 | DAT_02dd0f91 | DAT_02dd0f93
    ADD EDI,0x2                         ; 00545b16
    CMP AL,0x0                          ; 00545b19
    JNZ 0x00545b05                      ; 00545b1b
        ;   XREF to: 00545b05 (CONDITIONAL_JUMP)  ; LAB_00545b05
    POP EDI                             ; 00545b1d
        ;   Label: LAB_00545b1d
    MOV EAX,0x2dd0f88                   ; 00545b1e | DAT_02dd0f88
    POP EDI                             ; 00545b23
    POP ESI                             ; 00545b24
    RET                                 ; 00545b25

