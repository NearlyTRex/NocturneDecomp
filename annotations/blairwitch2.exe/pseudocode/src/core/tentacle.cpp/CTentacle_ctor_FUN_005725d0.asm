; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTentacle * __cdecl core_tentacle_cpp_CTentacle_ctor_FUN_005725d0(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tentacle.cpp_factoryFuncTentacle_FUN_005725a0 at 005725b3
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005725d0
        ;   Label: core_tentacle.cpp_CTentacle_ctor_FUN_005725d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005725d1
    PUSH EDX                            ; 005725d5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 005725d6
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005725db
    PUSH 0x5ec464                       ; 005725de
    MOV EBX,EAX                         ; 005725e3
    ADD EAX,0x2b4                       ; 005725e5
    PUSH EAX                            ; 005725ea
    MOV dword ptr [EAX + -0x4],0x5fcc84 ; 005725eb
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005725f2
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3438],0x42480000 ; 005725f7
    MOV dword ptr [EBX + 0x343c],0x42c80000 ; 00572601
    MOV dword ptr [EBX + 0x10af8],0x0   ; 0057260b
    ADD ESP,0x8                         ; 00572615
    MOV dword ptr [EBX + 0x10afc],0x0   ; 00572618
    MOV EAX,EBX                         ; 00572622
    MOV dword ptr [EBX + 0x10b00],0x0   ; 00572624
    POP EBX                             ; 0057262e
    RET                                 ; 0057262f

