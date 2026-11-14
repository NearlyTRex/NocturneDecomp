; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLarva * __cdecl core_larva_cpp_CLarva_ctor_FUN_004fd950(CLarva *this_ptr)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_larva.cpp_factoryFuncLarva_FUN_004fd920 at 004fd933
;
; Referenced Globals:
;   undefined4 DAT_00602d20
;   undefined4 DAT_00602d24
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd950
        ;   Label: core_larva.cpp_CLarva_ctor_FUN_004fd950
    MOV EDX,dword ptr [ESP + 0x8]       ; 004fd951
    PUSH EDX                            ; 004fd955
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 004fd956
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004fd95b
    PUSH 0x5e6bb2                       ; 004fd95e
    MOV EBX,EAX                         ; 004fd963
    ADD EAX,0x158                       ; 004fd965
    PUSH EAX                            ; 004fd96a
    MOV dword ptr [EAX + -0x4],0x602d34 ; 004fd96b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 004fd972
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2fec],0x3e800000 ; 004fd977
    MOV dword ptr [EBX + 0x2ff0],0x3f000000 ; 004fd981
    MOV dword ptr [EBX + 0x27a0],0x1    ; 004fd98b
    MOV dword ptr [EBX + 0x2538],0x41700000 ; 004fd995
    FLD float ptr [0x00602d20]          ; 004fd99f | DAT_00602d20
    MOV dword ptr [EBX + 0xc26c],0x0    ; 004fd9a5
    FLD float ptr [0x00602d24]          ; 004fd9af | DAT_00602d24
    MOV dword ptr [EBX + 0xc270],0x0    ; 004fd9b5
    ADD ESP,0x8                         ; 004fd9bf
    MOV dword ptr [EBX + 0x252c],0x3f490fdb ; 004fd9c2
    MOV EAX,EBX                         ; 004fd9cc
    FXCH                                ; 004fd9ce
    FSTP float ptr [EBX + 0x2ff4]       ; 004fd9d0
    FSTP float ptr [EBX + 0x2ff8]       ; 004fd9d6
    POP EBX                             ; 004fd9dc
    RET                                 ; 004fd9dd

