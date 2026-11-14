; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHino * __cdecl core_hino_cpp_CHino_ctor_FUN_0059b670(CHino *this_ptr)
;
; Parameters:
; CHino *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hino.cpp_factoryFuncHino_FUN_0059b640 at 0059b653
;
; Referenced Globals:
;   undefined4 DAT_005e81b0
;   undefined4 DAT_005e81b4
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0059b670
        ;   Label: core_hino.cpp_CHino_ctor_FUN_0059b670
    MOV ESI,dword ptr [ESP + 0x8]       ; 0059b671
    PUSH EBX                            ; 0059b675
    PUSH ESI                            ; 0059b676
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 0059b677
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059b67c
    MOV EBX,EAX                         ; 0059b67f
    PUSH 0x5d9bca                       ; 0059b681
    MOV ESI,EAX                         ; 0059b686
    ADD EAX,0x158                       ; 0059b688
    PUSH EAX                            ; 0059b68d
    MOV dword ptr [EAX + -0x4],0x5e81c4 ; 0059b68e
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0059b695
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 0059b69a
    MOV dword ptr [EBX + 0x3270],0x3f666666 ; 0059b6a4
    MOV dword ptr [EBX + 0x2538],0x42b40000 ; 0059b6ae
    MOV dword ptr [EBX + 0xd060],0x40000000 ; 0059b6b8
    MOV dword ptr [EBX + 0xd064],0x0    ; 0059b6c2
    MOV dword ptr [EBX + 0xd068],0x0    ; 0059b6cc
    MOV dword ptr [EBX + 0xd05c],0x10000 ; 0059b6d6
    FLD float ptr [0x005e81b0]          ; 0059b6e0 | DAT_005e81b0
    MOV dword ptr [EBX + 0xd06c],0x0    ; 0059b6e6
    FLD float ptr [0x005e81b4]          ; 0059b6f0 | DAT_005e81b4
    MOV dword ptr [EBX + 0xd070],0x0    ; 0059b6f6
    ADD ESP,0x8                         ; 0059b700
    MOV dword ptr [EBX + 0xd074],0x0    ; 0059b703
    MOV EAX,EBX                         ; 0059b70d
    FXCH                                ; 0059b70f
    FSTP float ptr [EBX + 0x3274]       ; 0059b711
    FSTP float ptr [EBX + 0x3278]       ; 0059b717
    LEA EDX,[EBX + 0x34]                ; 0059b71d
    POP EBX                             ; 0059b720
    ADD EAX,0x4                         ; 0059b721
        ;   Label: LAB_0059b721
    MOV dword ptr [EAX + 0xd078],0x0    ; 0059b724
    CMP EAX,EDX                         ; 0059b72e
    JNZ 0x0059b721                      ; 0059b730
        ;   XREF to: 0059b721 (CONDITIONAL_JUMP)  ; LAB_0059b721
    MOV EAX,ESI                         ; 0059b732
    POP ESI                             ; 0059b734
    RET                                 ; 0059b735

