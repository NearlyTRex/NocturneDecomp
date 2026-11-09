; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_particle_cpp_FUN_0050a3b0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_particle_cpp_005cb669
;   TerminatedCString s_Base_class_shouldn_t_ren_005cb67e
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5cb669                    ; 0050a3b0 | = "..\\core\\particle.cpp"
        ;   Label: core_particle.cpp_FUN_0050a3b0
    MOV ECX,0xc8                        ; 0050a3b5
    PUSH 0x5cb67e                       ; 0050a3ba | = "Base class shouldn't render"
    MOV dword ptr [0x01d71de0],EDX      ; 0050a3bf | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0050a3c5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050a3cb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050a3d0
    RET                                 ; 0050a3d3

