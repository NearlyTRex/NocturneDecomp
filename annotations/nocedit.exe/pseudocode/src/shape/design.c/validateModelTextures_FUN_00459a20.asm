; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_validateModelTextures_FUN_00459a20(char *directory_path,int mode)
;
; Parameters:
; char *           Stack[0x4]:4   directory_path
; int              Stack[0x8]:4   mode
; Local Variables:
; char[16000]      Stack[-0x3fcc]:16000  local_3fcc
; char[200]        Stack[-0x14c]:200  local_14c
; char[80]         Stack[-0x84]:80  local_84
; int              Stack[-0x34]:4  local_34
; uint             Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; uint             Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; char *           Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_handleEditorHotkeys_FUN_0045b990 at 0045b9cd
;   shape_design.c_tileTextureMaps_FUN_0046a180 at 0046a1e9
;
; Referenced Globals:
;   TerminatedCString s_Checking_texture_files_0061acc5
;   TerminatedCString s_TGA_0061acdf
;   undefined4 DAT_0061ace0
;   undefined4 DAT_0061ace1
;   undefined4 s_A_0061ace2
;   TerminatedCString s_WARNING_The_following_te_0061ace4
;   TerminatedCString s_NO_TEXTURE_object_not_ma_0061ad12
;   TerminatedCString s_s_12s_texture_not_found_0061ad36
;   TerminatedCString s_s_12s_invalid_texture_si_0061ad53
;   TerminatedCString s_Hit_a_key_0061ad73
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 g_ModelPolygonData[0].texture_name[0]
;   undefined4 g_ModelPolygonData[0].texture_name[1]
;   undefined4 g_ModelPolygonData[0].texture_name[2]
;   ... and 1 more
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c__strcmp_FUN_005fef20
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_dosio.c_getFileSize_FUN_00481880
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459a20
        ;   Label: shape_design.c_validateModelTextures_FUN_00459a20
    PUSH ESI                            ; 00459a21
    PUSH EDI                            ; 00459a22
    PUSH EBP                            ; 00459a23
    MOV EBP,ESP                         ; 00459a24
    SUB ESP,0x3fc0                      ; 00459a26
    CMP dword ptr [EBP + 0x18],0x0      ; 00459a2c
    JZ 0x00459a38                       ; 00459a30
        ;   XREF to: 00459a38 (CONDITIONAL_JUMP)  ; LAB_00459a38
    CMP dword ptr [EBP + 0x18],0x1      ; 00459a32
    JNZ 0x00459a3a                      ; 00459a36
        ;   XREF to: 00459a3a (CONDITIONAL_JUMP)  ; LAB_00459a3a
    JMP 0x00459a46                      ; 00459a38
        ;   XREF to: 00459a46 (UNCONDITIONAL_JUMP)  ; LAB_00459a46
        ;   Label: LAB_00459a38
    MOV dword ptr [EBP + -0x10],0xffffffff ; 00459a3a
        ;   Label: LAB_00459a3a
    JMP 0x00459dd0                      ; 00459a41
        ;   XREF to: 00459dd0 (UNCONDITIONAL_JUMP)  ; LAB_00459dd0
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00459a46
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00459a46
    PUSH 0x0                            ; 00459a4b
    PUSH 0x0                            ; 00459a4d
    MOV EAX,0x61acc5                    ; 00459a4f | = "Checking texture files..."
    PUSH EAX                            ; 00459a54 | = "Checking texture files..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00459a55
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00459a5a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00459a5d
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV dword ptr [EBP + -0x4],0x0      ; 00459a62
    MOV dword ptr [EBP + -0xc],0x0      ; 00459a69
    JMP 0x00459a78                      ; 00459a70
        ;   XREF to: 00459a78 (UNCONDITIONAL_JUMP)  ; LAB_00459a78
    MOV EAX,dword ptr [EBP + -0xc]      ; 00459a72
        ;   Label: LAB_00459a72
    INC dword ptr [EBP + -0xc]          ; 00459a75
    CMP dword ptr [EBP + -0xc],0xc8     ; 00459a78
        ;   Label: LAB_00459a78
    JGE 0x00459a8f                      ; 00459a7f
        ;   XREF to: 00459a8f (CONDITIONAL_JUMP)  ; LAB_00459a8f
    IMUL EAX,dword ptr [EBP + -0xc],0x50 ; 00459a81
    MOV byte ptr [EAX + EBP*0x1 + 0xffffc044],0x0 ; 00459a85
    JMP 0x00459a72                      ; 00459a8d
        ;   XREF to: 00459a72 (UNCONDITIONAL_JUMP)  ; LAB_00459a72
    MOV dword ptr [EBP + -0xc],0x0      ; 00459a8f
        ;   Label: LAB_00459a8f
    JMP 0x00459a9e                      ; 00459a96
        ;   XREF to: 00459a9e (UNCONDITIONAL_JUMP)  ; LAB_00459a9e
    MOV EAX,dword ptr [EBP + -0xc]      ; 00459a98
        ;   Label: LAB_00459a98
    INC dword ptr [EBP + -0xc]          ; 00459a9b
    MOV EAX,dword ptr [EBP + -0xc]      ; 00459a9e
        ;   Label: LAB_00459a9e
    CMP EAX,dword ptr [0x016e990c]      ; 00459aa1 | g_PolygonCount
    JGE 0x00459da0                      ; 00459aa7
        ;   XREF to: 00459da0 (CONDITIONAL_JUMP)  ; LAB_00459da0
    IMUL EDI,dword ptr [EBP + -0xc],0x184 ; 00459aad
    MOV ESI,0x16e9910                   ; 00459ab4 | g_ModelPolygonData
    ADD ESI,EDI                         ; 00459ab9
    ADD ESI,0x4                         ; 00459abb
    LEA EDI,[EBP + -0x74]               ; 00459abe
    PUSH EDI                            ; 00459ac1
    MOV AL,byte ptr [ESI]               ; 00459ac2 | g_ModelPolygonData[0].texture_name[0] | g_ModelPolygonData[0].texture_name[2]
        ;   Label: LAB_00459ac2
    MOV byte ptr [EDI],AL               ; 00459ac4
    CMP AL,0x0                          ; 00459ac6
    JZ 0x00459ada                       ; 00459ac8
        ;   XREF to: 00459ada (CONDITIONAL_JUMP)  ; LAB_00459ada
    MOV AL,byte ptr [ESI + 0x1]         ; 00459aca | g_ModelPolygonData[0].texture_name[1] | g_ModelPolygonData[0].texture_name[3]
    ADD ESI,0x2                         ; 00459acd
    MOV byte ptr [EDI + 0x1],AL         ; 00459ad0
    ADD EDI,0x2                         ; 00459ad3
    CMP AL,0x0                          ; 00459ad6
    JNZ 0x00459ac2                      ; 00459ad8
        ;   XREF to: 00459ac2 (CONDITIONAL_JUMP)  ; LAB_00459ac2
    POP EDI                             ; 00459ada
        ;   Label: LAB_00459ada
    CMP byte ptr [EBP + -0x74],0x0      ; 00459adb
    JNZ 0x00459aea                      ; 00459adf
        ;   XREF to: 00459aea (CONDITIONAL_JUMP)  ; LAB_00459aea
    MOV dword ptr [EBP + -0x18],0x1     ; 00459ae1
    JMP 0x00459af1                      ; 00459ae8
        ;   XREF to: 00459af1 (UNCONDITIONAL_JUMP)  ; LAB_00459af1
    MOV dword ptr [EBP + -0x18],0x0     ; 00459aea
        ;   Label: LAB_00459aea
    CMP dword ptr [EBP + 0x18],0x1      ; 00459af1
        ;   Label: LAB_00459af1
    JNZ 0x00459b42                      ; 00459af5
        ;   XREF to: 00459b42 (CONDITIONAL_JUMP)  ; LAB_00459b42
    MOV EDX,0x2e                        ; 00459af7
    LEA ESI,[EBP + -0x74]               ; 00459afc
    MOV AL,byte ptr [ESI]               ; 00459aff
        ;   Label: LAB_00459aff
    CMP AL,DL                           ; 00459b01
    JZ 0x00459b17                       ; 00459b03
        ;   XREF to: 00459b17 (CONDITIONAL_JUMP)  ; LAB_00459b17
    CMP AL,0x0                          ; 00459b05
    JZ 0x00459b15                       ; 00459b07
        ;   XREF to: 00459b15 (CONDITIONAL_JUMP)  ; LAB_00459b15
    INC ESI                             ; 00459b09
    MOV AL,byte ptr [ESI]               ; 00459b0a
    CMP AL,DL                           ; 00459b0c
    JZ 0x00459b17                       ; 00459b0e
        ;   XREF to: 00459b17 (CONDITIONAL_JUMP)  ; LAB_00459b17
    INC ESI                             ; 00459b10
    CMP AL,0x0                          ; 00459b11
    JNZ 0x00459aff                      ; 00459b13
        ;   XREF to: 00459aff (CONDITIONAL_JUMP)  ; LAB_00459aff
    SUB ESI,ESI                         ; 00459b15
        ;   Label: LAB_00459b15
    MOV dword ptr [EBP + -0x8],ESI      ; 00459b17
        ;   Label: LAB_00459b17
    CMP dword ptr [EBP + -0x8],0x0      ; 00459b1a
    JZ 0x00459b42                       ; 00459b1e
        ;   XREF to: 00459b42 (CONDITIONAL_JUMP)  ; LAB_00459b42
    MOV ESI,0x61acdf                    ; 00459b20 | = ".TGA"
    MOV EDI,dword ptr [EBP + -0x8]      ; 00459b25
    PUSH EDI                            ; 00459b28
    MOV AL,byte ptr [ESI]               ; 00459b29 | = ".TGA" | DAT_0061ace1
        ;   Label: LAB_00459b29
    MOV byte ptr [EDI],AL               ; 00459b2b
    CMP AL,0x0                          ; 00459b2d
    JZ 0x00459b41                       ; 00459b2f
        ;   XREF to: 00459b41 (CONDITIONAL_JUMP)  ; LAB_00459b41
    MOV AL,byte ptr [ESI + 0x1]         ; 00459b31 | DAT_0061ace0 | s_A_0061ace2
    ADD ESI,0x2                         ; 00459b34
    MOV byte ptr [EDI + 0x1],AL         ; 00459b37
    ADD EDI,0x2                         ; 00459b3a
    CMP AL,0x0                          ; 00459b3d
    JNZ 0x00459b29                      ; 00459b3f
        ;   XREF to: 00459b29 (CONDITIONAL_JUMP)  ; LAB_00459b29
    POP EDI                             ; 00459b41
        ;   Label: LAB_00459b41
    LEA EAX,[EBP + -0x74]               ; 00459b42
        ;   Label: LAB_00459b42
    PUSH EAX                            ; 00459b45
    MOV EAX,dword ptr [EBP + 0x14]      ; 00459b46
    PUSH EAX                            ; 00459b49
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 00459b4a
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 00459b4f
    MOV dword ptr [EBP + -0x20],EAX     ; 00459b52
    MOV dword ptr [EBP + -0x1c],0x0     ; 00459b55
    CMP dword ptr [EBP + 0x18],0x0      ; 00459b5c
    JNZ 0x00459c28                      ; 00459b60
        ;   XREF to: 00459c28 (CONDITIONAL_JUMP)  ; LAB_00459c28
    MOV EAX,dword ptr [EBP + -0x20]     ; 00459b66
    MOV dword ptr [EBP + 0xffffc040],EAX ; 00459b69
    JMP 0x00459ba0                      ; 00459b6f
        ;   XREF to: 00459ba0 (UNCONDITIONAL_JUMP)  ; LAB_00459ba0
    JMP 0x00459c28                      ; 00459b71
        ;   XREF to: 00459c28 (UNCONDITIONAL_JUMP)  ; LAB_00459c28
        ;   Label: LAB_00459b71
    JMP 0x00459c28                      ; 00459b76
        ;   XREF to: 00459c28 (UNCONDITIONAL_JUMP)  ; LAB_00459c28
        ;   Label: LAB_00459b76
    JMP 0x00459c28                      ; 00459b7b
        ;   XREF to: 00459c28 (UNCONDITIONAL_JUMP)  ; LAB_00459c28
        ;   Label: LAB_00459b7b
    JMP 0x00459c28                      ; 00459b80
        ;   XREF to: 00459c28 (UNCONDITIONAL_JUMP)  ; LAB_00459c28
        ;   Label: LAB_00459b80
    JMP 0x00459c28                      ; 00459b85
        ;   XREF to: 00459c28 (UNCONDITIONAL_JUMP)  ; LAB_00459c28
        ;   Label: LAB_00459b85
    JMP 0x00459c28                      ; 00459b8a
        ;   XREF to: 00459c28 (UNCONDITIONAL_JUMP)  ; LAB_00459c28
        ;   Label: LAB_00459b8a
    JMP 0x00459c28                      ; 00459b8f
        ;   XREF to: 00459c28 (UNCONDITIONAL_JUMP)  ; LAB_00459c28
        ;   Label: LAB_00459b8f
    MOV dword ptr [EBP + -0x1c],0x1     ; 00459b94
        ;   Label: LAB_00459b94
    JMP 0x00459c28                      ; 00459b9b
        ;   XREF to: 00459c28 (UNCONDITIONAL_JUMP)  ; LAB_00459c28
    CMP dword ptr [EBP + 0xffffc040],0x4000 ; 00459ba0
        ;   Label: LAB_00459ba0
    JC 0x00459be9                       ; 00459baa
        ;   XREF to: 00459be9 (CONDITIONAL_JUMP)  ; LAB_00459be9
    CMP dword ptr [EBP + 0xffffc040],0x4000 ; 00459bac
    JBE 0x00459b7b                      ; 00459bb6
        ;   XREF to: 00459b7b (CONDITIONAL_JUMP)  ; LAB_00459b7b
    CMP dword ptr [EBP + 0xffffc040],0x40000 ; 00459bb8
    JC 0x00459bdb                       ; 00459bc2
        ;   XREF to: 00459bdb (CONDITIONAL_JUMP)  ; LAB_00459bdb
    CMP dword ptr [EBP + 0xffffc040],0x40000 ; 00459bc4
    JBE 0x00459b71                      ; 00459bce
        ;   XREF to: 00459b71 (CONDITIONAL_JUMP)  ; LAB_00459b71
    CMP dword ptr [EBP + 0xffffc040],-0x1 ; 00459bd0
    JZ 0x00459b8f                       ; 00459bd7
        ;   XREF to: 00459b8f (CONDITIONAL_JUMP)  ; LAB_00459b8f
    JMP 0x00459b94                      ; 00459bd9
        ;   XREF to: 00459b94 (UNCONDITIONAL_JUMP)  ; LAB_00459b94
    CMP dword ptr [EBP + 0xffffc040],0x10000 ; 00459bdb
        ;   Label: LAB_00459bdb
    JZ 0x00459b76                       ; 00459be5
        ;   XREF to: 00459b76 (CONDITIONAL_JUMP)  ; LAB_00459b76
    JMP 0x00459b94                      ; 00459be7
        ;   XREF to: 00459b94 (UNCONDITIONAL_JUMP)  ; LAB_00459b94
    CMP dword ptr [EBP + 0xffffc040],0x400 ; 00459be9
        ;   Label: LAB_00459be9
    JC 0x00459c13                       ; 00459bf3
        ;   XREF to: 00459c13 (CONDITIONAL_JUMP)  ; LAB_00459c13
    CMP dword ptr [EBP + 0xffffc040],0x400 ; 00459bf5
    JBE 0x00459b85                      ; 00459bff
        ;   XREF to: 00459b85 (CONDITIONAL_JUMP)  ; LAB_00459b85
    CMP dword ptr [EBP + 0xffffc040],0x1000 ; 00459c01
    JZ 0x00459b80                       ; 00459c0b
        ;   XREF to: 00459b80 (CONDITIONAL_JUMP)  ; LAB_00459b80
    JMP 0x00459b94                      ; 00459c11
        ;   XREF to: 00459b94 (UNCONDITIONAL_JUMP)  ; LAB_00459b94
    CMP dword ptr [EBP + 0xffffc040],0x100 ; 00459c13
        ;   Label: LAB_00459c13
    JZ 0x00459b8a                       ; 00459c1d
        ;   XREF to: 00459b8a (CONDITIONAL_JUMP)  ; LAB_00459b8a
    JMP 0x00459b94                      ; 00459c23
        ;   XREF to: 00459b94 (UNCONDITIONAL_JUMP)  ; LAB_00459b94
    CMP dword ptr [EBP + -0x20],-0x1    ; 00459c28
        ;   Label: LAB_00459c28
    JZ 0x00459c38                       ; 00459c2c
        ;   XREF to: 00459c38 (CONDITIONAL_JUMP)  ; LAB_00459c38
    CMP dword ptr [EBP + -0x1c],0x0     ; 00459c2e
    JZ 0x00459d9b                       ; 00459c32
        ;   XREF to: 00459d9b (CONDITIONAL_JUMP)  ; LAB_00459d9b
    MOV dword ptr [EBP + -0x14],0x0     ; 00459c38
        ;   Label: LAB_00459c38
    MOV dword ptr [EBP + -0x24],0x0     ; 00459c3f
    JMP 0x00459c4e                      ; 00459c46
        ;   XREF to: 00459c4e (UNCONDITIONAL_JUMP)  ; LAB_00459c4e
    MOV EAX,dword ptr [EBP + -0x24]     ; 00459c48
        ;   Label: LAB_00459c48
    INC dword ptr [EBP + -0x24]         ; 00459c4b
    MOV EAX,dword ptr [EBP + -0x24]     ; 00459c4e
        ;   Label: LAB_00459c4e
    CMP EAX,dword ptr [EBP + -0x4]      ; 00459c51
    JGE 0x00459c7e                      ; 00459c54
        ;   XREF to: 00459c7e (CONDITIONAL_JUMP)  ; LAB_00459c7e
    IMUL EDX,dword ptr [EBP + -0x24],0x50 ; 00459c56
    LEA EAX,[EBP + 0xffffc044]          ; 00459c5a
    ADD EAX,EDX                         ; 00459c60
    PUSH EAX                            ; 00459c62
    LEA EAX,[EBP + -0x74]               ; 00459c63
    PUSH EAX                            ; 00459c66
    CALL crt_string.c__strcmp_FUN_005fef20 ; 00459c67
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 00459c6c
    TEST EAX,EAX                        ; 00459c6f
    JNZ 0x00459c7c                      ; 00459c71
        ;   XREF to: 00459c7c (CONDITIONAL_JUMP)  ; LAB_00459c7c
    MOV dword ptr [EBP + -0x14],0x1     ; 00459c73
    JMP 0x00459c7e                      ; 00459c7a
        ;   XREF to: 00459c7e (UNCONDITIONAL_JUMP)  ; LAB_00459c7e
    JMP 0x00459c48                      ; 00459c7c
        ;   XREF to: 00459c48 (UNCONDITIONAL_JUMP)  ; LAB_00459c48
        ;   Label: LAB_00459c7c
    CMP dword ptr [EBP + -0x14],0x0     ; 00459c7e
        ;   Label: LAB_00459c7e
    JZ 0x00459c8e                       ; 00459c82
        ;   XREF to: 00459c8e (CONDITIONAL_JUMP)  ; LAB_00459c8e
    CMP dword ptr [EBP + -0x18],0x0     ; 00459c84
    JZ 0x00459d8d                       ; 00459c88
        ;   XREF to: 00459d8d (CONDITIONAL_JUMP)  ; LAB_00459d8d
    CMP dword ptr [EBP + -0x4],0xc8     ; 00459c8e
        ;   Label: LAB_00459c8e
    JGE 0x00459c9d                      ; 00459c95
        ;   XREF to: 00459c9d (CONDITIONAL_JUMP)  ; LAB_00459c9d
    CMP dword ptr [EBP + -0x18],0x0     ; 00459c97
    JZ 0x00459c9f                       ; 00459c9b
        ;   XREF to: 00459c9f (CONDITIONAL_JUMP)  ; LAB_00459c9f
    JMP 0x00459cc8                      ; 00459c9d
        ;   XREF to: 00459cc8 (UNCONDITIONAL_JUMP)  ; LAB_00459cc8
        ;   Label: LAB_00459c9d
    LEA ESI,[EBP + -0x74]               ; 00459c9f
        ;   Label: LAB_00459c9f
    IMUL EDI,dword ptr [EBP + -0x4],0x50 ; 00459ca2
    LEA EAX,[EBP + 0xffffc044]          ; 00459ca6
    ADD EDI,EAX                         ; 00459cac
    PUSH EDI                            ; 00459cae
    MOV AL,byte ptr [ESI]               ; 00459caf
        ;   Label: LAB_00459caf
    MOV byte ptr [EDI],AL               ; 00459cb1
    CMP AL,0x0                          ; 00459cb3
    JZ 0x00459cc7                       ; 00459cb5
        ;   XREF to: 00459cc7 (CONDITIONAL_JUMP)  ; LAB_00459cc7
    MOV AL,byte ptr [ESI + 0x1]         ; 00459cb7
    ADD ESI,0x2                         ; 00459cba
    MOV byte ptr [EDI + 0x1],AL         ; 00459cbd
    ADD EDI,0x2                         ; 00459cc0
    CMP AL,0x0                          ; 00459cc3
    JNZ 0x00459caf                      ; 00459cc5
        ;   XREF to: 00459caf (CONDITIONAL_JUMP)  ; LAB_00459caf
    POP EDI                             ; 00459cc7
        ;   Label: LAB_00459cc7
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459cc8
        ;   Label: LAB_00459cc8
    INC dword ptr [EBP + -0x4]          ; 00459ccb
    CMP dword ptr [EBP + -0x4],0x1      ; 00459cce
    JNZ 0x00459ceb                      ; 00459cd2
        ;   XREF to: 00459ceb (CONDITIONAL_JUMP)  ; LAB_00459ceb
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00459cd4
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00459cd9
    PUSH 0x0                            ; 00459cdb
    MOV EAX,0x61ace4                    ; 00459cdd | = "WARNING: The following textures were ..."
    PUSH EAX                            ; 00459ce2 | = "WARNING: The following textures were ..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00459ce3
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00459ce8
    CMP dword ptr [EBP + -0x18],0x0     ; 00459ceb
        ;   Label: LAB_00459ceb
    JZ 0x00459d21                       ; 00459cef
        ;   XREF to: 00459d21 (CONDITIONAL_JUMP)  ; LAB_00459d21
    MOV EAX,0x61ad12                    ; 00459cf1 | = "  NO TEXTURE    (object not mapped)"
    PUSH EAX                            ; 00459cf6 | = "  NO TEXTURE    (object not mapped)"
    LEA EAX,[EBP + 0xfffffec4]          ; 00459cf7
    PUSH EAX                            ; 00459cfd
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00459cfe
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00459d03
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459d06
    INC EAX                             ; 00459d09
    IMUL EAX,EAX,0xb                    ; 00459d0a
    PUSH EAX                            ; 00459d0d
    PUSH 0x0                            ; 00459d0e
    LEA EAX,[EBP + 0xfffffec4]          ; 00459d10
    PUSH EAX                            ; 00459d16
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00459d17
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00459d1c
    JMP 0x00459d8d                      ; 00459d1f
        ;   XREF to: 00459d8d (UNCONDITIONAL_JUMP)  ; LAB_00459d8d
    CMP dword ptr [EBP + -0x20],-0x1    ; 00459d21
        ;   Label: LAB_00459d21
    JNZ 0x00459d5b                      ; 00459d25
        ;   XREF to: 00459d5b (CONDITIONAL_JUMP)  ; LAB_00459d5b
    LEA EAX,[EBP + -0x74]               ; 00459d27
    PUSH EAX                            ; 00459d2a
    MOV EAX,0x61ad36                    ; 00459d2b | = "  %-12s  (texture not found)"
    PUSH EAX                            ; 00459d30 | = "  %-12s  (texture not found)"
    LEA EAX,[EBP + 0xfffffec4]          ; 00459d31
    PUSH EAX                            ; 00459d37
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00459d38
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00459d3d
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459d40
    INC EAX                             ; 00459d43
    IMUL EAX,EAX,0xb                    ; 00459d44
    PUSH EAX                            ; 00459d47
    PUSH 0x0                            ; 00459d48
    LEA EAX,[EBP + 0xfffffec4]          ; 00459d4a
    PUSH EAX                            ; 00459d50
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00459d51
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00459d56
    JMP 0x00459d8d                      ; 00459d59
        ;   XREF to: 00459d8d (UNCONDITIONAL_JUMP)  ; LAB_00459d8d
    LEA EAX,[EBP + -0x74]               ; 00459d5b
        ;   Label: LAB_00459d5b
    PUSH EAX                            ; 00459d5e
    MOV EAX,0x61ad53                    ; 00459d5f | = "  %-12s  (invalid texture size)"
    PUSH EAX                            ; 00459d64 | = "  %-12s  (invalid texture size)"
    LEA EAX,[EBP + 0xfffffec4]          ; 00459d65
    PUSH EAX                            ; 00459d6b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00459d6c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00459d71
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459d74
    INC EAX                             ; 00459d77
    IMUL EAX,EAX,0xb                    ; 00459d78
    PUSH EAX                            ; 00459d7b
    PUSH 0x0                            ; 00459d7c
    LEA EAX,[EBP + 0xfffffec4]          ; 00459d7e
    PUSH EAX                            ; 00459d84
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00459d85
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00459d8a
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00459d8d
        ;   Label: LAB_00459d8d
    MOV byte ptr [EAX + 0x16e9914],0x0  ; 00459d94 | g_ModelPolygonData[0].texture_name[0]
    JMP 0x00459a98                      ; 00459d9b
        ;   XREF to: 00459a98 (UNCONDITIONAL_JUMP)  ; LAB_00459a98
        ;   Label: LAB_00459d9b
    CMP dword ptr [EBP + -0x4],0x0      ; 00459da0
        ;   Label: LAB_00459da0
    JZ 0x00459dca                       ; 00459da4
        ;   XREF to: 00459dca (CONDITIONAL_JUMP)  ; LAB_00459dca
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459da6
    ADD EAX,0x3                         ; 00459da9
    IMUL EAX,EAX,0xb                    ; 00459dac
    PUSH EAX                            ; 00459daf
    PUSH 0x0                            ; 00459db0
    MOV EAX,0x61ad73                    ; 00459db2 | = "Hit a key..."
    PUSH EAX                            ; 00459db7 | = "Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00459db8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00459dbd
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00459dc0
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00459dc5
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459dca
        ;   Label: LAB_00459dca
    MOV dword ptr [EBP + -0x10],EAX     ; 00459dcd
    MOV EAX,dword ptr [EBP + -0x10]     ; 00459dd0
        ;   Label: LAB_00459dd0
    MOV ESP,EBP                         ; 00459dd3
    POP EBP                             ; 00459dd5
    POP EDI                             ; 00459dd6
    POP ESI                             ; 00459dd7
    POP EBX                             ; 00459dd8
    RET                                 ; 00459dd9

