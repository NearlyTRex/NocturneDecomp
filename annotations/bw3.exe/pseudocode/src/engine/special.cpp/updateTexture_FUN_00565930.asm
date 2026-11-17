; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_updateTexture_FUN_00565930(SMRGLTextureBasic *texture_info)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_info
;
; Referenced Globals:
;   int g_INT_005fba28 = 0x100
;   uchar* g_UCHAR_PTR_01c6ced0
;   uchar* g_UCHAR_PTR_01c6ced4
;   int g_INT_01c6cee8
;   void* g_PTR_02cf6010
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00565930 | g_INT_01c6cee8
        ;   Label: engine_special.cpp_updateTexture_FUN_00565930
    JNZ 0x0056593c                      ; 00565937
        ;   XREF to: 0056593c (CONDITIONAL_JUMP)  ; LAB_0056593c
    XOR EAX,EAX                         ; 00565939
    RET                                 ; 0056593b
    PUSH EDI                            ; 0056593c
        ;   Label: LAB_0056593c
    PUSH ESI                            ; 0056593d
    PUSH EBX                            ; 0056593e
    MOV ECX,dword ptr [0x01c6ced4]      ; 0056593f | g_UCHAR_PTR_01c6ced4
    PUSH ECX                            ; 00565945
    PUSH 0x1c6af98                      ; 00565946
    MOV EBX,dword ptr [0x01c6ced0]      ; 0056594b | g_UCHAR_PTR_01c6ced0
    PUSH EBX                            ; 00565951
    MOV ESI,dword ptr [0x005fba28]      ; 00565952 | g_INT_005fba28
    PUSH ESI                            ; 00565958
    MOV EDI,dword ptr [ESP + 0x20]      ; 00565959
    PUSH EDI                            ; 0056595d
    CALL dword ptr [0x02cf6010]         ; 0056595e | g_PTR_02cf6010
    ADD ESP,0x14                        ; 00565964
    POP EBX                             ; 00565967
    POP ESI                             ; 00565968
    POP EDI                             ; 00565969
    RET                                 ; 0056596a

