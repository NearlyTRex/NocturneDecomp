; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLselectTexture_FUN_10003e90(SMRGLTextureBasic *texture_info,int texture_dimension,void *texture_data,void *palette_data,void *opacity_data)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_info
; int              Stack[0x8]:4   texture_dimension
; void *           Stack[0xc]:4   texture_data
; void *           Stack[0x10]:4   palette_data
; void *           Stack[0x14]:4   opacity_data
;
; Referenced Globals:
;   int g_CurrentTextureIndex = 0x0
;   void* g_TexturePalette = 00000000
;   void* g_TextureData = 00000000
;   void* g_TextureOpacity = 00000000
;
; Called Functions:
;   dll_dx7.cpp_resolveTextureSlot_FUN_10001470
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 10003e90
        ;   Label: dll_dx7.cpp_APIDLLselectTexture_FUN_10003e90
    MOV ECX,dword ptr [ESP + 0x10]      ; 10003e94
    MOV EDX,dword ptr [ESP + 0x14]      ; 10003e98
    MOV [0x1020de38],EAX                ; 10003e9c | g_TextureData
    MOV EAX,dword ptr [ESP + 0x4]       ; 10003ea1
    MOV dword ptr [0x10138fb0],ECX      ; 10003ea5 | g_TexturePalette
    PUSH EAX                            ; 10003eab
    MOV dword ptr [0x1024061c],EDX      ; 10003eac | g_TextureOpacity
    CALL dll_dx7.cpp_resolveTextureSlot_FUN_10001470 ; 10003eb2
        ;   XREF to: 10001470 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_resolveTextureSlot_FUN_10001470(SMRGLTextureBasic * texture_info)
    ADD ESP,0x4                         ; 10003eb7
    MOV [0x10014138],EAX                ; 10003eba | g_CurrentTextureIndex
    MOV EAX,0x1                         ; 10003ebf
    RET                                 ; 10003ec4

