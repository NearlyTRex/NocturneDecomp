; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_00565970(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   tex
; SRGBColorPalette * Stack[0x8]:4   palette_data
;
; Referenced Globals:
;   int g_INT_005fba28 = 0x100
;   uchar* g_UCHAR_PTR_01c6ced0
;   uchar* g_UCHAR_PTR_01c6ced4
;   int g_INT_01c6cee8
;   void* g_PTR_02cf600c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00565970
        ;   Label: engine_special.cpp_selectTextureFromPalette_FUN_00565970
    CMP dword ptr [0x01c6cee8],0x0      ; 00565971 | g_INT_01c6cee8
    JNZ 0x0056597e                      ; 00565978
        ;   XREF to: 0056597e (CONDITIONAL_JUMP)  ; LAB_0056597e
    XOR EAX,EAX                         ; 0056597a
    POP EBP                             ; 0056597c
    RET                                 ; 0056597d
    PUSH EDI                            ; 0056597e
        ;   Label: LAB_0056597e
    PUSH ESI                            ; 0056597f
    PUSH EBX                            ; 00565980
    MOV ECX,dword ptr [0x01c6ced4]      ; 00565981 | g_UCHAR_PTR_01c6ced4
    PUSH ECX                            ; 00565987
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00565988
    PUSH EBX                            ; 0056598c
    MOV ESI,dword ptr [0x01c6ced0]      ; 0056598d | g_UCHAR_PTR_01c6ced0
    PUSH ESI                            ; 00565993
    MOV EDI,dword ptr [0x005fba28]      ; 00565994 | g_INT_005fba28
    PUSH EDI                            ; 0056599a
    MOV EBP,dword ptr [ESP + 0x24]      ; 0056599b
    PUSH EBP                            ; 0056599f
    CALL dword ptr [0x02cf600c]         ; 005659a0 | g_PTR_02cf600c
    ADD ESP,0x14                        ; 005659a6
    POP EBX                             ; 005659a9
    POP ESI                             ; 005659aa
    POP EDI                             ; 005659ab
    POP EBP                             ; 005659ac
    RET                                 ; 005659ad

