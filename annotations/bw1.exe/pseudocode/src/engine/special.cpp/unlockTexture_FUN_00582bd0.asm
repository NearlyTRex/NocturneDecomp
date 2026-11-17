; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_unlockTexture_FUN_00582bd0(void)
;
;
; Referenced Globals:
;   void* g_PTR_02c83428
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c83428],0x0      ; 00582bd0 | g_PTR_02c83428
        ;   Label: engine_special.cpp_unlockTexture_FUN_00582bd0
    JNZ 0x00582bdc                      ; 00582bd7
        ;   XREF to: 00582bdc (CONDITIONAL_JUMP)  ; LAB_00582bdc
    XOR EAX,EAX                         ; 00582bd9
    RET                                 ; 00582bdb
    CALL dword ptr [0x02c83428]         ; 00582bdc | g_PTR_02c83428
        ;   Label: LAB_00582bdc
    RET                                 ; 00582be2

