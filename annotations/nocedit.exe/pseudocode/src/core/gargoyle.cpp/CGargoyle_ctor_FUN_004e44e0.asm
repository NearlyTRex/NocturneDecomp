; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004e44e0(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gargoyle.cpp_factoryFunc_FUN_004e44a0 at 004e44ba
;
; Referenced Globals:
;   TerminatedCString s_gargoyle_dfm_0062d7d6
;   float DAT_0065ea30 = 50
;   float DAT_0065ea34 = 100
;   CDemonActor_vtable g_CGargoyleVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e44e0
        ;   Label: core_gargoyle.cpp_CGargoyle_ctor_FUN_004e44e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e44e1
    PUSH EDX                            ; 004e44e5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 004e44e6
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004e44eb
    PUSH 0x62d7d6                       ; 004e44ee | = "gargoyle.dfm"
    MOV EBX,EAX                         ; 004e44f3
    ADD EAX,0x158                       ; 004e44f5
    PUSH EAX                            ; 004e44fa
    MOV dword ptr [EAX + -0x4],0x65ea44 ; 004e44fb | g_CGargoyleVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004e4502
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 004e4507
    MOV dword ptr [EBX + 0x2de0],0x3f19999a ; 004e4511
    MOV dword ptr [EBX + 0x2610],0x2    ; 004e451b
    MOV dword ptr [EBX + 0x243c],0x41f00000 ; 004e4525
    MOV dword ptr [EBX + 0x108],0xffff  ; 004e452f
    MOV dword ptr [EBX + 0x10c],0xffff  ; 004e4539
    MOV dword ptr [EBX + 0x110],0xffff  ; 004e4543
    MOV dword ptr [EBX + 0xbf04],0xffff ; 004e454d
    MOV dword ptr [EBX + 0xbf08],0xffff ; 004e4557
    MOV dword ptr [EBX + 0xbf0c],0xffff ; 004e4561
    MOV dword ptr [EBX + 0xbeec],0x80   ; 004e456b
    MOV dword ptr [EBX + 0xbef0],0x80   ; 004e4575
    MOV dword ptr [EBX + 0xbef4],0x80   ; 004e457f
    MOV dword ptr [EBX + 0xbef8],0x0    ; 004e4589
    FLD float ptr [0x0065ea30]          ; 004e4593 | DAT_0065ea30
    MOV dword ptr [EBX + 0xbf10],0x0    ; 004e4599
    FLD float ptr [0x0065ea34]          ; 004e45a3 | DAT_0065ea34
    MOV dword ptr [EBX + 0xbf14],0x0    ; 004e45a9
    ADD ESP,0x8                         ; 004e45b3
    MOV dword ptr [EBX + 0x2624],0x0    ; 004e45b6
    MOV EAX,EBX                         ; 004e45c0
    FXCH                                ; 004e45c2
    FSTP float ptr [EBX + 0x2de4]       ; 004e45c4
    FSTP float ptr [EBX + 0x2de8]       ; 004e45ca
    POP EBX                             ; 004e45d0
    RET                                 ; 004e45d1

