; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mimic_cpp_CMimic_renderOpaque_FUN_004f1b40(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004f1890
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f1b40
        ;   Label: core_mimic.cpp_CMimic_renderOpaque_FUN_004f1b40
    CMP dword ptr [EAX + 0xfc],0x0      ; 004f1b44
    JZ 0x004f1b50                       ; 004f1b4b
        ;   XREF to: 004f1b50 (CONDITIONAL_JUMP)  ; LAB_004f1b50
    XOR EAX,EAX                         ; 004f1b4d
    RET                                 ; 004f1b4f
    PUSH EAX                            ; 004f1b50
        ;   Label: LAB_004f1b50
    CALL core_mimic.cpp_CMimic_renderMirrored_FUN_004f1890 ; 004f1b51
        ;   XREF to: 004f1890 (UNCONDITIONAL_CALL)  ; int core_mimic.cpp_CMimic_renderMirrored_FUN_004f1890(CMimic * this_ptr)
    ADD ESP,0x4                         ; 004f1b56
    RET                                 ; 004f1b59

