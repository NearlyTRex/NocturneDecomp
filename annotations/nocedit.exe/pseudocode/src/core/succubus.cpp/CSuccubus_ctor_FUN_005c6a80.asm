; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80(CSuccubus *this_ptr)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_succubus.cpp_factoryFuncSuccubus_FUN_005c6a40 at 005c6a5a
;
; Referenced Globals:
;   TerminatedCString s_succubus_dfm_00653fd8
;   TerminatedCString s_hotdemon_dfm_00653fe5
;   TerminatedCString s_hdwing_cth_00653ff2
;   undefined4 s_dwing.cth_00653ff3
;   undefined4 s_wing.cth_00653ff4
;   undefined4 s_ing.cth_00653ff5
;   float FLOAT_0066392c = 50
;   float FLOAT_00663930 = 100
;   CEnemy_full_vtable g_CSuccubusVTable
;
; Called Functions:
;   core_cloth.cpp_CClothList_ctor_FUN_0043bf40
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_morph.cpp_CMorph_ctor_FUN_0052b310
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6a80
        ;   Label: core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80
    PUSH ESI                            ; 005c6a81
    PUSH EDI                            ; 005c6a82
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c6a83
    PUSH EBX                            ; 005c6a87
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 005c6a88
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005c6a8d
    ADD EAX,0xbebc                      ; 005c6a90
    PUSH EAX                            ; 005c6a95
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 ; 005c6a96
        ;   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005c6a9b
    ADD EAX,0x22b4                      ; 005c6a9e
    PUSH EAX                            ; 005c6aa3
    CALL core_cloth.cpp_CClothList_ctor_FUN_0043bf40 ; 005c6aa4
        ;   XREF to: 0043bf40 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_ctor_FUN_0043bf40(CClothList * this_ptr)
    ADD ESP,0x4                         ; 005c6aa9
    ADD EAX,0x1cc                       ; 005c6aac
    PUSH EAX                            ; 005c6ab1
    CALL core_morph.cpp_CMorph_ctor_FUN_0052b310 ; 005c6ab2
        ;   XREF to: 0052b310 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_0052b310(CMorph * this_ptr)
    ADD ESP,0x4                         ; 005c6ab7
    LEA EBX,[EAX + 0xffff1cc4]          ; 005c6aba
    PUSH 0x653fd8                       ; 005c6ac0 | = "succubus.dfm"
    LEA EAX,[EBX + 0x158]               ; 005c6ac5
    PUSH EAX                            ; 005c6acb
    MOV dword ptr [EBX + 0x154],0x663944 ; 005c6acc | g_CSuccubusVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005c6ad6
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005c6adb
    PUSH 0x653fe5                       ; 005c6ade | = "hotdemon.dfm"
    LEA EAX,[EBX + 0xbebc]              ; 005c6ae3
    PUSH EAX                            ; 005c6ae9
    MOV ESI,0x653ff2                    ; 005c6aea | = "hdwing.cth"
    LEA EDI,[EBX + 0xe174]              ; 005c6aef
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005c6af5
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 005c6afa
    FLD float ptr [0x0066392c]          ; 005c6b04 | FLOAT_0066392c
    MOV dword ptr [EBX + 0x2de0],0x3f666666 ; 005c6b0a
    FLD float ptr [0x00663930]          ; 005c6b14 | FLOAT_00663930
    MOV dword ptr [EBX + 0xe170],0x1    ; 005c6b1a
    ADD ESP,0x8                         ; 005c6b24
    FXCH                                ; 005c6b27
    FSTP float ptr [EBX + 0x2de4]       ; 005c6b29
    FSTP float ptr [EBX + 0x2de8]       ; 005c6b2f
    PUSH EDI                            ; 005c6b35
    MOV AL,byte ptr [ESI]               ; 005c6b36 | = "hdwing.cth" | s_wing.cth_00653ff4
        ;   Label: LAB_005c6b36
    MOV byte ptr [EDI],AL               ; 005c6b38
    CMP AL,0x0                          ; 005c6b3a
    JZ 0x005c6b4e                       ; 005c6b3c
        ;   XREF to: 005c6b4e (CONDITIONAL_JUMP)  ; LAB_005c6b4e
    MOV AL,byte ptr [ESI + 0x1]         ; 005c6b3e | s_dwing.cth_00653ff3 | s_ing.cth_00653ff5
    ADD ESI,0x2                         ; 005c6b41
    MOV byte ptr [EDI + 0x1],AL         ; 005c6b44
    ADD EDI,0x2                         ; 005c6b47
    CMP AL,0x0                          ; 005c6b4a
    JNZ 0x005c6b36                      ; 005c6b4c
        ;   XREF to: 005c6b36 (CONDITIONAL_JUMP)  ; LAB_005c6b36
    POP EDI                             ; 005c6b4e
        ;   Label: LAB_005c6b4e
    MOV EAX,EBX                         ; 005c6b4f
    POP EDI                             ; 005c6b51
    POP ESI                             ; 005c6b52
    POP EBX                             ; 005c6b53
    RET                                 ; 005c6b54

