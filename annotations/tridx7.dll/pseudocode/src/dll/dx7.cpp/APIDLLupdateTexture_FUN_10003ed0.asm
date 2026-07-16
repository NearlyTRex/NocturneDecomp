; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLupdateTexture_FUN_10003ed0(SMRGLTextureBasic *texture_info,int texture_dimension,void *texture_data,void *palette_data,void *opacity_data)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_info
; int              Stack[0x8]:4   texture_dimension
; void *           Stack[0xc]:4   texture_data
; void *           Stack[0x10]:4   palette_data
; void *           Stack[0x14]:4   opacity_data
;
; Referenced Globals:
;   void* g_TexturePalette = 00000000
;   void* g_TextureData = 00000000
;   void* g_TextureOpacity = 00000000
;
; Called Functions:
;   dll_dx7.cpp_FUN_100015d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 10003ed0
        ;   Label: dll_dx7.cpp_APIDLLupdateTexture_FUN_10003ed0
    MOV ECX,dword ptr [ESP + 0x10]      ; 10003ed4
    MOV EDX,dword ptr [ESP + 0x14]      ; 10003ed8
    MOV [0x1020de38],EAX                ; 10003edc | g_TextureData
    MOV EAX,dword ptr [ESP + 0x4]       ; 10003ee1
    MOV dword ptr [0x10138fb0],ECX      ; 10003ee5 | g_TexturePalette
    PUSH EAX                            ; 10003eeb
    MOV dword ptr [0x1024061c],EDX      ; 10003eec | g_TextureOpacity
    CALL dll_dx7.cpp_FUN_100015d0       ; 10003ef2
        ;   XREF to: 100015d0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100015d0()
    ADD ESP,0x4                         ; 10003ef7
    MOV EAX,0x1                         ; 10003efa
    RET                                 ; 10003eff

