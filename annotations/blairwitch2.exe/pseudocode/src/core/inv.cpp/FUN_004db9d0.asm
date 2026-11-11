; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004db9d0(CInventory *param_1,CWeapon *param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_doc.cpp_FUN_00453250 at 004535a8
;   core_game.cpp_FUN_004b76c0 at 004b7ee0
;   core_game.cpp_FUN_004be8a0 at 004bf637
;   core_inv.cpp_FUN_004dadb0 at 004db433
;   core_inv.cpp_FUN_004dc8c0 at 004dca99
;   core_scat.cpp_CScat_createDefaultWeapon_FUN_0051ec20 at 0051ec7b
;   core_script.cpp_FUN_00522350 at 00526fce
;
; Referenced Globals:
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020
;   core_inv.cpp_FUN_004dd0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004db9d0
        ;   Label: core_inv.cpp_FUN_004db9d0
    PUSH ESI                            ; 004db9d1
    PUSH EDI                            ; 004db9d2
    PUSH EBP                            ; 004db9d3
    SUB ESP,0x8                         ; 004db9d4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004db9d7
    CMP dword ptr [ESI + 0x10],0x1      ; 004db9db
    JGE 0x004db9fa                      ; 004db9df
        ;   XREF to: 004db9fa (CONDITIONAL_JUMP)  ; LAB_004db9fa
    MOV EAX,dword ptr [ESI + 0x468]     ; 004db9e1
    MOV dword ptr [ESI + EAX*0x4 + 0x610],0x0 ; 004db9e7
    ADD ESP,0x8                         ; 004db9f2
        ;   Label: LAB_004db9f2
    POP EBP                             ; 004db9f5
    POP EDI                             ; 004db9f6
    POP ESI                             ; 004db9f7
    POP EBX                             ; 004db9f8
    RET                                 ; 004db9f9
    PUSH 0x1                            ; 004db9fa
        ;   Label: LAB_004db9fa
    PUSH ESI                            ; 004db9fc
    XOR EBX,EBX                         ; 004db9fd
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270 ; 004db9ff
        ;   XREF to: 004dd270 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270(CInventory * this_ptr, int reset_both)
    MOV ECX,dword ptr [ESI + 0x10]      ; 004dba04
    ADD ESP,0x8                         ; 004dba07
    TEST ECX,ECX                        ; 004dba0a
    JLE 0x004dba26                      ; 004dba0c
        ;   XREF to: 004dba26 (CONDITIONAL_JUMP)  ; LAB_004dba26
    MOV EBP,dword ptr [ESI + 0x468]     ; 004dba0e
    SHL EBP,0x2                         ; 004dba14
    MOV EDI,ESI                         ; 004dba17
    ADD EBP,ESI                         ; 004dba19
    MOV EDX,dword ptr [EBP + 0x610]     ; 004dba1b
        ;   Label: LAB_004dba1b
    CMP EDX,dword ptr [EDI + 0x14]      ; 004dba21
    JNZ 0x004dba95                      ; 004dba24
        ;   XREF to: 004dba95 (CONDITIONAL_JUMP)  ; LAB_004dba95
    MOV EAX,dword ptr [ESI + 0x468]     ; 004dba26
        ;   Label: LAB_004dba26
    SHL EAX,0x2                         ; 004dba2c
    ADD EAX,ESI                         ; 004dba2f
    CMP dword ptr [EAX + 0x610],0x0     ; 004dba31
    JNZ 0x004dbaa6                      ; 004dba38
        ;   XREF to: 004dbaa6 (CONDITIONAL_JUMP)  ; LAB_004dbaa6
    XOR EBP,EBP                         ; 004dba3a
        ;   Label: LAB_004dba3a
    MOV EAX,dword ptr [ESP + 0x28]      ; 004dba3c
        ;   Label: LAB_004dba3c
    MOV EDX,dword ptr [ESI + 0x10]      ; 004dba40
    ADD EBX,EAX                         ; 004dba43
    CMP EBX,EDX                         ; 004dba45
    JL 0x004dbac4                       ; 004dba47
        ;   XREF to: 004dbac4 (CONDITIONAL_JUMP)  ; LAB_004dbac4
    XOR EBX,EBX                         ; 004dba4d
    LEA EAX,[EBX*0x4 + 0x0]             ; 004dba4f
        ;   Label: LAB_004dba4f
    MOV ECX,dword ptr [0x02661f38]      ; 004dba56 | g_CWeaponClassInfo.name_hash
    LEA EDI,[ESI + EAX*0x1]             ; 004dba5c
    PUSH ECX                            ; 004dba5f
    MOV dword ptr [ESP + 0x4],EDI       ; 004dba60
    MOV EDI,dword ptr [EDI + 0x14]      ; 004dba64
    PUSH EDI                            ; 004dba67
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dba68
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004dba6d
    MOV EDI,EAX                         ; 004dba70
    MOV dword ptr [ESP + 0x4],EAX       ; 004dba72
    MOV EAX,dword ptr [ESP]             ; 004dba76
    MOV EDX,dword ptr [ESI + 0x468]     ; 004dba79
    CMP EDX,dword ptr [EAX + 0x46c]     ; 004dba7f
    JZ 0x004dbacd                       ; 004dba85
        ;   XREF to: 004dbacd (CONDITIONAL_JUMP)  ; LAB_004dbacd
    INC EBP                             ; 004dba87
        ;   Label: LAB_004dba87
    CMP EBP,0x64                        ; 004dba88
    JL 0x004dba3c                       ; 004dba8b
        ;   XREF to: 004dba3c (CONDITIONAL_JUMP)  ; LAB_004dba3c
    ADD ESP,0x8                         ; 004dba8d
    POP EBP                             ; 004dba90
    POP EDI                             ; 004dba91
    POP ESI                             ; 004dba92
    POP EBX                             ; 004dba93
    RET                                 ; 004dba94
    INC EBX                             ; 004dba95
        ;   Label: LAB_004dba95
    MOV EAX,dword ptr [ESI + 0x10]      ; 004dba96
    ADD EDI,0x4                         ; 004dba99
    CMP EBX,EAX                         ; 004dba9c
    JL 0x004dba1b                       ; 004dba9e
        ;   XREF to: 004dba1b (CONDITIONAL_JUMP)  ; LAB_004dba1b
    JMP 0x004dba26                      ; 004dbaa4
        ;   XREF to: 004dba26 (UNCONDITIONAL_JUMP)  ; LAB_004dba26
    MOV EDI,dword ptr [ESI + EBX*0x4 + 0x46c] ; 004dbaa6
        ;   Label: LAB_004dbaa6
    CMP EDI,dword ptr [ESI + 0x468]     ; 004dbaad
    JZ 0x004dba3a                       ; 004dbab3
        ;   XREF to: 004dba3a (CONDITIONAL_JUMP)  ; LAB_004dba3a
    MOV dword ptr [EAX + 0x610],0x0     ; 004dbab5
    JMP 0x004dba3a                      ; 004dbabf
        ;   XREF to: 004dba3a (UNCONDITIONAL_JUMP)  ; LAB_004dba3a
    TEST EBX,EBX                        ; 004dbac4
        ;   Label: LAB_004dbac4
    JGE 0x004dba4f                      ; 004dbac6
        ;   XREF to: 004dba4f (CONDITIONAL_JUMP)  ; LAB_004dba4f
    LEA EBX,[EDX + -0x1]                ; 004dbac8
    JMP 0x004dba4f                      ; 004dbacb
        ;   XREF to: 004dba4f (UNCONDITIONAL_JUMP)  ; LAB_004dba4f
    TEST EDI,EDI                        ; 004dbacd
        ;   Label: LAB_004dbacd
    JZ 0x004dba87                       ; 004dbacf
        ;   XREF to: 004dba87 (CONDITIONAL_JUMP)  ; LAB_004dba87
    MOV ECX,dword ptr [ESP + 0x24]      ; 004dbad1
    PUSH ECX                            ; 004dbad5
    PUSH EDI                            ; 004dbad6
    PUSH ESI                            ; 004dbad7
    CALL core_inv.cpp_FUN_004dd0a0      ; 004dbad8
        ;   XREF to: 004dd0a0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dd0a0()
    ADD ESP,0xc                         ; 004dbadd
    TEST EAX,EAX                        ; 004dbae0
    JZ 0x004dba87                       ; 004dbae2
        ;   XREF to: 004dba87 (CONDITIONAL_JUMP)  ; LAB_004dba87
    MOV EAX,dword ptr [ESP + 0x20]      ; 004dbae4
    TEST EAX,EAX                        ; 004dbae8
    JZ 0x004dbaf0                       ; 004dbaea
        ;   XREF to: 004dbaf0 (CONDITIONAL_JUMP)  ; LAB_004dbaf0
    CMP EDI,EAX                         ; 004dbaec
    JNZ 0x004dba87                      ; 004dbaee
        ;   XREF to: 004dba87 (CONDITIONAL_JUMP)  ; LAB_004dba87
    MOV EAX,dword ptr [ESI + 0x468]     ; 004dbaf0
        ;   Label: LAB_004dbaf0
    SHL EAX,0x2                         ; 004dbaf6
    ADD EAX,ESI                         ; 004dbaf9
    MOV ECX,dword ptr [ESP + 0x4]       ; 004dbafb
    MOV EBX,dword ptr [EAX + 0x610]     ; 004dbaff
    CMP EBX,ECX                         ; 004dbb05
    JZ 0x004db9f2                       ; 004dbb07
        ;   XREF to: 004db9f2 (CONDITIONAL_JUMP)  ; LAB_004db9f2
    TEST EBX,EBX                        ; 004dbb0d
    JZ 0x004dbb25                       ; 004dbb0f
        ;   XREF to: 004dbb25 (CONDITIONAL_JUMP)  ; LAB_004dbb25
    MOV EAX,EBX                         ; 004dbb11
    PUSH 0x3dcccccd                     ; 004dbb13
    PUSH EAX                            ; 004dbb18
    MOV EBX,dword ptr [EBX + 0x2b0]     ; 004dbb19
    CALL dword ptr [EBX + 0x14]         ; 004dbb1f
    ADD ESP,0x8                         ; 004dbb22
    PUSH 0x3e7                          ; 004dbb25
        ;   Label: LAB_004dbb25
    MOV EAX,dword ptr [ESI + 0x468]     ; 004dbb2a
    MOV EBX,dword ptr [ESP + 0x8]       ; 004dbb30
    PUSH ESI                            ; 004dbb34
    MOV dword ptr [ESI + EAX*0x4 + 0x610],EBX ; 004dbb35
    CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020 ; 004dbb3c
        ;   XREF to: 004dd020 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020(CInventory * this_ptr, int ammo_type)
    ADD ESP,0x8                         ; 004dbb41
    ADD ESP,0x8                         ; 004dbb44
    POP EBP                             ; 004dbb47
    POP EDI                             ; 004dbb48
    POP ESI                             ; 004dbb49
    POP EBX                             ; 004dbb4a
    RET                                 ; 004dbb4b

