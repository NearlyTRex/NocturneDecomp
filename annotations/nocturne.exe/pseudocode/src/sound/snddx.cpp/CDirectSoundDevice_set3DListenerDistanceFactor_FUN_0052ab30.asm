; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0052ab30(undefined4 param_1,double param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DAT_0059424f
;   undefined4 DAT_02dc9220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc9220]      ; 0052ab30 | DAT_02dc9220
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0052ab30
    TEST EDX,EDX                        ; 0052ab36
    JNZ 0x0052ab3b                      ; 0052ab38
        ;   XREF to: 0052ab3b (CONDITIONAL_JUMP)  ; LAB_0052ab3b
    RET                                 ; 0052ab3a
    FLD double ptr [ESP + 0x8]          ; 0052ab3b
        ;   Label: LAB_0052ab3b
    FMUL double ptr [0x0059424f]        ; 0052ab3f | DAT_0059424f
    PUSH 0x0                            ; 0052ab45
    MOV EAX,EDX                         ; 0052ab47
    SUB ESP,0x4                         ; 0052ab49
    MOV EDX,dword ptr [EDX]             ; 0052ab4c
    FSTP float ptr [ESP]                ; 0052ab4e
    PUSH EAX                            ; 0052ab51
    CALL dword ptr [EDX + 0x2c]         ; 0052ab52
    RET                                 ; 0052ab55

