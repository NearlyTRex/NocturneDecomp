; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_handleEditorHotkeys_FUN_0045b990(void)
;
;
; XREF[3]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 00460743
;   shape_design.c_showPointEditor_FUN_0045c6c0 at 0045ca53
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f874
;
; Referenced Globals:
;   TerminatedCString s_art_0061b2c2
;   undefined4 CHAR_ARRAY_02d03ea9
;   undefined4 CHAR_ARRAY_02d03eb5
;   undefined4 CHAR_ARRAY_02d03eb7
;   undefined4 CHAR_ARRAY_02d03ebe
;   undefined4 CHAR_ARRAY_02d03ec8
;
; Called Functions:
;   shape_design.c_exportVertexListFile_FUN_0045a610
;   shape_design.c_modelExportWizard_FUN_0045a7b0
;   shape_design.c_promptForModelNameAndLoad_FUN_00458a10
;   shape_design.c_saveCurrentModel_FUN_00459de0
;   shape_design.c_validateModelTextures_FUN_00459a20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b990
        ;   Label: shape_design.c_handleEditorHotkeys_FUN_0045b990
    PUSH ESI                            ; 0045b991
    PUSH EDI                            ; 0045b992
    PUSH EBP                            ; 0045b993
    MOV EBP,ESP                         ; 0045b994
    SUB ESP,0x0                         ; 0045b996
    CMP byte ptr [0x02d03ebe],0x0       ; 0045b99c | CHAR_ARRAY_02d03ebe
    JZ 0x0045b9ae                       ; 0045b9a3
        ;   XREF to: 0045b9ae (CONDITIONAL_JUMP)  ; LAB_0045b9ae
    CMP byte ptr [0x02d03eb5],0x0       ; 0045b9a5 | CHAR_ARRAY_02d03eb5
    JNZ 0x0045b9b0                      ; 0045b9ac
        ;   XREF to: 0045b9b0 (CONDITIONAL_JUMP)  ; LAB_0045b9b0
    JMP 0x0045b9d5                      ; 0045b9ae
        ;   XREF to: 0045b9d5 (UNCONDITIONAL_JUMP)  ; LAB_0045b9d5
        ;   Label: LAB_0045b9ae
    MOV byte ptr [0x02d03ebe],0x0       ; 0045b9b0 | CHAR_ARRAY_02d03ebe
        ;   Label: LAB_0045b9b0
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045b9b7
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL shape_design.c_promptForModelNameAndLoad_FUN_00458a10 ; 0045b9bc
        ;   XREF to: 00458a10 (UNCONDITIONAL_CALL)  ; int shape_design.c_promptForModelNameAndLoad_FUN_00458a10()
    TEST EAX,EAX                        ; 0045b9c1
    JZ 0x0045b9d5                       ; 0045b9c3
        ;   XREF to: 0045b9d5 (CONDITIONAL_JUMP)  ; LAB_0045b9d5
    PUSH 0x0                            ; 0045b9c5
    MOV EAX,0x61b2c2                    ; 0045b9c7 | = "art"
    PUSH EAX                            ; 0045b9cc | = "art"
    CALL shape_design.c_validateModelTextures_FUN_00459a20 ; 0045b9cd
        ;   XREF to: 00459a20 (UNCONDITIONAL_CALL)  ; int shape_design.c_validateModelTextures_FUN_00459a20(char * directory_path, int mode)
    ADD ESP,0x8                         ; 0045b9d2
    CMP byte ptr [0x02d03eb7],0x0       ; 0045b9d5 | CHAR_ARRAY_02d03eb7
        ;   Label: LAB_0045b9d5
    JZ 0x0045b9e7                       ; 0045b9dc
        ;   XREF to: 0045b9e7 (CONDITIONAL_JUMP)  ; LAB_0045b9e7
    CMP byte ptr [0x02d03eb5],0x0       ; 0045b9de | CHAR_ARRAY_02d03eb5
    JNZ 0x0045b9e9                      ; 0045b9e5
        ;   XREF to: 0045b9e9 (CONDITIONAL_JUMP)  ; LAB_0045b9e9
    JMP 0x0045b9fa                      ; 0045b9e7
        ;   XREF to: 0045b9fa (UNCONDITIONAL_JUMP)  ; LAB_0045b9fa
        ;   Label: LAB_0045b9e7
    MOV byte ptr [0x02d03eb7],0x0       ; 0045b9e9 | CHAR_ARRAY_02d03eb7
        ;   Label: LAB_0045b9e9
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045b9f0
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL shape_design.c_saveCurrentModel_FUN_00459de0 ; 0045b9f5
        ;   XREF to: 00459de0 (UNCONDITIONAL_CALL)  ; void shape_design.c_saveCurrentModel_FUN_00459de0()
    CMP byte ptr [0x02d03ea9],0x0       ; 0045b9fa | CHAR_ARRAY_02d03ea9
        ;   Label: LAB_0045b9fa
    JZ 0x0045ba0c                       ; 0045ba01
        ;   XREF to: 0045ba0c (CONDITIONAL_JUMP)  ; LAB_0045ba0c
    CMP byte ptr [0x02d03eb5],0x0       ; 0045ba03 | CHAR_ARRAY_02d03eb5
    JNZ 0x0045ba0e                      ; 0045ba0a
        ;   XREF to: 0045ba0e (CONDITIONAL_JUMP)  ; LAB_0045ba0e
    JMP 0x0045ba24                      ; 0045ba0c
        ;   XREF to: 0045ba24 (UNCONDITIONAL_JUMP)  ; LAB_0045ba24
        ;   Label: LAB_0045ba0c
    MOV byte ptr [0x02d03ea9],0x0       ; 0045ba0e | CHAR_ARRAY_02d03ea9
        ;   Label: LAB_0045ba0e
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045ba15
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 0045ba1a
    CALL shape_design.c_modelExportWizard_FUN_0045a7b0 ; 0045ba1c
        ;   XREF to: 0045a7b0 (UNCONDITIONAL_CALL)  ; void shape_design.c_modelExportWizard_FUN_0045a7b0(int export_format_type)
    ADD ESP,0x4                         ; 0045ba21
    CMP byte ptr [0x02d03ec8],0x0       ; 0045ba24 | CHAR_ARRAY_02d03ec8
        ;   Label: LAB_0045ba24
    JZ 0x0045ba36                       ; 0045ba2b
        ;   XREF to: 0045ba36 (CONDITIONAL_JUMP)  ; LAB_0045ba36
    CMP byte ptr [0x02d03eb5],0x0       ; 0045ba2d | CHAR_ARRAY_02d03eb5
    JNZ 0x0045ba38                      ; 0045ba34
        ;   XREF to: 0045ba38 (CONDITIONAL_JUMP)  ; LAB_0045ba38
    JMP 0x0045ba53                      ; 0045ba36
        ;   XREF to: 0045ba53 (UNCONDITIONAL_JUMP)  ; LAB_0045ba53
        ;   Label: LAB_0045ba36
    MOV byte ptr [0x02d03ec8],0x0       ; 0045ba38 | CHAR_ARRAY_02d03ec8
        ;   Label: LAB_0045ba38
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045ba3f
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL shape_design.c_exportVertexListFile_FUN_0045a610 ; 0045ba44
        ;   XREF to: 0045a610 (UNCONDITIONAL_CALL)  ; void shape_design.c_exportVertexListFile_FUN_0045a610()
    PUSH 0x1                            ; 0045ba49
    CALL shape_design.c_modelExportWizard_FUN_0045a7b0 ; 0045ba4b
        ;   XREF to: 0045a7b0 (UNCONDITIONAL_CALL)  ; void shape_design.c_modelExportWizard_FUN_0045a7b0(int export_format_type)
    ADD ESP,0x4                         ; 0045ba50
    POP EBP                             ; 0045ba53
        ;   Label: LAB_0045ba53
    POP EDI                             ; 0045ba54
    POP ESI                             ; 0045ba55
    POP EBX                             ; 0045ba56
    RET                                 ; 0045ba57

