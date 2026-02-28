; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_addGroundType_FUN_00578290(char *filename,int ground_type)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; int              Stack[0x8]:4   ground_type
; Local Variables:
; undefined1       Stack[-0x20c]:1  local_20c
; undefined1       Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0x10b]:1  local_10b
;
; XREF[2]:
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 00579987
;   core_setedit.cpp_loadGroundTypes_FUN_00578420 at 00578583
;
; Referenced Globals:
;   TerminatedCString s_core_setedit_cpp_0064679f
;   TerminatedCString s_Tried_to_define_texture__006467b3
;   TerminatedCString s_core_setedit_cpp_00646802
;   TerminatedCString s_Ground_type_list_is_full_00646816
;   TerminatedCString s_core_setedit_cpp_0064683d
;   TerminatedCString s_Texture_filename_s_is_to_00646851
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_GroundTextureCount
;   char[500][40] g_GroundTextureNames
;   undefined4 DAT_03654371
;   undefined4 DAT_03654372
;   undefined4 DAT_03654373
;   undefined4 DAT_03654398
;   undefined4 DAT_0365918f
;   ... and 1 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_dosio.c_splitPath_FUN_00481f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578290
        ;   Label: core_setedit.cpp_addGroundType_FUN_00578290
    PUSH ESI                            ; 00578291
    PUSH EBP                            ; 00578292
    SUB ESP,0x200                       ; 00578293
    MOV EBP,dword ptr [ESP + 0x210]     ; 00578299
    PUSH 0x0                            ; 005782a0
    LEA EAX,[ESP + 0x4]                 ; 005782a2
    PUSH EAX                            ; 005782a6
    PUSH 0x0                            ; 005782a7
    PUSH 0x0                            ; 005782a9
    PUSH EBP                            ; 005782ab
    XOR EBX,EBX                         ; 005782ac
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 005782ae
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    MOV EDX,dword ptr [0x03654368]      ; 005782b3 | g_GroundTextureCount
    ADD ESP,0x14                        ; 005782b9
    TEST EDX,EDX                        ; 005782bc
    JLE 0x0057830a                      ; 005782be
        ;   XREF to: 0057830a (CONDITIONAL_JUMP)  ; LAB_0057830a
    MOV ESI,0x3654370                   ; 005782c0 | g_GroundTextureNames
    MOV EAX,ESP                         ; 005782c5
        ;   Label: LAB_005782c5
    PUSH EAX                            ; 005782c7
    PUSH ESI                            ; 005782c8 | g_GroundTextureNames | DAT_03654398
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005782c9
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005782ce
    TEST EAX,EAX                        ; 005782d1
    JNZ 0x005782fc                      ; 005782d3
        ;   XREF to: 005782fc (CONDITIONAL_JUMP)  ; LAB_005782fc
    TEST EBX,EBX                        ; 005782d5
    JL 0x0057830a                       ; 005782d7
        ;   XREF to: 0057830a (CONDITIONAL_JUMP)  ; LAB_0057830a
    MOV AL,byte ptr [EBX + 0x3659190]   ; 005782d9 | g_GroundTextureTypes
    TEST EAX,EAX                        ; 005782df
    JL 0x0057830a                       ; 005782e1
        ;   XREF to: 0057830a (CONDITIONAL_JUMP)  ; LAB_0057830a
    MOV ECX,dword ptr [ESP + 0x214]     ; 005782e3
    CMP EAX,ECX                         ; 005782ea
    JNZ 0x005783ee                      ; 005782ec
        ;   XREF to: 005783ee (CONDITIONAL_JUMP)  ; LAB_005783ee
    ADD ESP,0x200                       ; 005782f2
    POP EBP                             ; 005782f8
    POP ESI                             ; 005782f9
    POP EBX                             ; 005782fa
    RET                                 ; 005782fb
    MOV ECX,dword ptr [0x03654368]      ; 005782fc | g_GroundTextureCount
        ;   Label: LAB_005782fc
    INC EBX                             ; 00578302
    ADD ESI,0x28                        ; 00578303
    CMP EBX,ECX                         ; 00578306
    JL 0x005782c5                       ; 00578308
        ;   XREF to: 005782c5 (CONDITIONAL_JUMP)  ; LAB_005782c5
    PUSH EDI                            ; 0057830a
        ;   Label: LAB_0057830a
    PUSH 0x0                            ; 0057830b
    LEA EAX,[ESP + 0x108]               ; 0057830d
    PUSH EAX                            ; 00578314
    PUSH 0x0                            ; 00578315
    PUSH 0x0                            ; 00578317
    PUSH EBP                            ; 00578319
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 0057831a
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    MOV EBX,dword ptr [0x03654368]      ; 0057831f | g_GroundTextureCount
    ADD ESP,0x14                        ; 00578325
    CMP EBX,0x1f4                       ; 00578328
    JL 0x00578358                       ; 0057832e
        ;   XREF to: 00578358 (CONDITIONAL_JUMP)  ; LAB_00578358
    PUSH 0x1f4                          ; 00578330
    MOV ESI,0x646802                    ; 00578335 | = "..\\core\\setedit.cpp"
    MOV EDI,0x2ab                       ; 0057833a
    PUSH 0x646816                       ; 0057833f | = "Ground type list is full!  (Max is %d)"
    MOV dword ptr [0x02f0ca48],ESI      ; 00578344 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0057834a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00578350
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00578355
    LEA EDI,[ESP + 0x104]               ; 00578358
        ;   Label: LAB_00578358
    SUB ECX,ECX                         ; 0057835f
    DEC ECX                             ; 00578361
    XOR EAX,EAX                         ; 00578362
    SCASB.REPNE ES:EDI                  ; 00578364
    NOT ECX                             ; 00578366
    DEC ECX                             ; 00578368
    CMP ECX,0x28                        ; 00578369
    JC 0x00578391                       ; 0057836c
        ;   XREF to: 00578391 (CONDITIONAL_JUMP)  ; LAB_00578391
    PUSH EBP                            ; 0057836e
    MOV EAX,0x64683d                    ; 0057836f | = "..\\core\\setedit.cpp"
    MOV EDX,0x2b1                       ; 00578374
    PUSH 0x646851                       ; 00578379 | = "Texture filename %s is too long to ad..."
    MOV [0x02f0ca48],EAX                ; 0057837e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00578383 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00578389
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0057838e
    MOV EBX,dword ptr [0x03654368]      ; 00578391 | g_GroundTextureCount
        ;   Label: LAB_00578391
    LEA EAX,[EBX*0x4 + 0x0]             ; 00578397
    ADD EAX,EBX                         ; 0057839e
    MOV EDI,0x3654370                   ; 005783a0 | g_GroundTextureNames
    SHL EAX,0x3                         ; 005783a5
    LEA ESI,[ESP + 0x104]               ; 005783a8
    ADD EDI,EAX                         ; 005783af
    PUSH EDI                            ; 005783b1
    MOV AL,byte ptr [ESI]               ; 005783b2
        ;   Label: LAB_005783b2
    MOV byte ptr [EDI],AL               ; 005783b4 | g_GroundTextureNames | DAT_03654372
    CMP AL,0x0                          ; 005783b6
    JZ 0x005783ca                       ; 005783b8
        ;   XREF to: 005783ca (CONDITIONAL_JUMP)  ; LAB_005783ca
    MOV AL,byte ptr [ESI + 0x1]         ; 005783ba
    ADD ESI,0x2                         ; 005783bd
    MOV byte ptr [EDI + 0x1],AL         ; 005783c0 | DAT_03654371 | DAT_03654373
    ADD EDI,0x2                         ; 005783c3
    CMP AL,0x0                          ; 005783c6
    JNZ 0x005783b2                      ; 005783c8
        ;   XREF to: 005783b2 (CONDITIONAL_JUMP)  ; LAB_005783b2
    POP EDI                             ; 005783ca
        ;   Label: LAB_005783ca
    MOV EAX,[0x03654368]                ; 005783cb | g_GroundTextureCount
    INC EAX                             ; 005783d0
    MOV BL,byte ptr [ESP + 0x218]       ; 005783d1
    MOV byte ptr [EAX + 0x365918f],BL   ; 005783d8 | DAT_0365918f | g_GroundTextureTypes
    MOV [0x03654368],EAX                ; 005783de | g_GroundTextureCount
    POP EDI                             ; 005783e3
    ADD ESP,0x200                       ; 005783e4
    POP EBP                             ; 005783ea
    POP ESI                             ; 005783eb
    POP EBX                             ; 005783ec
    RET                                 ; 005783ed
    PUSH EAX                            ; 005783ee
        ;   Label: LAB_005783ee
    PUSH ECX                            ; 005783ef
    PUSH EBP                            ; 005783f0
    MOV EBX,0x64679f                    ; 005783f1 | = "..\\core\\setedit.cpp"
    MOV ESI,0x29e                       ; 005783f6
    PUSH 0x6467b3                       ; 005783fb | = "Tried to define texture %s as ground ..."
    MOV dword ptr [0x02f0ca48],EBX      ; 00578400 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00578406 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057840c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 00578411
    ADD ESP,0x200                       ; 00578414
    POP EBP                             ; 0057841a
    POP ESI                             ; 0057841b
    POP EBX                             ; 0057841c
    RET                                 ; 0057841d

