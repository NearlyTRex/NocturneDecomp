; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00419340(CBodyPart *this_ptr,int render_flags)
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
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419610 at 004196b4
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0 at 0041953a
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00419740 at 004197a9
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_0056e7c0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
;   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419340
        ;   Label: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00419340
    PUSH ESI                            ; 00419341
    PUSH EDI                            ; 00419342
    PUSH EBP                            ; 00419343
    SUB ESP,0xc                         ; 00419344
    MOV ESI,dword ptr [ESP + 0x20]      ; 00419347
    MOV EDX,dword ptr [ESI + 0x178]     ; 0041934b
    PUSH EDX                            ; 00419351
    MOV ECX,dword ptr [ESI + 0x174]     ; 00419352
    PUSH ECX                            ; 00419358
    MOV EBX,dword ptr [0x006810c8]      ; 00419359 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 0041935f | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_0056e7c0 ; 00419360
        ;   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_0056e7c0(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 00419365
    MOV EDI,dword ptr [ESI + 0x17c]     ; 00419368
    PUSH EDI                            ; 0041936e
    PUSH 0x3                            ; 0041936f
    MOV EBP,dword ptr [ESI + 0x178]     ; 00419371
    PUSH EBP                            ; 00419377
    MOV EAX,dword ptr [ESI + 0x184]     ; 00419378
    PUSH EAX                            ; 0041937e
    MOV EDX,dword ptr [ESI + 0x180]     ; 0041937f
    PUSH EDX                            ; 00419385
    MOV ECX,dword ptr [ESI + 0x174]     ; 00419386
    PUSH ECX                            ; 0041938c
    MOV EBX,dword ptr [0x006810c8]      ; 0041938d | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 00419393 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 ; 00419394
        ;   XREF to: 0056eac0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    MOV EDI,dword ptr [ESI + 0x18c]     ; 00419399
    ADD ESP,0x1c                        ; 0041939f
    CMP EDI,0x1                         ; 004193a2
    JZ 0x004193ba                       ; 004193a5
        ;   XREF to: 004193ba (CONDITIONAL_JUMP)  ; LAB_004193ba
    MOV EBP,dword ptr [0x006703ec]      ; 004193a7 | g_CDemonRendererPtr2
    PUSH EBP                            ; 004193ad | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004193ae
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004193b3
    TEST EAX,EAX                        ; 004193b6
    JZ 0x0041941e                       ; 004193b8
        ;   XREF to: 0041941e (CONDITIONAL_JUMP)  ; LAB_0041941e
    MOV ECX,dword ptr [0x006703ec]      ; 004193ba | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_004193ba
    PUSH ECX                            ; 004193c0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004193c1
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004193c6
    TEST EAX,EAX                        ; 004193c9
    JNZ 0x004193e3                      ; 004193cb
        ;   XREF to: 004193e3 (CONDITIONAL_JUMP)  ; LAB_004193e3
    LEA EAX,[ESI + 0x190]               ; 004193cd
    PUSH EAX                            ; 004193d3
    MOV EBX,dword ptr [0x006703ec]      ; 004193d4 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 004193da | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004193db
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004193e0
    MOV EDI,dword ptr [ESP + 0x24]      ; 004193e3
        ;   Label: LAB_004193e3
    PUSH EDI                            ; 004193e7
    MOV EBP,dword ptr [ESI + 0x180]     ; 004193e8
    PUSH EBP                            ; 004193ee
    MOV EAX,dword ptr [ESI + 0x184]     ; 004193ef
    PUSH EAX                            ; 004193f5
    MOV EDX,dword ptr [0x006703ec]      ; 004193f6 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 004193fc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20 ; 004193fd
        ;   XREF to: 0048ce20 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 00419402
    PUSH 0x1                            ; 00419405
        ;   Label: LAB_00419405
    MOV EBX,dword ptr [0x006703ec]      ; 00419407 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 0041940d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0041940e
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00419413
    ADD ESP,0xc                         ; 00419416
    POP EBP                             ; 00419419
    POP EDI                             ; 0041941a
    POP ESI                             ; 0041941b
    POP EBX                             ; 0041941c
    RET                                 ; 0041941d
    MOV EAX,0xffffffff                  ; 0041941e
        ;   Label: LAB_0041941e
    MOV EDX,dword ptr [ESI + 0x180]     ; 00419423
    XOR EBP,EBP                         ; 00419429
    MOV dword ptr [ESP + 0x4],EAX       ; 0041942b
    TEST EDX,EDX                        ; 0041942f
    JLE 0x00419405                      ; 00419431
        ;   XREF to: 00419405 (CONDITIONAL_JUMP)  ; LAB_00419405
    LEA EAX,[ESI + 0x190]               ; 00419433
    MOV dword ptr [ESP + 0x8],EBP       ; 00419439
    XOR EDI,EDI                         ; 0041943d
    MOV dword ptr [ESP],EAX             ; 0041943f
    MOV EBX,dword ptr [ESP + 0x8]       ; 00419442
        ;   Label: LAB_00419442
    MOV EAX,dword ptr [ESI + 0x188]     ; 00419446
    ADD EAX,EBX                         ; 0041944c
    MOV EBX,dword ptr [EAX]             ; 0041944e
    CMP EBX,dword ptr [ESP + 0x4]       ; 00419450
    JZ 0x00419470                       ; 00419454
        ;   XREF to: 00419470 (CONDITIONAL_JUMP)  ; LAB_00419470
    IMUL EAX,EBX,0x18                   ; 00419456
    ADD EAX,dword ptr [ESP]             ; 00419459
    PUSH EAX                            ; 0041945c
    MOV ECX,dword ptr [0x006703ec]      ; 0041945d | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00419463 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00419464
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00419469
    MOV dword ptr [ESP + 0x4],EBX       ; 0041946c
    MOV ECX,dword ptr [ESP + 0x24]      ; 00419470
        ;   Label: LAB_00419470
    MOV EBX,dword ptr [ESI + 0x184]     ; 00419474
    PUSH ECX                            ; 0041947a
    ADD EBX,EDI                         ; 0041947b
    PUSH EBX                            ; 0041947d
    MOV EBX,dword ptr [0x006703ec]      ; 0041947e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 00419484 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 ; 00419485
        ;   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0041948a
    INC EBP                             ; 0041948d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041948e
    ADD EDI,0x3c                        ; 00419492
    ADD EAX,0x4                         ; 00419495
    MOV EDX,dword ptr [ESI + 0x180]     ; 00419498
    MOV dword ptr [ESP + 0x8],EAX       ; 0041949e
    CMP EBP,EDX                         ; 004194a2
    JGE 0x00419405                      ; 004194a4
        ;   XREF to: 00419405 (CONDITIONAL_JUMP)  ; LAB_00419405
    JMP 0x00419442                      ; 004194aa
        ;   XREF to: 00419442 (UNCONDITIONAL_JUMP)  ; LAB_00419442

