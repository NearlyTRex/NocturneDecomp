; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10(CDemonCamera *this_ptr,CDemonLight *light_source,CRect *rect)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light_source
; CRect *          Stack[0xc]:4   rect
; Local Variables:
; void *[1523]     Stack[-0x185c]:6092  apvStackY_185c
; int              Stack[-0x80]:4  local_80
; int              Stack[-0x7c]:4  local_7c
; void *           Stack[-0x78]:4  local_78
; int              Stack[-0x74]:4  local_74
; CVector3i        Stack[-0x70]:12  local_70
; CVector3i        Stack[-0x64]:12  local_64
; int              Stack[-0x58]:4  local_58
; CVector3f *      Stack[-0x54]:4  local_54
; CVector3i *      Stack[-0x50]:4  local_50
; int              Stack[-0x4c]:4  local_4c
; void *           Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; CVector3i *      Stack[-0x30]:4  local_30
; void *           Stack[-0x2c]:4  local_2c
; float *          Stack[-0x28]:4  local_28
; int *            Stack[-0x24]:4  local_24
; int *            Stack[-0x20]:4  local_20
; undefined4 *     Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a893
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b6b1
;
; Referenced Globals:
;   TerminatedCString s_movscrn_raw_0061a0aa
;   TerminatedCString s_core_dcamera_cpp_0061a0b6
;   TerminatedCString s_CDemonCamera_precomputeL_0061a0ca
;   CVector3i[15360] g_PrecomputedWorldPositions
;   CVector3f[76800] g_PrecomputedSurfaceNormals
;   int g_LightBufferPoolIndex
;   char[25][307200] g_LightBufferPool
;   undefined4 g_LightBufferPool[24][0]
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
;   core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0
;   core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c__strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044de10
        ;   Label: core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10
    PUSH ESI                            ; 0044de11
    PUSH EDI                            ; 0044de12
    PUSH EBP                            ; 0044de13
    MOV EBP,ESP                         ; 0044de14
    SUB ESP,0x6c                        ; 0044de16
    AND ESP,0xfffffff8                  ; 0044de19
    MOV EBX,dword ptr [EBP + 0x18]      ; 0044de1c
    MOV EDX,0x80                        ; 0044de1f
    PUSH 0x61a0aa                       ; 0044de24 | = "movscrn.raw"
    LEA EAX,[EBX + 0x1c74]              ; 0044de29
    XOR ECX,ECX                         ; 0044de2f
    PUSH EAX                            ; 0044de31
    MOV dword ptr [ESP + 0x48],EDX      ; 0044de32
    MOV dword ptr [ESP + 0x4c],ECX      ; 0044de36
    CALL crt_string.c__strcmp_FUN_005fef20 ; 0044de3a
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0044de3f
    TEST EAX,EAX                        ; 0044de42
    JZ 0x0044e141                       ; 0044de44
        ;   XREF to: 0044e141 (CONDITIONAL_JUMP)  ; LAB_0044e141
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0044de4a
        ;   Label: LAB_0044de4a
    TEST EAX,EAX                        ; 0044de4d
    JNZ 0x0044de5b                      ; 0044de4f
        ;   XREF to: 0044de5b (CONDITIONAL_JUMP)  ; LAB_0044de5b
    MOV [0x01322208],EAX                ; 0044de51 | g_LightBufferPool[24][0]
    MOV [0x00c1a204],EAX                ; 0044de56 | g_LightBufferPoolIndex
    MOV ESI,dword ptr [0x00c1a204]      ; 0044de5b | g_LightBufferPoolIndex
        ;   Label: LAB_0044de5b
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044de61
    ADD EAX,ESI                         ; 0044de68
    SHL EAX,0xc                         ; 0044de6a
    MOV ESI,EAX                         ; 0044de6d
    SHL EAX,0x4                         ; 0044de6f
    SUB EAX,ESI                         ; 0044de72
    MOV ESI,dword ptr [0x00c1a204]      ; 0044de74 | g_LightBufferPoolIndex
    INC ESI                             ; 0044de7a
    ADD EAX,0xc1a208                    ; 0044de7b | g_LightBufferPool
    MOV dword ptr [0x00c1a204],ESI      ; 0044de80 | g_LightBufferPoolIndex
    CMP ESI,0x18                        ; 0044de86
    JBE 0x0044de8d                      ; 0044de89
        ;   XREF to: 0044de8d (CONDITIONAL_JUMP)  ; LAB_0044de8d
    XOR EAX,EAX                         ; 0044de8b
    MOV ESI,dword ptr [0x00c1a204]      ; 0044de8d | g_LightBufferPoolIndex
        ;   Label: LAB_0044de8d
    MOV dword ptr [EBX + 0x1c48],EAX    ; 0044de93
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044de99
    ADD EAX,ESI                         ; 0044dea0
    SHL EAX,0xc                         ; 0044dea2
    MOV EDX,dword ptr [0x00c1a204]      ; 0044dea5 | g_LightBufferPoolIndex
    MOV ESI,EAX                         ; 0044deab
    SHL EAX,0x4                         ; 0044dead
    INC EDX                             ; 0044deb0
    SUB EAX,ESI                         ; 0044deb1
    MOV dword ptr [0x00c1a204],EDX      ; 0044deb3 | g_LightBufferPoolIndex
    ADD EAX,0xc1a208                    ; 0044deb9 | g_LightBufferPool
    CMP EDX,0x18                        ; 0044debe
    JBE 0x0044dec5                      ; 0044dec1
        ;   XREF to: 0044dec5 (CONDITIONAL_JUMP)  ; LAB_0044dec5
    XOR EAX,EAX                         ; 0044dec3
    MOV ESI,dword ptr [0x00c1a204]      ; 0044dec5 | g_LightBufferPoolIndex
        ;   Label: LAB_0044dec5
    MOV dword ptr [EBX + 0x1c4c],EAX    ; 0044decb
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044ded1
    ADD EAX,ESI                         ; 0044ded8
    SHL EAX,0xc                         ; 0044deda
    MOV ESI,EAX                         ; 0044dedd
    SHL EAX,0x4                         ; 0044dedf
    SUB EAX,ESI                         ; 0044dee2
    MOV ESI,dword ptr [0x00c1a204]      ; 0044dee4 | g_LightBufferPoolIndex
    INC ESI                             ; 0044deea
    ADD EAX,0xc1a208                    ; 0044deeb | g_LightBufferPool
    MOV dword ptr [0x00c1a204],ESI      ; 0044def0 | g_LightBufferPoolIndex
    CMP ESI,0x18                        ; 0044def6
    JBE 0x0044defd                      ; 0044def9
        ;   XREF to: 0044defd (CONDITIONAL_JUMP)  ; LAB_0044defd
    XOR EAX,EAX                         ; 0044defb
    MOV dword ptr [EBX + 0x1c50],EAX    ; 0044defd
        ;   Label: LAB_0044defd
    CMP dword ptr [EBX + 0x1c48],0x0    ; 0044df03
    JNZ 0x0044e158                      ; 0044df0a
        ;   XREF to: 0044e158 (CONDITIONAL_JUMP)  ; LAB_0044e158
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044df10
        ;   Label: LAB_0044df10
    ADD EAX,0x40                        ; 0044df13
    PUSH EAX                            ; 0044df16
    MOV ESI,0x61a0b6                    ; 0044df17 | = "..\\core\\dcamera.cpp"
    MOV EDI,0x6ba                       ; 0044df1c
    PUSH 0x61a0ca                       ; 0044df21 | = "CDemonCamera::precomputeLight - Too m..."
    MOV dword ptr [0x02f0ca48],ESI      ; 0044df26 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0044df2c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044df32
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0044df37
    PUSH EBX                            ; 0044df3a
        ;   Label: LAB_0044df3a
    CALL core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0 ; 0044df3b
        ;   XREF to: 00475fc0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0044df40
    CMP dword ptr [EBP + 0x1c],0x0      ; 0044df43
    JNZ 0x0044e177                      ; 0044df47
        ;   XREF to: 0044e177 (CONDITIONAL_JUMP)  ; LAB_0044e177
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044df4d
        ;   Label: LAB_0044df4d
    MOV EAX,dword ptr [EAX + 0x150]     ; 0044df50
    DEC EAX                             ; 0044df56
    MOV dword ptr [ESP + 0x4],EAX       ; 0044df57
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044df5b
    XOR ESI,ESI                         ; 0044df5e
    MOV EAX,dword ptr [EAX + 0x154]     ; 0044df60
    MOV dword ptr [ESP + 0x8],ESI       ; 0044df66
    DEC EAX                             ; 0044df6a
    MOV dword ptr [ESP],ESI             ; 0044df6b
    MOV dword ptr [ESP + 0xc],EAX       ; 0044df6e
    LEA EAX,[EAX]                       ; 0044df72
    LEA EDX,[EDX]                       ; 0044df78
    MOV EAX,EAX                         ; 0044df7e
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044df80
        ;   Label: LAB_0044df80
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044df84
    MOV dword ptr [ESP + 0x54],EAX      ; 0044df88
    CMP EAX,EDX                         ; 0044df8c
    JG 0x0044e133                       ; 0044df8e
        ;   XREF to: 0044e133 (CONDITIONAL_JUMP)  ; LAB_0044e133
    MOV ESI,dword ptr [ESP]             ; 0044df94
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044df97
    SUB EAX,ESI                         ; 0044df9e
    SHL EAX,0x2                         ; 0044dfa0
    MOV dword ptr [ESP + 0x28],EAX      ; 0044dfa3
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044dfa7
    MOV ESI,dword ptr [ESP + 0x8]       ; 0044dfae
    MOV dword ptr [ESP + 0x34],EAX      ; 0044dfb2
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044dfb6
    ADD EAX,ESI                         ; 0044dfbd
    SHL EAX,0x8                         ; 0044dfbf
    SHL ESI,0x8                         ; 0044dfc2
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044dfc5
    MOV EAX,ESI                         ; 0044dfc9
    SHL EAX,0x4                         ; 0044dfcb
    SUB EAX,ESI                         ; 0044dfce
    MOV ESI,EAX                         ; 0044dfd0
    ADD EAX,0x902f74                    ; 0044dfd2 | g_PrecomputedWorldPositions
    MOV dword ptr [ESP + 0x30],EAX      ; 0044dfd7
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044dfdb
    SHL EAX,0x2                         ; 0044dfdf
    ADD ESI,0xac6d74                    ; 0044dfe2 | g_PrecomputedSurfaceNormals
    ADD EAX,EBX                         ; 0044dfe8
    MOV dword ptr [ESP + 0x2c],ESI      ; 0044dfea
    MOV dword ptr [ESP + 0x38],EAX      ; 0044dfee
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044dff2
        ;   Label: LAB_0044dff2
    MOV EDX,dword ptr [ESP + 0x28]      ; 0044dff6
    ADD EAX,EDX                         ; 0044dffa
    MOV ESI,0x3e7                       ; 0044dffc
    MOV dword ptr [ESP + 0x50],EAX      ; 0044e001
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044e005
    MOV dword ptr [ESP + 0x4c],ESI      ; 0044e009
    ADD EAX,EDX                         ; 0044e00d
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0044e00f
    MOV dword ptr [ESP + 0x58],EAX      ; 0044e013
    MOV EAX,dword ptr [EBX + 0x1c48]    ; 0044e017
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044e01d
    ADD EAX,ESI                         ; 0044e021
    ADD EDX,EAX                         ; 0044e023
    MOV dword ptr [ESP + 0x60],EDX      ; 0044e025
    MOV EAX,dword ptr [EBX + 0x1c4c]    ; 0044e029
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044e02f
    ADD EAX,ESI                         ; 0044e033
    MOV ECX,dword ptr [ESP + 0x4]       ; 0044e035
    ADD EDX,EAX                         ; 0044e039
    XOR EDI,EDI                         ; 0044e03b
    MOV dword ptr [ESP + 0x64],EDX      ; 0044e03d
    MOV EAX,dword ptr [EBX + 0x1c50]    ; 0044e041
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044e047
    ADD EAX,ESI                         ; 0044e04b
    MOV dword ptr [ESP + 0x48],EDI      ; 0044e04d
    ADD EDX,EAX                         ; 0044e051
    MOV EAX,dword ptr [ESP]             ; 0044e053
    MOV dword ptr [ESP + 0x5c],EDX      ; 0044e056
    MOV dword ptr [ESP + 0x68],EAX      ; 0044e05a
    CMP EAX,ECX                         ; 0044e05e
    JG 0x0044e0d5                       ; 0044e060
        ;   XREF to: 0044e0d5 (CONDITIONAL_JUMP)  ; LAB_0044e0d5
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044e062
        ;   Label: LAB_0044e062
    CMP EAX,0x1                         ; 0044e066
    JGE 0x0044e207                      ; 0044e069
        ;   XREF to: 0044e207 (CONDITIONAL_JUMP)  ; LAB_0044e207
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044e06f
        ;   Label: LAB_0044e06f
    MOV dword ptr [EAX],0x0             ; 0044e073
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044e079
    MOV dword ptr [EAX],0x0             ; 0044e07d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0044e083
    MOV dword ptr [EAX],0x0             ; 0044e087
        ;   Label: LAB_0044e087
    MOV ESI,dword ptr [ESP + 0x58]      ; 0044e08d
        ;   Label: LAB_0044e08d
    MOV EDI,dword ptr [ESP + 0x50]      ; 0044e091
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044e095
    MOV EDX,dword ptr [ESP + 0x64]      ; 0044e099
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0044e09d
    ADD ESI,0xc                         ; 0044e0a1
    ADD EDI,0xc                         ; 0044e0a4
    ADD EAX,0x4                         ; 0044e0a7
    ADD EDX,0x4                         ; 0044e0aa
    ADD ECX,0x4                         ; 0044e0ad
    MOV dword ptr [ESP + 0x58],ESI      ; 0044e0b0
    MOV dword ptr [ESP + 0x50],EDI      ; 0044e0b4
    MOV dword ptr [ESP + 0x60],EAX      ; 0044e0b8
    MOV dword ptr [ESP + 0x64],EDX      ; 0044e0bc
    MOV ESI,dword ptr [ESP + 0x68]      ; 0044e0c0
    MOV dword ptr [ESP + 0x5c],ECX      ; 0044e0c4
    INC ESI                             ; 0044e0c8
    MOV EDI,dword ptr [ESP + 0x4]       ; 0044e0c9
    MOV dword ptr [ESP + 0x68],ESI      ; 0044e0cd
    CMP ESI,EDI                         ; 0044e0d1
    JLE 0x0044e062                      ; 0044e0d3
        ;   XREF to: 0044e062 (CONDITIONAL_JUMP)  ; LAB_0044e062
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e0d5
        ;   Label: LAB_0044e0d5
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044e0d9
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0044e0dd
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044e0e1
    MOV EDI,dword ptr [ESP + 0x30]      ; 0044e0e5
    ADD ECX,0x500                       ; 0044e0e9
    ADD ESI,0xf00                       ; 0044e0ef
    ADD EDI,0xf00                       ; 0044e0f5
    MOV dword ptr [EDX + 0x14c8],EAX    ; 0044e0fb
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044e101
    MOV dword ptr [ESP + 0x3c],ECX      ; 0044e105
    MOV dword ptr [ESP + 0x2c],ESI      ; 0044e109
    MOV dword ptr [EDX + 0x1888],EAX    ; 0044e10d
    LEA EAX,[EDX + 0x4]                 ; 0044e113
    MOV dword ptr [ESP + 0x30],EDI      ; 0044e116
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044e11a
    MOV ECX,dword ptr [ESP + 0xc]       ; 0044e11e
    INC EDX                             ; 0044e122
    MOV dword ptr [ESP + 0x38],EAX      ; 0044e123
    MOV dword ptr [ESP + 0x54],EDX      ; 0044e127
    CMP EDX,ECX                         ; 0044e12b
    JLE 0x0044dff2                      ; 0044e12d
        ;   XREF to: 0044dff2 (CONDITIONAL_JUMP)  ; LAB_0044dff2
    MOV ESP,EBP                         ; 0044e133
        ;   Label: LAB_0044e133
    POP EBP                             ; 0044e135
    POP EDI                             ; 0044e136
    POP ESI                             ; 0044e137
    POP EBX                             ; 0044e138
    LEA EAX,[EAX]                       ; 0044e139
    NOP                                 ; 0044e13f
    RET                                 ; 0044e140
    MOV EDI,0x1                         ; 0044e141
        ;   Label: LAB_0044e141
    MOV ESI,0x100                       ; 0044e146
    MOV dword ptr [ESP + 0x44],EDI      ; 0044e14b
    MOV dword ptr [ESP + 0x40],ESI      ; 0044e14f
    JMP 0x0044de4a                      ; 0044e153
        ;   XREF to: 0044de4a (UNCONDITIONAL_JUMP)  ; LAB_0044de4a
    CMP dword ptr [EBX + 0x1c4c],0x0    ; 0044e158
        ;   Label: LAB_0044e158
    JZ 0x0044df10                       ; 0044e15f
        ;   XREF to: 0044df10 (CONDITIONAL_JUMP)  ; LAB_0044df10
    CMP dword ptr [EBX + 0x1c50],0x0    ; 0044e165
    JZ 0x0044df10                       ; 0044e16c
        ;   XREF to: 0044df10 (CONDITIONAL_JUMP)  ; LAB_0044df10
    JMP 0x0044df3a                      ; 0044e172
        ;   XREF to: 0044df3a (UNCONDITIONAL_JUMP)  ; LAB_0044df3a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e177
        ;   Label: LAB_0044e177
    CMP dword ptr [EAX + 0x148],0x1e0   ; 0044e17a
    JNZ 0x0044df4d                      ; 0044e184
        ;   XREF to: 0044df4d (CONDITIONAL_JUMP)  ; LAB_0044df4d
    MOV EDI,ESP                         ; 0044e18a
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0044e18c
    MOVSD ES:EDI,ESI                    ; 0044e18f
    MOVSD ES:EDI,ESI                    ; 0044e190
    MOVSD ES:EDI,ESI                    ; 0044e191
    MOVSD ES:EDI,ESI                    ; 0044e192
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044e193
    XOR ESI,ESI                         ; 0044e197
    TEST ECX,ECX                        ; 0044e199
    JLE 0x0044e1c0                      ; 0044e19b
        ;   XREF to: 0044e1c0 (CONDITIONAL_JUMP)  ; LAB_0044e1c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044e19d
    MOV EAX,EBX                         ; 0044e1a1
    ADD EAX,0x4                         ; 0044e1a3
        ;   Label: LAB_0044e1a3
    MOV dword ptr [EAX + 0x14c4],0x3e7  ; 0044e1a6
    INC ESI                             ; 0044e1b0
    MOV dword ptr [EAX + 0x1884],0x0    ; 0044e1b1
    CMP ESI,EDX                         ; 0044e1bb
    JL 0x0044e1a3                       ; 0044e1bd
        ;   XREF to: 0044e1a3 (CONDITIONAL_JUMP)  ; LAB_0044e1a3
    NOP                                 ; 0044e1bf
    MOV ESI,dword ptr [ESP + 0xc]       ; 0044e1c0
        ;   Label: LAB_0044e1c0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e1c4
    INC ESI                             ; 0044e1c7
    CMP ESI,dword ptr [EAX + 0x154]     ; 0044e1c8
    JGE 0x0044df80                      ; 0044e1ce
        ;   XREF to: 0044df80 (CONDITIONAL_JUMP)  ; LAB_0044df80
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044e1d4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044e1db
    ADD EAX,EBX                         ; 0044e1de
    MOV dword ptr [EAX + 0x14c8],0x3e7  ; 0044e1e0
        ;   Label: LAB_0044e1e0
    MOV dword ptr [EAX + 0x1888],0x0    ; 0044e1ea
    INC ESI                             ; 0044e1f4
    MOV EDI,dword ptr [EDX + 0x154]     ; 0044e1f5
    ADD EAX,0x4                         ; 0044e1fb
    CMP ESI,EDI                         ; 0044e1fe
    JL 0x0044e1e0                       ; 0044e200
        ;   XREF to: 0044e1e0 (CONDITIONAL_JUMP)  ; LAB_0044e1e0
    JMP 0x0044df80                      ; 0044e202
        ;   XREF to: 0044df80 (UNCONDITIONAL_JUMP)  ; LAB_0044df80
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044e207
        ;   Label: LAB_0044e207
    CMP EDX,0x1                         ; 0044e20b
    JL 0x0044e06f                       ; 0044e20e
        ;   XREF to: 0044e06f (CONDITIONAL_JUMP)  ; LAB_0044e06f
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044e214
    IMUL EAX,dword ptr [ESI + 0x14c]    ; 0044e217
    MOV ESI,dword ptr [ESI + 0x144]     ; 0044e21e
    SUB ESI,0x2                         ; 0044e224
    CMP EAX,ESI                         ; 0044e227
    JG 0x0044e06f                       ; 0044e229
        ;   XREF to: 0044e06f (CONDITIONAL_JUMP)  ; LAB_0044e06f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e22f
    MOV ESI,EDX                         ; 0044e232
    IMUL ESI,dword ptr [EAX + 0x14c]    ; 0044e234
    MOV EAX,dword ptr [EAX + 0x148]     ; 0044e23b
    SUB EAX,0x2                         ; 0044e241
    CMP ESI,EAX                         ; 0044e244
    JG 0x0044e06f                       ; 0044e246
        ;   XREF to: 0044e06f (CONDITIONAL_JUMP)  ; LAB_0044e06f
    CMP dword ptr [ESP + 0x44],0x0      ; 0044e24c
    JZ 0x0044e313                       ; 0044e251
        ;   XREF to: 0044e313 (CONDITIONAL_JUMP)  ; LAB_0044e313
    MOV EDX,dword ptr [ESP + 0x50]      ; 0044e257
        ;   Label: LAB_0044e257
    PUSH EDX                            ; 0044e25b
    PUSH EBX                            ; 0044e25c
    LEA ESI,[ESP + 0x18]                ; 0044e25d
    LEA EDI,[ESP + 0x24]                ; 0044e261
    CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0 ; 0044e265
        ;   XREF to: 0044d7d0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x18]                ; 0044e26a
    ADD ESP,0x8                         ; 0044e26e
    MOVSD ES:EDI,ESI                    ; 0044e271
    MOVSD ES:EDI,ESI                    ; 0044e272
    MOVSD ES:EDI,ESI                    ; 0044e273
    MOV ECX,dword ptr [ESP + 0x24]      ; 0044e274
    TEST ECX,ECX                        ; 0044e278
    JLE 0x0044e06f                      ; 0044e27a
        ;   XREF to: 0044e06f (CONDITIONAL_JUMP)  ; LAB_0044e06f
    MOV ESI,dword ptr [ESP + 0x40]      ; 0044e280
    MOV EAX,ECX                         ; 0044e284
    MOV EDI,dword ptr [ESP + 0x54]      ; 0044e286
    SUB EAX,ESI                         ; 0044e28a
    MOV ESI,dword ptr [ESP + 0x60]      ; 0044e28c
    PUSH EDI                            ; 0044e290
    MOV dword ptr [ESI],EAX             ; 0044e291
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044e293
    PUSH EAX                            ; 0044e297
    LEA EAX,[ESP + 0x24]                ; 0044e298
    PUSH EAX                            ; 0044e29c
    PUSH EBX                            ; 0044e29d
    CALL core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270 ; 0044e29e
        ;   XREF to: 00473270 (UNCONDITIONAL_CALL)  ; ushort * core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270(CDemonLight * this_ptr, CVector3i * projected_coord, uchar x_round_flag, uchar y_round_flag)
    ADD ESP,0x10                        ; 0044e2a3
    MOV ESI,dword ptr [ESP + 0x64]      ; 0044e2a6
    MOV dword ptr [ESI],EAX             ; 0044e2aa
    TEST EAX,EAX                        ; 0044e2ac
    JZ 0x0044e33e                       ; 0044e2ae
        ;   XREF to: 0044e33e (CONDITIONAL_JUMP)  ; LAB_0044e33e
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0044e2b4
    MOV CL,byte ptr [EBX + 0x1cc8]      ; 0044e2b8
    SAR ESI,CL                          ; 0044e2be
    MOV ECX,dword ptr [EBX + 0x1c68]    ; 0044e2c0
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044e2c6
    AND ESI,ECX                         ; 0044e2ca
    MOV CL,byte ptr [EBX + 0x1ccc]      ; 0044e2cc
    MOV EDI,dword ptr [EBX + 0x1c68]    ; 0044e2d2
    SAR EAX,CL                          ; 0044e2d8
    MOV CL,byte ptr [EBX + 0x1c60]      ; 0044e2da
    AND EAX,EDI                         ; 0044e2e0
    SHL EAX,CL                          ; 0044e2e2
    ADD EAX,ESI                         ; 0044e2e4
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0044e2e6
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044e2ea
    MOV dword ptr [ESI],EAX             ; 0044e2ee
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044e2f0
    CMP EAX,EDX                         ; 0044e2f4
    JLE 0x0044e2fc                      ; 0044e2f6
        ;   XREF to: 0044e2fc (CONDITIONAL_JUMP)  ; LAB_0044e2fc
    MOV dword ptr [ESP + 0x48],EAX      ; 0044e2f8
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044e2fc
        ;   Label: LAB_0044e2fc
    CMP EAX,dword ptr [ESP + 0x4c]      ; 0044e300
    JGE 0x0044e08d                      ; 0044e304
        ;   XREF to: 0044e08d (CONDITIONAL_JUMP)  ; LAB_0044e08d
    MOV dword ptr [ESP + 0x4c],EAX      ; 0044e30a
    JMP 0x0044e08d                      ; 0044e30e
        ;   XREF to: 0044e08d (UNCONDITIONAL_JUMP)  ; LAB_0044e08d
    MOV EAX,dword ptr [ESP + 0x58]      ; 0044e313
        ;   Label: LAB_0044e313
    FLD float ptr [EAX + 0x4]           ; 0044e317
    FMUL float ptr [EBX + 0x24]         ; 0044e31a
    FLD float ptr [EAX]                 ; 0044e31d
    FMUL float ptr [EBX + 0x18]         ; 0044e31f
    FADDP                               ; 0044e322
    FLD float ptr [EAX + 0x8]           ; 0044e324
    FMUL float ptr [EBX + 0x30]         ; 0044e327
    FADDP                               ; 0044e32a
    FLDZ                                ; 0044e32c
    FCOMPP                              ; 0044e32e
    FNSTSW AX                           ; 0044e330
    SAHF                                ; 0044e332
    JBE 0x0044e257                      ; 0044e333
        ;   XREF to: 0044e257 (CONDITIONAL_JUMP)  ; LAB_0044e257
    JMP 0x0044e06f                      ; 0044e339
        ;   XREF to: 0044e06f (UNCONDITIONAL_JUMP)  ; LAB_0044e06f
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044e33e
        ;   Label: LAB_0044e33e
    MOV dword ptr [EAX],0x0             ; 0044e342
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0044e348
    MOV dword ptr [ESI],0x0             ; 0044e34c
    JMP 0x0044e087                      ; 0044e352
        ;   XREF to: 0044e087 (UNCONDITIONAL_JUMP)  ; LAB_0044e087

