; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_initialize_FUN_004f7050(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   core_hero.cpp_CHero_createDefaultWeapon_FUN_004eafd0 at 004eafdd
;   core_inv.cpp_CInventory_load_FUN_004f97a0 at 004f97c2
;   core_scat.cpp_FUN_00540d50 at 00540d5e
;   core_script.cpp_CScript_step_FUN_00544460 at 00548908
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_005e605b
;   undefined4 DAT_005e6064
;   undefined4 DAT_005e6068
;   undefined4 DAT_005e6070
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c2b0
;   core_inv.cpp_CInventory_clear_FUN_004f6fa0
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7050
        ;   Label: core_inv.cpp_CInventory_initialize_FUN_004f7050
    PUSH ESI                            ; 004f7051
    PUSH EDI                            ; 004f7052
    SUB ESP,0x4                         ; 004f7053
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f7056
    PUSH EDI                            ; 004f705a
    CALL core_inv.cpp_CInventory_clear_FUN_004f6fa0 ; 004f705b
        ;   XREF to: 004f6fa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004f6fa0(CInventory * this_ptr)
    MOV EBX,EDI                         ; 004f7060
    ADD ESP,0x4                         ; 004f7062
    LEA ESI,[EDI + 0x190]               ; 004f7065
    CALL crt_stdlib.c_rand_FUN_005c084c ; 004f706b
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
        ;   Label: LAB_004f706b
    MOV dword ptr [ESP],EAX             ; 004f7070
    FILD dword ptr [ESP]                ; 004f7073
    FMUL float ptr [0x005e6064]         ; 004f7076 | DAT_005e6064
    FMUL float ptr [0x005e6068]         ; 004f707c | DAT_005e6068
    FMUL double ptr [0x005e6070]        ; 004f7082 | DAT_005e6070
    ADD EBX,0x4                         ; 004f7088
    FSTP float ptr [EBX + 0x1a0]        ; 004f708b
    CMP EBX,ESI                         ; 004f7091
    JNZ 0x004f706b                      ; 004f7093
        ;   XREF to: 004f706b (CONDITIONAL_JUMP)  ; LAB_004f706b
    CMP dword ptr [EDI + 0x464],0x0     ; 004f7095
    JZ 0x004f70a5                       ; 004f709c
        ;   XREF to: 004f70a5 (CONDITIONAL_JUMP)  ; LAB_004f70a5
    ADD ESP,0x4                         ; 004f709e
    POP EDI                             ; 004f70a1
    POP ESI                             ; 004f70a2
    POP EBX                             ; 004f70a3
    RET                                 ; 004f70a4
    PUSH 0x5e605b                       ; 004f70a5 | = "CAmmo"
        ;   Label: LAB_004f70a5
    CALL core_actor.cpp_createActorByName_FUN_0040c2b0 ; 004f70aa
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c2b0()
    ADD ESP,0x4                         ; 004f70af
    MOV dword ptr [EDI + 0x464],EAX     ; 004f70b2
    PUSH EAX                            ; 004f70b8
    MOV EBX,dword ptr [EAX + 0x154]     ; 004f70b9
    CALL dword ptr [EBX]                ; 004f70bf
    ADD ESP,0x4                         ; 004f70c1
    MOV dword ptr [EDI + 0x468],0x0     ; 004f70c4
    ADD ESP,0x4                         ; 004f70ce
    POP EDI                             ; 004f70d1
    POP ESI                             ; 004f70d2
    POP EBX                             ; 004f70d3
    RET                                 ; 004f70d4

