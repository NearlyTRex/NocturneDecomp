; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_texlist.cpp_CTextureList_captureAllTextures_FUN_005dc230(CTextureList * this_ptr)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dc230
        ;   Label: core_texlist.cpp_CTextureList_captureAllTextures_FUN_005dc230
    PUSH EDI                            ; 005dc231
    PUSH EBP                            ; 005dc232
    MOV EDI,dword ptr [ESP + 0x10]      ; 005dc233
    MOV EDX,dword ptr [EDI]             ; 005dc237
    XOR EBX,EBX                         ; 005dc239
    TEST EDX,EDX                        ; 005dc23b
    JLE 0x005dc25e                      ; 005dc23d | LAB_005dc25e
        ;   XREF to: 005dc25e (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005dc23f
    LEA ESI,[EDI + 0x4]                 ; 005dc240
    PUSH ESI                            ; 005dc243
        ;   Label: LAB_005dc243
    MOV ECX,dword ptr [0x006703ec]      ; 005dc244 | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 005dc24a | CDemonRenderer g_CDemonRendererInstance
    INC EBX                             ; 005dc24b
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005dc24c | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD ESI,0x18                        ; 005dc251
    MOV EBP,dword ptr [EDI]             ; 005dc254
    ADD ESP,0x8                         ; 005dc256
    CMP EBX,EBP                         ; 005dc259
    JL 0x005dc243                       ; 005dc25b | LAB_005dc243
        ;   XREF to: 005dc243 (CONDITIONAL_JUMP)
    POP ESI                             ; 005dc25d
    POP EBP                             ; 005dc25e
        ;   Label: LAB_005dc25e
    POP EDI                             ; 005dc25f
    POP EBX                             ; 005dc260
    RET                                 ; 005dc261

