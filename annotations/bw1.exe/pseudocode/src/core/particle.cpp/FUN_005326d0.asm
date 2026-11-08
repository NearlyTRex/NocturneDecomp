; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005326d0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_particle_cpp_005ec801
;   TerminatedCString s_Base_class_shouldn_t_ren_005ec816
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5ec801                    ; 005326d0 | = "..\\core\\particle.cpp"
        ;   Label: FUN_005326d0
    MOV ECX,0xc8                        ; 005326d5
    PUSH 0x5ec816                       ; 005326da | = "Base class shouldn't render"
    MOV dword ptr [0x01d1d400],EDX      ; 005326df | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005326e5 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005326eb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005326f0
    RET                                 ; 005326f3

