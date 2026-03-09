; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mimic_cpp_CMimic_renderOpaque_FUN_00520870(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_mimic.cpp_CMimic_renderMirrored_FUN_005205f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00520870
        ;   Label: core_mimic.cpp_CMimic_renderOpaque_FUN_00520870
    CMP dword ptr [EAX + 0xfc],0x0      ; 00520874
    JZ 0x00520880                       ; 0052087b
        ;   XREF to: 00520880 (CONDITIONAL_JUMP)  ; LAB_00520880
    XOR EAX,EAX                         ; 0052087d
    RET                                 ; 0052087f
    PUSH EAX                            ; 00520880
        ;   Label: LAB_00520880
    CALL core_mimic.cpp_CMimic_renderMirrored_FUN_005205f0 ; 00520881
        ;   XREF to: 005205f0 (UNCONDITIONAL_CALL)  ; int core_mimic.cpp_CMimic_renderMirrored_FUN_005205f0(CMimic * this_ptr)
    ADD ESP,0x4                         ; 00520886
    RET                                 ; 00520889

