; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_0052aa50(undefined4 param_1,double param_2,double param_3,double param_4)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DAT_02dc9220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc9220]      ; 0052aa50 | DAT_02dc9220
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_0052aa50
    TEST EDX,EDX                        ; 0052aa56
    JNZ 0x0052aa5b                      ; 0052aa58
        ;   XREF to: 0052aa5b (CONDITIONAL_JUMP)  ; LAB_0052aa5b
    RET                                 ; 0052aa5a
    PUSH 0x0                            ; 0052aa5b
        ;   Label: LAB_0052aa5b
    FLD double ptr [ESP + 0x1c]         ; 0052aa5d
    MOV EAX,EDX                         ; 0052aa61
    SUB ESP,0x4                         ; 0052aa63
    MOV EDX,dword ptr [EDX]             ; 0052aa66
    FSTP float ptr [ESP]                ; 0052aa68
    FLD double ptr [ESP + 0x18]         ; 0052aa6b
    SUB ESP,0x4                         ; 0052aa6f
    FSTP float ptr [ESP]                ; 0052aa72
    FLD double ptr [ESP + 0x14]         ; 0052aa75
    SUB ESP,0x4                         ; 0052aa79
    FSTP float ptr [ESP]                ; 0052aa7c
    PUSH EAX                            ; 0052aa7f
    CALL dword ptr [EDX + 0x38]         ; 0052aa80
    RET                                 ; 0052aa83

