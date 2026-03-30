; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,int skip_lighting_calculation)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_position
; CVector3i *      Stack[0xc]:4   surface_normal
; int              Stack[0x10]:4   vertex_index
; int              Stack[0x14]:4   skip_lighting_calculation
; Local Variables:
; uint             Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_set.cpp_CDemonSet_cacheMirrorLighting_FUN_00570cd0 at 00570d1e
;   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 at 0056e12d
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 at 0056f0a6
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_00645e2b
;   TerminatedCString s_CDemonSet_lightVertexCol_00645e3b
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].r
;   undefined4 g_RenderVertexBuffer[0].g
;   undefined4 g_RenderVertexBuffer[0].b
;   undefined4 g_RenderVertexBuffer[0].a
;   int g_PerspectiveReciprocal
;   int g_CameraOriginX
;   int g_CameraOriginZ
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 g_CDemonCameraInstance.corona_blend_factor
;   int[65536] g_IntensityToValueLookupTable
;   undefined4 g_IntensityToValueLookupTable[65535]
;   ... and 4 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ddb0
        ;   Label: core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
    PUSH ESI                            ; 0056ddb1
    PUSH EDI                            ; 0056ddb2
    PUSH EBP                            ; 0056ddb3
    SUB ESP,0x24                        ; 0056ddb4
    MOV EBX,dword ptr [ESP + 0x38]      ; 0056ddb7
    MOV EDI,dword ptr [ESP + 0x40]      ; 0056ddbb
    MOV EDX,dword ptr [EBX + 0x15ae70]  ; 0056ddbf
    TEST EDX,EDX                        ; 0056ddc5
    JZ 0x0056de9c                       ; 0056ddc7
        ;   XREF to: 0056de9c (CONDITIONAL_JUMP)  ; LAB_0056de9c
    TEST EDI,EDI                        ; 0056ddcd
    JNZ 0x0056ddf4                      ; 0056ddcf
        ;   XREF to: 0056ddf4 (CONDITIONAL_JUMP)  ; LAB_0056ddf4
    MOV ESI,0x645e2b                    ; 0056ddd1 | = "..\\core\\set.cpp"
    MOV EBP,0xba3                       ; 0056ddd6
    PUSH 0x645e3b                       ; 0056dddb | = "CDemonSet::lightVertexColor - Quick l..."
    MOV dword ptr [0x02f0ca48],ESI      ; 0056dde0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0056dde6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056ddec
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0056ddf1
    MOV EAX,dword ptr [EBX + 0x15ae74]  ; 0056ddf4
        ;   Label: LAB_0056ddf4
    MOV EDX,dword ptr [EDI]             ; 0056ddfa
    IMUL EDX                            ; 0056ddfc
    SHRD EAX,EDX,0x10                   ; 0056ddfe
    MOV ECX,EAX                         ; 0056de02
    MOV EDX,dword ptr [EDI + 0x4]       ; 0056de04
    MOV EAX,dword ptr [EBX + 0x15ae78]  ; 0056de07
    IMUL EDX                            ; 0056de0d
    SHRD EAX,EDX,0x10                   ; 0056de0f
    MOV EDX,dword ptr [EDI + 0x8]       ; 0056de13
    ADD ECX,EAX                         ; 0056de16
    MOV EAX,dword ptr [EBX + 0x15ae7c]  ; 0056de18
    IMUL EDX                            ; 0056de1e
    SHRD EAX,EDX,0x10                   ; 0056de20
    ADD ECX,EAX                         ; 0056de24
    NEG ECX                             ; 0056de26
    TEST ECX,ECX                        ; 0056de28
    JL 0x0056de98                       ; 0056de2a
        ;   XREF to: 0056de98 (CONDITIONAL_JUMP)  ; LAB_0056de98
    ADD ECX,dword ptr [EBX + 0x15ae80]  ; 0056de2c
        ;   Label: LAB_0056de2c
    CMP ECX,0xffff                      ; 0056de32
    JLE 0x0056de3f                      ; 0056de38
        ;   XREF to: 0056de3f (CONDITIONAL_JUMP)  ; LAB_0056de3f
    MOV ECX,0xffff                      ; 0056de3a
    MOV EAX,dword ptr [ESP + 0x44]      ; 0056de3f
        ;   Label: LAB_0056de3f
    LEA ESI,[EAX*0x4 + 0x0]             ; 0056de43
    SUB ESI,EAX                         ; 0056de4a
    MOV EDX,ECX                         ; 0056de4c
    SHL ESI,0x4                         ; 0056de4e
    MOV EAX,dword ptr [EBX + 0x15ae88]  ; 0056de51
    ADD ESI,0x688014                    ; 0056de57 | g_RenderVertexBuffer
    IMUL EDX                            ; 0056de5d
    SHRD EAX,EDX,0x10                   ; 0056de5f
    MOV dword ptr [ESI + 0x20],EAX      ; 0056de63 | g_RenderVertexBuffer[0].r
    MOV EDX,ECX                         ; 0056de66
    MOV EAX,dword ptr [EBX + 0x15ae8c]  ; 0056de68
    IMUL EDX                            ; 0056de6e
    SHRD EAX,EDX,0x10                   ; 0056de70
    MOV dword ptr [ESI + 0x24],EAX      ; 0056de74 | g_RenderVertexBuffer[0].g
    MOV EDX,ECX                         ; 0056de77
    MOV EAX,dword ptr [EBX + 0x15ae90]  ; 0056de79
    IMUL EDX                            ; 0056de7f
    SHRD EAX,EDX,0x10                   ; 0056de81
    MOV dword ptr [ESI + 0x28],EAX      ; 0056de85 | g_RenderVertexBuffer[0].b
    MOV EAX,[0x02d051f4]                ; 0056de88 | g_PerspectiveReciprocal
    MOV dword ptr [ESI + 0x2c],EAX      ; 0056de8d | g_RenderVertexBuffer[0].a
    ADD ESP,0x24                        ; 0056de90
    POP EBP                             ; 0056de93
    POP EDI                             ; 0056de94
    POP ESI                             ; 0056de95
    POP EBX                             ; 0056de96
    RET                                 ; 0056de97
    XOR ECX,ECX                         ; 0056de98
        ;   Label: LAB_0056de98
    JMP 0x0056de2c                      ; 0056de9a
        ;   XREF to: 0056de2c (UNCONDITIONAL_JUMP)  ; LAB_0056de2c
    CMP dword ptr [ESP + 0x48],0x0      ; 0056de9c
        ;   Label: LAB_0056de9c
    JZ 0x0056e03e                       ; 0056dea1
        ;   XREF to: 0056e03e (CONDITIONAL_JUMP)  ; LAB_0056e03e
    MOV ECX,0xffff                      ; 0056dea7
    MOV dword ptr [ESP + 0x20],EDX      ; 0056deac
    CMP dword ptr [0x032c1940],0x0      ; 0056deb0 | g_ColorCorrectionCount
        ;   Label: LAB_0056deb0
    JLE 0x0056e0dc                      ; 0056deb7
        ;   XREF to: 0056e0dc (CONDITIONAL_JUMP)  ; LAB_0056e0dc
    MOV EDX,dword ptr [0x032c1cc0]      ; 0056debd | g_ColorCorrectionLightMultiplier
    MOV EAX,ECX                         ; 0056dec3
    MOV EBP,dword ptr [ESP + 0x20]      ; 0056dec5
    IMUL EDX                            ; 0056dec9
    SHRD EAX,EDX,0x10                   ; 0056decb
    MOV EDX,dword ptr [EBX + 0x15ae88]  ; 0056decf
    ADD EAX,EBP                         ; 0056ded5
    IMUL EDX                            ; 0056ded7
    SHRD EAX,EDX,0x10                   ; 0056ded9
    MOV EDX,dword ptr [0x032c1cc4]      ; 0056dedd | g_ColorCorrectionColorMultiplier
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056dee3
    MOV EAX,ECX                         ; 0056dee7
    IMUL EDX                            ; 0056dee9
    SHRD EAX,EDX,0x10                   ; 0056deeb
    MOV EDX,dword ptr [EBX + 0x15ae8c]  ; 0056deef
    ADD EAX,EBP                         ; 0056def5
    IMUL EDX                            ; 0056def7
    SHRD EAX,EDX,0x10                   ; 0056def9
    MOV EDX,dword ptr [0x032c1cc8]      ; 0056defd | g_ColorCorrectionFogMultiplier
    MOV EDI,EAX                         ; 0056df03
    MOV EAX,ECX                         ; 0056df05
    IMUL EDX                            ; 0056df07
    SHRD EAX,EDX,0x10                   ; 0056df09
    MOV EDX,dword ptr [EBX + 0x15ae90]  ; 0056df0d
    ADD EAX,EBP                         ; 0056df13
    IMUL EDX                            ; 0056df15
        ;   Label: LAB_0056df15
    SHRD EAX,EDX,0x10                   ; 0056df17
    MOV EBP,EAX                         ; 0056df1b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0056df1d
    LEA ECX,[EAX*0x4 + 0x0]             ; 0056df21
    SUB ECX,EAX                         ; 0056df28
    MOV EAX,0x688014                    ; 0056df2a | g_RenderVertexBuffer
    SHL ECX,0x4                         ; 0056df2f
    ADD EAX,ECX                         ; 0056df32
    MOV ESI,dword ptr [EBX + 0x15f6e0]  ; 0056df34
    MOV dword ptr [ESP + 0x18],EAX      ; 0056df3a
    TEST ESI,ESI                        ; 0056df3e
    JZ 0x0056dfe4                       ; 0056df40
        ;   XREF to: 0056dfe4 (CONDITIONAL_JUMP)  ; LAB_0056dfe4
    MOV EAX,dword ptr [ESP + 0x48]      ; 0056df46
    TEST EAX,EAX                        ; 0056df4a
    JNZ 0x0056dfe4                      ; 0056df4c
        ;   XREF to: 0056dfe4 (CONDITIONAL_JUMP)  ; LAB_0056dfe4
    PUSH EAX                            ; 0056df52
    MOV EDX,dword ptr [ESP + 0x40]      ; 0056df53
    PUSH EDX                            ; 0056df57
    PUSH EBX                            ; 0056df58
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 ; 0056df59
        ;   XREF to: 0056db80 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    ADD ESP,0xc                         ; 0056df5e
    MOV ESI,dword ptr [ESP + 0x20]      ; 0056df61
    ADD ESI,EAX                         ; 0056df65
    TEST ESI,ESI                        ; 0056df67
    JLE 0x0056dfe4                      ; 0056df69
        ;   XREF to: 0056dfe4 (CONDITIONAL_JUMP)  ; LAB_0056dfe4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056df6b
    MOV EBX,ESI                         ; 0056df6f
    CDQ                                 ; 0056df71
    MOV ECX,EDX                         ; 0056df72
    XOR EAX,EDX                         ; 0056df74
    XOR EDX,EDX                         ; 0056df76
    DIV EBX                             ; 0056df78
    CMP EAX,0x7fff                      ; 0056df7a
    JC 0x0056df86                       ; 0056df7f
        ;   XREF to: 0056df86 (CONDITIONAL_JUMP)  ; LAB_0056df86
    MOV EAX,0x7fff                      ; 0056df81
    PUSH EAX                            ; 0056df86
        ;   Label: LAB_0056df86
    XOR EAX,EAX                         ; 0056df87
    DIV EBX                             ; 0056df89
    POP EDX                             ; 0056df8b
    SHRD EAX,EDX,0x10                   ; 0056df8c
    XOR EAX,ECX                         ; 0056df90
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056df92
    MOV EBX,ESI                         ; 0056df96
    MOV EAX,EDI                         ; 0056df98
    CDQ                                 ; 0056df9a
    MOV ECX,EDX                         ; 0056df9b
    XOR EAX,EDX                         ; 0056df9d
    XOR EDX,EDX                         ; 0056df9f
    DIV EBX                             ; 0056dfa1
    CMP EAX,0x7fff                      ; 0056dfa3
    JC 0x0056dfaf                       ; 0056dfa8
        ;   XREF to: 0056dfaf (CONDITIONAL_JUMP)  ; LAB_0056dfaf
    MOV EAX,0x7fff                      ; 0056dfaa
    PUSH EAX                            ; 0056dfaf
        ;   Label: LAB_0056dfaf
    XOR EAX,EAX                         ; 0056dfb0
    DIV EBX                             ; 0056dfb2
    POP EDX                             ; 0056dfb4
    SHRD EAX,EDX,0x10                   ; 0056dfb5
    XOR EAX,ECX                         ; 0056dfb9
    MOV EDI,EAX                         ; 0056dfbb
    MOV EBX,ESI                         ; 0056dfbd
    MOV EAX,EBP                         ; 0056dfbf
    CDQ                                 ; 0056dfc1
    MOV ECX,EDX                         ; 0056dfc2
    XOR EAX,EDX                         ; 0056dfc4
    XOR EDX,EDX                         ; 0056dfc6
    DIV EBX                             ; 0056dfc8
    CMP EAX,0x7fff                      ; 0056dfca
    JC 0x0056dfd6                       ; 0056dfcf
        ;   XREF to: 0056dfd6 (CONDITIONAL_JUMP)  ; LAB_0056dfd6
    MOV EAX,0x7fff                      ; 0056dfd1
    PUSH EAX                            ; 0056dfd6
        ;   Label: LAB_0056dfd6
    XOR EAX,EAX                         ; 0056dfd7
    DIV EBX                             ; 0056dfd9
    POP EDX                             ; 0056dfdb
    SHRD EAX,EDX,0x10                   ; 0056dfdc
    XOR EAX,ECX                         ; 0056dfe0
    MOV EBP,EAX                         ; 0056dfe2
    CMP dword ptr [ESP + 0x1c],0xffff   ; 0056dfe4
        ;   Label: LAB_0056dfe4
    JLE 0x0056dff6                      ; 0056dfec
        ;   XREF to: 0056dff6 (CONDITIONAL_JUMP)  ; LAB_0056dff6
    MOV dword ptr [ESP + 0x1c],0xffff   ; 0056dfee
    CMP EDI,0xffff                      ; 0056dff6
        ;   Label: LAB_0056dff6
    JLE 0x0056e003                      ; 0056dffc
        ;   XREF to: 0056e003 (CONDITIONAL_JUMP)  ; LAB_0056e003
    MOV EDI,0xffff                      ; 0056dffe
    CMP EBP,0xffff                      ; 0056e003
        ;   Label: LAB_0056e003
    JLE 0x0056e010                      ; 0056e009
        ;   XREF to: 0056e010 (CONDITIONAL_JUMP)  ; LAB_0056e010
    MOV EBP,0xffff                      ; 0056e00b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056e010
        ;   Label: LAB_0056e010
    MOV EDX,dword ptr [ESP + 0x18]      ; 0056e014
    MOV EAX,dword ptr [EAX*0x4 + 0x327d77c] ; 0056e018 | g_IntensityToValueLookupTable | g_IntensityToValueLookupTable[65535]
    MOV dword ptr [EDX + 0x20],EAX      ; 0056e01f | g_RenderVertexBuffer[0].r
    MOV EAX,dword ptr [EDI*0x4 + 0x327d77c] ; 0056e022 | g_IntensityToValueLookupTable | g_IntensityToValueLookupTable[65535]
    MOV dword ptr [EDX + 0x24],EAX      ; 0056e029 | g_RenderVertexBuffer[0].g
    MOV EAX,dword ptr [EBP*0x4 + 0x327d77c] ; 0056e02c | g_IntensityToValueLookupTable | g_IntensityToValueLookupTable[65535]
    MOV dword ptr [EDX + 0x28],EAX      ; 0056e033 | g_RenderVertexBuffer[0].b
    ADD ESP,0x24                        ; 0056e036
    POP EBP                             ; 0056e039
    POP EDI                             ; 0056e03a
    POP ESI                             ; 0056e03b
    POP EBX                             ; 0056e03c
    RET                                 ; 0056e03d
    PUSH EDI                            ; 0056e03e
        ;   Label: LAB_0056e03e
    MOV ESI,dword ptr [ESP + 0x40]      ; 0056e03f
    PUSH ESI                            ; 0056e043
    PUSH EBX                            ; 0056e044
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 ; 0056e045
        ;   XREF to: 0056db80 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    MOV EBP,dword ptr [0x03276acc]      ; 0056e04a | g_CDemonCameraInstance.corona_blend_factor
    ADD ESP,0xc                         ; 0056e050
    MOV ECX,EAX                         ; 0056e053
    MOV dword ptr [ESP + 0x20],EBP      ; 0056e055
    TEST EBP,EBP                        ; 0056e059
    JLE 0x0056deb0                      ; 0056e05b
        ;   XREF to: 0056deb0 (CONDITIONAL_JUMP)  ; LAB_0056deb0
    TEST EDI,EDI                        ; 0056e061
    JZ 0x0056deb0                       ; 0056e063
        ;   XREF to: 0056deb0 (CONDITIONAL_JUMP)  ; LAB_0056deb0
    MOV ESI,EBP                         ; 0056e069
    CMP EBP,0x1000                      ; 0056e06b
    JLE 0x0056e078                      ; 0056e071
        ;   XREF to: 0056e078 (CONDITIONAL_JUMP)  ; LAB_0056e078
    MOV ESI,0x1000                      ; 0056e073
    CMP dword ptr [0x02d052c4],0x0      ; 0056e078 | g_CameraOriginX
        ;   Label: LAB_0056e078
    JL 0x0056e0b2                       ; 0056e07f
        ;   XREF to: 0056e0b2 (CONDITIONAL_JUMP)  ; LAB_0056e0b2
    MOV EAX,ESI                         ; 0056e081
    MOV EDX,dword ptr [EDI]             ; 0056e083
    IMUL EDX                            ; 0056e085
    SHRD EAX,EDX,0x10                   ; 0056e087
    ADD ECX,EAX                         ; 0056e08b
    CMP dword ptr [0x02d052cc],0x0      ; 0056e08d | g_CameraOriginZ
        ;   Label: LAB_0056e08d
    JL 0x0056e0c0                       ; 0056e094
        ;   XREF to: 0056e0c0 (CONDITIONAL_JUMP)  ; LAB_0056e0c0
    MOV EAX,ESI                         ; 0056e096
    MOV EDX,dword ptr [EDI + 0x8]       ; 0056e098
    IMUL EDX                            ; 0056e09b
    SHRD EAX,EDX,0x10                   ; 0056e09d
    ADD ECX,EAX                         ; 0056e0a1
    TEST ECX,ECX                        ; 0056e0a3
    JGE 0x0056deb0                      ; 0056e0a5
        ;   XREF to: 0056deb0 (CONDITIONAL_JUMP)  ; LAB_0056deb0
    XOR ECX,ECX                         ; 0056e0ab
    JMP 0x0056deb0                      ; 0056e0ad
        ;   XREF to: 0056deb0 (UNCONDITIONAL_JUMP)  ; LAB_0056deb0
    MOV EAX,ESI                         ; 0056e0b2
        ;   Label: LAB_0056e0b2
    MOV EDX,dword ptr [EDI]             ; 0056e0b4
    IMUL EDX                            ; 0056e0b6
    SHRD EAX,EDX,0x10                   ; 0056e0b8
    SUB ECX,EAX                         ; 0056e0bc
    JMP 0x0056e08d                      ; 0056e0be
        ;   XREF to: 0056e08d (UNCONDITIONAL_JUMP)  ; LAB_0056e08d
    MOV EAX,ESI                         ; 0056e0c0
        ;   Label: LAB_0056e0c0
    MOV EDX,dword ptr [EDI + 0x8]       ; 0056e0c2
    IMUL EDX                            ; 0056e0c5
    SHRD EAX,EDX,0x10                   ; 0056e0c7
    SUB ECX,EAX                         ; 0056e0cb
    TEST ECX,ECX                        ; 0056e0cd
    JGE 0x0056deb0                      ; 0056e0cf
        ;   XREF to: 0056deb0 (CONDITIONAL_JUMP)  ; LAB_0056deb0
    XOR ECX,ECX                         ; 0056e0d5
    JMP 0x0056deb0                      ; 0056e0d7
        ;   XREF to: 0056deb0 (UNCONDITIONAL_JUMP)  ; LAB_0056deb0
    ADD ECX,dword ptr [ESP + 0x20]      ; 0056e0dc
        ;   Label: LAB_0056e0dc
    MOV EDX,dword ptr [EBX + 0x15ae88]  ; 0056e0e0
    MOV EAX,ECX                         ; 0056e0e6
    IMUL EDX                            ; 0056e0e8
    SHRD EAX,EDX,0x10                   ; 0056e0ea
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056e0ee
    MOV EDX,dword ptr [EBX + 0x15ae8c]  ; 0056e0f2
    MOV EAX,ECX                         ; 0056e0f8
    IMUL EDX                            ; 0056e0fa
    SHRD EAX,EDX,0x10                   ; 0056e0fc
    MOV EDI,EAX                         ; 0056e100
    MOV EDX,dword ptr [EBX + 0x15ae90]  ; 0056e102
    MOV EAX,ECX                         ; 0056e108
    JMP 0x0056df15                      ; 0056e10a
        ;   XREF to: 0056df15 (UNCONDITIONAL_JUMP)  ; LAB_0056df15

