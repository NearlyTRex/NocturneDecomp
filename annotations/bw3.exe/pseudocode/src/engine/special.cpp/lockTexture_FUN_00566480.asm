; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_lockTexture_FUN_00566480(int texture_id)
;
; Parameters:
; int              Stack[0x4]:4   texture_id
;
; Referenced Globals:
;   void* g_PTR_02cf6080
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf6080],0x0      ; 00566480 | g_PTR_02cf6080
        ;   Label: engine_special.cpp_lockTexture_FUN_00566480
    JNZ 0x0056648c                      ; 00566487
        ;   XREF to: 0056648c (CONDITIONAL_JUMP)  ; LAB_0056648c
    XOR EAX,EAX                         ; 00566489
    RET                                 ; 0056648b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0056648c
        ;   Label: LAB_0056648c
    PUSH ECX                            ; 00566490
    CALL dword ptr [0x02cf6080]         ; 00566491 | g_PTR_02cf6080
    ADD ESP,0x4                         ; 00566497
    RET                                 ; 0056649a

