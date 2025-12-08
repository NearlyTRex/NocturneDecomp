; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, char * ext)
;
; Parameters:
; char *           Stack[0x4]:4   path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   dir
; char *           Stack[0x10]:4   fname
; char *           Stack[0x14]:4   ext
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[34]:
;   core_cloth.cpp_FUN_0043ddf0 at 0043e04f
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 0044368e
;   core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50 at 0047ca8c
;   core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30 at 0047a013
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 00479750
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047da85
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bde9a
;   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 at 004bd7fe
;   core_game.cpp_CGame_FUN_004e36f0 at 004e3724
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e12eb
;   ... and 24 more
;
; Called Functions:
;   crt_string.c_mbtowc_next_FUN_00605a70
;   crt_string.c_mbtowc_peek_FUN_006059e0
;   crt_string.c_strncpy_safe_FUN_005ff130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ff178
        ;   Label: crt_string.c_splitpath_FUN_005ff178
    PUSH ESI                            ; 005ff179
    PUSH EDI                            ; 005ff17a
    PUSH EBP                            ; 005ff17b
    SUB ESP,0x4                         ; 005ff17c
    MOV EBX,dword ptr [ESP + 0x18]      ; 005ff17f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005ff183
    MOV AH,byte ptr [EBX]               ; 005ff187
    TEST AH,AH                          ; 005ff189
    JZ 0x005ff1a7                       ; 005ff18b | LAB_005ff1a7
        ;   XREF to: 005ff1a7 (CONDITIONAL_JUMP)
    MOV DL,byte ptr [EBX + 0x1]         ; 005ff18d
    CMP DL,0x3a                         ; 005ff190
    JNZ 0x005ff1a7                      ; 005ff193 | LAB_005ff1a7
        ;   XREF to: 005ff1a7 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 005ff195
    JZ 0x005ff1a2                       ; 005ff197 | LAB_005ff1a2
        ;   XREF to: 005ff1a2 (CONDITIONAL_JUMP)
    MOV byte ptr [ESI + 0x2],0x0        ; 005ff199
    MOV byte ptr [ESI],AH               ; 005ff19d
    MOV byte ptr [ESI + 0x1],DL         ; 005ff19f
    ADD EBX,0x2                         ; 005ff1a2
        ;   Label: LAB_005ff1a2
    JMP 0x005ff1ae                      ; 005ff1a5 | LAB_005ff1ae
        ;   XREF to: 005ff1ae (UNCONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 005ff1a7
        ;   Label: LAB_005ff1a7
    JZ 0x005ff1ae                       ; 005ff1a9 | LAB_005ff1ae
        ;   XREF to: 005ff1ae (CONDITIONAL_JUMP)
    MOV byte ptr [ESI],0x0              ; 005ff1ab
    MOV EBP,EBX                         ; 005ff1ae
        ;   Label: LAB_005ff1ae
    MOV dword ptr [ESP],EBX             ; 005ff1b0
    MOV DH,byte ptr [EBX]               ; 005ff1b3
    XOR EDI,EDI                         ; 005ff1b5
    TEST DH,DH                          ; 005ff1b7
    JZ 0x005ff1ee                       ; 005ff1b9 | LAB_005ff1ee
        ;   XREF to: 005ff1ee (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005ff1bb
        ;   Label: LAB_005ff1bb
    CALL crt_string.c_mbtowc_peek_FUN_006059e0 ; 005ff1bc | wchar_t crt_string.c_mbtowc_peek_FUN_006059e0(char * str)
        ;   XREF to: 006059e0 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 005ff1c1
    ADD ESP,0x4                         ; 005ff1c3
    CMP EAX,0x2e                        ; 005ff1c6
    JNZ 0x005ff1d0                      ; 005ff1c9 | LAB_005ff1d0
        ;   XREF to: 005ff1d0 (CONDITIONAL_JUMP)
    MOV EDI,EBX                         ; 005ff1cb
    INC EBX                             ; 005ff1cd
    JMP 0x005ff1e9                      ; 005ff1ce | LAB_005ff1e9
        ;   XREF to: 005ff1e9 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 005ff1d0
        ;   Label: LAB_005ff1d0
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 005ff1d1 | char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 005ff1d6
    ADD ESP,0x4                         ; 005ff1d8
    CMP ESI,0x5c                        ; 005ff1db
    JZ 0x005ff1e5                       ; 005ff1de | LAB_005ff1e5
        ;   XREF to: 005ff1e5 (CONDITIONAL_JUMP)
    CMP ESI,0x2f                        ; 005ff1e0
    JNZ 0x005ff1e9                      ; 005ff1e3 | LAB_005ff1e9
        ;   XREF to: 005ff1e9 (CONDITIONAL_JUMP)
    MOV EBP,EBX                         ; 005ff1e5
        ;   Label: LAB_005ff1e5
    XOR EDI,EDI                         ; 005ff1e7
    CMP byte ptr [EBX],0x0              ; 005ff1e9
        ;   Label: LAB_005ff1e9
    JNZ 0x005ff1bb                      ; 005ff1ec | LAB_005ff1bb
        ;   XREF to: 005ff1bb (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP]             ; 005ff1ee
        ;   Label: LAB_005ff1ee
    MOV ESI,EBP                         ; 005ff1f1
    PUSH 0xff                           ; 005ff1f3
    SUB ESI,EDX                         ; 005ff1f8
    PUSH ESI                            ; 005ff1fa
    PUSH EDX                            ; 005ff1fb
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005ff1fc
    PUSH ESI                            ; 005ff200
    CALL crt_string.c_strncpy_safe_FUN_005ff130 ; 005ff201 | void crt_string.c_strncpy_safe_FUN_005ff130(char * dest, char * src, int length, int maxlen)
        ;   XREF to: 005ff130 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005ff206
    TEST EDI,EDI                        ; 005ff209
    JNZ 0x005ff20f                      ; 005ff20b | LAB_005ff20f
        ;   XREF to: 005ff20f (CONDITIONAL_JUMP)
    MOV EDI,EBX                         ; 005ff20d
    MOV ESI,EDI                         ; 005ff20f
        ;   Label: LAB_005ff20f
    PUSH 0xff                           ; 005ff211
    SUB ESI,EBP                         ; 005ff216
    PUSH ESI                            ; 005ff218
    PUSH EBP                            ; 005ff219
    MOV EBP,dword ptr [ESP + 0x30]      ; 005ff21a
    PUSH EBP                            ; 005ff21e
    CALL crt_string.c_strncpy_safe_FUN_005ff130 ; 005ff21f | void crt_string.c_strncpy_safe_FUN_005ff130(char * dest, char * src, int length, int maxlen)
        ;   XREF to: 005ff130 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005ff224
    PUSH 0xff                           ; 005ff227
    SUB EBX,EDI                         ; 005ff22c
    PUSH EBX                            ; 005ff22e
    PUSH EDI                            ; 005ff22f
    MOV EAX,dword ptr [ESP + 0x34]      ; 005ff230
    PUSH EAX                            ; 005ff234
    CALL crt_string.c_strncpy_safe_FUN_005ff130 ; 005ff235 | void crt_string.c_strncpy_safe_FUN_005ff130(char * dest, char * src, int length, int maxlen)
        ;   XREF to: 005ff130 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005ff23a
    ADD ESP,0x4                         ; 005ff23d
    POP EBP                             ; 005ff240
    POP EDI                             ; 005ff241
    POP ESI                             ; 005ff242
    POP EBX                             ; 005ff243
    RET                                 ; 005ff244

