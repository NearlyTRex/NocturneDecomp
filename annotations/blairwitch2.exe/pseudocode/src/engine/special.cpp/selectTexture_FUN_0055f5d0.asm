; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_selectTexture_FUN_0055f5d0(SMRGLTextureBasic *texture_info)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_info
;
; Referenced Globals:
;   int g_INT_006141c8 = 0x100
;   uchar* g_UCHAR_PTR_01c37770
;   uchar* g_UCHAR_PTR_01c37774
;   int g_INT_01c37788
;   void* g_PTR_0264bbe0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055f5d0 | g_INT_01c37788
        ;   Label: engine_special.cpp_selectTexture_FUN_0055f5d0
    JNZ 0x0055f5dc                      ; 0055f5d7
        ;   XREF to: 0055f5dc (CONDITIONAL_JUMP)  ; LAB_0055f5dc
    XOR EAX,EAX                         ; 0055f5d9
    RET                                 ; 0055f5db
    PUSH EDI                            ; 0055f5dc
        ;   Label: LAB_0055f5dc
    PUSH ESI                            ; 0055f5dd
    PUSH EBX                            ; 0055f5de
    MOV ECX,dword ptr [0x01c37774]      ; 0055f5df | g_UCHAR_PTR_01c37774
    PUSH ECX                            ; 0055f5e5
    PUSH 0x1c35838                      ; 0055f5e6
    MOV EBX,dword ptr [0x01c37770]      ; 0055f5eb | g_UCHAR_PTR_01c37770
    PUSH EBX                            ; 0055f5f1
    MOV ESI,dword ptr [0x006141c8]      ; 0055f5f2 | g_INT_006141c8
    PUSH ESI                            ; 0055f5f8
    MOV EDI,dword ptr [ESP + 0x20]      ; 0055f5f9
    PUSH EDI                            ; 0055f5fd
    CALL dword ptr [0x0264bbe0]         ; 0055f5fe | g_PTR_0264bbe0
    ADD ESP,0x14                        ; 0055f604
    POP EBX                             ; 0055f607
    POP ESI                             ; 0055f608
    POP EDI                             ; 0055f609
    RET                                 ; 0055f60a

