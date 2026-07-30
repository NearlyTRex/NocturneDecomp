; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSuccubus * __cdecl core_succubus_cpp_FUN_00540b40(CSuccubus *this_ptr)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_succubus.cpp_factoryFunc_FUN_00540b10 at 00540b23
;
; Referenced Globals:
;   TerminatedCString s_succubus_dfm_00595ffe
;   TerminatedCString s_hotdemon_dfm_0059600b
;   TerminatedCString s_hdwing_cth_00596018
;   undefined4 s_hdwing_cth_00596018+1
;   undefined4 s_hdwing_cth_00596018+2
;   undefined4 s_hdwing_cth_00596018+3
;   float FLOAT_005a28cc = 50
;   float FLOAT_005a28d0 = 100
;   CEnemy_full_vtable g_CSuccubusVTable
;
; Called Functions:
;   core_cloth.cpp_CClothList_ctor_FUN_00438210
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_morph.cpp_CMorph_ctor_FUN_004e0050
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540b40
        ;   Label: core_succubus.cpp_FUN_00540b40
    PUSH ESI                            ; 00540b41
    PUSH EDI                            ; 00540b42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00540b43
    PUSH EBX                            ; 00540b47
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 00540b48
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00479560(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00540b4d
    ADD EAX,0xbd24                      ; 00540b50
    PUSH EAX                            ; 00540b55
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660 ; 00540b56
        ;   XREF to: 0051b660 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00540b5b
    ADD EAX,0x22b4                      ; 00540b5e
    PUSH EAX                            ; 00540b63
    CALL core_cloth.cpp_CClothList_ctor_FUN_00438210 ; 00540b64
        ;   XREF to: 00438210 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_ctor_FUN_00438210(CClothList * this_ptr)
    ADD ESP,0x4                         ; 00540b69
    ADD EAX,0x1cc                       ; 00540b6c
    PUSH EAX                            ; 00540b71
    CALL core_morph.cpp_CMorph_ctor_FUN_004e0050 ; 00540b72
        ;   XREF to: 004e0050 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_004e0050(CMorph * this_ptr)
    ADD ESP,0x4                         ; 00540b77
    LEA EBX,[EAX + 0xffff1e5c]          ; 00540b7a
    PUSH 0x595ffe                       ; 00540b80 | = "succubus.dfm"
    LEA EAX,[EBX + 0x150]               ; 00540b85
    PUSH EAX                            ; 00540b8b
    MOV dword ptr [EBX + 0x14c],0x5a28e4 ; 00540b8c | g_CSuccubusVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00540b96
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00540b9b
    PUSH 0x59600b                       ; 00540b9e | = "hotdemon.dfm"
    LEA EAX,[EBX + 0xbd24]              ; 00540ba3
    PUSH EAX                            ; 00540ba9
    MOV ESI,0x596018                    ; 00540baa | = "hdwing.cth"
    LEA EDI,[EBX + 0xdfdc]              ; 00540baf
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00540bb5
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 00540bba
    FLD float ptr [0x005a28cc]          ; 00540bc4 | FLOAT_005a28cc
    MOV dword ptr [EBX + 0x2dd8],0x3f666666 ; 00540bca
    FLD float ptr [0x005a28d0]          ; 00540bd4 | FLOAT_005a28d0
    MOV dword ptr [EBX + 0xdfd8],0x1    ; 00540bda
    ADD ESP,0x8                         ; 00540be4
    FXCH                                ; 00540be7
    FSTP float ptr [EBX + 0x2ddc]       ; 00540be9
    FSTP float ptr [EBX + 0x2de0]       ; 00540bef
    PUSH EDI                            ; 00540bf5
    MOV AL,byte ptr [ESI]               ; 00540bf6 | = "hdwing.cth" | s_hdwing_cth_00596018+2
        ;   Label: LAB_00540bf6
    MOV byte ptr [EDI],AL               ; 00540bf8
    CMP AL,0x0                          ; 00540bfa
    JZ 0x00540c0e                       ; 00540bfc
        ;   XREF to: 00540c0e (CONDITIONAL_JUMP)  ; LAB_00540c0e
    MOV AL,byte ptr [ESI + 0x1]         ; 00540bfe | s_hdwing_cth_00596018+1 | s_hdwing_cth_00596018+3
    ADD ESI,0x2                         ; 00540c01
    MOV byte ptr [EDI + 0x1],AL         ; 00540c04
    ADD EDI,0x2                         ; 00540c07
    CMP AL,0x0                          ; 00540c0a
    JNZ 0x00540bf6                      ; 00540c0c
        ;   XREF to: 00540bf6 (CONDITIONAL_JUMP)  ; LAB_00540bf6
    POP EDI                             ; 00540c0e
        ;   Label: LAB_00540c0e
    MOV EAX,EBX                         ; 00540c0f
    POP EDI                             ; 00540c11
    POP ESI                             ; 00540c12
    POP EBX                             ; 00540c13
    RET                                 ; 00540c14

