; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tvbat_cpp_FUN_00580450(CEnemy *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580450
        ;   Label: core_tvbat.cpp_FUN_00580450
    SUB ESP,0x4                         ; 00580451
    MOV EBX,dword ptr [ESP + 0xc]       ; 00580454
    LEA EAX,[EBX + 0x10afc]             ; 00580458
    PUSH EAX                            ; 0058045e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0058045f
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00580464
    PUSH EBX                            ; 00580467
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 00580468
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0x25a8],0x41200000 ; 0058046d
    ADD ESP,0x4                         ; 00580477
    MOV dword ptr [EBX + 0x10d2c],0x0   ; 0058047a
    PUSH dword ptr [EBX + 0x10d20]      ; 00580484
    PUSH dword ptr [EBX + 0x10d1c]      ; 0058048a
    MOV dword ptr [EBX + 0x10d24],0x0   ; 00580490
    CALL core_actor.cpp_FUN_0040cf60    ; 0058049a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 0058049f
    MOV EAX,dword ptr [ESP + 0x8]       ; 005804a3
    MOV dword ptr [EBX + 0x10d28],EAX   ; 005804a7
    ADD ESP,0x8                         ; 005804ad
    ADD ESP,0x4                         ; 005804b0
    POP EBX                             ; 005804b3
    RET                                 ; 005804b4

