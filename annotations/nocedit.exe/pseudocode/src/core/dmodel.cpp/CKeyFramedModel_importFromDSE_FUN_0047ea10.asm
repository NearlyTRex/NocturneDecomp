; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel * this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e3da
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_00620eb3
;   TerminatedCString s_CKeyFramedModel_exportTo_00620ec6
;   double DOUBLE_00620efb = 256
;   double DOUBLE_00620f03 = 65536
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_01626420
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;   undefined4 DAT_016e9915
;   undefined4 DAT_016e9916
;   undefined4 DAT_016e9917
;   ... and 9 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
;   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ea10
        ;   Label: core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10
    PUSH EBP                            ; 0047ea11
    SUB ESP,0x20                        ; 0047ea12
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0047ea15
    PUSH EBX                            ; 0047ea19
    CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690 ; 0047ea1a
        ;   XREF to: 00477690 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr)
    MOV EDX,dword ptr [0x01626408]      ; 0047ea1f | g_VertexCount
    ADD ESP,0x4                         ; 0047ea25
    CMP EDX,0x1                         ; 0047ea28
    JL 0x0047ea38                       ; 0047ea2b
        ;   XREF to: 0047ea38 (CONDITIONAL_JUMP)  ; LAB_0047ea38
    MOV ECX,dword ptr [0x016e990c]      ; 0047ea2d | g_PolygonCount
    CMP ECX,0x1                         ; 0047ea33
    JGE 0x0047ea3e                      ; 0047ea36
        ;   XREF to: 0047ea3e (CONDITIONAL_JUMP)  ; LAB_0047ea3e
    ADD ESP,0x20                        ; 0047ea38
        ;   Label: LAB_0047ea38
    POP EBP                             ; 0047ea3b
    POP EBX                             ; 0047ea3c
    RET                                 ; 0047ea3d
    PUSH EDI                            ; 0047ea3e
        ;   Label: LAB_0047ea3e
    PUSH ESI                            ; 0047ea3f
    PUSH 0x1                            ; 0047ea40
    PUSH 0x1                            ; 0047ea42
    PUSH 0x12c                          ; 0047ea44
    PUSH ECX                            ; 0047ea49
    PUSH EDX                            ; 0047ea4a
    PUSH EBX                            ; 0047ea4b
    XOR ESI,ESI                         ; 0047ea4c
    CALL core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0 ; 0047ea4e
        ;   XREF to: 00477bf0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0(CKeyFramedModel * this_ptr, int vertex_count, int poly_count, int texture_count, ...)
    MOV EBP,dword ptr [EBX + 0x104]     ; 0047ea53
    ADD ESP,0x18                        ; 0047ea59
    TEST EBP,EBP                        ; 0047ea5c
    JLE 0x0047eae3                      ; 0047ea5e
        ;   XREF to: 0047eae3 (CONDITIONAL_JUMP)  ; LAB_0047eae3
    FLD double ptr [0x00620efb]         ; 0047ea64 | DOUBLE_00620efb
    XOR ECX,ECX                         ; 0047ea6a
    XOR EDX,EDX                         ; 0047ea6c
    FLD float ptr [ECX + 0x162640c]     ; 0047ea6e | g_LoadedVertices | DAT_01626420
        ;   Label: LAB_0047ea6e
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0047ea74
    FMUL ST1                            ; 0047ea7a
    LEA EDI,[EAX + EDX*0x1]             ; 0047ea7c
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047ea7f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 0047ea84
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047ea88
    MOV dword ptr [EDI],EAX             ; 0047ea8c
    FLD float ptr [ECX + 0x1626410]     ; 0047ea8e | DAT_01626410
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0047ea94
    FMUL ST1                            ; 0047ea9a
    LEA EDI,[EAX + EDX*0x1]             ; 0047ea9c
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047ea9f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 0047eaa4
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047eaa8
    MOV dword ptr [EDI + 0x4],EAX       ; 0047eaac
    FLD float ptr [ECX + 0x1626414]     ; 0047eaaf | g_LoadedVertices[0].vertex.z
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0047eab5
    FMUL ST1                            ; 0047eabb
    LEA EDI,[EAX + EDX*0x1]             ; 0047eabd
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047eac0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 0047eac5
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047eac9
    ADD ECX,0x14                        ; 0047eacd
    MOV dword ptr [EDI + 0x8],EAX       ; 0047ead0
    INC ESI                             ; 0047ead3
    MOV EAX,dword ptr [EBX + 0x104]     ; 0047ead4
    ADD EDX,0xc                         ; 0047eada
    CMP ESI,EAX                         ; 0047eadd
    JL 0x0047ea6e                       ; 0047eadf
        ;   XREF to: 0047ea6e (CONDITIONAL_JUMP)  ; LAB_0047ea6e
    FSTP ST0                            ; 0047eae1
    MOV ECX,dword ptr [EBX + 0x110]     ; 0047eae3
        ;   Label: LAB_0047eae3
    XOR EDX,EDX                         ; 0047eae9
    MOV dword ptr [EBX + 0x120],0x0     ; 0047eaeb
    MOV dword ptr [ESP + 0x20],EDX      ; 0047eaf5
    TEST ECX,ECX                        ; 0047eaf9
    JLE 0x0047ecb0                      ; 0047eafb
        ;   XREF to: 0047ecb0 (CONDITIONAL_JUMP)  ; LAB_0047ecb0
    LEA EAX,[EBX + 0x124]               ; 0047eb01
    MOV dword ptr [ESP + 0xc],EAX       ; 0047eb07
    MOV dword ptr [ESP + 0x10],EAX      ; 0047eb0b
    MOV EAX,0x16e9910                   ; 0047eb0f | g_ModelPolygonData
    MOV dword ptr [ESP + 0x1c],EDX      ; 0047eb14
    ADD EAX,0x4                         ; 0047eb18
    MOV dword ptr [ESP + 0x14],EDX      ; 0047eb1b
    MOV dword ptr [ESP + 0x18],EAX      ; 0047eb1f | DAT_016e9914
    IMUL EAX,dword ptr [ESP + 0x20],0x184 ; 0047eb23
        ;   Label: LAB_0047eb23
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0047eb2b
    MOV EDX,dword ptr [EBX + 0x114]     ; 0047eb2f
    XOR ESI,ESI                         ; 0047eb35
    ADD ECX,EDX                         ; 0047eb37
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0047eb39
    MOV EDX,dword ptr [EAX + 0x16e99b4] ; 0047eb3d | DAT_016e99b4
    MOV dword ptr [ESP + 0x24],EAX      ; 0047eb43
    MOV dword ptr [ECX + 0x4],EDX       ; 0047eb47
    MOV EDX,EAX                         ; 0047eb4a
    MOV EDI,dword ptr [EAX + 0x16e99b4] ; 0047eb4c | DAT_016e99b4
    XOR ECX,ECX                         ; 0047eb52
    TEST EDI,EDI                        ; 0047eb54
    JLE 0x0047ebe1                      ; 0047eb56
        ;   XREF to: 0047ebe1 (CONDITIONAL_JUMP)  ; LAB_0047ebe1
    FLD double ptr [0x00620f03]         ; 0047eb5c | DOUBLE_00620f03
    MOV EAX,dword ptr [EBX + 0x114]     ; 0047eb62
        ;   Label: LAB_0047eb62
    ADD EAX,EBP                         ; 0047eb68
    ADD EAX,ECX                         ; 0047eb6a
    MOV dword ptr [ESP + 0x8],EAX       ; 0047eb6c
    MOV EDI,dword ptr [ESP + 0x8]       ; 0047eb70
    MOV EAX,dword ptr [EDX + 0x16e99c8] ; 0047eb74 | DAT_016e99c8 | DAT_016e99cc
    MOV dword ptr [EDI + 0x18],EAX      ; 0047eb7a
    FLD float ptr [EDX + 0x16e9a08]     ; 0047eb7d | DAT_016e9a08 | DAT_016e9a0c
    MOV EAX,dword ptr [EBX + 0x114]     ; 0047eb83
    FMUL ST1                            ; 0047eb89
    ADD EAX,EBP                         ; 0047eb8b
    ADD EAX,ECX                         ; 0047eb8d
    MOV dword ptr [ESP + 0x8],EAX       ; 0047eb8f
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047eb93
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EDI,dword ptr [ESP + 0x8]       ; 0047eb98
    FISTP dword ptr [ESP + 0x8]         ; 0047eb9c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047eba0
    MOV dword ptr [EDI + 0x1c],EAX      ; 0047eba4
    FLD float ptr [EDX + 0x16e9a48]     ; 0047eba7 | DAT_016e9a48
    MOV EAX,dword ptr [EBX + 0x114]     ; 0047ebad
    FMUL ST1                            ; 0047ebb3
    ADD EAX,EBP                         ; 0047ebb5
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047ebb7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    LEA EDI,[EAX + ECX*0x1]             ; 0047ebbc
    FISTP dword ptr [ESP + 0x8]         ; 0047ebbf
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047ebc3
    MOV dword ptr [EDI + 0x20],EAX      ; 0047ebc7
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047ebca
    ADD EDX,0x4                         ; 0047ebce
    INC ESI                             ; 0047ebd1
    MOV EDI,dword ptr [EAX + 0x16e99b4] ; 0047ebd2 | DAT_016e99b4
    ADD ECX,0xc                         ; 0047ebd8
    CMP ESI,EDI                         ; 0047ebdb
    JL 0x0047eb62                       ; 0047ebdd
        ;   XREF to: 0047eb62 (CONDITIONAL_JUMP)  ; LAB_0047eb62
    FSTP ST0                            ; 0047ebdf
    MOV EAX,dword ptr [EBX + 0x120]     ; 0047ebe1
        ;   Label: LAB_0047ebe1
    XOR EBP,EBP                         ; 0047ebe7
    TEST EAX,EAX                        ; 0047ebe9
    JLE 0x0047ec0a                      ; 0047ebeb
        ;   XREF to: 0047ec0a (CONDITIONAL_JUMP)  ; LAB_0047ec0a
    MOV ESI,dword ptr [ESP + 0xc]       ; 0047ebed
    MOV EDI,dword ptr [ESP + 0x18]      ; 0047ebf1
    ADD ESI,0x8                         ; 0047ebf5
    PUSH EDI                            ; 0047ebf8 | DAT_016e9914
        ;   Label: LAB_0047ebf8
    PUSH ESI                            ; 0047ebf9
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0047ebfa
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047ebff
    TEST EAX,EAX                        ; 0047ec02
    JNZ 0x0047ecda                      ; 0047ec04
        ;   XREF to: 0047ecda (CONDITIONAL_JUMP)  ; LAB_0047ecda
    CMP EBP,dword ptr [EBX + 0x120]     ; 0047ec0a
        ;   Label: LAB_0047ec0a
    JL 0x0047ec6b                       ; 0047ec10
        ;   XREF to: 0047ec6b (CONDITIONAL_JUMP)  ; LAB_0047ec6b
    CMP EBP,0x12c                       ; 0047ec12
    JL 0x0047ec3d                       ; 0047ec18
        ;   XREF to: 0047ec3d (CONDITIONAL_JUMP)  ; LAB_0047ec3d
    MOV ESI,0x620eb3                    ; 0047ec1a | = "..\\core\\dmodel.cpp"
    MOV EDI,0xe45                       ; 0047ec1f
    PUSH 0x620ec6                       ; 0047ec24 | = "CKeyFramedModel::exportToDSE() - Too ..."
    MOV dword ptr [0x02f0ca48],ESI      ; 0047ec29 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0047ec2f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047ec35
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0047ec3a
    IMUL EDI,EBP,0x48                   ; 0047ec3d
        ;   Label: LAB_0047ec3d
    ADD EDI,dword ptr [ESP + 0x10]      ; 0047ec40
    MOV ESI,dword ptr [ESP + 0x18]      ; 0047ec44
    ADD EDI,0x8                         ; 0047ec48
    PUSH EDI                            ; 0047ec4b
    MOV AL,byte ptr [ESI]               ; 0047ec4c | DAT_016e9914 | DAT_016e9916
        ;   Label: LAB_0047ec4c
    MOV byte ptr [EDI],AL               ; 0047ec4e
    CMP AL,0x0                          ; 0047ec50
    JZ 0x0047ec64                       ; 0047ec52
        ;   XREF to: 0047ec64 (CONDITIONAL_JUMP)  ; LAB_0047ec64
    MOV AL,byte ptr [ESI + 0x1]         ; 0047ec54 | DAT_016e9915 | DAT_016e9917
    ADD ESI,0x2                         ; 0047ec57
    MOV byte ptr [EDI + 0x1],AL         ; 0047ec5a
    ADD EDI,0x2                         ; 0047ec5d
    CMP AL,0x0                          ; 0047ec60
    JNZ 0x0047ec4c                      ; 0047ec62
        ;   XREF to: 0047ec4c (CONDITIONAL_JUMP)  ; LAB_0047ec4c
    POP EDI                             ; 0047ec64
        ;   Label: LAB_0047ec64
    INC dword ptr [EBX + 0x120]         ; 0047ec65
    MOV ESI,dword ptr [ESP + 0x14]      ; 0047ec6b
        ;   Label: LAB_0047ec6b
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047ec6f
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047ec73
    MOV EAX,dword ptr [EBX + 0x118]     ; 0047ec77
    ADD EDI,0x48                        ; 0047ec7d
    INC EDX                             ; 0047ec80
    ADD EAX,ESI                         ; 0047ec81
    MOV dword ptr [ESP + 0x1c],EDI      ; 0047ec83
    MOV dword ptr [ESP + 0x20],EDX      ; 0047ec87
    MOV dword ptr [EAX],EBP             ; 0047ec8b
    MOV EBP,dword ptr [ESP + 0x18]      ; 0047ec8d
    LEA EAX,[ESI + 0x4]                 ; 0047ec91
    MOV ECX,dword ptr [EBX + 0x110]     ; 0047ec94
    ADD EBP,0x184                       ; 0047ec9a
    MOV dword ptr [ESP + 0x14],EAX      ; 0047eca0
    MOV dword ptr [ESP + 0x18],EBP      ; 0047eca4 | DAT_016e9a98
    CMP EDX,ECX                         ; 0047eca8
    JL 0x0047eb23                       ; 0047ecaa
        ;   XREF to: 0047eb23 (CONDITIONAL_JUMP)  ; LAB_0047eb23
    MOV EAX,dword ptr [EBX + 0x104]     ; 0047ecb0
        ;   Label: LAB_0047ecb0
    MOV dword ptr [EBX + 0x5584],0x1    ; 0047ecb6
    MOV dword ptr [EBX + 0x5588],EAX    ; 0047ecc0
    MOV EAX,dword ptr [EBX + 0x110]     ; 0047ecc6
    MOV dword ptr [EBX + 0x558c],EAX    ; 0047eccc
    POP ESI                             ; 0047ecd2
    POP EDI                             ; 0047ecd3
    ADD ESP,0x20                        ; 0047ecd4
    POP EBP                             ; 0047ecd7
    POP EBX                             ; 0047ecd8
    RET                                 ; 0047ecd9
    INC EBP                             ; 0047ecda
        ;   Label: LAB_0047ecda
    MOV EDX,dword ptr [EBX + 0x120]     ; 0047ecdb
    ADD ESI,0x48                        ; 0047ece1
    CMP EBP,EDX                         ; 0047ece4
    JL 0x0047ebf8                       ; 0047ece6
        ;   XREF to: 0047ebf8 (CONDITIONAL_JUMP)  ; LAB_0047ebf8
    JMP 0x0047ec0a                      ; 0047ecec
        ;   XREF to: 0047ec0a (UNCONDITIONAL_JUMP)  ; LAB_0047ec0a

