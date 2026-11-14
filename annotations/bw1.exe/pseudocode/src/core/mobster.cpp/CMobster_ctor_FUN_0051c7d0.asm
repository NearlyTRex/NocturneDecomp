; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_0051c7d0(CMobster *this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mobster.cpp_factoryFuncMobster_FUN_0051c7a0 at 0051c7b3
;   core_vehicle.cpp_CVehicle_process_FUN_005a7b50 at 005a81f2
;
; Referenced Globals:
;   TerminatedCString s_mobster1_dfm_005e9c5a
;   TerminatedCString s_none_005e9c67
;   undefined4 s_one_005e9c67+1
;   undefined4 s_ne_005e9c67+2
;   undefined4 s_e_005e9c67+3
;   undefined4 DAT_00603d60
;   undefined4 DAT_00603d64
;   CMobster_full_vtable g_CMobsterVTable
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c7d0
        ;   Label: core_mobster.cpp_CMobster_ctor_FUN_0051c7d0
    PUSH ESI                            ; 0051c7d1
    PUSH EDI                            ; 0051c7d2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051c7d3
    PUSH EDX                            ; 0051c7d7
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 0051c7d8
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0051c7dd
    PUSH 0x5e9c5a                       ; 0051c7e0 | = "mobster1.dfm"
    MOV EBX,EAX                         ; 0051c7e5
    ADD EAX,0x158                       ; 0051c7e7
    PUSH EAX                            ; 0051c7ec
    MOV dword ptr [EAX + -0x4],0x603d74 ; 0051c7ed | g_CMobsterVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 0051c7f4
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x00603d60]          ; 0051c7f9 | DAT_00603d60
    ADD ESP,0x8                         ; 0051c7ff
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 0051c802
    FLD float ptr [0x00603d64]          ; 0051c80c | DAT_00603d64
    MOV dword ptr [EBX + 0x2ff0],0x3f666666 ; 0051c812
    PUSH 0xff                           ; 0051c81c
    FXCH                                ; 0051c821
    FSTP float ptr [EBX + 0x2ff4]       ; 0051c823
    PUSH 0x0                            ; 0051c829
    FSTP float ptr [EBX + 0x2ff8]       ; 0051c82b
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0051c831
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    MOV dword ptr [EBX + 0xc26c],0x0    ; 0051c836
    MOV dword ptr [EBX + 0xc270],0x0    ; 0051c840
    MOV dword ptr [EBX + 0xc274],0x0    ; 0051c84a
    MOV dword ptr [EBX + 0xc338],0x0    ; 0051c854
    ADD ESP,0x8                         ; 0051c85e
    MOV dword ptr [EBX + 0xc33c],0x0    ; 0051c861
    PUSH 0x65                           ; 0051c86b
    MOV dword ptr [EBX + 0xc25c],0x42200000 ; 0051c86d
    PUSH 0x62                           ; 0051c877
    MOV dword ptr [EBX + 0xc268],EAX    ; 0051c879
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0051c87f
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    MOV dword ptr [EBX + 0xc280],0x0    ; 0051c884
    MOV dword ptr [EBX + 0xc278],0x0    ; 0051c88e
    MOV dword ptr [EBX + 0xc284],0x0    ; 0051c898
    MOV dword ptr [EBX + 0xc288],0x0    ; 0051c8a2
    MOV dword ptr [EBX + 0xc28c],0x0    ; 0051c8ac
    MOV ESI,0x5e9c67                    ; 0051c8b6 | = "none"
    MOV dword ptr [EBX + 0xc290],0x0    ; 0051c8bb
    ADD ESP,0x8                         ; 0051c8c5
    MOV dword ptr [EBX + 0xc294],0x0    ; 0051c8c8
    LEA EDI,[EBX + 0xc298]              ; 0051c8d2
    MOV byte ptr [EBX + 0xc27c],AL      ; 0051c8d8
    PUSH EDI                            ; 0051c8de
    MOV AL,byte ptr [ESI]               ; 0051c8df | = "none" | s_ne_005e9c67+2
        ;   Label: LAB_0051c8df
    MOV byte ptr [EDI],AL               ; 0051c8e1
    CMP AL,0x0                          ; 0051c8e3
    JZ 0x0051c8f7                       ; 0051c8e5
        ;   XREF to: 0051c8f7 (CONDITIONAL_JUMP)  ; LAB_0051c8f7
    MOV AL,byte ptr [ESI + 0x1]         ; 0051c8e7 | s_one_005e9c67+1 | s_e_005e9c67+3
    ADD ESI,0x2                         ; 0051c8ea
    MOV byte ptr [EDI + 0x1],AL         ; 0051c8ed
    ADD EDI,0x2                         ; 0051c8f0
    CMP AL,0x0                          ; 0051c8f3
    JNZ 0x0051c8df                      ; 0051c8f5
        ;   XREF to: 0051c8df (CONDITIONAL_JUMP)  ; LAB_0051c8df
    POP EDI                             ; 0051c8f7
        ;   Label: LAB_0051c8f7
    MOV EAX,EBX                         ; 0051c8f8
    MOV dword ptr [EBX + 0xc264],0x0    ; 0051c8fa
    POP EDI                             ; 0051c904
    POP ESI                             ; 0051c905
    POP EBX                             ; 0051c906
    RET                                 ; 0051c907

