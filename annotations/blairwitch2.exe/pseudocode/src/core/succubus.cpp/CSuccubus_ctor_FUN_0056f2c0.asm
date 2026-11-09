; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_0056f2c0(CSuccubus *this_ptr)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_succubus.cpp_factoryFuncSuccubus_FUN_0056f290 at 0056f2a3
;
; Referenced Globals:
;   undefined4 DAT_005fc3cc
;   undefined4 DAT_005fc3d0
;
; Called Functions:
;   core_cloth.cpp_CClothList_ctor_FUN_005b1440
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_morph.cpp_CMorph_ctor_FUN_005b6e60
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f2c0
        ;   Label: core_succubus.cpp_CSuccubus_ctor_FUN_0056f2c0
    PUSH ESI                            ; 0056f2c1
    PUSH EDI                            ; 0056f2c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056f2c3
    PUSH EBX                            ; 0056f2c7
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 0056f2c8
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0056f2cd
    ADD EAX,0x10af8                     ; 0056f2d0
    PUSH EAX                            ; 0056f2d5
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0 ; 0056f2d6
        ;   XREF to: 00544cd0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056f2db
    ADD EAX,0x22b4                      ; 0056f2de
    PUSH EAX                            ; 0056f2e3
    CALL core_cloth.cpp_CClothList_ctor_FUN_005b1440 ; 0056f2e4
        ;   XREF to: 005b1440 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_ctor_FUN_005b1440(CClothList * this_ptr)
    ADD ESP,0x4                         ; 0056f2e9
    ADD EAX,0x1cc                       ; 0056f2ec
    PUSH EAX                            ; 0056f2f1
    CALL core_morph.cpp_CMorph_ctor_FUN_005b6e60 ; 0056f2f2
        ;   XREF to: 005b6e60 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_005b6e60(CMorph * this_ptr)
    ADD ESP,0x4                         ; 0056f2f7
    LEA EBX,[EAX + 0xfffed088]          ; 0056f2fa
    PUSH 0x5ebf94                       ; 0056f300
    LEA EAX,[EBX + 0x2b4]               ; 0056f305
    PUSH EAX                            ; 0056f30b
    MOV dword ptr [EBX + 0x2b0],0x5fc3e4 ; 0056f30c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0056f316
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0056f31b
    PUSH 0x5ebfa1                       ; 0056f31e
    LEA EAX,[EBX + 0x10af8]             ; 0056f323
    PUSH EAX                            ; 0056f329
    MOV ESI,0x5ebfae                    ; 0056f32a
    LEA EDI,[EBX + 0x12db0]             ; 0056f32f
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0056f335
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 0056f33a
    FLD float ptr [0x005fc3cc]          ; 0056f344 | DAT_005fc3cc
    MOV dword ptr [EBX + 0x3434],0x3f666666 ; 0056f34a
    FLD float ptr [0x005fc3d0]          ; 0056f354 | DAT_005fc3d0
    MOV dword ptr [EBX + 0x12dac],0x1   ; 0056f35a
    ADD ESP,0x8                         ; 0056f364
    FXCH                                ; 0056f367
    FSTP float ptr [EBX + 0x3438]       ; 0056f369
    FSTP float ptr [EBX + 0x343c]       ; 0056f36f
    PUSH EDI                            ; 0056f375
    MOV AL,byte ptr [ESI]               ; 0056f376
        ;   Label: LAB_0056f376
    MOV byte ptr [EDI],AL               ; 0056f378
    CMP AL,0x0                          ; 0056f37a
    JZ 0x0056f38e                       ; 0056f37c
        ;   XREF to: 0056f38e (CONDITIONAL_JUMP)  ; LAB_0056f38e
    MOV AL,byte ptr [ESI + 0x1]         ; 0056f37e
    ADD ESI,0x2                         ; 0056f381
    MOV byte ptr [EDI + 0x1],AL         ; 0056f384
    ADD EDI,0x2                         ; 0056f387
    CMP AL,0x0                          ; 0056f38a
    JNZ 0x0056f376                      ; 0056f38c
        ;   XREF to: 0056f376 (CONDITIONAL_JUMP)  ; LAB_0056f376
    POP EDI                             ; 0056f38e
        ;   Label: LAB_0056f38e
    MOV EAX,EBX                         ; 0056f38f
    POP EDI                             ; 0056f391
    POP ESI                             ; 0056f392
    POP EBX                             ; 0056f393
    RET                                 ; 0056f394

