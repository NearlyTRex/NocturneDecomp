; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_saveCurrentModel_FUN_00459de0(void)
;
; Local Variables:
; undefined1       Stack[-0x60]:1  local_60
; undefined1       Stack[-0x5f]:1  local_5f
;
; XREF[1]:
;   shape_design.c_handleEditorHotkeys_FUN_0045b990 at 0045b9f5
;
; Referenced Globals:
;   TerminatedCString s_Model_name_to_save_0061ad80
;   TerminatedCString s_MDL_0061ad96
;   undefined4 DAT_0061ad97
;   undefined4 DAT_0061ad98
;   undefined4 DAT_0061ad99
;
; Called Functions:
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_exportModelToMDL_FUN_00459e80
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459de0
        ;   Label: shape_design.c_saveCurrentModel_FUN_00459de0
    PUSH ESI                            ; 00459de1
    PUSH EDI                            ; 00459de2
    PUSH EBP                            ; 00459de3
    MOV EBP,ESP                         ; 00459de4
    SUB ESP,0x50                        ; 00459de6
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00459dec
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EDX,0x61ad80                    ; 00459df1 | = "Model name to save : "
    PUSH EDX                            ; 00459df6 | = "Model name to save : "
    PUSH 0x0                            ; 00459df7
    PUSH 0x0                            ; 00459df9
    PUSH 0x28                           ; 00459dfb
    LEA EDX,[EBP + -0x50]               ; 00459dfd
    PUSH EDX                            ; 00459e00
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00459e01
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00459e06
    MOV EDX,0x2e                        ; 00459e09
    LEA ESI,[EBP + -0x50]               ; 00459e0e
    MOV AL,byte ptr [ESI]               ; 00459e11
        ;   Label: LAB_00459e11
    CMP AL,DL                           ; 00459e13
    JZ 0x00459e29                       ; 00459e15
        ;   XREF to: 00459e29 (CONDITIONAL_JUMP)  ; LAB_00459e29
    CMP AL,0x0                          ; 00459e17
    JZ 0x00459e27                       ; 00459e19
        ;   XREF to: 00459e27 (CONDITIONAL_JUMP)  ; LAB_00459e27
    INC ESI                             ; 00459e1b
    MOV AL,byte ptr [ESI]               ; 00459e1c
    CMP AL,DL                           ; 00459e1e
    JZ 0x00459e29                       ; 00459e20
        ;   XREF to: 00459e29 (CONDITIONAL_JUMP)  ; LAB_00459e29
    INC ESI                             ; 00459e22
    CMP AL,0x0                          ; 00459e23
    JNZ 0x00459e11                      ; 00459e25
        ;   XREF to: 00459e11 (CONDITIONAL_JUMP)  ; LAB_00459e11
    SUB ESI,ESI                         ; 00459e27
        ;   Label: LAB_00459e27
    TEST ESI,ESI                        ; 00459e29
        ;   Label: LAB_00459e29
    JNZ 0x00459e3f                      ; 00459e2b
        ;   XREF to: 00459e3f (CONDITIONAL_JUMP)  ; LAB_00459e3f
    LEA EDI,[EBP + -0x50]               ; 00459e2d
    SUB ECX,ECX                         ; 00459e30
    DEC ECX                             ; 00459e32
    XOR EAX,EAX                         ; 00459e33
    SCASB.REPNE ES:EDI                  ; 00459e35
    NOT ECX                             ; 00459e37
    DEC ECX                             ; 00459e39
    CMP ECX,0x8                         ; 00459e3a
    JBE 0x00459e41                      ; 00459e3d
        ;   XREF to: 00459e41 (CONDITIONAL_JUMP)  ; LAB_00459e41
    JMP 0x00459e6b                      ; 00459e3f
        ;   XREF to: 00459e6b (UNCONDITIONAL_JUMP)  ; LAB_00459e6b
        ;   Label: LAB_00459e3f
    MOV ESI,0x61ad96                    ; 00459e41 | = ".MDL"
        ;   Label: LAB_00459e41
    LEA EDI,[EBP + -0x50]               ; 00459e46
    PUSH EDI                            ; 00459e49
    SUB ECX,ECX                         ; 00459e4a
    DEC ECX                             ; 00459e4c
    MOV AL,0x0                          ; 00459e4d
    SCASB.REPNE ES:EDI                  ; 00459e4f
    DEC EDI                             ; 00459e51
    MOV AL,byte ptr [ESI]               ; 00459e52 | = ".MDL" | DAT_0061ad98
        ;   Label: LAB_00459e52
    MOV byte ptr [EDI],AL               ; 00459e54
    CMP AL,0x0                          ; 00459e56
    JZ 0x00459e6a                       ; 00459e58
        ;   XREF to: 00459e6a (CONDITIONAL_JUMP)  ; LAB_00459e6a
    MOV AL,byte ptr [ESI + 0x1]         ; 00459e5a | DAT_0061ad97 | DAT_0061ad99
    ADD ESI,0x2                         ; 00459e5d
    MOV byte ptr [EDI + 0x1],AL         ; 00459e60
    ADD EDI,0x2                         ; 00459e63
    CMP AL,0x0                          ; 00459e66
    JNZ 0x00459e52                      ; 00459e68
        ;   XREF to: 00459e52 (CONDITIONAL_JUMP)  ; LAB_00459e52
    POP EDI                             ; 00459e6a
        ;   Label: LAB_00459e6a
    LEA EAX,[EBP + -0x50]               ; 00459e6b
        ;   Label: LAB_00459e6b
    PUSH EAX                            ; 00459e6e
    CALL shape_design.c_exportModelToMDL_FUN_00459e80 ; 00459e6f
        ;   XREF to: 00459e80 (UNCONDITIONAL_CALL)  ; void shape_design.c_exportModelToMDL_FUN_00459e80(char * mdl_filename)
    ADD ESP,0x4                         ; 00459e74
    MOV ESP,EBP                         ; 00459e77
    POP EBP                             ; 00459e79
    POP EDI                             ; 00459e7a
    POP ESI                             ; 00459e7b
    POP EBX                             ; 00459e7c
    RET                                 ; 00459e7d

