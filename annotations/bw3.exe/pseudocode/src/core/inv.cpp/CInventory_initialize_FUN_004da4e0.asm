; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_initialize_FUN_004da4e0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   core_hero.cpp_FUN_004d2cd0 at 004d2cda
;   core_inv.cpp_CInventory_load_FUN_004dc750 at 004dc772
;   core_prye.cpp_CPrye_createDefaultWeapon_FUN_00518430 at 0051843f
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052dff8
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_005c5f22
;   undefined4 DAT_005c5f2b
;   undefined4 DAT_005c5f2f
;   undefined4 DAT_005c5f37
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_inv.cpp_CInventory_clear_FUN_004da440
;   crt_stdlib.c_rand_FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da4e0
        ;   Label: core_inv.cpp_CInventory_initialize_FUN_004da4e0
    PUSH ESI                            ; 004da4e1
    PUSH EDI                            ; 004da4e2
    SUB ESP,0x4                         ; 004da4e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004da4e6
    PUSH EDI                            ; 004da4ea
    CALL core_inv.cpp_CInventory_clear_FUN_004da440 ; 004da4eb
        ;   XREF to: 004da440 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004da440(CInventory * this_ptr)
    MOV EBX,EDI                         ; 004da4f0
    ADD ESP,0x4                         ; 004da4f2
    LEA ESI,[EDI + 0x190]               ; 004da4f5
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 004da4fb
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
        ;   Label: LAB_004da4fb
    MOV dword ptr [ESP],EAX             ; 004da500
    FILD dword ptr [ESP]                ; 004da503
    FMUL float ptr [0x005c5f2b]         ; 004da506 | DAT_005c5f2b
    FMUL float ptr [0x005c5f2f]         ; 004da50c | DAT_005c5f2f
    FMUL double ptr [0x005c5f37]        ; 004da512 | DAT_005c5f37
    ADD EBX,0x4                         ; 004da518
    FSTP float ptr [EBX + 0x1a0]        ; 004da51b
    CMP EBX,ESI                         ; 004da521
    JNZ 0x004da4fb                      ; 004da523
        ;   XREF to: 004da4fb (CONDITIONAL_JUMP)  ; LAB_004da4fb
    CMP dword ptr [EDI + 0x464],0x0     ; 004da525
    JZ 0x004da535                       ; 004da52c
        ;   XREF to: 004da535 (CONDITIONAL_JUMP)  ; LAB_004da535
    ADD ESP,0x4                         ; 004da52e
    POP EDI                             ; 004da531
    POP ESI                             ; 004da532
    POP EBX                             ; 004da533
    RET                                 ; 004da534
    PUSH 0x5c5f22                       ; 004da535 | = "CAmmo"
        ;   Label: LAB_004da535
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 004da53a
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    ADD ESP,0x4                         ; 004da53f
    MOV dword ptr [EDI + 0x464],EAX     ; 004da542
    PUSH EAX                            ; 004da548
    MOV EBX,dword ptr [EAX + 0x154]     ; 004da549
    CALL dword ptr [EBX]                ; 004da54f
    MOV dword ptr [EDI + 0x468],0x0     ; 004da551
    ADD ESP,0x4                         ; 004da55b
    MOV dword ptr [EDI + 0x46c],0x0     ; 004da55e
    ADD ESP,0x4                         ; 004da568
    POP EDI                             ; 004da56b
    POP ESI                             ; 004da56c
    POP EBX                             ; 004da56d
    RET                                 ; 004da56e

