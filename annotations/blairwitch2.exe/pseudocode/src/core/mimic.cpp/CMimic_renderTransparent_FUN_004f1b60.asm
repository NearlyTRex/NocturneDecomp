; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mimic_cpp_CMimic_renderTransparent_FUN_004f1b60(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f1b60
        ;   Label: core_mimic.cpp_CMimic_renderTransparent_FUN_004f1b60
    CMP dword ptr [EAX + 0xfc],0x0      ; 004f1b64
    JNZ 0x004f1b50                      ; 004f1b6b
        ;   XREF to: 004f1b50 (CONDITIONAL_JUMP)  ; LAB_004f1b50
    LEA EAX,[EAX]                       ; 004f1b6d

