; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 at 00516dd7
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0 at 0051b8f9
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_006376c3
;   TerminatedCString s_Can_t_call_LodMesh_creat_006376d8
;   TerminatedCString s_shape_meshlod_cpp_00637724
;   TerminatedCString s_shape_meshlod_cpp_00637739
;   TerminatedCString s_Out_of_memory_0063774e
;   TerminatedCString s_shape_meshlod_cpp_0063775d
;   TerminatedCString s_Bug_00637772
;   float FLOAT_00637779 = 0.5
;   float FLOAT_0063777d = 2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;   shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870
;   shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517000
        ;   Label: shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000
    PUSH ESI                            ; 00517001
    PUSH EDI                            ; 00517002
    PUSH EBP                            ; 00517003
    SUB ESP,0x40                        ; 00517004
    MOV EBX,dword ptr [ESP + 0x54]      ; 00517007
    CMP dword ptr [EBX + 0x34],0x0      ; 0051700b
    JZ 0x0051711a                       ; 0051700f
        ;   XREF to: 0051711a (CONDITIONAL_JUMP)  ; LAB_0051711a
    MOV EAX,dword ptr [EBX + 0x34]      ; 00517015
        ;   Label: LAB_00517015
    MOV EDX,dword ptr [EAX]             ; 00517018
    MOV EDI,dword ptr [EAX + 0x44]      ; 0051701a
    MOV EAX,dword ptr [EAX + 0x8]       ; 0051701d
    ADD EDX,EDI                         ; 00517020
    ADD EDX,EAX                         ; 00517022
    MOV ESI,EDX                         ; 00517024
    MOV dword ptr [EBX + 0x5c],EDX      ; 00517026
    LEA EAX,[EDX*0x4 + 0x0]             ; 00517029
    MOV EDX,EAX                         ; 00517030
    SHL EAX,0x3                         ; 00517032
    PUSH 0x577                          ; 00517035
    SUB EAX,EDX                         ; 0051703a
    PUSH 0x637724                       ; 0051703c | = "..\\shape\\meshlod.cpp"
    ADD EAX,0x4                         ; 00517041
    PUSH EAX                            ; 00517044
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00517045
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0051704a
    TEST EAX,EAX                        ; 0051704d
    JZ 0x00517057                       ; 0051704f
        ;   XREF to: 00517057 (CONDITIONAL_JUMP)  ; LAB_00517057
    ADD EAX,0x4                         ; 00517051
    MOV dword ptr [EAX + -0x4],ESI      ; 00517054
    MOV dword ptr [EBX + 0x60],EAX      ; 00517057
        ;   Label: LAB_00517057
    TEST EAX,EAX                        ; 0051705a
    JZ 0x00517142                       ; 0051705c
        ;   XREF to: 00517142 (CONDITIONAL_JUMP)  ; LAB_00517142
    XOR ESI,ESI                         ; 00517062
        ;   Label: LAB_00517062
    XOR EBP,EBP                         ; 00517064
    MOV dword ptr [ESP + 0x38],ESI      ; 00517066
    MOV dword ptr [ESP + 0x2c],ESI      ; 0051706a
    MOV EAX,dword ptr [EBX + 0x34]      ; 0051706e
        ;   Label: LAB_0051706e
    MOV EDX,dword ptr [ESP + 0x38]      ; 00517071
    CMP EDX,dword ptr [EAX]             ; 00517075
    JL 0x00517169                       ; 00517077
        ;   XREF to: 00517169 (CONDITIONAL_JUMP)  ; LAB_00517169
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051707d
    MOV EDX,EAX                         ; 00517084
    SHL EAX,0x3                         ; 00517086
    XOR EBP,EBP                         ; 00517089
    SUB EAX,EDX                         ; 0051708b
    MOV dword ptr [ESP + 0x28],EBP      ; 0051708d
    MOV dword ptr [ESP + 0x30],EAX      ; 00517091
        ;   Label: LAB_00517091
    MOV EAX,dword ptr [EBX + 0x34]      ; 00517095
    CMP EBP,dword ptr [EAX + 0x44]      ; 00517098
    JL 0x005171bc                       ; 0051709b
        ;   XREF to: 005171bc (CONDITIONAL_JUMP)  ; LAB_005171bc
    LEA EAX,[ESI*0x4 + 0x0]             ; 005170a1
    XOR ECX,ECX                         ; 005170a8
    MOV EDX,EAX                         ; 005170aa
    SHL EAX,0x3                         ; 005170ac
    XOR EBP,EBP                         ; 005170af
    SUB EAX,EDX                         ; 005170b1
    MOV dword ptr [ESP + 0x34],ECX      ; 005170b3
    MOV dword ptr [ESP + 0x24],EAX      ; 005170b7
        ;   Label: LAB_005170b7
    MOV EAX,dword ptr [EBX + 0x34]      ; 005170bb
    MOV EDX,dword ptr [ESP + 0x34]      ; 005170be
    CMP EDX,dword ptr [EAX + 0x8]       ; 005170c2
    JGE 0x00517282                      ; 005170c5
        ;   XREF to: 00517282 (CONDITIONAL_JUMP)  ; LAB_00517282
    MOV EDX,dword ptr [EAX + 0xc]       ; 005170cb
    ADD EDX,EBP                         ; 005170ce
    PUSH EDX                            ; 005170d0
    LEA EDX,[ESP + 0x1c]                ; 005170d1
    PUSH EDX                            ; 005170d5
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005170d6
    MOV EDI,dword ptr [EBX + 0x60]      ; 005170da
    PUSH EAX                            ; 005170dd
    ADD EDI,ECX                         ; 005170de
    CALL shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870 ; 005170e0
        ;   XREF to: 00518870 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870(CLodMesh * this_ptr, CVector3f * out_centroid, CLodFace * face)
    ADD ESP,0xc                         ; 005170e5
    CMP EDI,EAX                         ; 005170e8
    JNZ 0x0051726d                      ; 005170ea
        ;   XREF to: 0051726d (CONDITIONAL_JUMP)  ; LAB_0051726d
    PUSH ESI                            ; 005170f0
        ;   Label: LAB_005170f0
    PUSH EBX                            ; 005170f1
    ADD EBP,0x8c                        ; 005170f2
    MOV dword ptr [EDI + 0x18],0x3f4ccccd ; 005170f8
    CALL shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300 ; 005170ff
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300(CLodMesh * this_ptr, int sample_point_index)
    ADD ESP,0x8                         ; 00517104
    INC ESI                             ; 00517107
    MOV EDI,dword ptr [ESP + 0x34]      ; 00517108
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051710c
    INC EDI                             ; 00517110
    ADD EAX,0x1c                        ; 00517111
    MOV dword ptr [ESP + 0x34],EDI      ; 00517114
    JMP 0x005170b7                      ; 00517118
        ;   XREF to: 005170b7 (UNCONDITIONAL_JUMP)  ; LAB_005170b7
    MOV ECX,0x6376c3                    ; 0051711a | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_0051711a
    MOV ESI,0x56f                       ; 0051711f
    PUSH 0x6376d8                       ; 00517124 | = "Can't call LodMesh::createOrigSampleP..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00517129 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0051712f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00517135
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051713a
    JMP 0x00517015                      ; 0051713d
        ;   XREF to: 00517015 (UNCONDITIONAL_JUMP)  ; LAB_00517015
    MOV EAX,0x637739                    ; 00517142 | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_00517142
    MOV EDX,0x578                       ; 00517147
    PUSH 0x63774e                       ; 0051714c | = "Out of memory!"
    MOV [0x02f0ca48],EAX                ; 00517151 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00517156 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051715c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00517161
    JMP 0x00517062                      ; 00517164
        ;   XREF to: 00517062 (UNCONDITIONAL_JUMP)  ; LAB_00517062
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00517169
        ;   Label: LAB_00517169
    MOV EDI,dword ptr [EAX + 0x4]       ; 0051716d
    MOV EAX,dword ptr [EBX + 0x60]      ; 00517170
    ADD EDI,EBP                         ; 00517173
    ADD EAX,EDX                         ; 00517175
    CMP EAX,EDI                         ; 00517177
    JZ 0x0051718b                       ; 00517179
        ;   XREF to: 0051718b (CONDITIONAL_JUMP)  ; LAB_0051718b
    MOV EDX,dword ptr [EDI]             ; 0051717b
    MOV dword ptr [EAX],EDX             ; 0051717d
    MOV EDX,dword ptr [EDI + 0x4]       ; 0051717f
    MOV dword ptr [EAX + 0x4],EDX       ; 00517182
    MOV EDX,dword ptr [EDI + 0x8]       ; 00517185
    MOV dword ptr [EAX + 0x8],EDX       ; 00517188
    PUSH ESI                            ; 0051718b
        ;   Label: LAB_0051718b
    PUSH EBX                            ; 0051718c
    ADD EBP,0x4c4                       ; 0051718d
    MOV dword ptr [EAX + 0x18],0x3f800000 ; 00517193
    CALL shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300 ; 0051719a
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300(CLodMesh * this_ptr, int sample_point_index)
    ADD ESP,0x8                         ; 0051719f
    INC ESI                             ; 005171a2
    MOV ECX,dword ptr [ESP + 0x38]      ; 005171a3
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005171a7
    INC ECX                             ; 005171ab
    ADD EDI,0x1c                        ; 005171ac
    MOV dword ptr [ESP + 0x38],ECX      ; 005171af
    MOV dword ptr [ESP + 0x2c],EDI      ; 005171b3
    JMP 0x0051706e                      ; 005171b7
        ;   XREF to: 0051706e (UNCONDITIONAL_JUMP)  ; LAB_0051706e
    MOV EDI,dword ptr [ESP + 0x28]      ; 005171bc
        ;   Label: LAB_005171bc
    MOV EDX,dword ptr [EAX + 0x48]      ; 005171c0
    MOV ECX,dword ptr [ESP + 0x30]      ; 005171c3
    ADD EDX,EDI                         ; 005171c7
    MOV EDI,dword ptr [EBX + 0x60]      ; 005171c9
    ADD EDI,ECX                         ; 005171cc
    IMUL ECX,dword ptr [EDX + 0x4],0x4c4 ; 005171ce
    MOV EAX,dword ptr [EAX + 0x4]       ; 005171d5
    MOV dword ptr [ESP + 0x3c],EAX      ; 005171d8
    ADD EAX,ECX                         ; 005171dc
    IMUL EDX,dword ptr [EDX],0x4c4      ; 005171de
    ADD EDX,dword ptr [ESP + 0x3c]      ; 005171e4
    FLD float ptr [EDX]                 ; 005171e8
    FADD float ptr [EAX]                ; 005171ea
    FST float ptr [ESP + 0xc]           ; 005171ec
    FDIV float ptr [0x0063777d]         ; 005171f0 | FLOAT_0063777d
    FLD float ptr [EDX + 0x4]           ; 005171f6
    FADD float ptr [EAX + 0x4]          ; 005171f9
    FST float ptr [ESP + 0x10]          ; 005171fc
    FLD float ptr [EDX + 0x8]           ; 00517200
    FADD float ptr [EAX + 0x8]          ; 00517203
    FXCH                                ; 00517206
    FLD float ptr [0x00637779]          ; 00517208 | FLOAT_00637779
    FXCH                                ; 0051720e
    FMUL ST1                            ; 00517210
    FXCH ST2                            ; 00517212
    FST float ptr [ESP + 0x14]          ; 00517214
    FMULP                               ; 00517218
    FXCH                                ; 0051721a
    FSTP float ptr [ESP + 0x4]          ; 0051721c
    MOV EAX,ESP                         ; 00517220
    FSTP float ptr [ESP + 0x8]          ; 00517222
    FSTP float ptr [ESP]                ; 00517226
    CMP EDI,EAX                         ; 00517229
    JZ 0x00517240                       ; 0051722b
        ;   XREF to: 00517240 (CONDITIONAL_JUMP)  ; LAB_00517240
    MOV EAX,dword ptr [ESP]             ; 0051722d
    MOV dword ptr [EDI],EAX             ; 00517230
    MOV EAX,dword ptr [ESP + 0x4]       ; 00517232
    MOV dword ptr [EDI + 0x4],EAX       ; 00517236
    MOV EAX,dword ptr [ESP + 0x8]       ; 00517239
    MOV dword ptr [EDI + 0x8],EAX       ; 0051723d
    PUSH ESI                            ; 00517240
        ;   Label: LAB_00517240
    PUSH EBX                            ; 00517241
    INC EBP                             ; 00517242
    MOV dword ptr [EDI + 0x18],0x3f666666 ; 00517243
    CALL shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300 ; 0051724a
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300(CLodMesh * this_ptr, int sample_point_index)
    ADD ESP,0x8                         ; 0051724f
    INC ESI                             ; 00517252
    MOV EDI,dword ptr [ESP + 0x28]      ; 00517253
    MOV EAX,dword ptr [ESP + 0x30]      ; 00517257
    ADD EDI,0xf0                        ; 0051725b
    ADD EAX,0x1c                        ; 00517261
    MOV dword ptr [ESP + 0x28],EDI      ; 00517264
    JMP 0x00517091                      ; 00517268
        ;   XREF to: 00517091 (UNCONDITIONAL_JUMP)  ; LAB_00517091
    MOV EDX,dword ptr [EAX]             ; 0051726d
        ;   Label: LAB_0051726d
    MOV dword ptr [EDI],EDX             ; 0051726f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00517271
    MOV dword ptr [EDI + 0x4],EDX       ; 00517274
    MOV EDX,dword ptr [EAX + 0x8]       ; 00517277
    MOV dword ptr [EDI + 0x8],EDX       ; 0051727a
    JMP 0x005170f0                      ; 0051727d
        ;   XREF to: 005170f0 (UNCONDITIONAL_JUMP)  ; LAB_005170f0
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00517282
        ;   Label: LAB_00517282
    JNZ 0x0051728f                      ; 00517285
        ;   XREF to: 0051728f (CONDITIONAL_JUMP)  ; LAB_0051728f
    ADD ESP,0x40                        ; 00517287
    POP EBP                             ; 0051728a
    POP EDI                             ; 0051728b
    POP ESI                             ; 0051728c
    POP EBX                             ; 0051728d
    RET                                 ; 0051728e
    MOV EBP,0x63775d                    ; 0051728f | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_0051728f
    MOV EAX,0x5c8                       ; 00517294
    PUSH 0x637772                       ; 00517299 | = "Bug!"
    MOV dword ptr [0x02f0ca48],EBP      ; 0051729e | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005172a4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005172a9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005172ae
    ADD ESP,0x40                        ; 005172b1
    POP EBP                             ; 005172b4
    POP EDI                             ; 005172b5
    POP ESI                             ; 005172b6
    POP EBX                             ; 005172b7
    RET                                 ; 005172b8

