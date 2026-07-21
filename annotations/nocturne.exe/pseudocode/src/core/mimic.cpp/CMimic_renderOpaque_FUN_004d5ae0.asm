; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_mimic_cpp_CMimic_renderOpaque_FUN_004d5ae0(int param_1)
;
;
; Called Functions:
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d5ae0
        ;   Label: core_mimic.cpp_CMimic_renderOpaque_FUN_004d5ae0
    CMP dword ptr [EAX + 0xfc],0x0      ; 004d5ae4
    JZ 0x004d5af0                       ; 004d5aeb
        ;   XREF to: 004d5af0 (CONDITIONAL_JUMP)  ; LAB_004d5af0
    XOR EAX,EAX                         ; 004d5aed
    RET                                 ; 004d5aef
    PUSH EAX                            ; 004d5af0
        ;   Label: LAB_004d5af0
    CALL core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860 ; 004d5af1
        ;   XREF to: 004d5860 (UNCONDITIONAL_CALL)  ; undefined core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860()
    ADD ESP,0x4                         ; 004d5af6
    RET                                 ; 004d5af9

