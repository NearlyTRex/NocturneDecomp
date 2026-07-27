; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_selectWeapon_FUN_004c0850(int param_1,int param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30 at 0049f10b
;   core_hero.cpp_CHero_createDefaultWeapon_FUN_004b4dd0 at 004b4e46
;   core_inv.cpp_CInventory_addItem_FUN_004bf360 at 004c02d0
;   core_inv.cpp_CInventory_select_FUN_004c1580 at 004c169c
;   core_scat.cpp_FUN_004fbe80 at 004fbed9
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 0050338a
;
; Referenced Globals:
;   undefined4 g_CWeaponActorType_02ddf970.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0850
        ;   Label: core_inv.cpp_CInventory_selectWeapon_FUN_004c0850
    PUSH ESI                            ; 004c0851
    PUSH EDI                            ; 004c0852
    PUSH EBP                            ; 004c0853
    SUB ESP,0x4                         ; 004c0854
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c0857
    CMP dword ptr [ESI + 0x8],0x1       ; 004c085b
    JGE 0x004c0873                      ; 004c085f
        ;   XREF to: 004c0873 (CONDITIONAL_JUMP)  ; LAB_004c0873
    MOV dword ptr [ESI + 0x330],0x0     ; 004c0861
    ADD ESP,0x4                         ; 004c086b
        ;   Label: LAB_004c086b
    POP EBP                             ; 004c086e
    POP EDI                             ; 004c086f
    POP ESI                             ; 004c0870
    POP EBX                             ; 004c0871
    RET                                 ; 004c0872
    PUSH 0x1                            ; 004c0873
        ;   Label: LAB_004c0873
    PUSH ESI                            ; 004c0875
    XOR EBX,EBX                         ; 004c0876
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20 ; 004c0878
        ;   XREF to: 004c1d20 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20()
    MOV ECX,dword ptr [ESI + 0x8]       ; 004c087d
    ADD ESP,0x8                         ; 004c0880
    TEST ECX,ECX                        ; 004c0883
    JLE 0x004c0894                      ; 004c0885
        ;   XREF to: 004c0894 (CONDITIONAL_JUMP)  ; LAB_004c0894
    MOV EDI,ESI                         ; 004c0887
    MOV EDX,dword ptr [ESI + 0x330]     ; 004c0889
        ;   Label: LAB_004c0889
    CMP EDX,dword ptr [EDI + 0xc]       ; 004c088f
    JNZ 0x004c08cf                      ; 004c0892
        ;   XREF to: 004c08cf (CONDITIONAL_JUMP)  ; LAB_004c08cf
    XOR EBP,EBP                         ; 004c0894
        ;   Label: LAB_004c0894
    MOV ECX,dword ptr [ESP + 0x24]      ; 004c0896
        ;   Label: LAB_004c0896
    MOV EDI,dword ptr [ESI + 0x8]       ; 004c089a
    ADD EBX,ECX                         ; 004c089d
    CMP EBX,EDI                         ; 004c089f
    JL 0x004c08dc                       ; 004c08a1
        ;   XREF to: 004c08dc (CONDITIONAL_JUMP)  ; LAB_004c08dc
    XOR EBX,EBX                         ; 004c08a3
    MOV EAX,[0x02ddf9a8]                ; 004c08a5 | g_CWeaponActorType_02ddf970.name_hash
        ;   Label: LAB_004c08a5
    PUSH EAX                            ; 004c08aa
    MOV EDX,dword ptr [ESI + EBX*0x4 + 0xc] ; 004c08ab
    PUSH EDX                            ; 004c08af
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c08b0
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c08b5
    MOV EDI,EAX                         ; 004c08b8
    MOV dword ptr [ESP],EAX             ; 004c08ba
    TEST EAX,EAX                        ; 004c08bd
    JNZ 0x004c08e5                      ; 004c08bf
        ;   XREF to: 004c08e5 (CONDITIONAL_JUMP)  ; LAB_004c08e5
    INC EBP                             ; 004c08c1
        ;   Label: LAB_004c08c1
    CMP EBP,0x64                        ; 004c08c2
    JL 0x004c0896                       ; 004c08c5
        ;   XREF to: 004c0896 (CONDITIONAL_JUMP)  ; LAB_004c0896
    ADD ESP,0x4                         ; 004c08c7
    POP EBP                             ; 004c08ca
    POP EDI                             ; 004c08cb
    POP ESI                             ; 004c08cc
    POP EBX                             ; 004c08cd
    RET                                 ; 004c08ce
    INC EBX                             ; 004c08cf
        ;   Label: LAB_004c08cf
    MOV EBP,dword ptr [ESI + 0x8]       ; 004c08d0
    ADD EDI,0x4                         ; 004c08d3
    CMP EBX,EBP                         ; 004c08d6
    JL 0x004c0889                       ; 004c08d8
        ;   XREF to: 004c0889 (CONDITIONAL_JUMP)  ; LAB_004c0889
    JMP 0x004c0894                      ; 004c08da
        ;   XREF to: 004c0894 (UNCONDITIONAL_JUMP)  ; LAB_004c0894
    TEST EBX,EBX                        ; 004c08dc
        ;   Label: LAB_004c08dc
    JGE 0x004c08a5                      ; 004c08de
        ;   XREF to: 004c08a5 (CONDITIONAL_JUMP)  ; LAB_004c08a5
    LEA EBX,[EDI + -0x1]                ; 004c08e0
    JMP 0x004c08a5                      ; 004c08e3
        ;   XREF to: 004c08a5 (UNCONDITIONAL_JUMP)  ; LAB_004c08a5
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c08e5
        ;   Label: LAB_004c08e5
    PUSH ECX                            ; 004c08e9
    PUSH EAX                            ; 004c08ea
    PUSH ESI                            ; 004c08eb
    CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0 ; 004c08ec
        ;   XREF to: 004c1bf0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0()
    ADD ESP,0xc                         ; 004c08f1
    TEST EAX,EAX                        ; 004c08f4
    JZ 0x004c08c1                       ; 004c08f6
        ;   XREF to: 004c08c1 (CONDITIONAL_JUMP)  ; LAB_004c08c1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c08f8
    TEST EAX,EAX                        ; 004c08fc
    JZ 0x004c0904                       ; 004c08fe
        ;   XREF to: 004c0904 (CONDITIONAL_JUMP)  ; LAB_004c0904
    CMP EDI,EAX                         ; 004c0900
    JNZ 0x004c08c1                      ; 004c0902
        ;   XREF to: 004c08c1 (CONDITIONAL_JUMP)  ; LAB_004c08c1
    MOV ECX,dword ptr [ESP]             ; 004c0904
        ;   Label: LAB_004c0904
    MOV EAX,dword ptr [ESI + 0x330]     ; 004c0907
    CMP EAX,ECX                         ; 004c090d
    JZ 0x004c086b                       ; 004c090f
        ;   XREF to: 004c086b (CONDITIONAL_JUMP)  ; LAB_004c086b
    TEST EAX,EAX                        ; 004c0915
    JZ 0x004c092b                       ; 004c0917
        ;   XREF to: 004c092b (CONDITIONAL_JUMP)  ; LAB_004c092b
    PUSH 0x3dcccccd                     ; 004c0919
    MOV EBX,dword ptr [EAX + 0x14c]     ; 004c091e
    PUSH EAX                            ; 004c0924
    CALL dword ptr [EBX + 0x4]          ; 004c0925
    ADD ESP,0x8                         ; 004c0928
    PUSH 0x3e7                          ; 004c092b
        ;   Label: LAB_004c092b
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c0930
    PUSH ESI                            ; 004c0934
    MOV dword ptr [ESI + 0x330],EAX     ; 004c0935
    CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90 ; 004c093b
        ;   XREF to: 004c1b90 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90()
    ADD ESP,0x8                         ; 004c0940
    ADD ESP,0x4                         ; 004c0943
    POP EBP                             ; 004c0946
    POP EDI                             ; 004c0947
    POP ESI                             ; 004c0948
    POP EBX                             ; 004c0949
    RET                                 ; 004c094a

