; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_0055f650(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   tex
; SRGBColorPalette * Stack[0x8]:4   palette_data
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

    PUSH EBP                            ; 0055f650
        ;   Label: engine_special.cpp_selectTextureFromPalette_FUN_0055f650
    CMP dword ptr [0x01c37788],0x0      ; 0055f651 | g_INT_01c37788
    JNZ 0x0055f65e                      ; 0055f658
        ;   XREF to: 0055f65e (CONDITIONAL_JUMP)  ; LAB_0055f65e
    XOR EAX,EAX                         ; 0055f65a
    POP EBP                             ; 0055f65c
    RET                                 ; 0055f65d
    PUSH EDI                            ; 0055f65e
        ;   Label: LAB_0055f65e
    PUSH ESI                            ; 0055f65f
    PUSH EBX                            ; 0055f660
    MOV ECX,dword ptr [0x01c37774]      ; 0055f661 | g_UCHAR_PTR_01c37774
    PUSH ECX                            ; 0055f667
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0055f668
    PUSH EBX                            ; 0055f66c
    MOV ESI,dword ptr [0x01c37770]      ; 0055f66d | g_UCHAR_PTR_01c37770
    PUSH ESI                            ; 0055f673
    MOV EDI,dword ptr [0x006141c8]      ; 0055f674 | g_INT_006141c8
    PUSH EDI                            ; 0055f67a
    MOV EBP,dword ptr [ESP + 0x24]      ; 0055f67b
    PUSH EBP                            ; 0055f67f
    CALL dword ptr [0x0264bbe0]         ; 0055f680 | g_PTR_0264bbe0
    ADD ESP,0x14                        ; 0055f686
    POP EBX                             ; 0055f689
    POP ESI                             ; 0055f68a
    POP EDI                             ; 0055f68b
    POP EBP                             ; 0055f68c
    RET                                 ; 0055f68d

