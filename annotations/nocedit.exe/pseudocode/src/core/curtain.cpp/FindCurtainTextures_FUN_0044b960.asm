; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_curtain_cpp_FindCurtainTextures_FUN_0044b960 (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4, int param_5,FILE *param_6)
;
; Local Variables:
; undefined1       Stack[-0x108]:1  local_108
; undefined1       Stack[-0x107]:1  local_107
; undefined1       Stack[-0x105]:1  local_105
;
; Referenced Globals:
;   TerminatedCString s_ART_s_00619e8b
;   TerminatedCString s_core_curtain_cpp_00619e93
;   TerminatedCString s_Cannot_find_curtain_text_00619ea7
;   TerminatedCString s_ACT_00619ecd
;   undefined4 DAT_00619ece
;   undefined4 DAT_00619ecf
;   undefined4 DAT_00619ed0
;   TerminatedCString s_ART_s_00619ed2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0044b960
        ;   Label: core_curtain.cpp_FindCurtainTextures_FUN_0044b960
    PUSH EDI                            ; 0044b961
    SUB ESP,0x100                       ; 0044b962
    MOV ESI,dword ptr [ESP + 0x10c]     ; 0044b968
    ADD ESI,0x16c                       ; 0044b96f
    PUSH ESI                            ; 0044b975
    PUSH 0x619e8b                       ; 0044b976 | = "ART\\%s\n"
    MOV EDX,dword ptr [ESP + 0x118]     ; 0044b97b
    PUSH EDX                            ; 0044b982
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0044b983
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0044b988
    MOV EDI,ESP                         ; 0044b98b
    MOV DL,0x2e                         ; 0044b98d
    PUSH EDI                            ; 0044b98f
    MOV AL,byte ptr [ESI]               ; 0044b990
        ;   Label: LAB_0044b990
    MOV byte ptr [EDI],AL               ; 0044b992
    CMP AL,0x0                          ; 0044b994
    JZ 0x0044b9a8                       ; 0044b996
        ;   XREF to: 0044b9a8 (CONDITIONAL_JUMP)  ; LAB_0044b9a8
    MOV AL,byte ptr [ESI + 0x1]         ; 0044b998
    ADD ESI,0x2                         ; 0044b99b
    MOV byte ptr [EDI + 0x1],AL         ; 0044b99e
    ADD EDI,0x2                         ; 0044b9a1
    CMP AL,0x0                          ; 0044b9a4
    JNZ 0x0044b990                      ; 0044b9a6
        ;   XREF to: 0044b990 (CONDITIONAL_JUMP)  ; LAB_0044b990
    POP EDI                             ; 0044b9a8
        ;   Label: LAB_0044b9a8
    MOV ESI,ESP                         ; 0044b9a9
    MOV AL,byte ptr [ESI]               ; 0044b9ab
        ;   Label: LAB_0044b9ab
    CMP AL,DL                           ; 0044b9ad
    JZ 0x0044b9c3                       ; 0044b9af
        ;   XREF to: 0044b9c3 (CONDITIONAL_JUMP)  ; LAB_0044b9c3
    CMP AL,0x0                          ; 0044b9b1
    JZ 0x0044b9c1                       ; 0044b9b3
        ;   XREF to: 0044b9c1 (CONDITIONAL_JUMP)  ; LAB_0044b9c1
    INC ESI                             ; 0044b9b5
    MOV AL,byte ptr [ESI]               ; 0044b9b6
    CMP AL,DL                           ; 0044b9b8
    JZ 0x0044b9c3                       ; 0044b9ba
        ;   XREF to: 0044b9c3 (CONDITIONAL_JUMP)  ; LAB_0044b9c3
    INC ESI                             ; 0044b9bc
    CMP AL,0x0                          ; 0044b9bd
    JNZ 0x0044b9ab                      ; 0044b9bf
        ;   XREF to: 0044b9ab (CONDITIONAL_JUMP)  ; LAB_0044b9ab
    SUB ESI,ESI                         ; 0044b9c1
        ;   Label: LAB_0044b9c1
    MOV EDI,ESI                         ; 0044b9c3
        ;   Label: LAB_0044b9c3
    TEST ESI,ESI                        ; 0044b9c5
    JZ 0x0044ba09                       ; 0044b9c7
        ;   XREF to: 0044ba09 (CONDITIONAL_JUMP)  ; LAB_0044ba09
    MOV ESI,0x619ecd                    ; 0044b9c9 | = ".ACT"
        ;   Label: LAB_0044b9c9
    PUSH EDI                            ; 0044b9ce
    MOV AL,byte ptr [ESI]               ; 0044b9cf | = ".ACT" | DAT_00619ecf
        ;   Label: LAB_0044b9cf
    MOV byte ptr [EDI],AL               ; 0044b9d1
    CMP AL,0x0                          ; 0044b9d3
    JZ 0x0044b9e7                       ; 0044b9d5
        ;   XREF to: 0044b9e7 (CONDITIONAL_JUMP)  ; LAB_0044b9e7
    MOV AL,byte ptr [ESI + 0x1]         ; 0044b9d7 | DAT_00619ece | DAT_00619ed0
    ADD ESI,0x2                         ; 0044b9da
    MOV byte ptr [EDI + 0x1],AL         ; 0044b9dd
    ADD EDI,0x2                         ; 0044b9e0
    CMP AL,0x0                          ; 0044b9e3
    JNZ 0x0044b9cf                      ; 0044b9e5
        ;   XREF to: 0044b9cf (CONDITIONAL_JUMP)  ; LAB_0044b9cf
    POP EDI                             ; 0044b9e7
        ;   Label: LAB_0044b9e7
    MOV ESI,ESP                         ; 0044b9e8
    PUSH ESI                            ; 0044b9ea
    PUSH 0x619ed2                       ; 0044b9eb | = "ART\\%s\n"
    MOV ESI,dword ptr [ESP + 0x118]     ; 0044b9f0
    PUSH ESI                            ; 0044b9f7
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0044b9f8
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0044b9fd
    ADD ESP,0x100                       ; 0044ba00
    POP EDI                             ; 0044ba06
    POP ESI                             ; 0044ba07
    RET                                 ; 0044ba08
    PUSH EBX                            ; 0044ba09
        ;   Label: LAB_0044ba09
    MOV ECX,0x619e93                    ; 0044ba0a | = "..\\core\\curtain.cpp"
    MOV EBX,0x438                       ; 0044ba0f
    PUSH 0x619ea7                       ; 0044ba14 | = "Cannot find curtain texture extension"
    MOV dword ptr [0x02f0ca48],ECX      ; 0044ba19 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0044ba1f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044ba25
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0044ba2a
    POP EBX                             ; 0044ba2d
    JMP 0x0044b9c9                      ; 0044ba2e
        ;   XREF to: 0044b9c9 (UNCONDITIONAL_JUMP)  ; LAB_0044b9c9

