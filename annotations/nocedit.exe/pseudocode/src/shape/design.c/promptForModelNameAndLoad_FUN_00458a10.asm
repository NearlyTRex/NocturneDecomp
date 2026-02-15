; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_promptForModelNameAndLoad_FUN_00458a10(void)
;
; Local Variables:
; undefined1       Stack[-0x64]:1  local_64
; undefined1       Stack[-0x63]:1  local_63
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_handleEditorHotkeys_FUN_0045b990 at 0045b9bc
;   shape_design.c_tileTextureMaps_FUN_0046a180 at 0046a1ad
;
; Referenced Globals:
;   TerminatedCString s_Model_name_to_load_0061a9b6
;   TerminatedCString s_MDL_0061a9cc
;   undefined4 DAT_0061a9cd
;   undefined4 DAT_0061a9ce
;   undefined4 DAT_0061a9cf
;
; Called Functions:
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_loadModelFile_FUN_00458ac0
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458a10
        ;   Label: shape_design.c_promptForModelNameAndLoad_FUN_00458a10
    PUSH ESI                            ; 00458a11
    PUSH EDI                            ; 00458a12
    PUSH EBP                            ; 00458a13
    MOV EBP,ESP                         ; 00458a14
    SUB ESP,0x54                        ; 00458a16
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00458a1c
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EDX,0x61a9b6                    ; 00458a21 | = "Model name to load : "
    PUSH EDX                            ; 00458a26 | = "Model name to load : "
    PUSH 0x0                            ; 00458a27
    PUSH 0x0                            ; 00458a29
    PUSH 0x28                           ; 00458a2b
    LEA EDX,[EBP + -0x54]               ; 00458a2d
    PUSH EDX                            ; 00458a30
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00458a31
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00458a36
    MOV EDX,0x2e                        ; 00458a39
    LEA ESI,[EBP + -0x54]               ; 00458a3e
    MOV AL,byte ptr [ESI]               ; 00458a41
        ;   Label: LAB_00458a41
    CMP AL,DL                           ; 00458a43
    JZ 0x00458a59                       ; 00458a45
        ;   XREF to: 00458a59 (CONDITIONAL_JUMP)  ; LAB_00458a59
    CMP AL,0x0                          ; 00458a47
    JZ 0x00458a57                       ; 00458a49
        ;   XREF to: 00458a57 (CONDITIONAL_JUMP)  ; LAB_00458a57
    INC ESI                             ; 00458a4b
    MOV AL,byte ptr [ESI]               ; 00458a4c
    CMP AL,DL                           ; 00458a4e
    JZ 0x00458a59                       ; 00458a50
        ;   XREF to: 00458a59 (CONDITIONAL_JUMP)  ; LAB_00458a59
    INC ESI                             ; 00458a52
    CMP AL,0x0                          ; 00458a53
    JNZ 0x00458a41                      ; 00458a55
        ;   XREF to: 00458a41 (CONDITIONAL_JUMP)  ; LAB_00458a41
    SUB ESI,ESI                         ; 00458a57
        ;   Label: LAB_00458a57
    TEST ESI,ESI                        ; 00458a59
        ;   Label: LAB_00458a59
    JNZ 0x00458a6f                      ; 00458a5b
        ;   XREF to: 00458a6f (CONDITIONAL_JUMP)  ; LAB_00458a6f
    LEA EDI,[EBP + -0x54]               ; 00458a5d
    SUB ECX,ECX                         ; 00458a60
    DEC ECX                             ; 00458a62
    XOR EAX,EAX                         ; 00458a63
    SCASB.REPNE ES:EDI                  ; 00458a65
    NOT ECX                             ; 00458a67
    DEC ECX                             ; 00458a69
    CMP ECX,0x8                         ; 00458a6a
    JBE 0x00458a71                      ; 00458a6d
        ;   XREF to: 00458a71 (CONDITIONAL_JUMP)  ; LAB_00458a71
    JMP 0x00458a9b                      ; 00458a6f
        ;   XREF to: 00458a9b (UNCONDITIONAL_JUMP)  ; LAB_00458a9b
        ;   Label: LAB_00458a6f
    MOV ESI,0x61a9cc                    ; 00458a71 | = ".MDL"
        ;   Label: LAB_00458a71
    LEA EDI,[EBP + -0x54]               ; 00458a76
    PUSH EDI                            ; 00458a79
    SUB ECX,ECX                         ; 00458a7a
    DEC ECX                             ; 00458a7c
    MOV AL,0x0                          ; 00458a7d
    SCASB.REPNE ES:EDI                  ; 00458a7f
    DEC EDI                             ; 00458a81
    MOV AL,byte ptr [ESI]               ; 00458a82 | = ".MDL" | DAT_0061a9ce
        ;   Label: LAB_00458a82
    MOV byte ptr [EDI],AL               ; 00458a84
    CMP AL,0x0                          ; 00458a86
    JZ 0x00458a9a                       ; 00458a88
        ;   XREF to: 00458a9a (CONDITIONAL_JUMP)  ; LAB_00458a9a
    MOV AL,byte ptr [ESI + 0x1]         ; 00458a8a | DAT_0061a9cd | DAT_0061a9cf
    ADD ESI,0x2                         ; 00458a8d
    MOV byte ptr [EDI + 0x1],AL         ; 00458a90
    ADD EDI,0x2                         ; 00458a93
    CMP AL,0x0                          ; 00458a96
    JNZ 0x00458a82                      ; 00458a98
        ;   XREF to: 00458a82 (CONDITIONAL_JUMP)  ; LAB_00458a82
    POP EDI                             ; 00458a9a
        ;   Label: LAB_00458a9a
    LEA EAX,[EBP + -0x54]               ; 00458a9b
        ;   Label: LAB_00458a9b
    PUSH EAX                            ; 00458a9e
    CALL shape_design.c_loadModelFile_FUN_00458ac0 ; 00458a9f
        ;   XREF to: 00458ac0 (UNCONDITIONAL_CALL)  ; int shape_design.c_loadModelFile_FUN_00458ac0(char * filename)
    ADD ESP,0x4                         ; 00458aa4
    MOV dword ptr [EBP + -0x4],EAX      ; 00458aa7
    MOV EAX,dword ptr [EBP + -0x4]      ; 00458aaa
    MOV ESP,EBP                         ; 00458aad
    POP EBP                             ; 00458aaf
    POP EDI                             ; 00458ab0
    POP ESI                             ; 00458ab1
    POP EBX                             ; 00458ab2
    RET                                 ; 00458ab3

