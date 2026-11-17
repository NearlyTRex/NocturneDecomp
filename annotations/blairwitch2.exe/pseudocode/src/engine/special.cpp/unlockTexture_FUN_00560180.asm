; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_unlockTexture_FUN_00560180(void)
;
;
; Referenced Globals:
;   void* g_PTR_0264bc58
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bc58],0x0      ; 00560180 | g_PTR_0264bc58
        ;   Label: engine_special.cpp_unlockTexture_FUN_00560180
    JNZ 0x0056018c                      ; 00560187
        ;   XREF to: 0056018c (CONDITIONAL_JUMP)  ; LAB_0056018c
    XOR EAX,EAX                         ; 00560189
    RET                                 ; 0056018b
    CALL dword ptr [0x0264bc58]         ; 0056018c | g_PTR_0264bc58
        ;   Label: LAB_0056018c
    RET                                 ; 00560192

