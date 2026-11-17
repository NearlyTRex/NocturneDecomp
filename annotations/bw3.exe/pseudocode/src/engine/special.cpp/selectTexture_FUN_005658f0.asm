; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_selectTexture_FUN_005658f0(SMRGLTextureBasic *texture_info)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_info
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

    CMP dword ptr [0x01c6cee8],0x0      ; 005658f0 | g_INT_01c6cee8
        ;   Label: engine_special.cpp_selectTexture_FUN_005658f0
    JNZ 0x005658fc                      ; 005658f7
        ;   XREF to: 005658fc (CONDITIONAL_JUMP)  ; LAB_005658fc
    XOR EAX,EAX                         ; 005658f9
    RET                                 ; 005658fb
    PUSH EDI                            ; 005658fc
        ;   Label: LAB_005658fc
    PUSH ESI                            ; 005658fd
    PUSH EBX                            ; 005658fe
    MOV ECX,dword ptr [0x01c6ced4]      ; 005658ff | g_UCHAR_PTR_01c6ced4
    PUSH ECX                            ; 00565905
    PUSH 0x1c6af98                      ; 00565906
    MOV EBX,dword ptr [0x01c6ced0]      ; 0056590b | g_UCHAR_PTR_01c6ced0
    PUSH EBX                            ; 00565911
    MOV ESI,dword ptr [0x005fba28]      ; 00565912 | g_INT_005fba28
    PUSH ESI                            ; 00565918
    MOV EDI,dword ptr [ESP + 0x20]      ; 00565919
    PUSH EDI                            ; 0056591d
    CALL dword ptr [0x02cf600c]         ; 0056591e | g_PTR_02cf600c
    ADD ESP,0x14                        ; 00565924
    POP EBX                             ; 00565927
    POP ESI                             ; 00565928
    POP EDI                             ; 00565929
    RET                                 ; 0056592a

