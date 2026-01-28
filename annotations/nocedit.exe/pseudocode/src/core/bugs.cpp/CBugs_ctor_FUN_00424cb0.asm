; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_00424cb0(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bugs.cpp_factoryFunc_FUN_00424c70 at 00424c8a
;
; Referenced Globals:
;   TerminatedCString s_roach_kfm_00616ce0
;   TerminatedCString s_hroach_kfm_00616cea
;   TerminatedCString s_mroach_kfm_00616cf5
;   TerminatedCString s_guul_dfm_00616d00
;   TerminatedCString s_true_00616d09
;   undefined4 s_rue_00616d0a
;   undefined4 s_ue_00616d0b
;   undefined4 s_e_00616d0c
;   TerminatedCString s_true_00616d0e
;   undefined4 s_rue_00616d0f
;   undefined4 s_ue_00616d10
;   undefined4 s_e_00616d11
;   TerminatedCString s_false_00616d13
;   undefined4 s_alse_00616d14
;   undefined4 s_lse_00616d15
;   ... and 4 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424cb0
        ;   Label: core_bugs.cpp_CBugs_ctor_FUN_00424cb0
    PUSH ESI                            ; 00424cb1
    PUSH EDI                            ; 00424cb2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00424cb3
    PUSH EBX                            ; 00424cb7
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 00424cb8
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00424cbd
    PUSH 0x65b750                       ; 00424cc0 | g_SBugTypeInfo
    PUSH 0x190                          ; 00424cc5
    ADD EAX,0xbec4                      ; 00424cca
    PUSH EAX                            ; 00424ccf
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00424cd0
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00424cd5
    PUSH 0x65b770                       ; 00424cd8 | g_CKeyFramedModelInstanceTypeInfo
    PUSH 0x4                            ; 00424cdd
    ADD EAX,0x6404                      ; 00424cdf
    PUSH EAX                            ; 00424ce4
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00424ce5
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00424cea
    LEA EBX,[EAX + 0xfffedd38]          ; 00424ced
    PUSH 0x6400                         ; 00424cf3
    MOV dword ptr [EBX + 0x154],0x65b5e4 ; 00424cf8 | g_CBugsVTable
    PUSH 0x0                            ; 00424d02
    LEA EAX,[EBX + 0xbec4]              ; 00424d04
    MOV dword ptr [EBX + 0xbebc],0x0    ; 00424d0a
    PUSH EAX                            ; 00424d14
    MOV dword ptr [EBX + 0xbec0],0x32   ; 00424d15
    CALL crt_memory.c_memset_FUN_005fde40 ; 00424d1f
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00424d24
    PUSH 0x616ce0                       ; 00424d27 | = "roach.kfm"
    LEA EAX,[EBX + 0x122c8]             ; 00424d2c
    PUSH EAX                            ; 00424d32
    MOV dword ptr [EBX + 0x122c4],0x3   ; 00424d33
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00424d3d
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00424d42
    PUSH 0x616cea                       ; 00424d45 | = "hroach.kfm"
    LEA EAX,[EBX + 0x12444]             ; 00424d4a
    PUSH EAX                            ; 00424d50
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00424d51
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00424d56
    PUSH 0x616cf5                       ; 00424d59 | = "mroach.kfm"
    LEA EAX,[EBX + 0x125c0]             ; 00424d5e
    PUSH EAX                            ; 00424d64
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00424d65
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00424d6a
    PUSH 0x616d00                       ; 00424d6d | = "guul.dfm"
    LEA EAX,[EBX + 0x158]               ; 00424d72
    PUSH EAX                            ; 00424d78
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00424d79
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x12af8],0x0   ; 00424d7e
    MOV ESI,0x616d09                    ; 00424d88 | = "true"
    MOV dword ptr [EBX + 0x12afc],0x0   ; 00424d8d
    ADD ESP,0x8                         ; 00424d97
    MOV dword ptr [EBX + 0x12b34],0x0   ; 00424d9a
    LEA EDI,[EBX + 0x198a0]             ; 00424da4
    MOV dword ptr [EBX + 0x19898],0x0   ; 00424daa
    PUSH EDI                            ; 00424db4
    MOV AL,byte ptr [ESI]               ; 00424db5 | = "true" | s_ue_00616d0b
        ;   Label: LAB_00424db5
    MOV byte ptr [EDI],AL               ; 00424db7
    CMP AL,0x0                          ; 00424db9
    JZ 0x00424dcd                       ; 00424dbb
        ;   XREF to: 00424dcd (CONDITIONAL_JUMP)  ; LAB_00424dcd
    MOV AL,byte ptr [ESI + 0x1]         ; 00424dbd | s_rue_00616d0a | s_e_00616d0c
    ADD ESI,0x2                         ; 00424dc0
    MOV byte ptr [EDI + 0x1],AL         ; 00424dc3
    ADD EDI,0x2                         ; 00424dc6
    CMP AL,0x0                          ; 00424dc9
    JNZ 0x00424db5                      ; 00424dcb
        ;   XREF to: 00424db5 (CONDITIONAL_JUMP)  ; LAB_00424db5
    POP EDI                             ; 00424dcd
        ;   Label: LAB_00424dcd
    MOV ESI,0x616d0e                    ; 00424dce | = "true"
    LEA EDI,[EBX + 0x19904]             ; 00424dd3
    MOV dword ptr [EBX + 0x1989c],0x0   ; 00424dd9
    PUSH EDI                            ; 00424de3
    MOV AL,byte ptr [ESI]               ; 00424de4 | = "true" | s_ue_00616d10
        ;   Label: LAB_00424de4
    MOV byte ptr [EDI],AL               ; 00424de6
    CMP AL,0x0                          ; 00424de8
    JZ 0x00424dfc                       ; 00424dea
        ;   XREF to: 00424dfc (CONDITIONAL_JUMP)  ; LAB_00424dfc
    MOV AL,byte ptr [ESI + 0x1]         ; 00424dec | s_rue_00616d0f | s_e_00616d11
    ADD ESI,0x2                         ; 00424def
    MOV byte ptr [EDI + 0x1],AL         ; 00424df2
    ADD EDI,0x2                         ; 00424df5
    CMP AL,0x0                          ; 00424df8
    JNZ 0x00424de4                      ; 00424dfa
        ;   XREF to: 00424de4 (CONDITIONAL_JUMP)  ; LAB_00424de4
    POP EDI                             ; 00424dfc
        ;   Label: LAB_00424dfc
    MOV ESI,0x616d13                    ; 00424dfd | = "false"
    LEA EDI,[EBX + 0x19968]             ; 00424e02
    PUSH EDI                            ; 00424e08
    MOV AL,byte ptr [ESI]               ; 00424e09 | = "false" | s_lse_00616d15
        ;   Label: LAB_00424e09
    MOV byte ptr [EDI],AL               ; 00424e0b
    CMP AL,0x0                          ; 00424e0d
    JZ 0x00424e21                       ; 00424e0f
        ;   XREF to: 00424e21 (CONDITIONAL_JUMP)  ; LAB_00424e21
    MOV AL,byte ptr [ESI + 0x1]         ; 00424e11 | s_alse_00616d14 | s_se_00616d16
    ADD ESI,0x2                         ; 00424e14
    MOV byte ptr [EDI + 0x1],AL         ; 00424e17
    ADD EDI,0x2                         ; 00424e1a
    CMP AL,0x0                          ; 00424e1d
    JNZ 0x00424e09                      ; 00424e1f
        ;   XREF to: 00424e09 (CONDITIONAL_JUMP)  ; LAB_00424e09
    POP EDI                             ; 00424e21
        ;   Label: LAB_00424e21
    MOV dword ptr [EBX + 0x2ddc],0x401f5c29 ; 00424e22
    MOV dword ptr [EBX + 0x2de0],0x40200000 ; 00424e2c
    MOV dword ptr [EBX + 0x2dec],0x3fa66666 ; 00424e36
    MOV EAX,EBX                         ; 00424e40
    MOV dword ptr [EBX + 0x2df0],0x3fc00000 ; 00424e42
    POP EDI                             ; 00424e4c
    POP ESI                             ; 00424e4d
    POP EBX                             ; 00424e4e
    RET                                 ; 00424e4f

