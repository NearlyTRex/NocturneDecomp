; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_flushParticleList_FUN_00565ff0(void)
;
;
; Referenced Globals:
;   int g_INT_01c6cee8
;   void* g_PTR_02cf6038
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00565ff0 | g_INT_01c6cee8
        ;   Label: engine_special.cpp_flushParticleList_FUN_00565ff0
    JNZ 0x00565ffc                      ; 00565ff7
        ;   XREF to: 00565ffc (CONDITIONAL_JUMP)  ; LAB_00565ffc
    XOR EAX,EAX                         ; 00565ff9
    RET                                 ; 00565ffb
    CALL dword ptr [0x02cf6038]         ; 00565ffc | g_PTR_02cf6038
        ;   Label: LAB_00565ffc
    RET                                 ; 00566002

