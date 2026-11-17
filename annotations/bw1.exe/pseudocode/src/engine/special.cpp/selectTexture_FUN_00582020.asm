; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_selectTexture_FUN_00582020(SMRGLTextureBasic *texture_info)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_info
;
; Referenced Globals:
;   int g_CurrentTextureDimension = 0x100
;   uchar* g_CurrentTextureData
;   uchar* g_CurrentTextureOpacityData
;   int g_INT_01c50948
;   void* g_PTR_02c833b0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582020 | g_INT_01c50948
        ;   Label: engine_special.cpp_selectTexture_FUN_00582020
    JNZ 0x0058202c                      ; 00582027
        ;   XREF to: 0058202c (CONDITIONAL_JUMP)  ; LAB_0058202c
    XOR EAX,EAX                         ; 00582029
    RET                                 ; 0058202b
    PUSH EDI                            ; 0058202c
        ;   Label: LAB_0058202c
    PUSH ESI                            ; 0058202d
    PUSH EBX                            ; 0058202e
    MOV ECX,dword ptr [0x01c50934]      ; 0058202f | g_CurrentTextureOpacityData
    PUSH ECX                            ; 00582035
    PUSH 0x1c4e9f8                      ; 00582036
    MOV EBX,dword ptr [0x01c50930]      ; 0058203b | g_CurrentTextureData
    PUSH EBX                            ; 00582041
    MOV ESI,dword ptr [0x0061b4a8]      ; 00582042 | g_CurrentTextureDimension
    PUSH ESI                            ; 00582048
    MOV EDI,dword ptr [ESP + 0x20]      ; 00582049
    PUSH EDI                            ; 0058204d
    CALL dword ptr [0x02c833b0]         ; 0058204e | g_PTR_02c833b0
    ADD ESP,0x14                        ; 00582054
    POP EBX                             ; 00582057
    POP ESI                             ; 00582058
    POP EDI                             ; 00582059
    RET                                 ; 0058205a

