; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_mimic_cpp_CMimic_renderTransparent_FUN_00520890(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00520890
        ;   Label: core_mimic.cpp_CMimic_renderTransparent_FUN_00520890
    CMP dword ptr [EAX + 0xfc],0x0      ; 00520894
    JNZ 0x00520880                      ; 0052089b
        ;   XREF to: 00520880 (CONDITIONAL_JUMP)  ; LAB_00520880
    LEA EAX,[EAX]                       ; 0052089d

