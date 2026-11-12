; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_initialize_FUN_004da900(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   core_hero.cpp_CHero_createDefaultWeapon_FUN_004cec30 at 004cec3a
;   core_inv.cpp_CInventory_load_FUN_004dc4b0 at 004dc4d2
;   core_scat.cpp_CScat_createDefaultWeapon_FUN_0051ec20 at 0051ec2e
;   core_script.cpp_FUN_00522350 at 005268e8
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_005db415
;   undefined4 DAT_005db41e
;   undefined4 DAT_005db422
;   undefined4 DAT_005db42a
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c5a0
;   core_inv.cpp_CInventory_clear_FUN_004da860
;   crt_stdlib.c_rand_FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da900
        ;   Label: core_inv.cpp_CInventory_initialize_FUN_004da900
    PUSH ESI                            ; 004da901
    PUSH EDI                            ; 004da902
    SUB ESP,0x4                         ; 004da903
    MOV EDI,dword ptr [ESP + 0x14]      ; 004da906
    PUSH EDI                            ; 004da90a
    CALL core_inv.cpp_CInventory_clear_FUN_004da860 ; 004da90b
        ;   XREF to: 004da860 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004da860(CInventory * this_ptr)
    MOV EBX,EDI                         ; 004da910
    ADD ESP,0x4                         ; 004da912
    LEA ESI,[EDI + 0x190]               ; 004da915
    CALL crt_stdlib.c_rand_FUN_005b849c ; 004da91b
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
        ;   Label: LAB_004da91b
    MOV dword ptr [ESP],EAX             ; 004da920
    FILD dword ptr [ESP]                ; 004da923
    FMUL float ptr [0x005db41e]         ; 004da926 | DAT_005db41e
    FMUL float ptr [0x005db422]         ; 004da92c | DAT_005db422
    FMUL double ptr [0x005db42a]        ; 004da932 | DAT_005db42a
    ADD EBX,0x4                         ; 004da938
    FSTP float ptr [EBX + 0x1a0]        ; 004da93b
    CMP EBX,ESI                         ; 004da941
    JNZ 0x004da91b                      ; 004da943
        ;   XREF to: 004da91b (CONDITIONAL_JUMP)  ; LAB_004da91b
    CMP dword ptr [EDI + 0x464],0x0     ; 004da945
    JZ 0x004da955                       ; 004da94c
        ;   XREF to: 004da955 (CONDITIONAL_JUMP)  ; LAB_004da955
    ADD ESP,0x4                         ; 004da94e
    POP EDI                             ; 004da951
    POP ESI                             ; 004da952
    POP EBX                             ; 004da953
    RET                                 ; 004da954
    PUSH 0x5db415                       ; 004da955 | = "CAmmo"
        ;   Label: LAB_004da955
    CALL core_actor.cpp_createActorByName_FUN_0040c5a0 ; 004da95a
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c5a0(char * class_name)
    ADD ESP,0x4                         ; 004da95f
    MOV dword ptr [EDI + 0x464],EAX     ; 004da962
    PUSH EAX                            ; 004da968
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 004da969
    CALL dword ptr [EBX + 0x8]          ; 004da96f
    ADD ESP,0x4                         ; 004da972
    MOV dword ptr [EDI + 0x45c],0x0     ; 004da975
    ADD ESP,0x4                         ; 004da97f
    POP EDI                             ; 004da982
    POP ESI                             ; 004da983
    POP EBX                             ; 004da984
    RET                                 ; 004da985

