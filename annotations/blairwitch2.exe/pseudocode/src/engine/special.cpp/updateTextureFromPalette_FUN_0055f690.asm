; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_updateTextureFromPalette_FUN_0055f690(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   tex
; SRGBColorPalette * Stack[0x8]:4   palette_data
;
; Referenced Globals:
;   int g_CurrentTextureDimension = 0x100
;   uchar* g_CurrentTextureData
;   uchar* g_CurrentTextureOpacityData
;   int g_INT_01c37788
;   void* g_PTR_0264bbe4
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0055f690
        ;   Label: engine_special.cpp_updateTextureFromPalette_FUN_0055f690
    CMP dword ptr [0x01c37788],0x0      ; 0055f691 | g_INT_01c37788
    JNZ 0x0055f69e                      ; 0055f698
        ;   XREF to: 0055f69e (CONDITIONAL_JUMP)  ; LAB_0055f69e
    XOR EAX,EAX                         ; 0055f69a
    POP EBP                             ; 0055f69c
    RET                                 ; 0055f69d
    PUSH EDI                            ; 0055f69e
        ;   Label: LAB_0055f69e
    PUSH ESI                            ; 0055f69f
    PUSH EBX                            ; 0055f6a0
    MOV ECX,dword ptr [0x01c37774]      ; 0055f6a1 | g_CurrentTextureOpacityData
    PUSH ECX                            ; 0055f6a7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0055f6a8
    PUSH EBX                            ; 0055f6ac
    MOV ESI,dword ptr [0x01c37770]      ; 0055f6ad | g_CurrentTextureData
    PUSH ESI                            ; 0055f6b3
    MOV EDI,dword ptr [0x006141c8]      ; 0055f6b4 | g_CurrentTextureDimension
    PUSH EDI                            ; 0055f6ba
    MOV EBP,dword ptr [ESP + 0x24]      ; 0055f6bb
    PUSH EBP                            ; 0055f6bf
    CALL dword ptr [0x0264bbe4]         ; 0055f6c0 | g_PTR_0264bbe4
    ADD ESP,0x14                        ; 0055f6c6
    POP EBX                             ; 0055f6c9
    POP ESI                             ; 0055f6ca
    POP EDI                             ; 0055f6cb
    POP EBP                             ; 0055f6cc
    RET                                 ; 0055f6cd

