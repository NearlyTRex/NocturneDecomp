; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_clear_FUN_005693c0(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_set.cpp_CDemonSet_dtor_FUN_00569350 at 00569356
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 00569448
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 00579a9d
;
; Referenced Globals:
;   CTerrain* g_CTerrainPtr = 03f8749c
;   CKeyFramedModel g_CKeyFramedModelInstance
;   CTerrain g_CTerrainInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
;   core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0
;   core_setutil.cpp_C3DSCamera_free_FUN_00585360
;   core_terrain.cpp_CTerrain_dtor_FUN_005e1f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005693c0
        ;   Label: core_set.cpp_CDemonSet_clear_FUN_005693c0
    PUSH ESI                            ; 005693c1
    PUSH 0x32780a4                      ; 005693c2 | g_CKeyFramedModelInstance
    CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690 ; 005693c7
        ;   XREF to: 00477690 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 005693cc
    MOV ESI,dword ptr [ESP + 0xc]       ; 005693cf
    ADD ESI,0x4                         ; 005693d3
    MOV EBX,ESI                         ; 005693d6
    ADD ESI,0x19a28                     ; 005693d8
    PUSH EBX                            ; 005693de
        ;   Label: LAB_005693de
    CALL core_setutil.cpp_C3DSCamera_free_FUN_00585360 ; 005693df
        ;   XREF to: 00585360 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_free_FUN_00585360(C3DSCamera * this_ptr)
    ADD EBX,0x1a4                       ; 005693e4
    ADD ESP,0x4                         ; 005693ea
    CMP EBX,ESI                         ; 005693ed
    JNZ 0x005693de                      ; 005693ef
        ;   XREF to: 005693de (CONDITIONAL_JUMP)  ; LAB_005693de
    MOV EDX,dword ptr [0x006843f8]      ; 005693f1 | g_CTerrainInstance | g_CTerrainPtr
    PUSH EDX                            ; 005693f7 | g_CTerrainInstance
    CALL core_terrain.cpp_CTerrain_dtor_FUN_005e1f30 ; 005693f8
        ;   XREF to: 005e1f30 (UNCONDITIONAL_CALL)  ; CTerrain * core_terrain.cpp_CTerrain_dtor_FUN_005e1f30(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 005693fd
    MOV ECX,dword ptr [ESP + 0xc]       ; 00569400
    PUSH ECX                            ; 00569404
    CALL core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0 ; 00569405
        ;   XREF to: 00575df0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056940a
    POP ESI                             ; 0056940d
    POP EBX                             ; 0056940e
    RET                                 ; 0056940f

