; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004be0b0(undefined4 param_1,char *param_2)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 005495a0
;
; Referenced Globals:
;   undefined4 DAT_0061d2e0
;   undefined4 DAT_01cc4208
;   undefined4 DAT_01cc4209
;   undefined4 DAT_01cc420a
;   undefined4 DAT_01cc420b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004be0b0
        ;   Label: core_fldnotes.cpp_FUN_004be0b0
    PUSH EDI                            ; 004be0b1
    MOV ESI,dword ptr [ESP + 0x10]      ; 004be0b2
    MOV EDI,0x1cc4208                   ; 004be0b6
    MOV EDX,0x1                         ; 004be0bb
    PUSH EDI                            ; 004be0c0 | DAT_01cc4208
    MOV AL,byte ptr [ESI]               ; 004be0c1
        ;   Label: LAB_004be0c1
    MOV byte ptr [EDI],AL               ; 004be0c3 | DAT_01cc4208 | DAT_01cc420a
    CMP AL,0x0                          ; 004be0c5
    JZ 0x004be0d9                       ; 004be0c7
        ;   XREF to: 004be0d9 (CONDITIONAL_JUMP)  ; LAB_004be0d9
    MOV AL,byte ptr [ESI + 0x1]         ; 004be0c9
    ADD ESI,0x2                         ; 004be0cc
    MOV byte ptr [EDI + 0x1],AL         ; 004be0cf | DAT_01cc4209 | DAT_01cc420b
    ADD EDI,0x2                         ; 004be0d2
    CMP AL,0x0                          ; 004be0d5
    JNZ 0x004be0c1                      ; 004be0d7
        ;   XREF to: 004be0c1 (CONDITIONAL_JUMP)  ; LAB_004be0c1
    POP EDI                             ; 004be0d9
        ;   Label: LAB_004be0d9
    MOV dword ptr [0x0061d2e0],EDX      ; 004be0da | DAT_0061d2e0
    POP EDI                             ; 004be0e0
    POP ESI                             ; 004be0e1
    RET                                 ; 004be0e2

