; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CRainDrop_render_FUN_004a1040(CRainDrop *this_ptr)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double g_DOUBLE_005c0978 = 4
;   float g_FLOAT_005df8e4 = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_005f2afc = 01bdd7e4
;   SMRGLTextureBasic g_SMRGLTextureBasic_005fdbdc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_SRenderVertex_ARRAY_0060b014[0].u
;   undefined4 g_SRenderVertex_ARRAY_0060b014[0].v
;   undefined4 g_SRenderVertex_ARRAY_0060b014[0].a
;   undefined4 g_SRenderVertex_ARRAY_0060b014[1].u
;   undefined4 g_SRenderVertex_ARRAY_0060b014[1].v
;   undefined4 g_SRenderVertex_ARRAY_0060b014[1].a
;   undefined4 g_SRenderVertex_ARRAY_0060b014[2].u
;   undefined4 g_SRenderVertex_ARRAY_0060b014[2].v
;   undefined4 g_SRenderVertex_ARRAY_0060b014[2].a
;   undefined4 g_SRenderVertex_ARRAY_0060b014[3].u
;   ... and 8 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_00538400
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_pop_FUN_0046d080
;   engine_special.cpp_transformAndProjectPoint_FUN_005632a3
;   engine_special.cpp_transformPoint_FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1040
        ;   Label: core_fire.cpp_CRainDrop_render_FUN_004a1040
    PUSH ESI                            ; 004a1041
    PUSH EBP                            ; 004a1042
    SUB ESP,0x9c                        ; 004a1043
    MOV EBP,dword ptr [ESP + 0xac]      ; 004a1049
    MOV ESI,dword ptr [0x005f2afc]      ; 004a1050 | g_CDemonRenderer_PTR_005f2afc
    LEA EBX,[ESP + 0x40]                ; 004a1056
    MOV EAX,EBP                         ; 004a105a
    MOV ESI,dword ptr [ESI]             ; 004a105c | g_CDemonRenderer_01bdd7e4
    FLD float ptr [EAX]                 ; 004a105e
    FMUL float ptr [0x005df8e4]         ; 004a1060 | g_FLOAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a1066
    FLD float ptr [EAX + 0x4]           ; 004a1068
    FMUL float ptr [0x005df8e4]         ; 004a106b | g_FLOAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a1071
    FLD float ptr [EAX + 0x8]           ; 004a1074
    FMUL float ptr [0x005df8e4]         ; 004a1077 | g_FLOAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a107d
    LEA EAX,[ESP + 0x40]                ; 004a1080
    PUSH EAX                            ; 004a1084
    PUSH ESI                            ; 004a1085
    CALL engine_special.cpp_transformPoint_FUN_0056356c ; 004a1086
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_0056356c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a108b
    PUSH ESI                            ; 004a108e
    MOV EDX,dword ptr [0x005f2afc]      ; 004a108f | g_CDemonRenderer_PTR_005f2afc
    PUSH EDX                            ; 004a1095 | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0 ; 004a1096
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004a109b
    TEST EAX,EAX                        ; 004a109e
    JNZ 0x004a10ac                      ; 004a10a0
        ;   XREF to: 004a10ac (CONDITIONAL_JUMP)  ; LAB_004a10ac
    ADD ESP,0x9c                        ; 004a10a2
    POP EBP                             ; 004a10a8
    POP ESI                             ; 004a10a9
    POP EBX                             ; 004a10aa
    RET                                 ; 004a10ab
    PUSH EDI                            ; 004a10ac
        ;   Label: LAB_004a10ac
    PUSH EBP                            ; 004a10ad
    MOV ECX,dword ptr [0x005f2afc]      ; 004a10ae | g_CDemonRenderer_PTR_005f2afc
    PUSH ECX                            ; 004a10b4 | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004a10b5
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004a10ba
    MOV EBX,dword ptr [0x005f2afc]      ; 004a10bd | g_CDemonRenderer_PTR_005f2afc
    PUSH EBX                            ; 004a10c3 | g_CDemonRenderer_01bdd7e4
    LEA ESI,[ESP + 0x90]                ; 004a10c4
    LEA EDI,[ESP + 0x78]                ; 004a10cb
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230 ; 004a10cf
        ;   XREF to: 0046d230 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230(CDemonRenderer * this_ptr, CVector3i * output)
    ADD ESP,0x4                         ; 004a10d4
    LEA ESI,[ESP + 0x8c]                ; 004a10d7
    LEA EAX,[ESP + 0x74]                ; 004a10de
    PUSH 0x0                            ; 004a10e2
    MOVSD ES:EDI,ESI                    ; 004a10e4
    MOVSD ES:EDI,ESI                    ; 004a10e5
    MOVSD ES:EDI,ESI                    ; 004a10e6
    PUSH EAX                            ; 004a10e7
    MOV ESI,dword ptr [0x005f2afc]      ; 004a10e8 | g_CDemonRenderer_PTR_005f2afc
    PUSH ESI                            ; 004a10ee | g_CDemonRenderer_01bdd7e4
    LEA EBX,[ESP + 0x68]                ; 004a10ef
    MOV EDI,0xbe000000                  ; 004a10f3
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 004a10f8
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    LEA EAX,[ESP + 0x5c]                ; 004a10fd
    MOV ESI,dword ptr [0x005f2afc]      ; 004a1101 | g_CDemonRenderer_PTR_005f2afc
    ADD ESP,0xc                         ; 004a1107
    XOR EDX,EDX                         ; 004a110a
    MOV dword ptr [ESP + 0x50],EDI      ; 004a110c
    MOV dword ptr [ESP + 0x54],EDI      ; 004a1110
    MOV dword ptr [ESP + 0x58],EDX      ; 004a1114
    FLD float ptr [EAX]                 ; 004a1118
    FMUL float ptr [0x005df8e4]         ; 004a111a | g_FLOAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a1120
    FLD float ptr [EAX + 0x4]           ; 004a1122
    FMUL float ptr [0x005df8e4]         ; 004a1125 | g_FLOAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a112b
    FLD float ptr [EAX + 0x8]           ; 004a112e
    FMUL float ptr [0x005df8e4]         ; 004a1131 | g_FLOAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a1137
    LEA EAX,[ESP + 0x5c]                ; 004a113a
    PUSH EAX                            ; 004a113e
    MOV EAX,dword ptr [ESI]             ; 004a113f | g_CDemonRenderer_01bdd7e4
    PUSH EAX                            ; 004a1141
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005632a3 ; 004a1142
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    XOR ESI,ESI                         ; 004a1147
    MOV ECX,0x3e000000                  ; 004a1149
    LEA EBX,[ESP + 0x34]                ; 004a114e
    ADD ESP,0x8                         ; 004a1152
    LEA EAX,[ESP + 0x50]                ; 004a1155
    MOV dword ptr [ESP + 0x50],ECX      ; 004a1159
    MOV dword ptr [ESP + 0x54],EDI      ; 004a115d
    MOV dword ptr [ESP + 0x58],ESI      ; 004a1161
    MOV ESI,dword ptr [0x005f2afc]      ; 004a1165 | g_CDemonRenderer_PTR_005f2afc
    FLD float ptr [EAX]                 ; 004a116b
    FMUL float ptr [0x005df8e4]         ; 004a116d | g_FLOAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a1173
    FLD float ptr [EAX + 0x4]           ; 004a1175
    FMUL float ptr [0x005df8e4]         ; 004a1178 | g_FLOAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a117e
    FLD float ptr [EAX + 0x8]           ; 004a1181
    FMUL float ptr [0x005df8e4]         ; 004a1184 | g_FLOAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a118a
    LEA EAX,[ESP + 0x2c]                ; 004a118d
    PUSH EAX                            ; 004a1191
    MOV EAX,dword ptr [ESI]             ; 004a1192 | g_CDemonRenderer_01bdd7e4
    ADD EAX,0x30                        ; 004a1194
    PUSH EAX                            ; 004a1197
    MOV EDI,0x3e000000                  ; 004a1198
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005632a3 ; 004a119d
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x005f2afc]      ; 004a11a2 | g_CDemonRenderer_PTR_005f2afc
    ADD ESP,0x8                         ; 004a11a8
    XOR EDX,EDX                         ; 004a11ab
    MOV dword ptr [ESP + 0x50],EDI      ; 004a11ad
    MOV dword ptr [ESP + 0x54],EDI      ; 004a11b1
    MOV dword ptr [ESP + 0x58],EDX      ; 004a11b5
    LEA EBX,[ESP + 0x38]                ; 004a11b9
    LEA EAX,[ESP + 0x50]                ; 004a11bd
    FLD float ptr [EAX]                 ; 004a11c1
    FMUL float ptr [0x005df8e4]         ; 004a11c3 | g_FLOAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a11c9
    FLD float ptr [EAX + 0x4]           ; 004a11cb
    FMUL float ptr [0x005df8e4]         ; 004a11ce | g_FLOAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a11d4
    FLD float ptr [EAX + 0x8]           ; 004a11d7
    FMUL float ptr [0x005df8e4]         ; 004a11da | g_FLOAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a11e0
    LEA EAX,[ESP + 0x38]                ; 004a11e3
    PUSH EAX                            ; 004a11e7
    MOV EAX,dword ptr [ESI]             ; 004a11e8 | g_CDemonRenderer_01bdd7e4
    ADD EAX,0x60                        ; 004a11ea
    PUSH EAX                            ; 004a11ed
    XOR ESI,ESI                         ; 004a11ee
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005632a3 ; 004a11f0
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0xbe000000                  ; 004a11f5
    LEA EBX,[ESP + 0x70]                ; 004a11fa
    ADD ESP,0x8                         ; 004a11fe
    LEA EAX,[ESP + 0x50]                ; 004a1201
    MOV dword ptr [ESP + 0x50],ECX      ; 004a1205
    MOV dword ptr [ESP + 0x54],EDI      ; 004a1209
    MOV dword ptr [ESP + 0x58],ESI      ; 004a120d
    MOV ESI,dword ptr [0x005f2afc]      ; 004a1211 | g_CDemonRenderer_PTR_005f2afc
    FLD float ptr [EAX]                 ; 004a1217
    FMUL float ptr [0x005df8e4]         ; 004a1219 | g_FLOAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a121f
    FLD float ptr [EAX + 0x4]           ; 004a1221
    FMUL float ptr [0x005df8e4]         ; 004a1224 | g_FLOAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a122a
    FLD float ptr [EAX + 0x8]           ; 004a122d
    FMUL float ptr [0x005df8e4]         ; 004a1230 | g_FLOAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a1236
    LEA EAX,[ESP + 0x68]                ; 004a1239
    PUSH EAX                            ; 004a123d
    MOV EAX,dword ptr [ESI]             ; 004a123e | g_CDemonRenderer_01bdd7e4
    ADD EAX,0x90                        ; 004a1240
    PUSH EAX                            ; 004a1245
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005632a3 ; 004a1246
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a124b
    PUSH 0x5fdbdc                       ; 004a124e | g_SMRGLTextureBasic_005fdbdc
    MOV EDI,dword ptr [0x005f2afc]      ; 004a1253 | g_CDemonRenderer_PTR_005f2afc
    PUSH EDI                            ; 004a1259 | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a125a
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004a125f
    PUSH 0x0                            ; 004a1262
    MOV EAX,[0x007e2a54]                ; 004a1264 | g_CDemonCamera_PTR_007e2a54
    PUSH EBP                            ; 004a1269
    MOV EBX,dword ptr [EAX + 0x3c]      ; 004a126a
    PUSH EAX                            ; 004a126d
    CALL dword ptr [EBX + 0x4]          ; 004a126e
    FLD float ptr [EBP + 0x24]          ; 004a1271
    FMUL double ptr [0x005c0978]        ; 004a1274 | g_DOUBLE_005c0978
    MOV EAX,0xffff                      ; 004a127a
    MOV EDX,dword ptr [0x01c6e24c]      ; 004a127f | g_INT_01c6e24c
    ADD ESP,0xc                         ; 004a1285
    SUB EAX,EDX                         ; 004a1288
    MOV dword ptr [ESP + 0x9c],EAX      ; 004a128a
    FILD dword ptr [ESP + 0x9c]         ; 004a1291
    FMULP                               ; 004a1298
    MOV ESI,0xd00000                    ; 004a129a
    MOV ECX,0x800000                    ; 004a129f | g_CHAR_ARRAY_007fa464+0x5b9c
    MOV EBX,0xdc0000                    ; 004a12a4
    MOV dword ptr [0x0060b05c],ESI      ; 004a12a9 | g_SRenderVertex_ARRAY_0060b014[1].u
    MOV dword ptr [0x0060b02c],ECX      ; 004a12af | g_SRenderVertex_ARRAY_0060b014[0].u
    MOV dword ptr [0x0060b030],EBX      ; 004a12b5 | g_SRenderVertex_ARRAY_0060b014[0].v
    MOV dword ptr [0x0060b060],EBX      ; 004a12bb | g_SRenderVertex_ARRAY_0060b014[1].v
    MOV dword ptr [0x0060b08c],ECX      ; 004a12c1 | g_SRenderVertex_ARRAY_0060b014[2].u
    MOV dword ptr [0x0060b0bc],ECX      ; 004a12c7 | g_SRenderVertex_ARRAY_0060b014[3].u
    MOV EDX,0x900000                    ; 004a12cd
    MOV dword ptr [ESP + 0x98],EAX      ; 004a12d2
    MOV dword ptr [0x0060b090],EDX      ; 004a12d9 | g_SRenderVertex_ARRAY_0060b014[2].v
    CALL crt_math.c_round_FUN_005a3120  ; 004a12df
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FISTP dword ptr [ESP + 0x98]        ; 004a12e4
    MOV EAX,dword ptr [ESP + 0x98]      ; 004a12eb
    MOV dword ptr [0x0060b0c0],EDX      ; 004a12f2 | g_SRenderVertex_ARRAY_0060b014[3].v
    MOV [0x0060b040],EAX                ; 004a12f8 | g_SRenderVertex_ARRAY_0060b014[0].a
    MOV [0x0060b070],EAX                ; 004a12fd | g_SRenderVertex_ARRAY_0060b014[1].a
    MOV [0x0060b0a0],EAX                ; 004a1302 | g_SRenderVertex_ARRAY_0060b014[2].a
    MOV [0x0060b0d0],EAX                ; 004a1307 | g_SRenderVertex_ARRAY_0060b014[3].a
    LEA EBX,[ESP + 0x80]                ; 004a130c
    MOV EAX,EBP                         ; 004a1313
    FLD float ptr [EAX]                 ; 004a1315
    FMUL float ptr [0x005df8e4]         ; 004a1317 | g_FLOAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a131d
    FLD float ptr [EAX + 0x4]           ; 004a131f
    FMUL float ptr [0x005df8e4]         ; 004a1322 | g_FLOAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a1328
    FLD float ptr [EAX + 0x8]           ; 004a132b
    FMUL float ptr [0x005df8e4]         ; 004a132e | g_FLOAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a1334
    PUSH 0x4                            ; 004a1337
    PUSH 0x0                            ; 004a1339
    PUSH 0x1c73664                      ; 004a133b | g_CVector3i_01c73664
    LEA EAX,[ESP + 0x8c]                ; 004a1340
    PUSH EAX                            ; 004a1347
    MOV ESI,dword ptr [0x00603b28]      ; 004a1348 | g_CDemonSetPtr
    PUSH ESI                            ; 004a134e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00538400 ; 004a134f
        ;   XREF to: 00538400 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00538400(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004a1354
    PUSH 0x1                            ; 004a1357
    MOV EDI,dword ptr [0x005f2afc]      ; 004a1359 | g_CDemonRenderer_PTR_005f2afc
    PUSH EDI                            ; 004a135f | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 004a1360
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004a1365
    XOR EAX,EAX                         ; 004a1368
    MOV EBP,0x4                         ; 004a136a
    MOV dword ptr [ESP + 0x18],EAX      ; 004a136f
    MOV dword ptr [ESP + 0x14],EAX      ; 004a1373
    MOV dword ptr [ESP + 0x10],EAX      ; 004a1377
    MOV dword ptr [ESP + 0xc],EAX       ; 004a137b
    MOV dword ptr [ESP + 0x1c],EAX      ; 004a137f
    MOV EAX,0x3                         ; 004a1383
    MOV EDI,0x1                         ; 004a1388
    MOV dword ptr [ESP + 0x28],EAX      ; 004a138d
    LEA EAX,[ESP + 0x4]                 ; 004a1391
    MOV EDX,dword ptr [0x005f2afc]      ; 004a1395 | g_CDemonRenderer_PTR_005f2afc
    PUSH EAX                            ; 004a139b
    MOV dword ptr [ESP + 0xc],EBP       ; 004a139c
    MOV EBP,0x2                         ; 004a13a0
    PUSH EDX                            ; 004a13a5 | g_CDemonRenderer_01bdd7e4
    MOV dword ptr [ESP + 0x28],EDI      ; 004a13a6
    MOV dword ptr [ESP + 0x2c],EBP      ; 004a13aa
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 004a13ae
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004a13b3
    XOR EBX,EBX                         ; 004a13b6
    PUSH EBX                            ; 004a13b8
    MOV ECX,dword ptr [0x005f2afc]      ; 004a13b9 | g_CDemonRenderer_PTR_005f2afc
    PUSH ECX                            ; 004a13bf | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 004a13c0
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004a13c5
    MOV EBX,dword ptr [0x005f2afc]      ; 004a13c8 | g_CDemonRenderer_PTR_005f2afc
    PUSH EBX                            ; 004a13ce | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 004a13cf
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004a13d4
    POP EDI                             ; 004a13d7
    ADD ESP,0x9c                        ; 004a13d8
    POP EBP                             ; 004a13de
    POP ESI                             ; 004a13df
    POP EBX                             ; 004a13e0
    RET                                 ; 004a13e1

