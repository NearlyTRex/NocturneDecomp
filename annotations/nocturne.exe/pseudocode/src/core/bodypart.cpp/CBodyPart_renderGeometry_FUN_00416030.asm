; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00416030(CBodyPart *this_ptr,int render_flags)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00416300 at 004163a6
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004161a0 at 0041622c
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00416430 at 00416499
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416030
        ;   Label: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030
    PUSH ESI                            ; 00416031
    PUSH EDI                            ; 00416032
    PUSH EBP                            ; 00416033
    SUB ESP,0xc                         ; 00416034
    MOV ESI,dword ptr [ESP + 0x20]      ; 00416037
    MOV EDX,dword ptr [ESI + 0x170]     ; 0041603b
    PUSH EDX                            ; 00416041
    MOV ECX,dword ptr [ESI + 0x16c]     ; 00416042
    PUSH ECX                            ; 00416048
    MOV EBX,dword ptr [0x005be368]      ; 00416049 | g_CDemonSet_PTR_005be368
    PUSH EBX                            ; 0041604f | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200 ; 00416050
        ;   XREF to: 0050c200 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 00416055
    MOV EDI,dword ptr [ESI + 0x174]     ; 00416058
    PUSH EDI                            ; 0041605e
    PUSH 0x3                            ; 0041605f
    MOV EBP,dword ptr [ESI + 0x170]     ; 00416061
    PUSH EBP                            ; 00416067
    MOV EAX,dword ptr [ESI + 0x17c]     ; 00416068
    PUSH EAX                            ; 0041606e
    MOV EDX,dword ptr [ESI + 0x178]     ; 0041606f
    PUSH EDX                            ; 00416075
    MOV ECX,dword ptr [ESI + 0x16c]     ; 00416076
    PUSH ECX                            ; 0041607c
    MOV EBX,dword ptr [0x005be368]      ; 0041607d | g_CDemonSet_PTR_005be368
    PUSH EBX                            ; 00416083 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 ; 00416084
        ;   XREF to: 0050c2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    MOV EDI,dword ptr [ESI + 0x184]     ; 00416089
    ADD ESP,0x1c                        ; 0041608f
    CMP EDI,0x1                         ; 00416092
    JZ 0x004160aa                       ; 00416095
        ;   XREF to: 004160aa (CONDITIONAL_JUMP)  ; LAB_004160aa
    MOV EBP,dword ptr [0x005ae704]      ; 00416097 | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 0041609d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0041609e
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004160a3
    TEST EAX,EAX                        ; 004160a6
    JZ 0x0041610e                       ; 004160a8
        ;   XREF to: 0041610e (CONDITIONAL_JUMP)  ; LAB_0041610e
    MOV ECX,dword ptr [0x005ae704]      ; 004160aa | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_004160aa
    PUSH ECX                            ; 004160b0 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004160b1
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004160b6
    TEST EAX,EAX                        ; 004160b9
    JNZ 0x004160d3                      ; 004160bb
        ;   XREF to: 004160d3 (CONDITIONAL_JUMP)  ; LAB_004160d3
    LEA EAX,[ESI + 0x188]               ; 004160bd
    PUSH EAX                            ; 004160c3
    MOV EBX,dword ptr [0x005ae704]      ; 004160c4 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 004160ca | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004160cb
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004160d0
    MOV EDI,dword ptr [ESP + 0x24]      ; 004160d3
        ;   Label: LAB_004160d3
    PUSH EDI                            ; 004160d7
    MOV EBP,dword ptr [ESI + 0x178]     ; 004160d8
    PUSH EBP                            ; 004160de
    MOV EAX,dword ptr [ESI + 0x17c]     ; 004160df
    PUSH EAX                            ; 004160e5
    MOV EDX,dword ptr [0x005ae704]      ; 004160e6 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004160ec | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0 ; 004160ed
        ;   XREF to: 004613d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0(CDemonRenderer * this_ptr, SMRGLPrimitiveTriangle * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 004160f2
    PUSH 0x1                            ; 004160f5
        ;   Label: LAB_004160f5
    MOV EBX,dword ptr [0x005ae704]      ; 004160f7 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 004160fd | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 004160fe
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00416103
    ADD ESP,0xc                         ; 00416106
    POP EBP                             ; 00416109
    POP EDI                             ; 0041610a
    POP ESI                             ; 0041610b
    POP EBX                             ; 0041610c
    RET                                 ; 0041610d
    MOV EAX,0xffffffff                  ; 0041610e
        ;   Label: LAB_0041610e
    MOV EDX,dword ptr [ESI + 0x178]     ; 00416113
    XOR EBP,EBP                         ; 00416119
    MOV dword ptr [ESP + 0x4],EAX       ; 0041611b
    TEST EDX,EDX                        ; 0041611f
    JLE 0x004160f5                      ; 00416121
        ;   XREF to: 004160f5 (CONDITIONAL_JUMP)  ; LAB_004160f5
    LEA EAX,[ESI + 0x188]               ; 00416123
    MOV dword ptr [ESP + 0x8],EBP       ; 00416129
    XOR EDI,EDI                         ; 0041612d
    MOV dword ptr [ESP],EAX             ; 0041612f
    MOV EBX,dword ptr [ESP + 0x8]       ; 00416132
        ;   Label: LAB_00416132
    MOV EAX,dword ptr [ESI + 0x180]     ; 00416136
    ADD EAX,EBX                         ; 0041613c
    MOV EBX,dword ptr [EAX]             ; 0041613e
    CMP EBX,dword ptr [ESP + 0x4]       ; 00416140
    JZ 0x00416160                       ; 00416144
        ;   XREF to: 00416160 (CONDITIONAL_JUMP)  ; LAB_00416160
    IMUL EAX,EBX,0x18                   ; 00416146
    ADD EAX,dword ptr [ESP]             ; 00416149
    PUSH EAX                            ; 0041614c
    MOV ECX,dword ptr [0x005ae704]      ; 0041614d | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00416153 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00416154
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00416159
    MOV dword ptr [ESP + 0x4],EBX       ; 0041615c
    MOV ECX,dword ptr [ESP + 0x24]      ; 00416160
        ;   Label: LAB_00416160
    MOV EBX,dword ptr [ESI + 0x17c]     ; 00416164
    PUSH ECX                            ; 0041616a
    ADD EBX,EDI                         ; 0041616b
    PUSH EBX                            ; 0041616d
    MOV EBX,dword ptr [0x005ae704]      ; 0041616e | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00416174 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460 ; 00416175
        ;   XREF to: 0045f460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 0041617a
    INC EBP                             ; 0041617d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041617e
    ADD EDI,0x3c                        ; 00416182
    ADD EAX,0x4                         ; 00416185
    MOV EDX,dword ptr [ESI + 0x178]     ; 00416188
    MOV dword ptr [ESP + 0x8],EAX       ; 0041618e
    CMP EBP,EDX                         ; 00416192
    JGE 0x004160f5                      ; 00416194
        ;   XREF to: 004160f5 (CONDITIONAL_JUMP)  ; LAB_004160f5
    JMP 0x00416132                      ; 0041619a
        ;   XREF to: 00416132 (UNCONDITIONAL_JUMP)  ; LAB_00416132

