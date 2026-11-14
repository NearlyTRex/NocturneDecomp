; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_00591f10(CSuccubus *this_ptr)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_succubus.cpp_factoryFuncSuccubus_FUN_00591ee0 at 00591ef3
;
; Referenced Globals:
;   undefined4 DAT_0060626c
;   undefined4 DAT_00606270
;
; Called Functions:
;   core_cloth.cpp_CClothList_ctor_FUN_00441c60
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_morph.cpp_CMorph_ctor_FUN_00522fa0
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591f10
        ;   Label: core_succubus.cpp_CSuccubus_ctor_FUN_00591f10
    PUSH ESI                            ; 00591f11
    PUSH EDI                            ; 00591f12
    MOV EBX,dword ptr [ESP + 0x10]      ; 00591f13
    PUSH EBX                            ; 00591f17
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 00591f18
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00591f1d
    ADD EAX,0xc268                      ; 00591f20
    PUSH EAX                            ; 00591f25
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370 ; 00591f26
        ;   XREF to: 00567370 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00591f2b
    ADD EAX,0x23a4                      ; 00591f2e
    PUSH EAX                            ; 00591f33
    CALL core_cloth.cpp_CClothList_ctor_FUN_00441c60 ; 00591f34
        ;   XREF to: 00441c60 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_ctor_FUN_00441c60(CClothList * this_ptr)
    ADD ESP,0x4                         ; 00591f39
    ADD EAX,0x1cc                       ; 00591f3c
    PUSH EAX                            ; 00591f41
    CALL core_morph.cpp_CMorph_ctor_FUN_00522fa0 ; 00591f42
        ;   XREF to: 00522fa0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_00522fa0(CMorph * this_ptr)
    ADD ESP,0x4                         ; 00591f47
    LEA EBX,[EAX + 0xffff1828]          ; 00591f4a
    PUSH 0x5f7208                       ; 00591f50
    LEA EAX,[EBX + 0x158]               ; 00591f55
    PUSH EAX                            ; 00591f5b
    MOV dword ptr [EBX + 0x154],0x606284 ; 00591f5c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00591f66
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00591f6b
    PUSH 0x5f7215                       ; 00591f6e
    LEA EAX,[EBX + 0xc268]              ; 00591f73
    PUSH EAX                            ; 00591f79
    MOV ESI,0x5f7222                    ; 00591f7a
    LEA EDI,[EBX + 0xe610]              ; 00591f7f
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00591f85
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 00591f8a
    FLD float ptr [0x0060626c]          ; 00591f94 | DAT_0060626c
    MOV dword ptr [EBX + 0x2ff0],0x3f666666 ; 00591f9a
    FLD float ptr [0x00606270]          ; 00591fa4 | DAT_00606270
    MOV dword ptr [EBX + 0xe60c],0x1    ; 00591faa
    ADD ESP,0x8                         ; 00591fb4
    FXCH                                ; 00591fb7
    FSTP float ptr [EBX + 0x2ff4]       ; 00591fb9
    FSTP float ptr [EBX + 0x2ff8]       ; 00591fbf
    PUSH EDI                            ; 00591fc5
    MOV AL,byte ptr [ESI]               ; 00591fc6
        ;   Label: LAB_00591fc6
    MOV byte ptr [EDI],AL               ; 00591fc8
    CMP AL,0x0                          ; 00591fca
    JZ 0x00591fde                       ; 00591fcc
        ;   XREF to: 00591fde (CONDITIONAL_JUMP)  ; LAB_00591fde
    MOV AL,byte ptr [ESI + 0x1]         ; 00591fce
    ADD ESI,0x2                         ; 00591fd1
    MOV byte ptr [EDI + 0x1],AL         ; 00591fd4
    ADD EDI,0x2                         ; 00591fd7
    CMP AL,0x0                          ; 00591fda
    JNZ 0x00591fc6                      ; 00591fdc
        ;   XREF to: 00591fc6 (CONDITIONAL_JUMP)  ; LAB_00591fc6
    POP EDI                             ; 00591fde
        ;   Label: LAB_00591fde
    MOV EAX,EBX                         ; 00591fdf
    POP EDI                             ; 00591fe1
    POP ESI                             ; 00591fe2
    POP EBX                             ; 00591fe3
    RET                                 ; 00591fe4

