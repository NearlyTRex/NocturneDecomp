; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_setMipMapLevel_FUN_005821a0(int mipmap_level)
;
; Parameters:
; int              Stack[0x4]:4   mipmap_level
;
; Referenced Globals:
;   int g_INT_01c50948
;   void* g_PTR_02c833c0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 005821a0 | g_INT_01c50948
        ;   Label: engine_special.cpp_setMipMapLevel_FUN_005821a0
    JNZ 0x005821ac                      ; 005821a7
        ;   XREF to: 005821ac (CONDITIONAL_JUMP)  ; LAB_005821ac
    XOR EAX,EAX                         ; 005821a9
    RET                                 ; 005821ab
    MOV ECX,dword ptr [ESP + 0x4]       ; 005821ac
        ;   Label: LAB_005821ac
    PUSH ECX                            ; 005821b0
    CALL dword ptr [0x02c833c0]         ; 005821b1 | g_PTR_02c833c0
    ADD ESP,0x4                         ; 005821b7
    RET                                 ; 005821ba

