; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_cramTextures_FUN_0046a970 (char *texture_filename,int min_u,int min_v,int max_u,int max_v)
;
; Parameters:
; char *           Stack[0x4]:4   texture_filename
; int              Stack[0x8]:4   min_u
; int              Stack[0xc]:4   min_v
; int              Stack[0x10]:4   max_u
; int              Stack[0x14]:4   max_v
; Local Variables:
; undefined1       Stack[-0x1e4]:1  local_1e4
; undefined1       Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined1       Stack[-0x119]:1  local_119
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 at 0047a51b
;   core_skeledit.cpp_FUN_0058de70 at 0058dfe7
;   shape_design.c_tileTextureMaps_FUN_0046a180 at 0046a458
;
; Referenced Globals:
;   TerminatedCString s_TGA_0061d253
;   undefined4 DAT_0061d254
;   undefined4 DAT_0061d255
;   undefined4 DAT_0061d256
;   TerminatedCString s_Too_many_textures_to_cra_0061d258
;   TerminatedCString s_shape_design_c_0061d27d
;   int g_TextureProcessedCount
;   STextureAtlasEntry[250] g_TextureAtlasEntries
;   undefined4 DAT_01e8d265
;   undefined4 DAT_01e8d266
;   undefined4 DAT_01e8d267
;   undefined4 DAT_01e8d364
;   undefined4 DAT_01e8d365
;   undefined4 DAT_01e8d366
;   undefined4 DAT_01e8d367
;   ... and 6 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a970
        ;   Label: shape_design.c_cramTextures_FUN_0046a970
    PUSH ESI                            ; 0046a971
    PUSH EDI                            ; 0046a972
    PUSH EBP                            ; 0046a973
    MOV EBP,ESP                         ; 0046a974
    SUB ESP,0x1d4                       ; 0046a976
    MOV ESI,dword ptr [EBP + 0x14]      ; 0046a97c
    LEA EDI,[EBP + 0xfffffef4]          ; 0046a97f
    PUSH EDI                            ; 0046a985
    MOV AL,byte ptr [ESI]               ; 0046a986
        ;   Label: LAB_0046a986
    MOV byte ptr [EDI],AL               ; 0046a988
    CMP AL,0x0                          ; 0046a98a
    JZ 0x0046a99e                       ; 0046a98c
        ;   XREF to: 0046a99e (CONDITIONAL_JUMP)  ; LAB_0046a99e
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a98e
    ADD ESI,0x2                         ; 0046a991
    MOV byte ptr [EDI + 0x1],AL         ; 0046a994
    ADD EDI,0x2                         ; 0046a997
    CMP AL,0x0                          ; 0046a99a
    JNZ 0x0046a986                      ; 0046a99c
        ;   XREF to: 0046a986 (CONDITIONAL_JUMP)  ; LAB_0046a986
    POP EDI                             ; 0046a99e
        ;   Label: LAB_0046a99e
    MOV EDX,0x2e                        ; 0046a99f
    LEA ESI,[EBP + 0xfffffef4]          ; 0046a9a4
    MOV AL,byte ptr [ESI]               ; 0046a9aa
        ;   Label: LAB_0046a9aa
    CMP AL,DL                           ; 0046a9ac
    JZ 0x0046a9c2                       ; 0046a9ae
        ;   XREF to: 0046a9c2 (CONDITIONAL_JUMP)  ; LAB_0046a9c2
    CMP AL,0x0                          ; 0046a9b0
    JZ 0x0046a9c0                       ; 0046a9b2
        ;   XREF to: 0046a9c0 (CONDITIONAL_JUMP)  ; LAB_0046a9c0
    INC ESI                             ; 0046a9b4
    MOV AL,byte ptr [ESI]               ; 0046a9b5
    CMP AL,DL                           ; 0046a9b7
    JZ 0x0046a9c2                       ; 0046a9b9
        ;   XREF to: 0046a9c2 (CONDITIONAL_JUMP)  ; LAB_0046a9c2
    INC ESI                             ; 0046a9bb
    CMP AL,0x0                          ; 0046a9bc
    JNZ 0x0046a9aa                      ; 0046a9be
        ;   XREF to: 0046a9aa (CONDITIONAL_JUMP)  ; LAB_0046a9aa
    SUB ESI,ESI                         ; 0046a9c0
        ;   Label: LAB_0046a9c0
    MOV dword ptr [EBP + -0x8],ESI      ; 0046a9c2
        ;   Label: LAB_0046a9c2
    CMP dword ptr [EBP + -0x8],0x0      ; 0046a9c5
    JNZ 0x0046a9ee                      ; 0046a9c9
        ;   XREF to: 0046a9ee (CONDITIONAL_JUMP)  ; LAB_0046a9ee
    XOR EDX,EDX                         ; 0046a9cb
    LEA ESI,[EBP + 0xfffffef4]          ; 0046a9cd
    MOV AL,byte ptr [ESI]               ; 0046a9d3
        ;   Label: LAB_0046a9d3
    CMP AL,DL                           ; 0046a9d5
    JZ 0x0046a9eb                       ; 0046a9d7
        ;   XREF to: 0046a9eb (CONDITIONAL_JUMP)  ; LAB_0046a9eb
    CMP AL,0x0                          ; 0046a9d9
    JZ 0x0046a9e9                       ; 0046a9db
        ;   XREF to: 0046a9e9 (CONDITIONAL_JUMP)  ; LAB_0046a9e9
    INC ESI                             ; 0046a9dd
    MOV AL,byte ptr [ESI]               ; 0046a9de
    CMP AL,DL                           ; 0046a9e0
    JZ 0x0046a9eb                       ; 0046a9e2
        ;   XREF to: 0046a9eb (CONDITIONAL_JUMP)  ; LAB_0046a9eb
    INC ESI                             ; 0046a9e4
    CMP AL,0x0                          ; 0046a9e5
    JNZ 0x0046a9d3                      ; 0046a9e7
        ;   XREF to: 0046a9d3 (CONDITIONAL_JUMP)  ; LAB_0046a9d3
    SUB ESI,ESI                         ; 0046a9e9
        ;   Label: LAB_0046a9e9
    MOV dword ptr [EBP + -0x8],ESI      ; 0046a9eb
        ;   Label: LAB_0046a9eb
    MOV ESI,0x61d253                    ; 0046a9ee | = ".TGA"
        ;   Label: LAB_0046a9ee
    MOV EDI,dword ptr [EBP + -0x8]      ; 0046a9f3
    PUSH EDI                            ; 0046a9f6
    MOV AL,byte ptr [ESI]               ; 0046a9f7 | = ".TGA" | DAT_0061d255
        ;   Label: LAB_0046a9f7
    MOV byte ptr [EDI],AL               ; 0046a9f9
    CMP AL,0x0                          ; 0046a9fb
    JZ 0x0046aa0f                       ; 0046a9fd
        ;   XREF to: 0046aa0f (CONDITIONAL_JUMP)  ; LAB_0046aa0f
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a9ff | DAT_0061d254 | DAT_0061d256
    ADD ESI,0x2                         ; 0046aa02
    MOV byte ptr [EDI + 0x1],AL         ; 0046aa05
    ADD EDI,0x2                         ; 0046aa08
    CMP AL,0x0                          ; 0046aa0b
    JNZ 0x0046a9f7                      ; 0046aa0d
        ;   XREF to: 0046a9f7 (CONDITIONAL_JUMP)  ; LAB_0046a9f7
    POP EDI                             ; 0046aa0f
        ;   Label: LAB_0046aa0f
    MOV dword ptr [EBP + -0x4],0x0      ; 0046aa10
    JMP 0x0046aa1f                      ; 0046aa17
        ;   XREF to: 0046aa1f (UNCONDITIONAL_JUMP)  ; LAB_0046aa1f
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046aa19
        ;   Label: LAB_0046aa19
    INC dword ptr [EBP + -0x4]          ; 0046aa1c
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046aa1f
        ;   Label: LAB_0046aa1f
    CMP EAX,dword ptr [0x01e8d260]      ; 0046aa22 | g_TextureProcessedCount
    JGE 0x0046aae6                      ; 0046aa28
        ;   XREF to: 0046aae6 (CONDITIONAL_JUMP)  ; LAB_0046aae6
    LEA EAX,[EBP + 0xfffffef4]          ; 0046aa2e
    PUSH EAX                            ; 0046aa34
    IMUL EAX,dword ptr [EBP + -0x4],0x250 ; 0046aa35
    MOV EDX,0x1e8d264                   ; 0046aa3c | g_TextureAtlasEntries
    ADD EAX,EDX                         ; 0046aa41
    PUSH EAX                            ; 0046aa43
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0046aa44
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0046aa49
    TEST EAX,EAX                        ; 0046aa4c
    JNZ 0x0046aae1                      ; 0046aa4e
        ;   XREF to: 0046aae1 (CONDITIONAL_JUMP)  ; LAB_0046aae1
    IMUL EDX,dword ptr [EBP + -0x4],0x250 ; 0046aa54
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046aa5b
    CMP EAX,dword ptr [EDX + 0x1e8d4a4] ; 0046aa5e | DAT_01e8d4a4
    JGE 0x0046aa76                      ; 0046aa64
        ;   XREF to: 0046aa76 (CONDITIONAL_JUMP)  ; LAB_0046aa76
    IMUL EDX,dword ptr [EBP + -0x4],0x250 ; 0046aa66
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046aa6d
    MOV dword ptr [EDX + 0x1e8d4a4],EAX ; 0046aa70 | DAT_01e8d4a4
    IMUL EDX,dword ptr [EBP + -0x4],0x250 ; 0046aa76
        ;   Label: LAB_0046aa76
    MOV EAX,dword ptr [EBP + 0x20]      ; 0046aa7d
    CMP EAX,dword ptr [EDX + 0x1e8d4ac] ; 0046aa80 | DAT_01e8d4ac
    JLE 0x0046aa98                      ; 0046aa86
        ;   XREF to: 0046aa98 (CONDITIONAL_JUMP)  ; LAB_0046aa98
    IMUL EDX,dword ptr [EBP + -0x4],0x250 ; 0046aa88
    MOV EAX,dword ptr [EBP + 0x20]      ; 0046aa8f
    MOV dword ptr [EDX + 0x1e8d4ac],EAX ; 0046aa92 | DAT_01e8d4ac
    IMUL EDX,dword ptr [EBP + -0x4],0x250 ; 0046aa98
        ;   Label: LAB_0046aa98
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046aa9f
    CMP EAX,dword ptr [EDX + 0x1e8d4a8] ; 0046aaa2 | DAT_01e8d4a8
    JGE 0x0046aaba                      ; 0046aaa8
        ;   XREF to: 0046aaba (CONDITIONAL_JUMP)  ; LAB_0046aaba
    IMUL EDX,dword ptr [EBP + -0x4],0x250 ; 0046aaaa
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046aab1
    MOV dword ptr [EDX + 0x1e8d4a8],EAX ; 0046aab4 | DAT_01e8d4a8
    IMUL EDX,dword ptr [EBP + -0x4],0x250 ; 0046aaba
        ;   Label: LAB_0046aaba
    MOV EAX,dword ptr [EBP + 0x24]      ; 0046aac1
    CMP EAX,dword ptr [EDX + 0x1e8d4b0] ; 0046aac4 | DAT_01e8d4b0
    JLE 0x0046aadc                      ; 0046aaca
        ;   XREF to: 0046aadc (CONDITIONAL_JUMP)  ; LAB_0046aadc
    IMUL EDX,dword ptr [EBP + -0x4],0x250 ; 0046aacc
    MOV EAX,dword ptr [EBP + 0x24]      ; 0046aad3
    MOV dword ptr [EDX + 0x1e8d4b0],EAX ; 0046aad6 | DAT_01e8d4b0
    JMP 0x0046abe6                      ; 0046aadc
        ;   XREF to: 0046abe6 (UNCONDITIONAL_JUMP)  ; LAB_0046abe6
        ;   Label: LAB_0046aadc
    JMP 0x0046aa19                      ; 0046aae1
        ;   XREF to: 0046aa19 (UNCONDITIONAL_JUMP)  ; LAB_0046aa19
        ;   Label: LAB_0046aae1
    CMP dword ptr [0x01e8d260],0xfa     ; 0046aae6 | g_TextureProcessedCount
        ;   Label: LAB_0046aae6
    JL 0x0046ab2f                       ; 0046aaf0
        ;   XREF to: 0046ab2f (CONDITIONAL_JUMP)  ; LAB_0046ab2f
    PUSH 0xfa                           ; 0046aaf2
    MOV EAX,0x61d258                    ; 0046aaf7 | = "Too many textures to cram, max is %d"
    PUSH EAX                            ; 0046aafc | = "Too many textures to cram, max is %d"
    LEA EAX,[EBP + 0xfffffe2c]          ; 0046aafd
    PUSH EAX                            ; 0046ab03
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046ab04
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046ab09
    MOV dword ptr [0x02f0ca48],0x61d27d ; 0046ab0c | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x26f8   ; 0046ab16 | g_CurrentLineNumber
    LEA EAX,[EBP + 0xfffffe2c]          ; 0046ab20
    PUSH EAX                            ; 0046ab26
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046ab27
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046ab2c
    LEA ESI,[EBP + 0xfffffef4]          ; 0046ab2f
        ;   Label: LAB_0046ab2f
    IMUL EDI,dword ptr [0x01e8d260],0x250 ; 0046ab35 | g_TextureProcessedCount
    MOV EAX,0x1e8d264                   ; 0046ab3f | g_TextureAtlasEntries
    ADD EDI,EAX                         ; 0046ab44
    PUSH EDI                            ; 0046ab46
    MOV AL,byte ptr [ESI]               ; 0046ab47
        ;   Label: LAB_0046ab47
    MOV byte ptr [EDI],AL               ; 0046ab49 | g_TextureAtlasEntries | DAT_01e8d266
    CMP AL,0x0                          ; 0046ab4b
    JZ 0x0046ab5f                       ; 0046ab4d
        ;   XREF to: 0046ab5f (CONDITIONAL_JUMP)  ; LAB_0046ab5f
    MOV AL,byte ptr [ESI + 0x1]         ; 0046ab4f
    ADD ESI,0x2                         ; 0046ab52
    MOV byte ptr [EDI + 0x1],AL         ; 0046ab55 | DAT_01e8d265 | DAT_01e8d267
    ADD EDI,0x2                         ; 0046ab58
    CMP AL,0x0                          ; 0046ab5b
    JNZ 0x0046ab47                      ; 0046ab5d
        ;   XREF to: 0046ab47 (CONDITIONAL_JUMP)  ; LAB_0046ab47
    POP EDI                             ; 0046ab5f
        ;   Label: LAB_0046ab5f
    MOV ESI,dword ptr [EBP + 0x14]      ; 0046ab60
    IMUL EAX,dword ptr [0x01e8d260],0x250 ; 0046ab63 | g_TextureProcessedCount
    MOV EDI,0x1e8d264                   ; 0046ab6d | g_TextureAtlasEntries
    ADD EAX,EDI                         ; 0046ab72
    LEA EDI,[EAX + 0x100]               ; 0046ab74
    PUSH EDI                            ; 0046ab7a
    MOV AL,byte ptr [ESI]               ; 0046ab7b
        ;   Label: LAB_0046ab7b
    MOV byte ptr [EDI],AL               ; 0046ab7d | DAT_01e8d364 | DAT_01e8d366
    CMP AL,0x0                          ; 0046ab7f
    JZ 0x0046ab93                       ; 0046ab81
        ;   XREF to: 0046ab93 (CONDITIONAL_JUMP)  ; LAB_0046ab93
    MOV AL,byte ptr [ESI + 0x1]         ; 0046ab83
    ADD ESI,0x2                         ; 0046ab86
    MOV byte ptr [EDI + 0x1],AL         ; 0046ab89 | DAT_01e8d365 | DAT_01e8d367
    ADD EDI,0x2                         ; 0046ab8c
    CMP AL,0x0                          ; 0046ab8f
    JNZ 0x0046ab7b                      ; 0046ab91
        ;   XREF to: 0046ab7b (CONDITIONAL_JUMP)  ; LAB_0046ab7b
    POP EDI                             ; 0046ab93
        ;   Label: LAB_0046ab93
    IMUL ESI,dword ptr [0x01e8d260],0x250 ; 0046ab94 | g_TextureProcessedCount
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046ab9e
    MOV dword ptr [ESI + 0x1e8d4a4],EAX ; 0046aba1 | DAT_01e8d4a4
    IMUL ESI,dword ptr [0x01e8d260],0x250 ; 0046aba7 | g_TextureProcessedCount
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046abb1
    MOV dword ptr [ESI + 0x1e8d4a8],EAX ; 0046abb4 | DAT_01e8d4a8
    IMUL ESI,dword ptr [0x01e8d260],0x250 ; 0046abba | g_TextureProcessedCount
    MOV EAX,dword ptr [EBP + 0x20]      ; 0046abc4
    MOV dword ptr [ESI + 0x1e8d4ac],EAX ; 0046abc7 | DAT_01e8d4ac
    IMUL ESI,dword ptr [0x01e8d260],0x250 ; 0046abcd | g_TextureProcessedCount
    MOV EAX,dword ptr [EBP + 0x24]      ; 0046abd7
    MOV dword ptr [ESI + 0x1e8d4b0],EAX ; 0046abda | DAT_01e8d4b0
    INC dword ptr [0x01e8d260]          ; 0046abe0 | g_TextureProcessedCount
    MOV ESP,EBP                         ; 0046abe6
        ;   Label: LAB_0046abe6
    POP EBP                             ; 0046abe8
    POP EDI                             ; 0046abe9
    POP ESI                             ; 0046abea
    POP EBX                             ; 0046abeb
    RET                                 ; 0046abec

