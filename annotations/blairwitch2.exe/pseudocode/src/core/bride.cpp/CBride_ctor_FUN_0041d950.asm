; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBride * core_bride_cpp_CBride_ctor_FUN_0041d950(CBride *this_ptr)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bride.cpp_factoryFuncBride_FUN_0041d920 at 0041d933
;
; Referenced Globals:
;   undefined4 DAT_005f3c80
;   undefined4 DAT_005f3c84
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d950
        ;   Label: core_bride.cpp_CBride_ctor_FUN_0041d950
    MOV EDX,dword ptr [ESP + 0x8]       ; 0041d951
    PUSH EDX                            ; 0041d955
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 0041d956
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041d95b
    PUSH 0x5cc708                       ; 0041d95e
    MOV EBX,EAX                         ; 0041d963
    ADD EAX,0x2b4                       ; 0041d965
    PUSH EAX                            ; 0041d96a
    MOV dword ptr [EAX + -0x4],0x5f3c94 ; 0041d96b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0041d972
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3430],0x3f400000 ; 0041d977
    FLD float ptr [0x005f3c80]          ; 0041d981 | DAT_005f3c80
    MOV dword ptr [EBX + 0x3434],0x3fc00000 ; 0041d987
    FLD float ptr [0x005f3c84]          ; 0041d991 | DAT_005f3c84
    MOV dword ptr [EBX + 0x10b1c],0x0   ; 0041d997
    ADD ESP,0x8                         ; 0041d9a1
    MOV dword ptr [EBX + 0x259c],0x3fc90fdb ; 0041d9a4
    MOV EAX,EBX                         ; 0041d9ae
    FXCH                                ; 0041d9b0
    FSTP float ptr [EBX + 0x3438]       ; 0041d9b2
    FSTP float ptr [EBX + 0x343c]       ; 0041d9b8
    POP EBX                             ; 0041d9be
    RET                                 ; 0041d9bf

