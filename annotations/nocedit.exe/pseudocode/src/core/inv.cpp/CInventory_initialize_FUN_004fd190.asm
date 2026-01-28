; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_inv_cpp_CInventory_initialize_FUN_004fd190(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   core_hero.cpp_CHero_FUN_004f2a30 at 004f2a3d
;   core_inv.cpp_CInventory_load_FUN_004ff400 at 004ff422
;   core_scat.cpp_FUN_00557150 at 0055715e
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055e340
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_006303c4
;   float g_InventoryRandNormalizationFactor = 0.00003051851
;   double g_InventoryRandPiFactor = 3.14159265350000
;   double g_InventoryRandTwoFactor = 2
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_inv.cpp_CInventory_clear_FUN_004fd0e0
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd190
        ;   Label: core_inv.cpp_CInventory_initialize_FUN_004fd190
    PUSH ESI                            ; 004fd191
    PUSH EDI                            ; 004fd192
    SUB ESP,0x4                         ; 004fd193
    MOV EDI,dword ptr [ESP + 0x14]      ; 004fd196
    PUSH EDI                            ; 004fd19a
    CALL core_inv.cpp_CInventory_clear_FUN_004fd0e0 ; 004fd19b
        ;   XREF to: 004fd0e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004fd0e0(CInventory * this_ptr)
    MOV EBX,EDI                         ; 004fd1a0
    ADD ESP,0x4                         ; 004fd1a2
    LEA ESI,[EDI + 0x190]               ; 004fd1a5
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 004fd1ab
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_004fd1ab
    MOV dword ptr [ESP],EAX             ; 004fd1b0
    FILD dword ptr [ESP]                ; 004fd1b3
    FMUL float ptr [0x006303ca]         ; 004fd1b6 | g_InventoryRandNormalizationFactor
    FMUL double ptr [0x006303d2]        ; 004fd1bc | g_InventoryRandPiFactor
    FMUL double ptr [0x006303da]        ; 004fd1c2 | g_InventoryRandTwoFactor
    ADD EBX,0x4                         ; 004fd1c8
    FSTP float ptr [EBX + 0x198]        ; 004fd1cb
    CMP EBX,ESI                         ; 004fd1d1
    JNZ 0x004fd1ab                      ; 004fd1d3
        ;   XREF to: 004fd1ab (CONDITIONAL_JUMP)  ; LAB_004fd1ab
    CMP dword ptr [EDI + 0x458],0x0     ; 004fd1d5
    JZ 0x004fd1e5                       ; 004fd1dc
        ;   XREF to: 004fd1e5 (CONDITIONAL_JUMP)  ; LAB_004fd1e5
    ADD ESP,0x4                         ; 004fd1de
    POP EDI                             ; 004fd1e1
    POP ESI                             ; 004fd1e2
    POP EBX                             ; 004fd1e3
    RET                                 ; 004fd1e4
    PUSH 0x6303c4                       ; 004fd1e5 | = "CAmmo"
        ;   Label: LAB_004fd1e5
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 004fd1ea
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 004fd1ef
    MOV dword ptr [EDI + 0x458],EAX     ; 004fd1f2
    PUSH EAX                            ; 004fd1f8
    MOV EBX,dword ptr [EAX + 0x154]     ; 004fd1f9
    CALL dword ptr [EBX]                ; 004fd1ff
    ADD ESP,0x4                         ; 004fd201
    MOV dword ptr [EDI + 0x45c],0x0     ; 004fd204
    ADD ESP,0x4                         ; 004fd20e
    POP EDI                             ; 004fd211
    POP ESI                             ; 004fd212
    POP EBX                             ; 004fd213
    RET                                 ; 004fd214

