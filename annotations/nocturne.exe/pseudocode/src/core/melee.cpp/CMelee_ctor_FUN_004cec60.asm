; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_melee_cpp_CMelee_ctor_FUN_004cec60(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_melee.kfm_00588362
;   string s_shovel?.wav_0058836c
;   undefined4 s_hovel?.wav_0058836c+1
;   undefined4 s_ovel?.wav_0058836c+2
;   undefined4 s_vel?.wav_0058836c+3
;   undefined1 DAT_00588378
;   undefined1 DAT_00588379
;   undefined1 DAT_0058837a
;   string s_l-f?.wav_0058837b
;   undefined1 DAT_00588384
;   undefined1 DAT_00588385
;   undefined1 DAT_00588386
;   string s_l-s?.wav_00588387
;   undefined1* PTR_core_weapon.cpp_CWeapon_setup_FUN_00553f10_005a03f4 = 00553f10
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_weapon.cpp_CWeapon_ctor_FUN_00553d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cec60
        ;   Label: core_melee.cpp_CMelee_ctor_FUN_004cec60
    PUSH ESI                            ; 004cec61
    PUSH EDI                            ; 004cec62
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cec63
    PUSH EDX                            ; 004cec67
    CALL core_weapon.cpp_CWeapon_ctor_FUN_00553d90 ; 004cec68
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_ctor_FUN_00553d90()
    ADD ESP,0x4                         ; 004cec6d
    PUSH 0x588362                       ; 004cec70 | = "melee.kfm"
    MOV EBX,EAX                         ; 004cec75
    LEA EDI,[EAX + 0x150]               ; 004cec77
    PUSH EDI                            ; 004cec7d
    MOV dword ptr [EAX + 0x14c],0x5a03f4 ; 004cec7e | PTR_core_weapon.cpp_CWeapon_setup_FUN_00553f10_005a03f4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004cec88
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    MOV dword ptr [EBX + 0x2d8],0x7     ; 004cec8d
    MOV dword ptr [EBX + 0x594],0xffffffff ; 004cec97
    MOV dword ptr [EBX + 0x560],0x0     ; 004ceca1
    MOV dword ptr [EBX + 0x2d0],0x0     ; 004cecab
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004cecb5
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004cecbf
    MOV dword ptr [EBX + 0x2e0],0x40a00000 ; 004cecc9
    MOV dword ptr [EBX + 0x2e4],0x0     ; 004cecd3
    MOV dword ptr [EBX + 0x2e8],0x0     ; 004cecdd
    MOV dword ptr [EBX + 0x570],0x1     ; 004cece7
    MOV dword ptr [EBX + 0x574],0x41200000 ; 004cecf1
    MOV dword ptr [EBX + 0x578],0x41700000 ; 004cecfb
    MOV dword ptr [EBX + 0x57c],0x3f000000 ; 004ced05
    MOV dword ptr [EBX + 0x580],0x0     ; 004ced0f
    MOV ESI,0x58836c                    ; 004ced19 | = "shovel?.wav"
    MOV dword ptr [EBX + 0x588],0x0     ; 004ced1e
    ADD ESP,0x8                         ; 004ced28
    MOV dword ptr [EBX + 0x58c],0x0     ; 004ced2b
    LEA EDI,[EBX + 0x598]               ; 004ced35
    MOV dword ptr [EBX + 0x594],0x0     ; 004ced3b
    PUSH EDI                            ; 004ced45
    MOV AL,byte ptr [ESI]               ; 004ced46 | = "shovel?.wav" | s_ovel?.wav_0058836c+2
        ;   Label: LAB_004ced46
    MOV byte ptr [EDI],AL               ; 004ced48
    CMP AL,0x0                          ; 004ced4a
    JZ 0x004ced5e                       ; 004ced4c
        ;   XREF to: 004ced5e (CONDITIONAL_JUMP)  ; LAB_004ced5e
    MOV AL,byte ptr [ESI + 0x1]         ; 004ced4e | s_hovel?.wav_0058836c+1 | s_vel?.wav_0058836c+3
    ADD ESI,0x2                         ; 004ced51
    MOV byte ptr [EDI + 0x1],AL         ; 004ced54
    ADD EDI,0x2                         ; 004ced57
    CMP AL,0x0                          ; 004ced5a
    JNZ 0x004ced46                      ; 004ced5c
        ;   XREF to: 004ced46 (CONDITIONAL_JUMP)  ; LAB_004ced46
    POP EDI                             ; 004ced5e
        ;   Label: LAB_004ced5e
    MOV ESI,0x588378                    ; 004ced5f | DAT_00588378
    LEA EDI,[EBX + 0x5fc]               ; 004ced64
    PUSH EDI                            ; 004ced6a
    MOV AL,byte ptr [ESI]               ; 004ced6b | DAT_00588378 | DAT_0058837a
        ;   Label: LAB_004ced6b
    MOV byte ptr [EDI],AL               ; 004ced6d
    CMP AL,0x0                          ; 004ced6f
    JZ 0x004ced83                       ; 004ced71
        ;   XREF to: 004ced83 (CONDITIONAL_JUMP)  ; LAB_004ced83
    MOV AL,byte ptr [ESI + 0x1]         ; 004ced73 | DAT_00588379 | = "l-f?.wav"
    ADD ESI,0x2                         ; 004ced76
    MOV byte ptr [EDI + 0x1],AL         ; 004ced79
    ADD EDI,0x2                         ; 004ced7c
    CMP AL,0x0                          ; 004ced7f
    JNZ 0x004ced6b                      ; 004ced81
        ;   XREF to: 004ced6b (CONDITIONAL_JUMP)  ; LAB_004ced6b
    POP EDI                             ; 004ced83
        ;   Label: LAB_004ced83
    MOV ESI,0x588384                    ; 004ced84 | DAT_00588384
    LEA EDI,[EBX + 0x660]               ; 004ced89
    PUSH EDI                            ; 004ced8f
    MOV AL,byte ptr [ESI]               ; 004ced90 | DAT_00588384 | DAT_00588386
        ;   Label: LAB_004ced90
    MOV byte ptr [EDI],AL               ; 004ced92
    CMP AL,0x0                          ; 004ced94
    JZ 0x004ceda8                       ; 004ced96
        ;   XREF to: 004ceda8 (CONDITIONAL_JUMP)  ; LAB_004ceda8
    MOV AL,byte ptr [ESI + 0x1]         ; 004ced98 | DAT_00588385 | = "l-s?.wav"
    ADD ESI,0x2                         ; 004ced9b
    MOV byte ptr [EDI + 0x1],AL         ; 004ced9e
    ADD EDI,0x2                         ; 004ceda1
    CMP AL,0x0                          ; 004ceda4
    JNZ 0x004ced90                      ; 004ceda6
        ;   XREF to: 004ced90 (CONDITIONAL_JUMP)  ; LAB_004ced90
    POP EDI                             ; 004ceda8
        ;   Label: LAB_004ceda8
    MOV EAX,EBX                         ; 004ceda9
    POP EDI                             ; 004cedab
    POP ESI                             ; 004cedac
    POP EBX                             ; 004cedad
    RET                                 ; 004cedae

