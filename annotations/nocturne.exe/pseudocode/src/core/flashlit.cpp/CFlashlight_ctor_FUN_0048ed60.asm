; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_flashlit_cpp_CFlashlight_ctor_FUN_0048ed60(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_flashlit_kfm_005816c2
;   undefined4 DAT_0059d8ec
;   undefined1* PTR_core_weapon.cpp_CWeapon_setup_FUN_00553f10_0059d8f4 = 00553f10
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_weapon.cpp_CWeapon_ctor_FUN_00553d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ed60
        ;   Label: core_flashlit.cpp_CFlashlight_ctor_FUN_0048ed60
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048ed61
    PUSH EDX                            ; 0048ed65
    CALL core_weapon.cpp_CWeapon_ctor_FUN_00553d90 ; 0048ed66
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_ctor_FUN_00553d90()
    ADD ESP,0x4                         ; 0048ed6b
    PUSH 0x5816c2                       ; 0048ed6e | = "flashlit.kfm"
    MOV EBX,EAX                         ; 0048ed73
    ADD EAX,0x150                       ; 0048ed75
    PUSH EAX                            ; 0048ed7a
    MOV dword ptr [EAX + -0x4],0x59d8f4 ; 0048ed7b | PTR_core_weapon.cpp_CWeapon_setup_FUN_00553f10_0059d8f4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0048ed82
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    MOV dword ptr [EBX + 0x2d0],0x0     ; 0048ed87
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0048ed91
    MOV dword ptr [EBX + 0x2d8],0x5     ; 0048ed9b
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0048eda5
    MOV dword ptr [EBX + 0x2e0],0x0     ; 0048edaf
    FLD float ptr [0x0059d8ec]          ; 0048edb9 | DAT_0059d8ec
    MOV dword ptr [EBX + 0x2e4],0x0     ; 0048edbf
    ADD ESP,0x8                         ; 0048edc9
    MOV dword ptr [EBX + 0x560],0x0     ; 0048edcc
    MOV EAX,EBX                         ; 0048edd6
    FSTP float ptr [EBX + 0x55c]        ; 0048edd8
    POP EBX                             ; 0048edde
    RET                                 ; 0048eddf

