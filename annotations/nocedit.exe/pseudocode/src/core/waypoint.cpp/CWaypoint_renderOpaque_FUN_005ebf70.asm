; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_waypoint_cpp_CWaypoint_renderOpaque_FUN_005ebf70(CWayPoint *this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0xac]:24  CStack_ac
; CBoundingBox3D   Stack[-0x94]:24  local_94
; CVector3i        Stack[-0x7c]:12  CStack_7c
; CVector3i        Stack[-0x70]:12  CStack_70
; CVector3f        Stack[-0x64]:12  CStack_64
; CVector3f        Stack[-0x58]:12  CStack_58
; float            Stack[-0x4c]:4  fStack_4c
; float            Stack[-0x48]:4  fStack_48
; float            Stack[-0x44]:4  fStack_44
; CVector3f        Stack[-0x40]:12  CStack_40
; float            Stack[-0x34]:4  fStack_34
; float            Stack[-0x30]:4  fStack_30
; float            Stack[-0x2c]:4  fStack_2c
; CVector3f        Stack[-0x28]:12  CStack_28
; int              Stack[-0x1c]:4  iStack_1c
; int              Stack[-0x18]:4  iStack_18
; CWayPoint *      Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   float FLOAT_00657583 = 0.5
;   float FLOAT_00665460 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ActiveRenderColor
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;   undefined4 DAT_02f33768
;   undefined4 DAT_02f33780
;   undefined4 g_CWayPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_path.cpp_CPathMap_renderPathMap_FUN_00547fc0
;   core_path.cpp_CPathMap_setupPathSearch_FUN_00548750
;   core_path.cpp_getPathMap_FUN_00548500
;   engine_3d.c_drawLine2DFromIndices_FUN_00407cf0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ebf70
        ;   Label: core_waypoint.cpp_CWaypoint_renderOpaque_FUN_005ebf70
    PUSH ESI                            ; 005ebf71
    PUSH EDI                            ; 005ebf72
    PUSH EBP                            ; 005ebf73
    SUB ESP,0x9c                        ; 005ebf74
    MOV ESI,dword ptr [ESP + 0xb0]      ; 005ebf7a
    MOV EAX,[0x0067d550]                ; 005ebf81 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 005ebf86 | DAT_02f33744
    JNZ 0x005ebf99                      ; 005ebf8a
        ;   XREF to: 005ebf99 (CONDITIONAL_JUMP)  ; LAB_005ebf99
    XOR EAX,EAX                         ; 005ebf8c
        ;   Label: LAB_005ebf8c
    ADD ESP,0x9c                        ; 005ebf8e
        ;   Label: LAB_005ebf8e
    POP EBP                             ; 005ebf94
    POP EDI                             ; 005ebf95
    POP ESI                             ; 005ebf96
    POP EBX                             ; 005ebf97
    RET                                 ; 005ebf98
    MOV ECX,dword ptr [0x006703ec]      ; 005ebf99 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_005ebf99
    PUSH ECX                            ; 005ebf9f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005ebfa0
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005ebfa5
    TEST EAX,EAX                        ; 005ebfa8
    JNZ 0x005ebf8c                      ; 005ebfaa
        ;   XREF to: 005ebf8c (CONDITIONAL_JUMP)  ; LAB_005ebf8c
    MOV EBX,dword ptr [0x03f9591c]      ; 005ebfac | g_CWayPointClassInfo.name_hash
    MOV EAX,[0x0067d550]                ; 005ebfb2 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EBX                            ; 005ebfb7
    MOV EDI,dword ptr [EAX + 0x28]      ; 005ebfb8 | DAT_02f33768
    PUSH EDI                            ; 005ebfbb
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005ebfbc
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005ebfc1
    MOV dword ptr [ESP + 0x98],EAX      ; 005ebfc4
    TEST EAX,EAX                        ; 005ebfcb
    JZ 0x005ebf8e                       ; 005ebfcd
        ;   XREF to: 005ebf8e (CONDITIONAL_JUMP)  ; LAB_005ebf8e
    PUSH 0x3                            ; 005ebfcf
    PUSH ESI                            ; 005ebfd1
    CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 ; 005ebfd2
        ;   XREF to: 0040d940 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
    ADD ESP,0x8                         ; 005ebfd7
    PUSH ESI                            ; 005ebfda
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005ebfdb
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005ebfe0
    LEA EDX,[ESP + 0x18]                ; 005ebfe3
    PUSH EDX                            ; 005ebfe7
    MOV EAX,dword ptr [ESI + 0x154]     ; 005ebfe8
    PUSH ESI                            ; 005ebfee
    CALL dword ptr [EAX + 0x14]         ; 005ebfef
    LEA EDX,[EAX + 0xc]                 ; 005ebff2
    FLD float ptr [EAX]                 ; 005ebff5
    FADD float ptr [EDX]                ; 005ebff7
    ADD ESP,0x8                         ; 005ebff9
    FST float ptr [ESP + 0x60]          ; 005ebffc
    FLD float ptr [EAX + 0x4]           ; 005ec000
    FADD float ptr [EDX + 0x4]          ; 005ec003
    FXCH                                ; 005ec006
    FLD float ptr [0x00657583]          ; 005ec008 | FLOAT_00657583
    FXCH                                ; 005ec00e
    FMUL ST1                            ; 005ec010
    FXCH ST2                            ; 005ec012
    FST float ptr [ESP + 0x64]          ; 005ec014
    FLD float ptr [EAX + 0x8]           ; 005ec018
    FADD float ptr [EDX + 0x8]          ; 005ec01b
    FXCH                                ; 005ec01e
    FMUL ST2                            ; 005ec020
    FXCH                                ; 005ec022
    FST float ptr [ESP + 0x68]          ; 005ec024
    FMULP ST2                           ; 005ec028
    LEA EBX,[ESP + 0x3c]                ; 005ec02a
    LEA EAX,[ESP + 0x48]                ; 005ec02e
    FXCH ST2                            ; 005ec032
    FSTP float ptr [ESP + 0x48]         ; 005ec034
    FXCH                                ; 005ec038
    FSTP float ptr [ESP + 0x4c]         ; 005ec03a
    MOV EDX,dword ptr [0x006703ec]      ; 005ec03e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FSTP float ptr [ESP + 0x50]         ; 005ec044
    FLD float ptr [EAX]                 ; 005ec048
    FMUL float ptr [0x00665460]         ; 005ec04a | FLOAT_00665460
    FISTP dword ptr [EBX]               ; 005ec050
    FLD float ptr [EAX + 0x4]           ; 005ec052
    FMUL float ptr [0x00665460]         ; 005ec055 | FLOAT_00665460
    FISTP dword ptr [EBX + 0x4]         ; 005ec05b
    FLD float ptr [EAX + 0x8]           ; 005ec05e
    FMUL float ptr [0x00665460]         ; 005ec061 | FLOAT_00665460
    FISTP dword ptr [EBX + 0x8]         ; 005ec067
    LEA EAX,[ESP + 0x3c]                ; 005ec06a
    PUSH EAX                            ; 005ec06e
    MOV EAX,dword ptr [EDX]             ; 005ec06f | g_CDemonRendererInstance
    PUSH EAX                            ; 005ec071
    XOR EDI,EDI                         ; 005ec072
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ec074
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EBP,dword ptr [ESI + 0x370]     ; 005ec079
    ADD ESP,0x8                         ; 005ec07f
    TEST EBP,EBP                        ; 005ec082
    JLE 0x005ec0a4                      ; 005ec084
        ;   XREF to: 005ec0a4 (CONDITIONAL_JUMP)  ; LAB_005ec0a4
    MOV EBP,ESI                         ; 005ec086
    MOV EBX,dword ptr [EBP + 0x374]     ; 005ec088
        ;   Label: LAB_005ec088
    CMP EBX,ESI                         ; 005ec08e
    JNC 0x005ec14d                      ; 005ec090
        ;   XREF to: 005ec14d (CONDITIONAL_JUMP)  ; LAB_005ec14d
    INC EDI                             ; 005ec096
        ;   Label: LAB_005ec096
    MOV EAX,dword ptr [ESI + 0x370]     ; 005ec097
    ADD EBP,0x8                         ; 005ec09d
    CMP EDI,EAX                         ; 005ec0a0
    JL 0x005ec088                       ; 005ec0a2
        ;   XREF to: 005ec088 (CONDITIONAL_JUMP)  ; LAB_005ec088
    PUSH ESI                            ; 005ec0a4
        ;   Label: LAB_005ec0a4
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005ec0a5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ec0aa
    MOV EDX,dword ptr [ESP + 0x98]      ; 005ec0ad
    TEST EDX,EDX                        ; 005ec0b4
    JZ 0x005ebf8c                       ; 005ec0b6
        ;   XREF to: 005ebf8c (CONDITIONAL_JUMP)  ; LAB_005ebf8c
    MOV EAX,[0x0067d550]                ; 005ec0bc | g_CDemonMissionInstance | g_CDemonMissionPtr
    MOV ECX,dword ptr [EAX + 0x40]      ; 005ec0c1 | DAT_02f33780
    TEST ECX,ECX                        ; 005ec0c4
    JZ 0x005ebf8c                       ; 005ec0c6
        ;   XREF to: 005ebf8c (CONDITIONAL_JUMP)  ; LAB_005ebf8c
    CMP ESI,EDX                         ; 005ec0cc
    JNZ 0x005ec268                      ; 005ec0ce
        ;   XREF to: 005ec268 (CONDITIONAL_JUMP)  ; LAB_005ec268
    MOV EBP,0xff                        ; 005ec0d4
        ;   Label: LAB_005ec0d4
    MOV EDX,dword ptr [ESP + 0x98]      ; 005ec0d9
    MOV EDI,EBP                         ; 005ec0e0
    MOV dword ptr [ESP + 0x90],EBP      ; 005ec0e2
    MOV dword ptr [ESP + 0x94],EBP      ; 005ec0e9
    MOV EBP,0x40                        ; 005ec0f0
    CMP ESI,EDX                         ; 005ec0f5
    JNZ 0x005ec10e                      ; 005ec0f7
        ;   XREF to: 005ec10e (CONDITIONAL_JUMP)  ; LAB_005ec10e
    XOR ECX,ECX                         ; 005ec0f9
    MOV EBP,0x80                        ; 005ec0fb
    MOV dword ptr [ESP + 0x90],ECX      ; 005ec100
    MOV dword ptr [ESP + 0x94],ECX      ; 005ec107
    ADD ESI,0x20                        ; 005ec10e
        ;   Label: LAB_005ec10e
    PUSH ESI                            ; 005ec111
    CALL core_path.cpp_getPathMap_FUN_00548500 ; 005ec112
        ;   XREF to: 00548500 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00548500(CLocation * location)
    ADD ESP,0x4                         ; 005ec117
    PUSH EAX                            ; 005ec11a
    MOV EBX,EAX                         ; 005ec11b
    CALL core_path.cpp_CPathMap_setupPathSearch_FUN_00548750 ; 005ec11d
        ;   XREF to: 00548750 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_setupPathSearch_FUN_00548750(CPathMap * this_ptr)
    ADD ESP,0x4                         ; 005ec122
    PUSH EBP                            ; 005ec125
    MOV ESI,dword ptr [ESP + 0x94]      ; 005ec126
    PUSH ESI                            ; 005ec12d
    PUSH EDI                            ; 005ec12e
    MOV EDI,dword ptr [ESP + 0xa0]      ; 005ec12f
    PUSH EDI                            ; 005ec136
    PUSH EBX                            ; 005ec137
    CALL core_path.cpp_CPathMap_renderPathMap_FUN_00547fc0 ; 005ec138
        ;   XREF to: 00547fc0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_renderPathMap_FUN_00547fc0(CPathMap * this_ptr, int depth, int red, int green, ...)
    ADD ESP,0x14                        ; 005ec13d
    XOR EAX,EAX                         ; 005ec140
    ADD ESP,0x9c                        ; 005ec142
    POP EBP                             ; 005ec148
    POP EDI                             ; 005ec149
    POP ESI                             ; 005ec14a
    POP EBX                             ; 005ec14b
    RET                                 ; 005ec14c
    MOV EAX,0x2                         ; 005ec14d
        ;   Label: LAB_005ec14d
    MOV EDX,dword ptr [ESP + 0x98]      ; 005ec152
    MOV [0x02d02570],EAX                ; 005ec159 | g_ActiveRenderColor
    CMP ESI,EDX                         ; 005ec15e
    JNZ 0x005ec25b                      ; 005ec160
        ;   XREF to: 005ec25b (CONDITIONAL_JUMP)  ; LAB_005ec25b
    MOV dword ptr [0x02d02570],0xfa     ; 005ec166 | g_ActiveRenderColor
        ;   Label: LAB_005ec166
    MOV EDX,ESP                         ; 005ec170
        ;   Label: LAB_005ec170
    PUSH EDX                            ; 005ec172
    MOV EAX,dword ptr [EBX + 0x154]     ; 005ec173
    PUSH EBX                            ; 005ec179
    CALL dword ptr [EAX + 0x14]         ; 005ec17a
    LEA EDX,[EAX + 0xc]                 ; 005ec17d
    FLD float ptr [EAX]                 ; 005ec180
    FADD float ptr [EDX]                ; 005ec182
    ADD ESP,0x8                         ; 005ec184
    FST float ptr [ESP + 0x78]          ; 005ec187
    FLD float ptr [EAX + 0x4]           ; 005ec18b
    FADD float ptr [EDX + 0x4]          ; 005ec18e
    FXCH                                ; 005ec191
    FLD float ptr [0x00657583]          ; 005ec193 | FLOAT_00657583
    FXCH                                ; 005ec199
    FMUL ST1                            ; 005ec19b
    FXCH ST2                            ; 005ec19d
    FST float ptr [ESP + 0x7c]          ; 005ec19f
    FMUL ST1                            ; 005ec1a3
    FLD float ptr [EAX + 0x8]           ; 005ec1a5
    FADD float ptr [EDX + 0x8]          ; 005ec1a8
    LEA EAX,[ESP + 0x54]                ; 005ec1ab
    FST float ptr [ESP + 0x80]          ; 005ec1af
    FMULP ST2                           ; 005ec1b6
    PUSH EAX                            ; 005ec1b8
    LEA EAX,[ESP + 0x88]                ; 005ec1b9
    FXCH ST2                            ; 005ec1c0
    FSTP float ptr [ESP + 0x58]         ; 005ec1c2
    PUSH EAX                            ; 005ec1c6
    FXCH                                ; 005ec1c7
    FSTP float ptr [ESP + 0x60]         ; 005ec1c9
    PUSH EBX                            ; 005ec1cd
    FSTP float ptr [ESP + 0x68]         ; 005ec1ce
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005ec1d2
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005ec1d7
    PUSH EAX                            ; 005ec1da
    LEA EAX,[ESP + 0x70]                ; 005ec1db
    PUSH EAX                            ; 005ec1df
    PUSH ESI                            ; 005ec1e0
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005ec1e1
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EBX,EAX                         ; 005ec1e6
    LEA EAX,[ESP + 0x54]                ; 005ec1e8
    ADD ESP,0xc                         ; 005ec1ec
    CMP EAX,EBX                         ; 005ec1ef
    JZ 0x005ec207                       ; 005ec1f1
        ;   XREF to: 005ec207 (CONDITIONAL_JUMP)  ; LAB_005ec207
    MOV EAX,dword ptr [EBX]             ; 005ec1f3
    MOV dword ptr [ESP + 0x48],EAX      ; 005ec1f5
    MOV EAX,dword ptr [EBX + 0x4]       ; 005ec1f9
    MOV dword ptr [ESP + 0x4c],EAX      ; 005ec1fc
    MOV EAX,dword ptr [EBX + 0x8]       ; 005ec200
    MOV dword ptr [ESP + 0x50],EAX      ; 005ec203
    LEA EBX,[ESP + 0x30]                ; 005ec207
        ;   Label: LAB_005ec207
    LEA EAX,[ESP + 0x48]                ; 005ec20b
    MOV EDX,dword ptr [0x006703ec]      ; 005ec20f | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ec215
    FMUL float ptr [0x00665460]         ; 005ec217 | FLOAT_00665460
    FISTP dword ptr [EBX]               ; 005ec21d
    FLD float ptr [EAX + 0x4]           ; 005ec21f
    FMUL float ptr [0x00665460]         ; 005ec222 | FLOAT_00665460
    FISTP dword ptr [EBX + 0x4]         ; 005ec228
    FLD float ptr [EAX + 0x8]           ; 005ec22b
    FMUL float ptr [0x00665460]         ; 005ec22e | FLOAT_00665460
    FISTP dword ptr [EBX + 0x8]         ; 005ec234
    LEA EAX,[ESP + 0x30]                ; 005ec237
    PUSH EAX                            ; 005ec23b
    MOV EAX,dword ptr [EDX]             ; 005ec23c | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 005ec23e
    PUSH EAX                            ; 005ec241
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ec242
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ec247
    PUSH 0x1                            ; 005ec24a
    PUSH 0x0                            ; 005ec24c
    CALL engine_3d.c_drawLine2DFromIndices_FUN_00407cf0 ; 005ec24e
        ;   XREF to: 00407cf0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_drawLine2DFromIndices_FUN_00407cf0(int vertex_index1, int vertex_index2)
    ADD ESP,0x8                         ; 005ec253
    JMP 0x005ec096                      ; 005ec256
        ;   XREF to: 005ec096 (UNCONDITIONAL_JUMP)  ; LAB_005ec096
    CMP EBX,EDX                         ; 005ec25b
        ;   Label: LAB_005ec25b
    JZ 0x005ec166                       ; 005ec25d
        ;   XREF to: 005ec166 (CONDITIONAL_JUMP)  ; LAB_005ec166
    JMP 0x005ec170                      ; 005ec263
        ;   XREF to: 005ec170 (UNCONDITIONAL_JUMP)  ; LAB_005ec170
    CMP ECX,0x2                         ; 005ec268
        ;   Label: LAB_005ec268
    JZ 0x005ec0d4                       ; 005ec26b
        ;   XREF to: 005ec0d4 (CONDITIONAL_JUMP)  ; LAB_005ec0d4
    XOR EAX,EAX                         ; 005ec271
    ADD ESP,0x9c                        ; 005ec273
    POP EBP                             ; 005ec279
    POP EDI                             ; 005ec27a
    POP ESI                             ; 005ec27b
    POP EBX                             ; 005ec27c
    RET                                 ; 005ec27d

