; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mimic_cpp_CMimic_renderTransparent_FUN_005108f0(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005108f0
        ;   Label: core_mimic.cpp_CMimic_renderTransparent_FUN_005108f0
    CMP dword ptr [EAX + 0xfc],0x0      ; 005108f4
    JNZ 0x005108e0                      ; 005108fb
        ;   XREF to: 005108e0 (CONDITIONAL_JUMP)  ; LAB_005108e0
    LEA EAX,[EAX]                       ; 005108fd

