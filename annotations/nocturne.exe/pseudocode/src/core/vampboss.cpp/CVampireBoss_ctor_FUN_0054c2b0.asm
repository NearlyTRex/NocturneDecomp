; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_0054c2b0(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_FUN_0054c280 at 0054c293
;
; Referenced Globals:
;   TerminatedCString s_nosfer_dfm_0059702a
;   TerminatedCString s_batboss_dfm_00597035
;   CEnemy_full_vtable g_CVampireBossVTable
;
; Called Functions:
;   core_cloth.cpp_CCloth_ctor_FUN_00435100
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_morph.cpp_CMorph_ctor_FUN_004e0050
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c2b0
        ;   Label: core_vampboss.cpp_CVampireBoss_ctor_FUN_0054c2b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054c2b1
    PUSH EBX                            ; 0054c2b5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 0054c2b6
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00479560(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0054c2bb
    ADD EAX,0xbd24                      ; 0054c2be
    PUSH EAX                            ; 0054c2c3
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660 ; 0054c2c4
        ;   XREF to: 0051b660 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054c2c9
    ADD EAX,0x22b4                      ; 0054c2cc
    PUSH EAX                            ; 0054c2d1
    CALL core_cloth.cpp_CCloth_ctor_FUN_00435100 ; 0054c2d2
        ;   XREF to: 00435100 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_00435100(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0054c2d7
    ADD EAX,0x3ab30                     ; 0054c2da
    PUSH EAX                            ; 0054c2df
    CALL core_cloth.cpp_CCloth_ctor_FUN_00435100 ; 0054c2e0
        ;   XREF to: 00435100 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_00435100(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0054c2e5
    ADD EAX,0x3ab30                     ; 0054c2e8
    PUSH EAX                            ; 0054c2ed
    CALL core_cloth.cpp_CCloth_ctor_FUN_00435100 ; 0054c2ee
        ;   XREF to: 00435100 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_00435100(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0054c2f3
    ADD EAX,0x3ab34                     ; 0054c2f6
    PUSH EAX                            ; 0054c2fb
    CALL core_morph.cpp_CMorph_ctor_FUN_004e0050 ; 0054c2fc
        ;   XREF to: 004e0050 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_004e0050(CMorph * this_ptr)
    ADD ESP,0x4                         ; 0054c301
    LEA EBX,[EAX + 0xfff41e94]          ; 0054c304
    PUSH 0x59702a                       ; 0054c30a | = "nosfer.dfm"
    LEA EAX,[EBX + 0x150]               ; 0054c30f
    PUSH EAX                            ; 0054c315
    MOV dword ptr [EBX + 0x14c],0x5a3a94 ; 0054c316 | g_CVampireBossVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 0054c320
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0054c325
    PUSH 0x597035                       ; 0054c328 | = "batboss.dfm"
    LEA EAX,[EBX + 0xbd24]              ; 0054c32d
    PUSH EAX                            ; 0054c333
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 0054c334
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2dd4],0x40000000 ; 0054c339
    MOV dword ptr [EBX + 0x2dd8],0x40400000 ; 0054c343
    MOV dword ptr [EBX + 0x2ddc],0x42480000 ; 0054c34d
    MOV dword ptr [EBX + 0x2de0],0x42c80000 ; 0054c357
    MOV dword ptr [EBX + 0xbed9c],0x0   ; 0054c361
    MOV dword ptr [EBX + 0xbe168],0x0   ; 0054c36b
    MOV dword ptr [EBX + 0xbed98],0x0   ; 0054c375
    MOV dword ptr [EBX + 0xbedb4],0x0   ; 0054c37f
    MOV dword ptr [EBX + 0xbedb8],0x0   ; 0054c389
    MOV dword ptr [EBX + 0xbedbc],0x0   ; 0054c393
    MOV dword ptr [EBX + 0xbedc0],0x0   ; 0054c39d
    MOV dword ptr [EBX + 0xbedb0],0x0   ; 0054c3a7
    MOV dword ptr [EBX + 0xbedc4],0x0   ; 0054c3b1
    MOV dword ptr [EBX + 0xbeda0],0x41200000 ; 0054c3bb
    ADD ESP,0x8                         ; 0054c3c5
    MOV dword ptr [EBX + 0xbedac],0x1   ; 0054c3c8
    MOV EAX,EBX                         ; 0054c3d2
    MOV dword ptr [EBX + 0x261c],0x0    ; 0054c3d4
    POP EBX                             ; 0054c3de
    RET                                 ; 0054c3df

