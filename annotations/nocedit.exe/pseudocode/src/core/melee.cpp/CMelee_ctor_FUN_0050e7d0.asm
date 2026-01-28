; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_0050e7d0(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_melee.cpp_factoryFunc_FUN_0050e790 at 0050e7aa
;
; Referenced Globals:
;   TerminatedCString s_melee_kfm_00635bd6
;   TerminatedCString s_shovel_wav_00635be0
;   undefined4 s_hovel?.wav_00635be1
;   undefined4 s_ovel?.wav_00635be2
;   undefined4 s_vel?.wav_00635be3
;   TerminatedCString s_shvl_f_wav_00635bec
;   undefined4 s_hvl-f?.wav_00635bed
;   undefined4 s_vl-f?.wav_00635bee
;   undefined4 s_l-f?.wav_00635bef
;   TerminatedCString s_shvl_s_wav_00635bf8
;   undefined4 s_hvl-s?.wav_00635bf9
;   undefined4 s_vl-s?.wav_00635bfa
;   undefined4 s_l-s?.wav_00635bfb
;   CDemonActor_vtable g_CMeleeVTable
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e7d0
        ;   Label: core_melee.cpp_CMelee_ctor_FUN_0050e7d0
    PUSH ESI                            ; 0050e7d1
    PUSH EDI                            ; 0050e7d2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050e7d3
    PUSH EDX                            ; 0050e7d7
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70 ; 0050e7d8
        ;   XREF to: 005ede70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0050e7dd
    PUSH 0x635bd6                       ; 0050e7e0 | = "melee.kfm"
    MOV EBX,EAX                         ; 0050e7e5
    LEA EDI,[EAX + 0x158]               ; 0050e7e7
    PUSH EDI                            ; 0050e7ed
    MOV dword ptr [EAX + 0x154],0x661174 ; 0050e7ee | g_CMeleeVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0050e7f8
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2e0],0x7     ; 0050e7fd
    MOV dword ptr [EBX + 0x59c],0xffffffff ; 0050e807
    MOV dword ptr [EBX + 0x568],0x0     ; 0050e811
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0050e81b
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0050e825
    MOV dword ptr [EBX + 0x2e4],0x0     ; 0050e82f
    MOV dword ptr [EBX + 0x2e8],0x40a00000 ; 0050e839
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0050e843
    MOV dword ptr [EBX + 0x2f0],0x0     ; 0050e84d
    MOV dword ptr [EBX + 0x578],0x1     ; 0050e857
    MOV dword ptr [EBX + 0x57c],0x41200000 ; 0050e861
    MOV dword ptr [EBX + 0x580],0x41700000 ; 0050e86b
    MOV dword ptr [EBX + 0x584],0x3f000000 ; 0050e875
    MOV dword ptr [EBX + 0x588],0x0     ; 0050e87f
    MOV ESI,0x635be0                    ; 0050e889 | = "shovel?.wav"
    MOV dword ptr [EBX + 0x590],0x0     ; 0050e88e
    ADD ESP,0x8                         ; 0050e898
    MOV dword ptr [EBX + 0x594],0x0     ; 0050e89b
    LEA EDI,[EBX + 0x5a0]               ; 0050e8a5
    MOV dword ptr [EBX + 0x59c],0x0     ; 0050e8ab
    PUSH EDI                            ; 0050e8b5
    MOV AL,byte ptr [ESI]               ; 0050e8b6 | = "shovel?.wav" | s_ovel?.wav_00635be2
        ;   Label: LAB_0050e8b6
    MOV byte ptr [EDI],AL               ; 0050e8b8
    CMP AL,0x0                          ; 0050e8ba
    JZ 0x0050e8ce                       ; 0050e8bc
        ;   XREF to: 0050e8ce (CONDITIONAL_JUMP)  ; LAB_0050e8ce
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e8be | s_hovel?.wav_00635be1 | s_vel?.wav_00635be3
    ADD ESI,0x2                         ; 0050e8c1
    MOV byte ptr [EDI + 0x1],AL         ; 0050e8c4
    ADD EDI,0x2                         ; 0050e8c7
    CMP AL,0x0                          ; 0050e8ca
    JNZ 0x0050e8b6                      ; 0050e8cc
        ;   XREF to: 0050e8b6 (CONDITIONAL_JUMP)  ; LAB_0050e8b6
    POP EDI                             ; 0050e8ce
        ;   Label: LAB_0050e8ce
    MOV ESI,0x635bec                    ; 0050e8cf | = "shvl-f?.wav"
    LEA EDI,[EBX + 0x604]               ; 0050e8d4
    PUSH EDI                            ; 0050e8da
    MOV AL,byte ptr [ESI]               ; 0050e8db | = "shvl-f?.wav" | s_vl-f?.wav_00635bee
        ;   Label: LAB_0050e8db
    MOV byte ptr [EDI],AL               ; 0050e8dd
    CMP AL,0x0                          ; 0050e8df
    JZ 0x0050e8f3                       ; 0050e8e1
        ;   XREF to: 0050e8f3 (CONDITIONAL_JUMP)  ; LAB_0050e8f3
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e8e3 | s_hvl-f?.wav_00635bed | s_l-f?.wav_00635bef
    ADD ESI,0x2                         ; 0050e8e6
    MOV byte ptr [EDI + 0x1],AL         ; 0050e8e9
    ADD EDI,0x2                         ; 0050e8ec
    CMP AL,0x0                          ; 0050e8ef
    JNZ 0x0050e8db                      ; 0050e8f1
        ;   XREF to: 0050e8db (CONDITIONAL_JUMP)  ; LAB_0050e8db
    POP EDI                             ; 0050e8f3
        ;   Label: LAB_0050e8f3
    MOV ESI,0x635bf8                    ; 0050e8f4 | = "shvl-s?.wav"
    LEA EDI,[EBX + 0x668]               ; 0050e8f9
    PUSH EDI                            ; 0050e8ff
    MOV AL,byte ptr [ESI]               ; 0050e900 | = "shvl-s?.wav" | s_vl-s?.wav_00635bfa
        ;   Label: LAB_0050e900
    MOV byte ptr [EDI],AL               ; 0050e902
    CMP AL,0x0                          ; 0050e904
    JZ 0x0050e918                       ; 0050e906
        ;   XREF to: 0050e918 (CONDITIONAL_JUMP)  ; LAB_0050e918
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e908 | s_hvl-s?.wav_00635bf9 | s_l-s?.wav_00635bfb
    ADD ESI,0x2                         ; 0050e90b
    MOV byte ptr [EDI + 0x1],AL         ; 0050e90e
    ADD EDI,0x2                         ; 0050e911
    CMP AL,0x0                          ; 0050e914
    JNZ 0x0050e900                      ; 0050e916
        ;   XREF to: 0050e900 (CONDITIONAL_JUMP)  ; LAB_0050e900
    POP EDI                             ; 0050e918
        ;   Label: LAB_0050e918
    MOV EAX,EBX                         ; 0050e919
    POP EDI                             ; 0050e91b
    POP ESI                             ; 0050e91c
    POP EBX                             ; 0050e91d
    RET                                 ; 0050e91e

