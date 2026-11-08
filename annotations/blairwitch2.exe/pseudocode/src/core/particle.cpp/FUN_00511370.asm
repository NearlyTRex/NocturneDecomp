; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00511370(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_particle_cpp_005e15a6
;   TerminatedCString s_Base_class_shouldn_t_ren_005e15bb
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5e15a6                    ; 00511370 | = "..\\core\\particle.cpp"
        ;   Label: FUN_00511370
    MOV ECX,0xc8                        ; 00511375
    PUSH 0x5e15bb                       ; 0051137a | = "Base class shouldn't render"
    MOV dword ptr [0x01d046a0],EDX      ; 0051137f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00511385 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0051138b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00511390
    RET                                 ; 00511393

