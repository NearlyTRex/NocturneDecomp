; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mimic_cpp_CMimic_renderOpaque_FUN_005108d0(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_mimic.cpp_CMimic_renderMirrored_FUN_00510620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005108d0
        ;   Label: core_mimic.cpp_CMimic_renderOpaque_FUN_005108d0
    CMP dword ptr [EAX + 0xfc],0x0      ; 005108d4
    JZ 0x005108e0                       ; 005108db
        ;   XREF to: 005108e0 (CONDITIONAL_JUMP)  ; LAB_005108e0
    XOR EAX,EAX                         ; 005108dd
    RET                                 ; 005108df
    PUSH EAX                            ; 005108e0
        ;   Label: LAB_005108e0
    CALL core_mimic.cpp_CMimic_renderMirrored_FUN_00510620 ; 005108e1
        ;   XREF to: 00510620 (UNCONDITIONAL_CALL)  ; int core_mimic.cpp_CMimic_renderMirrored_FUN_00510620(CMimic * this_ptr)
    ADD ESP,0x4                         ; 005108e6
    RET                                 ; 005108e9

