; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00478190(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_cloth.cpp_CCloth_load_FUN_00438cf0 at 00438dc9
;   core_cloth.cpp_FUN_0043dcc0 at 0043dcd6
;   core_dmodel.cpp_loadModel_FUN_00478c00 at 00478c93
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478190
        ;   Label: core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
    PUSH EDI                            ; 00478191
    PUSH EBP                            ; 00478192
    MOV EDI,dword ptr [ESP + 0x10]      ; 00478193
    MOV EDX,dword ptr [EDI + 0x120]     ; 00478197
    XOR EBX,EBX                         ; 0047819d
    TEST EDX,EDX                        ; 0047819f
    JLE 0x004781c9                      ; 004781a1
        ;   XREF to: 004781c9 (CONDITIONAL_JUMP)  ; LAB_004781c9
    PUSH ESI                            ; 004781a3
    LEA ESI,[EDI + 0x124]               ; 004781a4
    PUSH ESI                            ; 004781aa
        ;   Label: LAB_004781aa
    MOV ECX,dword ptr [0x006703ec]      ; 004781ab | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 004781b1 | g_CDemonRendererInstance
    INC EBX                             ; 004781b2
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004781b3
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESI,0x48                        ; 004781b8
    MOV EBP,dword ptr [EDI + 0x120]     ; 004781bb
    ADD ESP,0x8                         ; 004781c1
    CMP EBX,EBP                         ; 004781c4
    JL 0x004781aa                       ; 004781c6
        ;   XREF to: 004781aa (CONDITIONAL_JUMP)  ; LAB_004781aa
    POP ESI                             ; 004781c8
    POP EBP                             ; 004781c9
        ;   Label: LAB_004781c9
    POP EDI                             ; 004781ca
    POP EBX                             ; 004781cb
    RET                                 ; 004781cc

