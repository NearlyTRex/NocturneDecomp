; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_initialize_FUN_004bef10(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   core_hero.cpp_CHero_createDefaultWeapon_FUN_004b4dd0 at 004b4ddd
;   core_inv.cpp_CInventory_load_FUN_004c1190 at 004c11b2
;   core_scat.cpp_FUN_004fbe80 at 004fbe8e
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00502df0
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_00586d73
;   float FLOAT_00586d79 = 0.00003051851
;   double DOUBLE_00586d81 = 3.14159265350000
;   double DOUBLE_00586d89 = 2
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040d540
;   core_inv.cpp_CInventory_clear_FUN_004bee80
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bef10
        ;   Label: core_inv.cpp_CInventory_initialize_FUN_004bef10
    PUSH ESI                            ; 004bef11
    PUSH EDI                            ; 004bef12
    SUB ESP,0x4                         ; 004bef13
    MOV EDI,dword ptr [ESP + 0x14]      ; 004bef16
    PUSH EDI                            ; 004bef1a
    CALL core_inv.cpp_CInventory_clear_FUN_004bee80 ; 004bef1b
        ;   XREF to: 004bee80 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004bee80(CInventory * this_ptr)
    MOV EBX,EDI                         ; 004bef20
    ADD ESP,0x4                         ; 004bef22
    LEA ESI,[EDI + 0x190]               ; 004bef25
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004bef2b
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
        ;   Label: LAB_004bef2b
    MOV dword ptr [ESP],EAX             ; 004bef30
    FILD dword ptr [ESP]                ; 004bef33
    FMUL float ptr [0x00586d79]         ; 004bef36 | FLOAT_00586d79
    FMUL double ptr [0x00586d81]        ; 004bef3c | DOUBLE_00586d81
    FMUL double ptr [0x00586d89]        ; 004bef42 | DOUBLE_00586d89
    ADD EBX,0x4                         ; 004bef48
    FSTP float ptr [EBX + 0x198]        ; 004bef4b
    CMP EBX,ESI                         ; 004bef51
    JNZ 0x004bef2b                      ; 004bef53
        ;   XREF to: 004bef2b (CONDITIONAL_JUMP)  ; LAB_004bef2b
    CMP dword ptr [EDI + 0x458],0x0     ; 004bef55
    JZ 0x004bef65                       ; 004bef5c
        ;   XREF to: 004bef65 (CONDITIONAL_JUMP)  ; LAB_004bef65
    ADD ESP,0x4                         ; 004bef5e
    POP EDI                             ; 004bef61
    POP ESI                             ; 004bef62
    POP EBX                             ; 004bef63
    RET                                 ; 004bef64
    PUSH 0x586d73                       ; 004bef65 | = "CAmmo"
        ;   Label: LAB_004bef65
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004bef6a
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040d540(char * class_name)
    ADD ESP,0x4                         ; 004bef6f
    MOV dword ptr [EDI + 0x458],EAX     ; 004bef72
    PUSH EAX                            ; 004bef78
    MOV EBX,dword ptr [EAX + 0x14c]     ; 004bef79
    CALL dword ptr [EBX]                ; 004bef7f
    ADD ESP,0x4                         ; 004bef81
    MOV dword ptr [EDI + 0x45c],0x0     ; 004bef84
    ADD ESP,0x4                         ; 004bef8e
    POP EDI                             ; 004bef91
    POP ESI                             ; 004bef92
    POP EBX                             ; 004bef93
    RET                                 ; 004bef94

