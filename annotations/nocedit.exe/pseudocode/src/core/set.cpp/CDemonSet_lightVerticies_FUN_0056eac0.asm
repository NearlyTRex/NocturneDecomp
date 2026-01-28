; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0 (CDemonSet *this_ptr,int vertex_count,int tri_count,SInputFace *tri_data_ptr, int render_flags,int lighting_mode,int flags)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   tri_count
; SInputFace *     Stack[0x10]:4   tri_data_ptr
; int              Stack[0x14]:4   render_flags
; int              Stack[0x18]:4   lighting_mode
; int              Stack[0x1c]:4   flags
; Local Variables:
; undefined1       Stack[-0x178]:1  local_178
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined1       Stack[-0x160]:1  local_160
; undefined1       Stack[-0x154]:1  local_154
; undefined1       Stack[-0x148]:1  local_148
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined1       Stack[-0x130]:1  local_130
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined1       Stack[-0x118]:1  local_118
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[8]:
;   core_bodypart.cpp_FUN_00419340 at 00419394
;   core_cloth.cpp_FUN_0043bae0 at 0043bee2
;   core_curtain.cpp_FUN_0044b060 at 0044b2aa
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0 at 00477964
;   core_glass.cpp_CGlass_renderOpaque_FUN_004e9930 at 004e9a73
;   core_glass.cpp_CGlass_renderTransparent_FUN_004e9af0 at 004e9c1f
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70 at 0052b130
;   core_skeleton.cpp_CDeformableModel_lightVertices_FUN_0059ab50 at 0059ab7d
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_00645efa
;   TerminatedCString s_CDemonSet_lightVerticies_00645f0a
;   TerminatedCString s_core_set_cpp_00645f5f
;   TerminatedCString s_Too_many_normals_on_this_00645f6f
;   TerminatedCString s_core_set_cpp_00645f98
;   TerminatedCString s_Need_more_normals_for_pa_00645fa8
;   double DOUBLE_00645fd3 = 65535
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   void* g_BackBuffer
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[0].light
;   undefined4 g_RenderVertexBuffer[0].color
;   undefined4 g_RenderVertexBuffer[0].fog
;   ... and 49 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
;   core_set.cpp_FUN_0056e890
;   crt_memory.c_memset_FUN_005fde40
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056eac0
        ;   Label: core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
    PUSH ESI                            ; 0056eac1
    PUSH EDI                            ; 0056eac2
    PUSH EBP                            ; 0056eac3
    MOV EBP,ESP                         ; 0056eac4
    SUB ESP,0x164                       ; 0056eac6
    AND ESP,0xfffffff8                  ; 0056eacc
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056eacf
    CMP EDX,0x4e20                      ; 0056ead2
    JLE 0x0056eb03                      ; 0056ead8
        ;   XREF to: 0056eb03 (CONDITIONAL_JUMP)  ; LAB_0056eb03
    PUSH 0x4e20                         ; 0056eada
    PUSH EDX                            ; 0056eadf
    MOV ECX,0x645efa                    ; 0056eae0 | = "..\\core\\set.cpp"
    MOV EBX,0xde8                       ; 0056eae5
    PUSH 0x645f0a                       ; 0056eaea | = "CDemonSet::lightVerticies - tried to ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0056eaef | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0056eaf5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056eafb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0056eb00
    MOV EDI,dword ptr [0x006703ec]      ; 0056eb03 | g_CDemonRendererPtr2
        ;   Label: LAB_0056eb03
    PUSH EDI                            ; 0056eb09 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0056eb0a
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0056eb0f
    TEST EAX,EAX                        ; 0056eb12
    JNZ 0x0056eb80                      ; 0056eb14
        ;   XREF to: 0056eb80 (CONDITIONAL_JUMP)  ; LAB_0056eb80
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056eb1a
    LEA EDI,[EDX*0x4 + 0x0]             ; 0056eb1d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056eb24
    SUB EDI,EDX                         ; 0056eb27
    MOV EDX,dword ptr [EAX + 0x15ac80]  ; 0056eb29
    SHL EDI,0x4                         ; 0056eb2f
    TEST EDX,EDX                        ; 0056eb32
    JZ 0x0056ec78                       ; 0056eb34
        ;   XREF to: 0056ec78 (CONDITIONAL_JUMP)  ; LAB_0056ec78
    CMP dword ptr [0x032bd77c],0x0      ; 0056eb3a | g_InMirrorRenderPass
    JZ 0x0056eb87                       ; 0056eb41
        ;   XREF to: 0056eb87 (CONDITIONAL_JUMP)  ; LAB_0056eb87
    CMP dword ptr [EBP + 0x18],0x0      ; 0056eb43
    JLE 0x0056eb70                      ; 0056eb47
        ;   XREF to: 0056eb70 (CONDITIONAL_JUMP)  ; LAB_0056eb70
    MOV EDX,EDI                         ; 0056eb49
    XOR EAX,EAX                         ; 0056eb4b
    ADD EAX,0x30                        ; 0056eb4d
        ;   Label: LAB_0056eb4d
    XOR EBX,EBX                         ; 0056eb50
    MOV dword ptr [EAX + 0x688004],EBX  ; 0056eb52 | g_RenderVertexBuffer[0].light | g_RenderVertexBuffer[1].light
    MOV dword ptr [EAX + 0x688008],EBX  ; 0056eb58 | g_RenderVertexBuffer[0].color | g_RenderVertexBuffer[1].color
    MOV dword ptr [EAX + 0x68800c],EBX  ; 0056eb5e | g_RenderVertexBuffer[0].fog | g_RenderVertexBuffer[1].fog
    MOV dword ptr [EAX + 0x688010],EBX  ; 0056eb64 | g_RenderVertexBuffer[0].w_recip | g_RenderVertexBuffer[1].w_recip
    CMP EAX,EDX                         ; 0056eb6a
    JL 0x0056eb4d                       ; 0056eb6c
        ;   XREF to: 0056eb4d (CONDITIONAL_JUMP)  ; LAB_0056eb4d
    MOV EAX,EAX                         ; 0056eb6e
    XOR EBX,EBX                         ; 0056eb70
        ;   Label: LAB_0056eb70
    MOV dword ptr [0x02d051f4],EBX      ; 0056eb72 | g_PerspectiveReciprocal
    LEA EAX,[EAX]                       ; 0056eb78
    MOV EDX,EDX                         ; 0056eb7e
    MOV ESP,EBP                         ; 0056eb80
        ;   Label: LAB_0056eb80
    POP EBP                             ; 0056eb82
    POP EDI                             ; 0056eb83
    POP ESI                             ; 0056eb84
    POP EBX                             ; 0056eb85
    RET                                 ; 0056eb86
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056eb87
        ;   Label: LAB_0056eb87
    MOV EDX,dword ptr [EAX + 0x15ac80]  ; 0056eb8a
    CMP EDX,0x2                         ; 0056eb90
    JNZ 0x0056ebdf                      ; 0056eb93
        ;   XREF to: 0056ebdf (CONDITIONAL_JUMP)  ; LAB_0056ebdf
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056eb95
    XOR EBX,EBX                         ; 0056eb98
    TEST EDI,EDI                        ; 0056eb9a
    JLE 0x0056ebd0                      ; 0056eb9c
        ;   XREF to: 0056ebd0 (CONDITIONAL_JUMP)  ; LAB_0056ebd0
    MOV EDI,dword ptr [EBP + 0x24]      ; 0056eb9e
    XOR ESI,ESI                         ; 0056eba1
    PUSH 0x1                            ; 0056eba3
        ;   Label: LAB_0056eba3
    PUSH EBX                            ; 0056eba5
    XOR ECX,ECX                         ; 0056eba6
    PUSH ECX                            ; 0056eba8
    PUSH EDI                            ; 0056eba9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056ebaa
    ADD ESI,0x30                        ; 0056ebad
    PUSH EAX                            ; 0056ebb0
    MOV dword ptr [ESI + 0x688010],ECX  ; 0056ebb1 | g_RenderVertexBuffer[0].w_recip | g_RenderVertexBuffer[1].w_recip
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0 ; 0056ebb7
        ;   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 0056ebbc
    INC EBX                             ; 0056ebbf
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056ebc0
    ADD EDI,0xc                         ; 0056ebc3
    CMP EBX,EDX                         ; 0056ebc6
    JL 0x0056eba3                       ; 0056ebc8
        ;   XREF to: 0056eba3 (CONDITIONAL_JUMP)  ; LAB_0056eba3
    LEA EAX,[EAX]                       ; 0056ebca
    XOR ECX,ECX                         ; 0056ebd0
        ;   Label: LAB_0056ebd0
    MOV dword ptr [0x02d051f4],ECX      ; 0056ebd2 | g_PerspectiveReciprocal
    MOV ESP,EBP                         ; 0056ebd8
    POP EBP                             ; 0056ebda
    POP EDI                             ; 0056ebdb
    POP ESI                             ; 0056ebdc
    POP EBX                             ; 0056ebdd
    RET                                 ; 0056ebde
    CMP EDX,0x3                         ; 0056ebdf
        ;   Label: LAB_0056ebdf
    JNZ 0x0056ec39                      ; 0056ebe2
        ;   XREF to: 0056ec39 (CONDITIONAL_JUMP)  ; LAB_0056ec39
    CMP dword ptr [EBP + 0x18],0x0      ; 0056ebe4
    JLE 0x0056ebd0                      ; 0056ebe8
        ;   XREF to: 0056ebd0 (CONDITIONAL_JUMP)  ; LAB_0056ebd0
    MOV ECX,EDI                         ; 0056ebea
    XOR EAX,EAX                         ; 0056ebec
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056ebee
        ;   Label: LAB_0056ebee
    MOV EDX,dword ptr [EDX + 0x15ae88]  ; 0056ebf1
    MOV dword ptr [EAX + 0x688034],EDX  ; 0056ebf7 | g_RenderVertexBuffer[0].light | g_RenderVertexBuffer[1].light
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056ebfd
    MOV EDX,dword ptr [EDX + 0x15ae8c]  ; 0056ec00
    MOV dword ptr [EAX + 0x688038],EDX  ; 0056ec06 | g_RenderVertexBuffer[0].color | g_RenderVertexBuffer[1].color
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056ec0c
    ADD EAX,0x30                        ; 0056ec0f
    MOV EDX,dword ptr [EDX + 0x15ae90]  ; 0056ec12
    MOV dword ptr [EAX + 0x68800c],EDX  ; 0056ec18 | g_RenderVertexBuffer[0].fog | g_RenderVertexBuffer[1].fog
    XOR EDX,EDX                         ; 0056ec1e
    MOV dword ptr [EAX + 0x688010],EDX  ; 0056ec20 | g_RenderVertexBuffer[0].w_recip | g_RenderVertexBuffer[1].w_recip
    CMP EAX,ECX                         ; 0056ec26
    JL 0x0056ebee                       ; 0056ec28
        ;   XREF to: 0056ebee (CONDITIONAL_JUMP)  ; LAB_0056ebee
    XOR ECX,ECX                         ; 0056ec2a
    MOV dword ptr [0x02d051f4],ECX      ; 0056ec2c | g_PerspectiveReciprocal
    MOV ESP,EBP                         ; 0056ec32
    POP EBP                             ; 0056ec34
    POP EDI                             ; 0056ec35
    POP ESI                             ; 0056ec36
    POP EBX                             ; 0056ec37
    RET                                 ; 0056ec38
    CMP dword ptr [EBP + 0x18],0x0      ; 0056ec39
        ;   Label: LAB_0056ec39
    JLE 0x0056ebd0                      ; 0056ec3d
        ;   XREF to: 0056ebd0 (CONDITIONAL_JUMP)  ; LAB_0056ebd0
    MOV ECX,0xffff                      ; 0056ec3f
    MOV EDX,EDI                         ; 0056ec44
    XOR EAX,EAX                         ; 0056ec46
    ADD EAX,0x30                        ; 0056ec48
        ;   Label: LAB_0056ec48
    MOV dword ptr [EAX + 0x688004],ECX  ; 0056ec4b | g_RenderVertexBuffer[0].light | g_RenderVertexBuffer[1].light
    MOV dword ptr [EAX + 0x688008],ECX  ; 0056ec51 | g_RenderVertexBuffer[0].color | g_RenderVertexBuffer[1].color
    XOR EDI,EDI                         ; 0056ec57
    MOV dword ptr [EAX + 0x68800c],ECX  ; 0056ec59 | g_RenderVertexBuffer[0].fog | g_RenderVertexBuffer[1].fog
    MOV dword ptr [EAX + 0x688010],EDI  ; 0056ec5f | g_RenderVertexBuffer[0].w_recip | g_RenderVertexBuffer[1].w_recip
    CMP EAX,EDX                         ; 0056ec65
    JL 0x0056ec48                       ; 0056ec67
        ;   XREF to: 0056ec48 (CONDITIONAL_JUMP)  ; LAB_0056ec48
    XOR ECX,ECX                         ; 0056ec69
    MOV dword ptr [0x02d051f4],ECX      ; 0056ec6b | g_PerspectiveReciprocal
    MOV ESP,EBP                         ; 0056ec71
    POP EBP                             ; 0056ec73
    POP EDI                             ; 0056ec74
    POP ESI                             ; 0056ec75
    POP EBX                             ; 0056ec76
    RET                                 ; 0056ec77
    MOV ECX,dword ptr [EAX + 0x161658]  ; 0056ec78
        ;   Label: LAB_0056ec78
    TEST ECX,ECX                        ; 0056ec7e
    JZ 0x0056eccb                       ; 0056ec80
        ;   XREF to: 0056eccb (CONDITIONAL_JUMP)  ; LAB_0056eccb
    CMP dword ptr [EBP + 0x18],0x0      ; 0056ec82
    JLE 0x0056eb80                      ; 0056ec86
        ;   XREF to: 0056eb80 (CONDITIONAL_JUMP)  ; LAB_0056eb80
    MOV ECX,EDI                         ; 0056ec8c
    XOR EAX,EAX                         ; 0056ec8e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056ec90
        ;   Label: LAB_0056ec90
    MOV EDX,dword ptr [EDX + 0x16165c]  ; 0056ec93
    MOV dword ptr [EAX + 0x688034],EDX  ; 0056ec99 | g_RenderVertexBuffer[0].light | g_RenderVertexBuffer[1].light
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056ec9f
    MOV EDX,dword ptr [EDX + 0x161660]  ; 0056eca2
    MOV dword ptr [EAX + 0x688038],EDX  ; 0056eca8 | g_RenderVertexBuffer[0].color | g_RenderVertexBuffer[1].color
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056ecae
    ADD EAX,0x30                        ; 0056ecb1
    MOV EDX,dword ptr [EDX + 0x161664]  ; 0056ecb4
    MOV dword ptr [EAX + 0x68800c],EDX  ; 0056ecba | g_RenderVertexBuffer[0].fog | g_RenderVertexBuffer[1].fog
    CMP EAX,ECX                         ; 0056ecc0
    JL 0x0056ec90                       ; 0056ecc2
        ;   XREF to: 0056ec90 (CONDITIONAL_JUMP)  ; LAB_0056ec90
    MOV ESP,EBP                         ; 0056ecc4
    POP EBP                             ; 0056ecc6
    POP EDI                             ; 0056ecc7
    POP ESI                             ; 0056ecc8
    POP EBX                             ; 0056ecc9
    RET                                 ; 0056ecca
    MOV EBX,dword ptr [EAX + 0x15ac88]  ; 0056eccb
        ;   Label: LAB_0056eccb
    TEST EBX,EBX                        ; 0056ecd1
    JZ 0x0056ed6f                       ; 0056ecd3
        ;   XREF to: 0056ed6f (CONDITIONAL_JUMP)  ; LAB_0056ed6f
    MOV EBX,dword ptr [EBP + 0x18]      ; 0056ecd9
    MOV dword ptr [ESP + 0x138],EDX     ; 0056ecdc
    TEST EBX,EBX                        ; 0056ece3
    JLE 0x0056eb80                      ; 0056ece5
        ;   XREF to: 0056eb80 (CONDITIONAL_JUMP)  ; LAB_0056eb80
    XOR EBX,EBX                         ; 0056eceb
    MOV EAX,dword ptr [EBX + 0x688014]  ; 0056eced | g_RenderVertexBuffer | DAT_00688044
        ;   Label: LAB_0056eced
    MOV dword ptr [ESP + 0x6c],EAX      ; 0056ecf3
    MOV EAX,dword ptr [EBX + 0x688018]  ; 0056ecf7 | g_RenderVertexBuffer[0].projected_vertex.transformed_y | DAT_00688048
    MOV dword ptr [ESP + 0x70],EAX      ; 0056ecfd
    MOV EAX,dword ptr [EBX + 0x68801c]  ; 0056ed01 | g_RenderVertexBuffer[0].projected_vertex.transformed_z | DAT_0068804c
    MOV dword ptr [ESP + 0x74],EAX      ; 0056ed07
    LEA EAX,[ESP + 0x6c]                ; 0056ed0b
    PUSH EAX                            ; 0056ed0f
    LEA ESI,[ESP + 0x34]                ; 0056ed10
    CALL core_set.cpp_FUN_0056e890      ; 0056ed14
        ;   XREF to: 0056e890 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0056e890()
    ADD ESP,0x4                         ; 0056ed19
    PUSH 0x0                            ; 0056ed1c
    MOV ECX,dword ptr [ESP + 0x13c]     ; 0056ed1e
    LEA EDI,[ESP + 0x4]                 ; 0056ed25
    PUSH ECX                            ; 0056ed29
    LEA ESI,[ESP + 0x38]                ; 0056ed2a
    LEA EAX,[ESP + 0x8]                 ; 0056ed2e
    PUSH 0x0                            ; 0056ed32
    MOVSD ES:EDI,ESI                    ; 0056ed34
    MOVSD ES:EDI,ESI                    ; 0056ed35
    MOVSD ES:EDI,ESI                    ; 0056ed36
    PUSH EAX                            ; 0056ed37
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056ed38
    PUSH ESI                            ; 0056ed3b
    ADD EBX,0x30                        ; 0056ed3c
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0 ; 0056ed3f
        ;   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 0056ed44
    MOV EAX,[0x02d051f4]                ; 0056ed47 | g_PerspectiveReciprocal
    MOV EDI,dword ptr [ESP + 0x138]     ; 0056ed4c
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056ed53
    INC EDI                             ; 0056ed56
    MOV dword ptr [EBX + 0x688010],EAX  ; 0056ed57 | g_RenderVertexBuffer[0].w_recip
    MOV dword ptr [ESP + 0x138],EDI     ; 0056ed5d
    CMP EDI,EDX                         ; 0056ed64
    JL 0x0056eced                       ; 0056ed66
        ;   XREF to: 0056eced (CONDITIONAL_JUMP)  ; LAB_0056eced
    MOV ESP,EBP                         ; 0056ed68
    POP EBP                             ; 0056ed6a
    POP EDI                             ; 0056ed6b
    POP ESI                             ; 0056ed6c
    POP EBX                             ; 0056ed6d
    RET                                 ; 0056ed6e
    CMP dword ptr [EBP + 0x2c],0x0      ; 0056ed6f
        ;   Label: LAB_0056ed6f
    JZ 0x0056f036                       ; 0056ed73
        ;   XREF to: 0056f036 (CONDITIONAL_JUMP)  ; LAB_0056f036
    CMP dword ptr [EAX + 0x15ae70],0x0  ; 0056ed79
    JZ 0x0056ee19                       ; 0056ed80
        ;   XREF to: 0056ee19 (CONDITIONAL_JUMP)  ; LAB_0056ee19
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056ed86
    XOR EAX,EAX                         ; 0056ed89
    TEST EDX,EDX                        ; 0056ed8b
    JLE 0x0056edb0                      ; 0056ed8d
        ;   XREF to: 0056edb0 (CONDITIONAL_JUMP)  ; LAB_0056edb0
    MOV ECX,dword ptr [EBP + 0x2c]      ; 0056ed8f
    MOV EBX,dword ptr [EBP + 0x18]      ; 0056ed92
    IMUL ESI,EAX,0xc                    ; 0056ed95
        ;   Label: LAB_0056ed95
    LEA EDI,[ESI + 0x33081cc]           ; 0056ed98 | g_VertexNormalArray
    MOV ESI,ECX                         ; 0056ed9e
    INC EAX                             ; 0056eda0
    ADD ECX,0xc                         ; 0056eda1
    MOVSD ES:EDI,ESI                    ; 0056eda4 | g_VertexNormalArray | DAT_033081d8
    MOVSD ES:EDI,ESI                    ; 0056eda5 | DAT_033081d0 | DAT_033081dc
    MOVSD ES:EDI,ESI                    ; 0056eda6 | DAT_033081d4 | DAT_033081e0
    CMP EAX,EBX                         ; 0056eda7
    JL 0x0056ed95                       ; 0056eda9
        ;   XREF to: 0056ed95 (CONDITIONAL_JUMP)  ; LAB_0056ed95
    LEA EAX,[EAX]                       ; 0056edab
    MOV ECX,ECX                         ; 0056edae
    MOV ESI,dword ptr [EBP + 0x18]      ; 0056edb0
        ;   Label: LAB_0056edb0
    XOR EBX,EBX                         ; 0056edb3
    TEST ESI,ESI                        ; 0056edb5
    JLE 0x0056eb80                      ; 0056edb7
        ;   XREF to: 0056eb80 (CONDITIONAL_JUMP)  ; LAB_0056eb80
    MOV EDX,0x32cd84c                   ; 0056edbd | g_TransformedVertexArray
    MOV EDI,0x33081cc                   ; 0056edc2 | g_VertexNormalArray
    XOR ESI,ESI                         ; 0056edc7
    MOV dword ptr [ESP + 0x124],EDX     ; 0056edc9 | g_TransformedVertexArray
    PUSH 0x0                            ; 0056edd0
        ;   Label: LAB_0056edd0
    PUSH EBX                            ; 0056edd2
    PUSH EDI                            ; 0056edd3 | g_VertexNormalArray | DAT_033081d8
    MOV EAX,dword ptr [ESP + 0x130]     ; 0056edd4 | g_TransformedVertexArray | DAT_032cd858
    PUSH EAX                            ; 0056eddb | g_TransformedVertexArray | DAT_032cd858
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056eddc
    ADD ESI,0x30                        ; 0056eddf
    PUSH EDX                            ; 0056ede2
    INC EBX                             ; 0056ede3
    ADD EDI,0xc                         ; 0056ede4
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0 ; 0056ede7
        ;   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 0056edec
    MOV EAX,[0x02d051f4]                ; 0056edef | g_PerspectiveReciprocal
    MOV ECX,dword ptr [ESP + 0x124]     ; 0056edf4
    MOV dword ptr [ESI + 0x688010],EAX  ; 0056edfb | g_RenderVertexBuffer[0].w_recip
    ADD ECX,0xc                         ; 0056ee01 | DAT_032cd858
    MOV EAX,dword ptr [EBP + 0x18]      ; 0056ee04
    MOV dword ptr [ESP + 0x124],ECX     ; 0056ee07 | DAT_032cd858
    CMP EBX,EAX                         ; 0056ee0e
    JL 0x0056edd0                       ; 0056ee10
        ;   XREF to: 0056edd0 (CONDITIONAL_JUMP)  ; LAB_0056edd0
    MOV ESP,EBP                         ; 0056ee12
    POP EBP                             ; 0056ee14
    POP EDI                             ; 0056ee15
    POP ESI                             ; 0056ee16
    POP EBX                             ; 0056ee17
    RET                                 ; 0056ee18
    CMP dword ptr [EBP + 0x18],0x0      ; 0056ee19
        ;   Label: LAB_0056ee19
    JLE 0x0056eea0                      ; 0056ee1d
        ;   XREF to: 0056eea0 (CONDITIONAL_JUMP)  ; LAB_0056eea0
    MOV dword ptr [ESP + 0x108],EDI     ; 0056ee23
    MOV dword ptr [ESP + 0x11c],EDX     ; 0056ee2a
    MOV EAX,dword ptr [EBX + 0x688014]  ; 0056ee31 | g_RenderVertexBuffer | DAT_00688044
        ;   Label: LAB_0056ee31
    MOV dword ptr [ESP + 0x90],EAX      ; 0056ee37
    MOV EAX,dword ptr [EBX + 0x688018]  ; 0056ee3e | g_RenderVertexBuffer[0].projected_vertex.transformed_y | DAT_00688048
    MOV dword ptr [ESP + 0x94],EAX      ; 0056ee44
    MOV EAX,dword ptr [EBX + 0x68801c]  ; 0056ee4b | g_RenderVertexBuffer[0].projected_vertex.transformed_z | DAT_0068804c
    MOV dword ptr [ESP + 0x98],EAX      ; 0056ee51
    LEA EAX,[ESP + 0x90]                ; 0056ee58
    PUSH EAX                            ; 0056ee5f
    LEA ESI,[ESP + 0x4c]                ; 0056ee60
    CALL core_set.cpp_FUN_0056e890      ; 0056ee64
        ;   XREF to: 0056e890 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0056e890()
    ADD ESP,0x4                         ; 0056ee69
    MOV EDI,dword ptr [ESP + 0x11c]     ; 0056ee6c
    LEA ESI,[ESP + 0x48]                ; 0056ee73
    LEA EDI,[EDI + 0x32cd84c]           ; 0056ee77 | g_TransformedVertexArray
    ADD EBX,0x30                        ; 0056ee7d
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0056ee80
    MOVSD ES:EDI,ESI                    ; 0056ee87 | g_TransformedVertexArray
    MOVSD ES:EDI,ESI                    ; 0056ee88 | DAT_032cd850
    MOVSD ES:EDI,ESI                    ; 0056ee89 | DAT_032cd854
    ADD ECX,0xc                         ; 0056ee8a
    MOV ESI,dword ptr [ESP + 0x108]     ; 0056ee8d
    MOV dword ptr [ESP + 0x11c],ECX     ; 0056ee94
    CMP EBX,ESI                         ; 0056ee9b
    JL 0x0056ee31                       ; 0056ee9d
        ;   XREF to: 0056ee31 (CONDITIONAL_JUMP)  ; LAB_0056ee31
    NOP                                 ; 0056ee9f
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056eea0
        ;   Label: LAB_0056eea0
    XOR EBX,EBX                         ; 0056eea3
    TEST EDI,EDI                        ; 0056eea5
    JLE 0x0056edb0                      ; 0056eea7
        ;   XREF to: 0056edb0 (CONDITIONAL_JUMP)  ; LAB_0056edb0
    MOV ECX,dword ptr [EBP + 0x2c]      ; 0056eead
    IMUL EDI,EBX,0xc                    ; 0056eeb0
        ;   Label: LAB_0056eeb0
    MOV EAX,[0x02d052e8]                ; 0056eeb3 | g_TransformMatrix
    MOV EDX,dword ptr [ECX]             ; 0056eeb8
    IMUL EDX                            ; 0056eeba
    SHRD EAX,EDX,0x10                   ; 0056eebc
    MOV ESI,EAX                         ; 0056eec0
    MOV EDX,dword ptr [ECX + 0x4]       ; 0056eec2
    MOV EAX,[0x02d052f4]                ; 0056eec5 | g_TransformMatrix[1][0]
    IMUL EDX                            ; 0056eeca
    SHRD EAX,EDX,0x10                   ; 0056eecc
    MOV EDX,dword ptr [ECX + 0x8]       ; 0056eed0
    ADD ESI,EAX                         ; 0056eed3
    MOV EAX,[0x02d05300]                ; 0056eed5 | g_TransformMatrix[2][0]
    IMUL EDX                            ; 0056eeda
    SHRD EAX,EDX,0x10                   ; 0056eedc
    MOV EDX,dword ptr [ECX]             ; 0056eee0
    ADD ESI,EAX                         ; 0056eee2
    MOV EAX,[0x02d052ec]                ; 0056eee4 | g_TransformMatrix[0][1]
    MOV dword ptr [ESP + 0x9c],ESI      ; 0056eee9
    IMUL EDX                            ; 0056eef0
    SHRD EAX,EDX,0x10                   ; 0056eef2
    MOV ESI,EAX                         ; 0056eef6
    MOV EDX,dword ptr [ECX + 0x4]       ; 0056eef8
    MOV EAX,[0x02d052f8]                ; 0056eefb | g_TransformMatrix[1][1]
    IMUL EDX                            ; 0056ef00
    SHRD EAX,EDX,0x10                   ; 0056ef02
    MOV EDX,dword ptr [ECX + 0x8]       ; 0056ef06
    ADD ESI,EAX                         ; 0056ef09
    MOV EAX,[0x02d05304]                ; 0056ef0b | g_TransformMatrix[2][1]
    IMUL EDX                            ; 0056ef10
    SHRD EAX,EDX,0x10                   ; 0056ef12
    MOV EDX,dword ptr [ECX]             ; 0056ef16
    ADD ESI,EAX                         ; 0056ef18
    MOV EAX,[0x02d052f0]                ; 0056ef1a | g_TransformMatrix[0][2]
    MOV dword ptr [ESP + 0xa0],ESI      ; 0056ef1f
    IMUL EDX                            ; 0056ef26
    SHRD EAX,EDX,0x10                   ; 0056ef28
    MOV ESI,EAX                         ; 0056ef2c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0056ef2e
    MOV EAX,[0x02d052fc]                ; 0056ef31 | g_TransformMatrix[1][2]
    IMUL EDX                            ; 0056ef36
    SHRD EAX,EDX,0x10                   ; 0056ef38
    MOV EDX,dword ptr [ECX + 0x8]       ; 0056ef3c
    ADD ESI,EAX                         ; 0056ef3f
    MOV EAX,[0x02d05308]                ; 0056ef41 | g_TransformMatrix[2][2]
    IMUL EDX                            ; 0056ef46
    SHRD EAX,EDX,0x10                   ; 0056ef48
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0056ef4c
    ADD ESI,EAX                         ; 0056ef53
    MOV EAX,[0x02f0d364]                ; 0056ef55 | g_InverseMatrix
    MOV dword ptr [ESP + 0xa4],ESI      ; 0056ef5a
    IMUL EDX                            ; 0056ef61
    SHRD EAX,EDX,0x10                   ; 0056ef63
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0056ef67
    MOV ESI,EAX                         ; 0056ef6e
    MOV EAX,[0x02f0d370]                ; 0056ef70 | g_InverseMatrix[1][0]
    IMUL EDX                            ; 0056ef75
    SHRD EAX,EDX,0x10                   ; 0056ef77
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0056ef7b
    ADD ESI,EAX                         ; 0056ef82
    MOV EAX,[0x02f0d37c]                ; 0056ef84 | g_InverseMatrix[2][0]
    IMUL EDX                            ; 0056ef89
    SHRD EAX,EDX,0x10                   ; 0056ef8b
    ADD ESI,EAX                         ; 0056ef8f
    MOV dword ptr [ESP + 0x54],ESI      ; 0056ef91
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0056ef95
    MOV EAX,[0x02f0d368]                ; 0056ef9c | g_InverseMatrix[0][1]
    IMUL EDX                            ; 0056efa1
    SHRD EAX,EDX,0x10                   ; 0056efa3
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0056efa7
    MOV ESI,EAX                         ; 0056efae
    MOV EAX,[0x02f0d374]                ; 0056efb0 | g_InverseMatrix[1][1]
    IMUL EDX                            ; 0056efb5
    SHRD EAX,EDX,0x10                   ; 0056efb7
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0056efbb
    ADD ESI,EAX                         ; 0056efc2
    MOV EAX,[0x02f0d380]                ; 0056efc4 | g_InverseMatrix[2][1]
    IMUL EDX                            ; 0056efc9
    SHRD EAX,EDX,0x10                   ; 0056efcb
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0056efcf
    ADD ESI,EAX                         ; 0056efd6
    MOV EAX,[0x02f0d36c]                ; 0056efd8 | g_InverseMatrix[0][2]
    MOV dword ptr [ESP + 0x58],ESI      ; 0056efdd
    IMUL EDX                            ; 0056efe1
    SHRD EAX,EDX,0x10                   ; 0056efe3
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0056efe7
    MOV ESI,EAX                         ; 0056efee
    MOV EAX,[0x02f0d378]                ; 0056eff0 | g_InverseMatrix[1][2]
    IMUL EDX                            ; 0056eff5
    SHRD EAX,EDX,0x10                   ; 0056eff7
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0056effb
    ADD ESI,EAX                         ; 0056f002
    MOV EAX,[0x02f0d384]                ; 0056f004 | g_InverseMatrix[2][2]
    ADD ECX,0xc                         ; 0056f009
    IMUL EDX                            ; 0056f00c
    SHRD EAX,EDX,0x10                   ; 0056f00e
    ADD ESI,EAX                         ; 0056f012
    LEA EDI,[EDI + 0x33081cc]           ; 0056f014 | g_VertexNormalArray
    MOV dword ptr [ESP + 0x5c],ESI      ; 0056f01a
    LEA ESI,[ESP + 0x54]                ; 0056f01e
    INC EBX                             ; 0056f022
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056f023
    MOVSD ES:EDI,ESI                    ; 0056f026 | g_VertexNormalArray | DAT_033081d8
    MOVSD ES:EDI,ESI                    ; 0056f027 | DAT_033081d0 | DAT_033081dc
    MOVSD ES:EDI,ESI                    ; 0056f028 | DAT_033081d4 | DAT_033081e0
    CMP EBX,EDX                         ; 0056f029
    JGE 0x0056edb0                      ; 0056f02b
        ;   XREF to: 0056edb0 (CONDITIONAL_JUMP)  ; LAB_0056edb0
    JMP 0x0056eeb0                      ; 0056f031
        ;   XREF to: 0056eeb0 (UNCONDITIONAL_JUMP)  ; LAB_0056eeb0
    CMP dword ptr [EBP + 0x1c],0x0      ; 0056f036
        ;   Label: LAB_0056f036
    JNZ 0x0056f0d1                      ; 0056f03a
        ;   XREF to: 0056f0d1 (CONDITIONAL_JUMP)  ; LAB_0056f0d1
    MOV EBX,dword ptr [EBP + 0x18]      ; 0056f040
    MOV dword ptr [ESP + 0x134],EDX     ; 0056f043
    TEST EBX,EBX                        ; 0056f04a
    JLE 0x0056eb80                      ; 0056f04c
        ;   XREF to: 0056eb80 (CONDITIONAL_JUMP)  ; LAB_0056eb80
    XOR EBX,EBX                         ; 0056f052
    MOV EAX,dword ptr [EBX + 0x688014]  ; 0056f054 | g_RenderVertexBuffer | DAT_00688044
        ;   Label: LAB_0056f054
    MOV dword ptr [ESP + 0xc],EAX       ; 0056f05a
    MOV EAX,dword ptr [EBX + 0x688018]  ; 0056f05e | g_RenderVertexBuffer[0].projected_vertex.transformed_y | DAT_00688048
    MOV dword ptr [ESP + 0x10],EAX      ; 0056f064
    MOV EAX,dword ptr [EBX + 0x68801c]  ; 0056f068 | g_RenderVertexBuffer[0].projected_vertex.transformed_z | DAT_0068804c
    MOV dword ptr [ESP + 0x14],EAX      ; 0056f06e
    LEA EAX,[ESP + 0xc]                 ; 0056f072
    PUSH EAX                            ; 0056f076
    LEA ESI,[ESP + 0x28]                ; 0056f077
    LEA EDI,[ESP + 0x1c]                ; 0056f07b
    CALL core_set.cpp_FUN_0056e890      ; 0056f07f
        ;   XREF to: 0056e890 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0056e890()
    LEA ESI,[ESP + 0x28]                ; 0056f084
    ADD ESP,0x4                         ; 0056f088
    MOVSD ES:EDI,ESI                    ; 0056f08b
    MOVSD ES:EDI,ESI                    ; 0056f08c
    MOVSD ES:EDI,ESI                    ; 0056f08d
    PUSH 0x0                            ; 0056f08e
    MOV ESI,dword ptr [ESP + 0x138]     ; 0056f090
    PUSH ESI                            ; 0056f097
    PUSH 0x0                            ; 0056f098
    LEA EAX,[ESP + 0x24]                ; 0056f09a
    PUSH EAX                            ; 0056f09e
    MOV EDI,dword ptr [EBP + 0x14]      ; 0056f09f
    PUSH EDI                            ; 0056f0a2
    ADD EBX,0x30                        ; 0056f0a3
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0 ; 0056f0a6
        ;   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    MOV EAX,[0x02d051f4]                ; 0056f0ab | g_PerspectiveReciprocal
    ADD ESP,0x14                        ; 0056f0b0
    MOV dword ptr [EBX + 0x688010],EAX  ; 0056f0b3 | g_RenderVertexBuffer[0].w_recip
    LEA EAX,[ESI + 0x1]                 ; 0056f0b9
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056f0bc
    MOV dword ptr [ESP + 0x134],EAX     ; 0056f0bf
    CMP EAX,EDX                         ; 0056f0c6
    JL 0x0056f054                       ; 0056f0c8
        ;   XREF to: 0056f054 (CONDITIONAL_JUMP)  ; LAB_0056f054
    MOV ESP,EBP                         ; 0056f0ca
    POP EBP                             ; 0056f0cc
    POP EDI                             ; 0056f0cd
    POP ESI                             ; 0056f0ce
    POP EBX                             ; 0056f0cf
    RET                                 ; 0056f0d0
    CMP dword ptr [EBP + 0x18],0x0      ; 0056f0d1
        ;   Label: LAB_0056f0d1
    JLE 0x0056f150                      ; 0056f0d5
        ;   XREF to: 0056f150 (CONDITIONAL_JUMP)  ; LAB_0056f150
    MOV dword ptr [ESP + 0x104],EDI     ; 0056f0db
    MOV dword ptr [ESP + 0x10c],ECX     ; 0056f0e2
    MOV EAX,dword ptr [EBX + 0x688014]  ; 0056f0e9 | g_RenderVertexBuffer | DAT_00688044
        ;   Label: LAB_0056f0e9
    MOV dword ptr [ESP + 0x3c],EAX      ; 0056f0ef
    MOV EAX,dword ptr [EBX + 0x688018]  ; 0056f0f3 | g_RenderVertexBuffer[0].projected_vertex.transformed_y | DAT_00688048
    MOV dword ptr [ESP + 0x40],EAX      ; 0056f0f9
    MOV EAX,dword ptr [EBX + 0x68801c]  ; 0056f0fd | g_RenderVertexBuffer[0].projected_vertex.transformed_z | DAT_0068804c
    MOV dword ptr [ESP + 0x44],EAX      ; 0056f103
    LEA EAX,[ESP + 0x3c]                ; 0056f107
    PUSH EAX                            ; 0056f10b
    LEA ESI,[ESP + 0x64]                ; 0056f10c
    CALL core_set.cpp_FUN_0056e890      ; 0056f110
        ;   XREF to: 0056e890 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0056e890()
    ADD ESP,0x4                         ; 0056f115
    ADD EBX,0x30                        ; 0056f118
    MOV EDI,dword ptr [ESP + 0x10c]     ; 0056f11b
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0056f122
    LEA ESI,[ESP + 0x60]                ; 0056f129
    ADD EDX,0xc                         ; 0056f12d
    LEA EDI,[EDI + 0x32cd84c]           ; 0056f130 | g_TransformedVertexArray
    MOV ECX,dword ptr [ESP + 0x104]     ; 0056f136
    MOV dword ptr [ESP + 0x10c],EDX     ; 0056f13d
    MOVSD ES:EDI,ESI                    ; 0056f144 | g_TransformedVertexArray
    MOVSD ES:EDI,ESI                    ; 0056f145 | DAT_032cd850
    MOVSD ES:EDI,ESI                    ; 0056f146 | DAT_032cd854
    CMP EBX,ECX                         ; 0056f147
    JL 0x0056f0e9                       ; 0056f149
        ;   XREF to: 0056f0e9 (CONDITIONAL_JUMP)  ; LAB_0056f0e9
    LEA EAX,[EAX]                       ; 0056f14b
    MOV ECX,ECX                         ; 0056f14e
    CMP dword ptr [EBP + 0x28],0x0      ; 0056f150
        ;   Label: LAB_0056f150
    JLE 0x0056f49d                      ; 0056f154
        ;   XREF to: 0056f49d (CONDITIONAL_JUMP)  ; LAB_0056f49d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0056f15a
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056f15d
    XOR EDI,EDI                         ; 0056f160
    TEST EDX,EDX                        ; 0056f162
    JLE 0x0056f2c3                      ; 0056f164
        ;   XREF to: 0056f2c3 (CONDITIONAL_JUMP)  ; LAB_0056f2c3
    MOV EDX,dword ptr [EAX + 0x24]      ; 0056f16a
        ;   Label: LAB_0056f16a
    IMUL EDX,EDX,0xc                    ; 0056f16d
    MOV EBX,dword ptr [EAX + 0x18]      ; 0056f170
    IMUL EBX,EBX,0xc                    ; 0056f173
    MOV ECX,0x32cd84c                   ; 0056f176 | g_TransformedVertexArray
    ADD ECX,EDX                         ; 0056f17b
    MOV EDX,0x32cd84c                   ; 0056f17d | g_TransformedVertexArray
    ADD EDX,EBX                         ; 0056f182
    MOV EBX,dword ptr [ECX]             ; 0056f184 | g_TransformedVertexArray
    SUB EBX,dword ptr [EDX]             ; 0056f186 | g_TransformedVertexArray
    MOV dword ptr [ESP + 0x158],EBX     ; 0056f188
    MOV EBX,dword ptr [ECX + 0x4]       ; 0056f18f | DAT_032cd850
    SUB EBX,dword ptr [EDX + 0x4]       ; 0056f192 | DAT_032cd850
    MOV dword ptr [ESP + 0x160],EBX     ; 0056f195
    MOV EBX,dword ptr [ECX + 0x8]       ; 0056f19c | DAT_032cd854
    SUB EBX,dword ptr [EDX + 0x8]       ; 0056f19f | DAT_032cd854
    MOV ESI,dword ptr [EAX + 0x30]      ; 0056f1a2
    MOV dword ptr [ESP + 0x15c],EBX     ; 0056f1a5
    IMUL EBX,ESI,0xc                    ; 0056f1ac
    ADD EBX,0x32cd84c                   ; 0056f1af | g_TransformedVertexArray
    MOV ESI,dword ptr [ECX]             ; 0056f1b5 | g_TransformedVertexArray
    MOV EDX,dword ptr [EBX]             ; 0056f1b7 | g_TransformedVertexArray
    SUB EDX,ESI                         ; 0056f1b9
    FILD dword ptr [ESP + 0x15c]        ; 0056f1bb
    MOV dword ptr [ESP + 0x15c],EDX     ; 0056f1c2
    MOV ESI,dword ptr [ECX + 0x4]       ; 0056f1c9 | DAT_032cd850
    FILD dword ptr [ESP + 0x15c]        ; 0056f1cc
    MOV EDX,dword ptr [EBX + 0x4]       ; 0056f1d3 | DAT_032cd850
    FST float ptr [ESP + 0xac]          ; 0056f1d6
    SUB EDX,ESI                         ; 0056f1dd
    FMUL ST1                            ; 0056f1df
    MOV dword ptr [ESP + 0x15c],EDX     ; 0056f1e1
    MOV EDX,dword ptr [EBX + 0x8]       ; 0056f1e8 | DAT_032cd854
    SUB EDX,dword ptr [ECX + 0x8]       ; 0056f1eb | DAT_032cd854
    FILD dword ptr [ESP + 0x160]        ; 0056f1ee
    MOV dword ptr [ESP + 0x160],EDX     ; 0056f1f5
    FST float ptr [ESP + 0x150]         ; 0056f1fc
    FILD dword ptr [ESP + 0x160]        ; 0056f203
    FSTP float ptr [ESP + 0xb4]         ; 0056f20a
    FMUL float ptr [ESP + 0xb4]         ; 0056f211
    FILD dword ptr [ESP + 0x158]        ; 0056f218
    FILD dword ptr [ESP + 0x15c]        ; 0056f21f
    FLD ST1                             ; 0056f226
    FMUL ST1                            ; 0056f228
    FXCH                                ; 0056f22a
    FMULP ST5                           ; 0056f22c
    FXCH                                ; 0056f22e
    FMUL float ptr [ESP + 0xb4]         ; 0056f230
    FXCH ST4                            ; 0056f237
    FSUBP ST2,ST0                       ; 0056f239
    FLD ST1                             ; 0056f23b
    FMUL ST2                            ; 0056f23d
    FXCH ST4                            ; 0056f23f
    FSUBP ST3,ST0                       ; 0056f241
    FLD ST2                             ; 0056f243
    FMUL ST3                            ; 0056f245
    FLD float ptr [ESP + 0xac]          ; 0056f247
    FMUL float ptr [ESP + 0x150]        ; 0056f24e
    FXCH                                ; 0056f255
    FADDP ST5,ST0                       ; 0056f257
    FSUBP                               ; 0056f259
    FLD ST0                             ; 0056f25b
    FMUL ST1                            ; 0056f25d
    FADDP ST4,ST0                       ; 0056f25f
    FXCH ST3                            ; 0056f261
    FSTP float ptr [ESP + 0xbc]         ; 0056f263
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0056f26a
    MOV ECX,dword ptr [0x02d7a7bc]      ; 0056f271 | g_LightAttenuationMax
    SAR EDX,0x1                         ; 0056f277
    SUB ECX,EDX                         ; 0056f279
    MOV dword ptr [ESP + 0xc0],ECX      ; 0056f27b
    FLD float ptr [ESP + 0xc0]          ; 0056f282
    FMUL double ptr [0x00645fd3]        ; 0056f289 | DOUBLE_00645fd3
    FXCH                                ; 0056f28f
    FMUL ST1                            ; 0056f291
    FXCH ST2                            ; 0056f293
    FMUL ST1                            ; 0056f295
    FXCH ST3                            ; 0056f297
    FMULP                               ; 0056f299
    MOV ESI,dword ptr [EBP + 0x28]      ; 0056f29b
    FXCH                                ; 0056f29e
    FSTP float ptr [EAX + 0x8]          ; 0056f2a0
    FXCH                                ; 0056f2a3
    FSTP float ptr [EAX + 0xc]          ; 0056f2a5
    FSTP float ptr [EAX + 0x10]         ; 0056f2a8
    CMP ESI,0x4                         ; 0056f2ab
    JNZ 0x0056f48d                      ; 0056f2ae
        ;   XREF to: 0056f48d (CONDITIONAL_JUMP)  ; LAB_0056f48d
    ADD EAX,0x48                        ; 0056f2b4
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0056f2b7
        ;   Label: LAB_0056f2b7
    INC EDI                             ; 0056f2ba
    CMP EDI,EDX                         ; 0056f2bb
    JL 0x0056f16a                       ; 0056f2bd
        ;   XREF to: 0056f16a (CONDITIONAL_JUMP)  ; LAB_0056f16a
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056f2c3
        ;   Label: LAB_0056f2c3
    LEA EAX,[EDX*0x4 + 0x0]             ; 0056f2c6
    SUB EAX,EDX                         ; 0056f2cd
    SHL EAX,0x2                         ; 0056f2cf
    PUSH EAX                            ; 0056f2d2
    PUSH 0x0                            ; 0056f2d3
    PUSH 0x33081cc                      ; 0056f2d5 | g_VertexNormalArray
    CALL crt_memory.c_memset_FUN_005fde40 ; 0056f2da
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0056f2df
    XOR EBX,EBX                         ; 0056f2e2
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0056f2e4
    MOV ECX,dword ptr [EBP + 0x20]      ; 0056f2e7
    TEST ESI,ESI                        ; 0056f2ea
    JLE 0x0056f3a0                      ; 0056f2ec
        ;   XREF to: 0056f3a0 (CONDITIONAL_JUMP)  ; LAB_0056f3a0
    IMUL EAX,dword ptr [ECX + 0x18],0xc ; 0056f2f2
        ;   Label: LAB_0056f2f2
    LEA ESI,[ECX + 0x8]                 ; 0056f2f6
    ADD EAX,0x33081cc                   ; 0056f2f9 | g_VertexNormalArray
    FLD float ptr [ESI]                 ; 0056f2fe
    FADD float ptr [EAX]                ; 0056f300 | g_VertexNormalArray
    FSTP float ptr [EAX]                ; 0056f302 | g_VertexNormalArray
    FLD float ptr [ESI + 0x4]           ; 0056f304
    FADD float ptr [EAX + 0x4]          ; 0056f307 | DAT_033081d0
    FSTP float ptr [EAX + 0x4]          ; 0056f30a | DAT_033081d0
    FLD float ptr [ESI + 0x8]           ; 0056f30d
    FADD float ptr [EAX + 0x8]          ; 0056f310 | DAT_033081d4
    FSTP float ptr [EAX + 0x8]          ; 0056f313 | DAT_033081d4
    IMUL EAX,dword ptr [ECX + 0x24],0xc ; 0056f316
    ADD EAX,0x33081cc                   ; 0056f31a | g_VertexNormalArray
    FLD float ptr [ESI]                 ; 0056f31f
    FADD float ptr [EAX]                ; 0056f321 | g_VertexNormalArray
    FSTP float ptr [EAX]                ; 0056f323 | g_VertexNormalArray
    FLD float ptr [ESI + 0x4]           ; 0056f325
    FADD float ptr [EAX + 0x4]          ; 0056f328 | DAT_033081d0
    FSTP float ptr [EAX + 0x4]          ; 0056f32b | DAT_033081d0
    FLD float ptr [ESI + 0x8]           ; 0056f32e
    FADD float ptr [EAX + 0x8]          ; 0056f331 | DAT_033081d4
    FSTP float ptr [EAX + 0x8]          ; 0056f334 | DAT_033081d4
    IMUL EAX,dword ptr [ECX + 0x30],0xc ; 0056f337
    ADD EAX,0x33081cc                   ; 0056f33b | g_VertexNormalArray
    FLD float ptr [ESI]                 ; 0056f340
    FADD float ptr [EAX]                ; 0056f342 | g_VertexNormalArray
    FSTP float ptr [EAX]                ; 0056f344 | g_VertexNormalArray
    FLD float ptr [ESI + 0x4]           ; 0056f346
    FADD float ptr [EAX + 0x4]          ; 0056f349 | DAT_033081d0
    FSTP float ptr [EAX + 0x4]          ; 0056f34c | DAT_033081d0
    FLD float ptr [ESI + 0x8]           ; 0056f34f
    FADD float ptr [EAX + 0x8]          ; 0056f352 | DAT_033081d4
    FSTP float ptr [EAX + 0x8]          ; 0056f355 | DAT_033081d4
    CMP dword ptr [ECX + 0x4],0x4       ; 0056f358
    JNZ 0x0056f37f                      ; 0056f35c
        ;   XREF to: 0056f37f (CONDITIONAL_JUMP)  ; LAB_0056f37f
    IMUL EAX,dword ptr [ECX + 0x3c],0xc ; 0056f35e
    ADD EAX,0x33081cc                   ; 0056f362 | g_VertexNormalArray
    FLD float ptr [ESI]                 ; 0056f367
    FADD float ptr [EAX]                ; 0056f369 | g_VertexNormalArray
    FSTP float ptr [EAX]                ; 0056f36b | g_VertexNormalArray
    FLD float ptr [ESI + 0x4]           ; 0056f36d
    FADD float ptr [EAX + 0x4]          ; 0056f370 | DAT_033081d0
    FSTP float ptr [EAX + 0x4]          ; 0056f373 | DAT_033081d0
    FLD float ptr [ESI + 0x8]           ; 0056f376
    FADD float ptr [EAX + 0x8]          ; 0056f379 | DAT_033081d4
    FSTP float ptr [EAX + 0x8]          ; 0056f37c | DAT_033081d4
    CMP dword ptr [EBP + 0x28],0x4      ; 0056f37f
        ;   Label: LAB_0056f37f
    JNZ 0x0056f495                      ; 0056f383
        ;   XREF to: 0056f495 (CONDITIONAL_JUMP)  ; LAB_0056f495
    ADD ECX,0x48                        ; 0056f389
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0056f38c
        ;   Label: LAB_0056f38c
    INC EBX                             ; 0056f38f
    CMP EBX,EDI                         ; 0056f390
    JL 0x0056f2f2                       ; 0056f392
        ;   XREF to: 0056f2f2 (CONDITIONAL_JUMP)  ; LAB_0056f2f2
    LEA EAX,[EAX]                       ; 0056f398
    MOV EDX,EDX                         ; 0056f39e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056f3a0
        ;   Label: LAB_0056f3a0
    MOV EDI,dword ptr [EAX + 0x15ae84]  ; 0056f3a3
    TEST EDI,EDI                        ; 0056f3a9
    JZ 0x0056f854                       ; 0056f3ab
        ;   XREF to: 0056f854 (CONDITIONAL_JUMP)  ; LAB_0056f854
    XOR EDX,EDX                         ; 0056f3b1
    MOV ECX,dword ptr [EBP + 0x18]      ; 0056f3b3
    MOV dword ptr [ESP + 0x13c],EDX     ; 0056f3b6
    TEST ECX,ECX                        ; 0056f3bd
    JLE 0x0056eb80                      ; 0056f3bf
        ;   XREF to: 0056eb80 (CONDITIONAL_JUMP)  ; LAB_0056eb80
    MOV EDI,0x33081cc                   ; 0056f3c5 | g_VertexNormalArray
    MOV EAX,0x32cd84c                   ; 0056f3ca | g_TransformedVertexArray
    MOV dword ptr [ESP + 0x120],EDX     ; 0056f3cf
    MOV dword ptr [ESP + 0x118],EAX     ; 0056f3d6 | g_TransformedVertexArray
    FLD float ptr [EDI]                 ; 0056f3dd | g_VertexNormalArray | DAT_033081d8
        ;   Label: LAB_0056f3dd
    FABS                                ; 0056f3df
    MOV ECX,dword ptr [ESP + 0x13c]     ; 0056f3e1
    IMUL EBX,ECX,0xc                    ; 0056f3e8
    MOV ESI,EDI                         ; 0056f3eb
    FLD1                                ; 0056f3ed
    FCOMPP                              ; 0056f3ef
    FNSTSW AX                           ; 0056f3f1
    SAHF                                ; 0056f3f3
    JBE 0x0056f7c2                      ; 0056f3f4
        ;   XREF to: 0056f7c2 (CONDITIONAL_JUMP)  ; LAB_0056f7c2
    FLD float ptr [EDI + 0x4]           ; 0056f3fa | DAT_033081d0 | DAT_033081dc
    FABS                                ; 0056f3fd
    FLD1                                ; 0056f3ff
    FCOMPP                              ; 0056f401
    FNSTSW AX                           ; 0056f403
    SAHF                                ; 0056f405
    JBE 0x0056f7c2                      ; 0056f406
        ;   XREF to: 0056f7c2 (CONDITIONAL_JUMP)  ; LAB_0056f7c2
    FLD float ptr [EDI + 0x8]           ; 0056f40c | DAT_033081d4
    FABS                                ; 0056f40f
    FLD1                                ; 0056f411
    FCOMPP                              ; 0056f413
    FNSTSW AX                           ; 0056f415
    SAHF                                ; 0056f417
    JBE 0x0056f7c2                      ; 0056f418
        ;   XREF to: 0056f7c2 (CONDITIONAL_JUMP)  ; LAB_0056f7c2
    PUSH 0x0                            ; 0056f41e
    PUSH ECX                            ; 0056f420
    MOV EAX,0x32cd84c                   ; 0056f421 | g_TransformedVertexArray
    PUSH 0x0                            ; 0056f426
    ADD EAX,EBX                         ; 0056f428
    PUSH EAX                            ; 0056f42a
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056f42b
    PUSH ECX                            ; 0056f42e
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0 ; 0056f42f
        ;   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
        ;   Label: LAB_0056f42f
    ADD ESP,0x14                        ; 0056f434
    MOV EDX,dword ptr [ESP + 0x120]     ; 0056f437
    MOV ECX,dword ptr [ESP + 0x120]     ; 0056f43e
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0056f445
    MOV ESI,dword ptr [EBP + 0x18]      ; 0056f44c
    MOV EAX,[0x02d051f4]                ; 0056f44f | g_PerspectiveReciprocal
    ADD EDI,0xc                         ; 0056f454
    ADD ECX,0x30                        ; 0056f457
    INC EBX                             ; 0056f45a
    MOV dword ptr [EDX + 0x688040],EAX  ; 0056f45b | g_RenderVertexBuffer[0].w_recip | g_RenderVertexBuffer[1].w_recip
    MOV EDX,dword ptr [ESP + 0x118]     ; 0056f461
    MOV dword ptr [ESP + 0x120],ECX     ; 0056f468
    ADD EDX,0xc                         ; 0056f46f
    MOV dword ptr [ESP + 0x13c],EBX     ; 0056f472
    MOV dword ptr [ESP + 0x118],EDX     ; 0056f479 | DAT_032cd858 | DAT_032cd864
    CMP EBX,ESI                         ; 0056f480
    JGE 0x0056eb80                      ; 0056f482
        ;   XREF to: 0056eb80 (CONDITIONAL_JUMP)  ; LAB_0056eb80
    JMP 0x0056f3dd                      ; 0056f488
        ;   XREF to: 0056f3dd (UNCONDITIONAL_JUMP)  ; LAB_0056f3dd
    ADD EAX,0x3c                        ; 0056f48d
        ;   Label: LAB_0056f48d
    JMP 0x0056f2b7                      ; 0056f490
        ;   XREF to: 0056f2b7 (UNCONDITIONAL_JUMP)  ; LAB_0056f2b7
    ADD ECX,0x3c                        ; 0056f495
        ;   Label: LAB_0056f495
    JMP 0x0056f38c                      ; 0056f498
        ;   XREF to: 0056f38c (UNCONDITIONAL_JUMP)  ; LAB_0056f38c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0056f49d
        ;   Label: LAB_0056f49d
    MOV EBX,dword ptr [EBP + 0x20]      ; 0056f4a0
    CMP ESI,0xfa0                       ; 0056f4a3
    JLE 0x0056f4cd                      ; 0056f4a9
        ;   XREF to: 0056f4cd (CONDITIONAL_JUMP)  ; LAB_0056f4cd
    MOV EDI,0x645f5f                    ; 0056f4ab | = "..\\core\\set.cpp"
    MOV EAX,0xeaf                       ; 0056f4b0
    PUSH 0x645f6f                       ; 0056f4b5 | = "Too many normals on this packed tri list"
    MOV dword ptr [0x02f0ca48],EDI      ; 0056f4ba | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0056f4c0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056f4c5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0056f4ca
    CMP dword ptr [EBP + 0x1c],0xfa0    ; 0056f4cd
        ;   Label: LAB_0056f4cd
    JLE 0x0056f4f9                      ; 0056f4d4
        ;   XREF to: 0056f4f9 (CONDITIONAL_JUMP)  ; LAB_0056f4f9
    MOV ECX,0x645f98                    ; 0056f4d6 | = "..\\core\\set.cpp"
    MOV ESI,0xeb1                       ; 0056f4db
    PUSH 0x645fa8                       ; 0056f4e0 | = "Need more normals for packed models"
    MOV dword ptr [0x02f0ca48],ECX      ; 0056f4e5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0056f4eb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056f4f1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0056f4f6
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0056f4f9
        ;   Label: LAB_0056f4f9
    XOR EDI,EDI                         ; 0056f4fc
    TEST EAX,EAX                        ; 0056f4fe
    JLE 0x0056f70a                      ; 0056f500
        ;   XREF to: 0056f70a (CONDITIONAL_JUMP)  ; LAB_0056f70a
    FLD float ptr [ESP + 0x130]         ; 0056f506
    FLD float ptr [ESP + 0x12c]         ; 0056f50d
    MOV ECX,0x32c1ccc                   ; 0056f514 | g_FaceNormalArray
    XOR ESI,ESI                         ; 0056f519
        ;   Label: LAB_0056f519
    MOV SI,word ptr [EBX]               ; 0056f51b
    IMUL ESI,ESI,0xc                    ; 0056f51e
    XOR EAX,EAX                         ; 0056f521
    XOR EDX,EDX                         ; 0056f523
    MOV AX,word ptr [EBX + 0x4]         ; 0056f525
    MOV DX,word ptr [EBX + 0x2]         ; 0056f529
    MOV dword ptr [ESP + 0xe0],EAX      ; 0056f52d
    IMUL EAX,EDX,0xc                    ; 0056f534
    MOV EDX,0x32cd84c                   ; 0056f537 | g_TransformedVertexArray
    ADD EAX,0x32cd84c                   ; 0056f53c | g_TransformedVertexArray
    ADD EDX,ESI                         ; 0056f541
    MOV ESI,dword ptr [EAX]             ; 0056f543 | g_TransformedVertexArray
    MOV dword ptr [ESP + 0x154],ESI     ; 0056f545
    MOV ESI,dword ptr [EDX]             ; 0056f54c | g_TransformedVertexArray
    SUB dword ptr [ESP + 0x154],ESI     ; 0056f54e
    MOV ESI,dword ptr [ESP + 0x154]     ; 0056f555
    MOV dword ptr [ESP + 0x154],ESI     ; 0056f55c
    MOV ESI,dword ptr [EAX + 0x4]       ; 0056f563 | DAT_032cd850
    MOV dword ptr [ESP + 0x158],ESI     ; 0056f566
    MOV ESI,dword ptr [EDX + 0x4]       ; 0056f56d | DAT_032cd850
    SUB dword ptr [ESP + 0x158],ESI     ; 0056f570
    MOV ESI,dword ptr [ESP + 0x158]     ; 0056f577
    MOV dword ptr [ESP + 0x160],ESI     ; 0056f57e
    MOV ESI,dword ptr [EAX + 0x8]       ; 0056f585 | DAT_032cd854
    MOV EDX,dword ptr [EDX + 0x8]       ; 0056f588 | DAT_032cd854
    SUB ESI,EDX                         ; 0056f58b
    MOV EDX,dword ptr [ESP + 0xe0]      ; 0056f58d
    MOV dword ptr [ESP + 0x15c],ESI     ; 0056f594
    IMUL ESI,EDX,0xc                    ; 0056f59b
    ADD ESI,0x32cd84c                   ; 0056f59e | g_TransformedVertexArray
    MOV EDX,dword ptr [ESI]             ; 0056f5a4 | g_TransformedVertexArray
    MOV dword ptr [ESP + 0x158],EDX     ; 0056f5a6
    MOV EDX,dword ptr [EAX]             ; 0056f5ad | g_TransformedVertexArray
    SUB dword ptr [ESP + 0x158],EDX     ; 0056f5af
    MOV EDX,dword ptr [ESP + 0x158]     ; 0056f5b6
    MOV dword ptr [ESP + 0x158],EDX     ; 0056f5bd
    FILD dword ptr [ESP + 0x15c]        ; 0056f5c4
    FILD dword ptr [ESP + 0x158]        ; 0056f5cb
    MOV EDX,dword ptr [ESI + 0x4]       ; 0056f5d2 | DAT_032cd850
    FST float ptr [ESP + 0xd0]          ; 0056f5d5
    FXCH                                ; 0056f5dc
    FSTP float ptr [ESP + 0xcc]         ; 0056f5de
    FMUL float ptr [ESP + 0xcc]         ; 0056f5e5
    MOV dword ptr [ESP + 0x158],EDX     ; 0056f5ec
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056f5f3 | DAT_032cd850
    SUB dword ptr [ESP + 0x158],EDX     ; 0056f5f6
    MOV EDX,dword ptr [ESP + 0x158]     ; 0056f5fd
    MOV dword ptr [ESP + 0x15c],EDX     ; 0056f604
    MOV EDX,dword ptr [ESI + 0x8]       ; 0056f60b | DAT_032cd854
    MOV ESI,dword ptr [EAX + 0x8]       ; 0056f60e | DAT_032cd854
    MOV EAX,EDX                         ; 0056f611
    FILD dword ptr [ESP + 0x160]        ; 0056f613
    SUB EAX,ESI                         ; 0056f61a
    FSTP float ptr [ESP + 0xc8]         ; 0056f61c
    MOV dword ptr [ESP + 0x158],EAX     ; 0056f623
    FLD float ptr [ESP + 0xc8]          ; 0056f62a
    FILD dword ptr [ESP + 0x158]        ; 0056f631
    FSTP float ptr [ESP + 0xd8]         ; 0056f638
    FMUL float ptr [ESP + 0xd8]         ; 0056f63f
    FILD dword ptr [ESP + 0x154]        ; 0056f646
    FILD dword ptr [ESP + 0x15c]        ; 0056f64d
    FLD ST1                             ; 0056f654
    FMUL ST1                            ; 0056f656
    FXCH                                ; 0056f658
    FMUL float ptr [ESP + 0xcc]         ; 0056f65a
    FXCH ST2                            ; 0056f661
    FMUL float ptr [ESP + 0xd8]         ; 0056f663
    FXCH ST2                            ; 0056f66a
    FSUBP ST3,ST0                       ; 0056f66c
    FXCH ST2                            ; 0056f66e
    FST ST4                             ; 0056f670
    FMUL ST4                            ; 0056f672
    FXCH                                ; 0056f674
    FSUBP ST3,ST0                       ; 0056f676
    FXCH ST2                            ; 0056f678
    FST ST4                             ; 0056f67a
    FMUL ST4                            ; 0056f67c
    FLD float ptr [ESP + 0xd0]          ; 0056f67e
    FMUL float ptr [ESP + 0xc8]         ; 0056f685
    FXCH                                ; 0056f68c
    FADDP ST3,ST0                       ; 0056f68e
    FSUBP                               ; 0056f690
    FST float ptr [ESP + 0x128]         ; 0056f692
    FMUL float ptr [ESP + 0x128]        ; 0056f699
    FADDP                               ; 0056f6a0
    FSTP float ptr [ESP + 0xe4]         ; 0056f6a2
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0056f6a9
    MOV EDX,dword ptr [0x02d7a7bc]      ; 0056f6b0 | g_LightAttenuationMax
    SAR EAX,0x1                         ; 0056f6b6
    SUB EDX,EAX                         ; 0056f6b8
    MOV dword ptr [ESP + 0xe8],EDX      ; 0056f6ba
    FLD float ptr [ESP + 0xe8]          ; 0056f6c1
    FMUL double ptr [0x00645fd3]        ; 0056f6c8 | DOUBLE_00645fd3
    FLD ST1                             ; 0056f6ce
    FMUL ST1                            ; 0056f6d0
    FLD ST3                             ; 0056f6d2
    FMUL ST2                            ; 0056f6d4
    FLD float ptr [ESP + 0x128]         ; 0056f6d6
    FMULP ST3                           ; 0056f6dd
    ADD EBX,0x12                        ; 0056f6df
    ADD ECX,0xc                         ; 0056f6e2
    INC EDI                             ; 0056f6e5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0056f6e6
    FXCH                                ; 0056f6e9
    FSTP float ptr [ECX + -0xc]         ; 0056f6eb | g_FaceNormalArray | DAT_032c1cd8
    FSTP float ptr [ECX + -0x8]         ; 0056f6ee | DAT_032c1cd0 | DAT_032c1cdc
    FSTP float ptr [ECX + -0x4]         ; 0056f6f1 | DAT_032c1cd4 | DAT_032c1ce0
    CMP EDI,EAX                         ; 0056f6f4
    JL 0x0056f519                       ; 0056f6f6
        ;   XREF to: 0056f519 (CONDITIONAL_JUMP)  ; LAB_0056f519
    FSTP float ptr [ESP + 0x12c]        ; 0056f6fc
    FSTP float ptr [ESP + 0x130]        ; 0056f703
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056f70a
        ;   Label: LAB_0056f70a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0056f70d
    SUB EAX,EDX                         ; 0056f714
    SHL EAX,0x2                         ; 0056f716
    PUSH EAX                            ; 0056f719
    PUSH 0x0                            ; 0056f71a
    PUSH 0x33081cc                      ; 0056f71c | g_VertexNormalArray
    CALL crt_memory.c_memset_FUN_005fde40 ; 0056f721
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0056f726
    XOR ESI,ESI                         ; 0056f729
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0056f72b
    MOV EBX,dword ptr [EBP + 0x20]      ; 0056f72e
    TEST EDX,EDX                        ; 0056f731
    JLE 0x0056f3a0                      ; 0056f733
        ;   XREF to: 0056f3a0 (CONDITIONAL_JUMP)  ; LAB_0056f3a0
    MOV ECX,0x32c1ccc                   ; 0056f739 | g_FaceNormalArray
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0056f73e
    XOR EAX,EAX                         ; 0056f741
        ;   Label: LAB_0056f741
    MOV AX,word ptr [EBX]               ; 0056f743
    IMUL EAX,EAX,0xc                    ; 0056f746
    ADD EAX,0x33081cc                   ; 0056f749 | g_VertexNormalArray
    FLD float ptr [ECX]                 ; 0056f74e | g_FaceNormalArray | DAT_032c1cd8
    FADD float ptr [EAX]                ; 0056f750 | g_VertexNormalArray
    FSTP float ptr [EAX]                ; 0056f752 | g_VertexNormalArray
    FLD float ptr [ECX + 0x4]           ; 0056f754 | DAT_032c1cd0 | DAT_032c1cdc
    FADD float ptr [EAX + 0x4]          ; 0056f757 | DAT_033081d0
    FSTP float ptr [EAX + 0x4]          ; 0056f75a | DAT_033081d0
    FLD float ptr [ECX + 0x8]           ; 0056f75d | DAT_032c1cd4 | DAT_032c1ce0
    FADD float ptr [EAX + 0x8]          ; 0056f760 | DAT_033081d4
    FSTP float ptr [EAX + 0x8]          ; 0056f763 | DAT_033081d4
    XOR EAX,EAX                         ; 0056f766
    MOV AX,word ptr [EBX + 0x2]         ; 0056f768
    IMUL EAX,EAX,0xc                    ; 0056f76c
    ADD EAX,0x33081cc                   ; 0056f76f | g_VertexNormalArray
    FLD float ptr [ECX]                 ; 0056f774 | g_FaceNormalArray | DAT_032c1cd8
    FADD float ptr [EAX]                ; 0056f776 | g_VertexNormalArray
    FSTP float ptr [EAX]                ; 0056f778 | g_VertexNormalArray
    FLD float ptr [ECX + 0x4]           ; 0056f77a | DAT_032c1cd0 | DAT_032c1cdc
    FADD float ptr [EAX + 0x4]          ; 0056f77d | DAT_033081d0
    FSTP float ptr [EAX + 0x4]          ; 0056f780 | DAT_033081d0
    FLD float ptr [ECX + 0x8]           ; 0056f783 | DAT_032c1cd4 | DAT_032c1ce0
    FADD float ptr [EAX + 0x8]          ; 0056f786 | DAT_033081d4
    FSTP float ptr [EAX + 0x8]          ; 0056f789 | DAT_033081d4
    XOR EAX,EAX                         ; 0056f78c
    MOV AX,word ptr [EBX + 0x4]         ; 0056f78e
    IMUL EAX,EAX,0xc                    ; 0056f792
    ADD EAX,0x33081cc                   ; 0056f795 | g_VertexNormalArray
    FLD float ptr [ECX]                 ; 0056f79a | g_FaceNormalArray | DAT_032c1cd8
    FADD float ptr [EAX]                ; 0056f79c | g_VertexNormalArray
    ADD EBX,0x12                        ; 0056f79e
    FSTP float ptr [EAX]                ; 0056f7a1 | g_VertexNormalArray
    FLD float ptr [ECX + 0x4]           ; 0056f7a3 | DAT_032c1cd0 | DAT_032c1cdc
    FADD float ptr [EAX + 0x4]          ; 0056f7a6 | DAT_033081d0
    ADD ECX,0xc                         ; 0056f7a9
    FSTP float ptr [EAX + 0x4]          ; 0056f7ac | DAT_033081d0
    FLD float ptr [ECX + -0x4]          ; 0056f7af | DAT_032c1cd4 | DAT_032c1ce0
    FADD float ptr [EAX + 0x8]          ; 0056f7b2 | DAT_033081d4
    INC ESI                             ; 0056f7b5
    FSTP float ptr [EAX + 0x8]          ; 0056f7b6 | DAT_033081d4
    CMP ESI,EDI                         ; 0056f7b9
    JL 0x0056f741                       ; 0056f7bb
        ;   XREF to: 0056f741 (CONDITIONAL_JUMP)  ; LAB_0056f741
    JMP 0x0056f3a0                      ; 0056f7bd
        ;   XREF to: 0056f3a0 (UNCONDITIONAL_JUMP)  ; LAB_0056f3a0
    FLD float ptr [ESI + 0x4]           ; 0056f7c2 | DAT_033081d0 | DAT_033081dc
        ;   Label: LAB_0056f7c2
    FMUL ST0                            ; 0056f7c5
    FLD float ptr [ESI]                 ; 0056f7c7 | g_VertexNormalArray | DAT_033081d8
    FMUL ST0                            ; 0056f7c9
    FADDP                               ; 0056f7cb
    FLD float ptr [ESI + 0x8]           ; 0056f7cd | DAT_033081d4 | DAT_033081e0
    FMUL ST0                            ; 0056f7d0
    FADDP                               ; 0056f7d2
    FSTP float ptr [ESP + 0xf0]         ; 0056f7d4
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0056f7db
    MOV EDX,dword ptr [0x02d7a7bc]      ; 0056f7e2 | g_LightAttenuationMax
    SAR EAX,0x1                         ; 0056f7e8
    SUB EDX,EAX                         ; 0056f7ea
    MOV dword ptr [ESP + 0xf4],EDX      ; 0056f7ec
    FLD float ptr [ESP + 0xf4]          ; 0056f7f3
    FMUL double ptr [0x00645fd3]        ; 0056f7fa | DOUBLE_00645fd3
    FLD float ptr [ESI]                 ; 0056f800 | g_VertexNormalArray | DAT_033081d8
    FMUL ST1                            ; 0056f802
    FLD float ptr [ESI + 0x4]           ; 0056f804 | DAT_033081d0 | DAT_033081dc
    FMUL ST2                            ; 0056f807
    FLD float ptr [ESI + 0x8]           ; 0056f809 | DAT_033081d4 | DAT_033081e0
    FMULP ST3                           ; 0056f80c
    LEA EBX,[ESP + 0x84]                ; 0056f80e
    MOV EAX,ESI                         ; 0056f815
    FXCH                                ; 0056f817
    FSTP float ptr [ESI]                ; 0056f819 | g_VertexNormalArray | DAT_033081d8
    FSTP float ptr [ESI + 0x4]          ; 0056f81b | DAT_033081d0 | DAT_033081dc
    FSTP float ptr [ESI + 0x8]          ; 0056f81e | DAT_033081d4 | DAT_033081e0
    FLD float ptr [EAX]                 ; 0056f821 | g_VertexNormalArray | DAT_033081d8
    FISTP dword ptr [EBX]               ; 0056f823
    FLD float ptr [EAX + 0x4]           ; 0056f825 | DAT_033081d0 | DAT_033081dc
    FISTP dword ptr [EBX + 0x4]         ; 0056f828
    FLD float ptr [EAX + 0x8]           ; 0056f82b | DAT_033081d4 | DAT_033081e0
    FISTP dword ptr [EBX + 0x8]         ; 0056f82e
    PUSH 0x0                            ; 0056f831
    MOV EBX,dword ptr [ESP + 0x140]     ; 0056f833
    PUSH EBX                            ; 0056f83a
    LEA EAX,[ESP + 0x8c]                ; 0056f83b
    PUSH EAX                            ; 0056f842
    MOV ESI,dword ptr [ESP + 0x124]     ; 0056f843
    PUSH ESI                            ; 0056f84a | DAT_032cd858
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056f84b
    PUSH EAX                            ; 0056f84e
    JMP 0x0056f42f                      ; 0056f84f
        ;   XREF to: 0056f42f (UNCONDITIONAL_JUMP)  ; LAB_0056f42f
    CMP dword ptr [EBP + 0x18],0x0      ; 0056f854
        ;   Label: LAB_0056f854
    JLE 0x0056eb80                      ; 0056f858
        ;   XREF to: 0056eb80 (CONDITIONAL_JUMP)  ; LAB_0056eb80
    MOV EAX,0x32cd84c                   ; 0056f85e | g_TransformedVertexArray
    MOV ESI,0x33081cc                   ; 0056f863 | g_VertexNormalArray
    MOV dword ptr [ESP + 0x114],EDI     ; 0056f868
    MOV dword ptr [ESP + 0x110],EAX     ; 0056f86f | g_TransformedVertexArray
    FLD float ptr [ESI + 0x4]           ; 0056f876 | DAT_033081d0 | DAT_033081dc
        ;   Label: LAB_0056f876
    FMUL ST0                            ; 0056f879
    FLD float ptr [ESI]                 ; 0056f87b | g_VertexNormalArray | DAT_033081d8
    FMUL ST0                            ; 0056f87d
    FADDP                               ; 0056f87f
    FLD float ptr [ESI + 0x8]           ; 0056f881 | DAT_033081d4 | DAT_033081e0
    FMUL ST0                            ; 0056f884
    FADDP                               ; 0056f886
    FSTP float ptr [ESP + 0xfc]         ; 0056f888
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0056f88f
    MOV EDX,dword ptr [0x02d7a7bc]      ; 0056f896 | g_LightAttenuationMax
    SAR EAX,0x1                         ; 0056f89c
    SUB EDX,EAX                         ; 0056f89e
    MOV dword ptr [ESP + 0x100],EDX     ; 0056f8a0
    FLD float ptr [ESP + 0x100]         ; 0056f8a7
    FMUL double ptr [0x00645fd3]        ; 0056f8ae | DOUBLE_00645fd3
    FLD float ptr [ESI]                 ; 0056f8b4 | g_VertexNormalArray | DAT_033081d8
    FMUL ST1                            ; 0056f8b6
    FLD float ptr [ESI + 0x4]           ; 0056f8b8 | DAT_033081d0 | DAT_033081dc
    FMUL ST2                            ; 0056f8bb
    FLD float ptr [ESI + 0x8]           ; 0056f8bd | DAT_033081d4 | DAT_033081e0
    FMULP ST3                           ; 0056f8c0
    LEA EBX,[ESP + 0x78]                ; 0056f8c2
    MOV EAX,ESI                         ; 0056f8c6
    FXCH                                ; 0056f8c8
    FSTP float ptr [ESI]                ; 0056f8ca | g_VertexNormalArray | DAT_033081d8
    FSTP float ptr [ESI + 0x4]          ; 0056f8cc | DAT_033081d0 | DAT_033081dc
    FSTP float ptr [ESI + 0x8]          ; 0056f8cf | DAT_033081d4 | DAT_033081e0
    FLD float ptr [EAX]                 ; 0056f8d2 | g_VertexNormalArray | DAT_033081d8
    FISTP dword ptr [EBX]               ; 0056f8d4
    FLD float ptr [EAX + 0x4]           ; 0056f8d6 | DAT_033081d0 | DAT_033081dc
    FISTP dword ptr [EBX + 0x4]         ; 0056f8d9
    FLD float ptr [EAX + 0x8]           ; 0056f8dc | DAT_033081d4 | DAT_033081e0
    FISTP dword ptr [EBX + 0x8]         ; 0056f8df
    PUSH 0x0                            ; 0056f8e2
    PUSH EDI                            ; 0056f8e4
    LEA EAX,[ESP + 0x80]                ; 0056f8e5
    PUSH EAX                            ; 0056f8ec
    MOV EBX,dword ptr [ESP + 0x11c]     ; 0056f8ed | g_TransformedVertexArray
    PUSH EBX                            ; 0056f8f4 | g_TransformedVertexArray
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056f8f5
    PUSH EAX                            ; 0056f8f8
    ADD ESI,0xc                         ; 0056f8f9
    INC EDI                             ; 0056f8fc
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0 ; 0056f8fd
        ;   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 0056f902
    MOV EAX,[0x02d051f4]                ; 0056f905 | g_PerspectiveReciprocal
    MOV EDX,dword ptr [ESP + 0x114]     ; 0056f90a
    LEA ECX,[EBX + 0xc]                 ; 0056f911 | DAT_032cd858
    ADD EDX,0x30                        ; 0056f914
    MOV EBX,dword ptr [EBP + 0x18]      ; 0056f917
    MOV dword ptr [ESP + 0x110],ECX     ; 0056f91a | DAT_032cd858
    MOV dword ptr [EDX + 0x688010],EAX  ; 0056f921 | g_BackBuffer | g_RenderVertexBuffer[0].w_recip
    MOV dword ptr [ESP + 0x114],EDX     ; 0056f927
    CMP EDI,EBX                         ; 0056f92e
    JL 0x0056f876                       ; 0056f930
        ;   XREF to: 0056f876 (CONDITIONAL_JUMP)  ; LAB_0056f876
    MOV ESP,EBP                         ; 0056f936
    POP EBP                             ; 0056f938
    POP EDI                             ; 0056f939
    POP ESI                             ; 0056f93a
    POP EBX                             ; 0056f93b
    RET                                 ; 0056f93c

