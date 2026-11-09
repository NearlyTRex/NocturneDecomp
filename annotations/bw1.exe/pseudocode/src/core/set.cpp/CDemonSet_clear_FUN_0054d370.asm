; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_clear_FUN_0054d370(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_set.cpp_CDemonSet_dtor_FUN_0054d340 at 0054d346
;   core_set.cpp_FUN_0054d3c0 at 0054d3f5
;
; Referenced Globals:
;   undefined4 DAT_00625bc0
;
; Called Functions:
;   core_dmodel.cpp_FUN_00467160
;   core_setdir.cpp_FUN_0055c0a0
;   core_setutil.cpp_C3DSCamera_free_FUN_0055c100
;   core_terrain.cpp_CTerrain_free_FUN_0059f3c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d370
        ;   Label: core_set.cpp_CDemonSet_clear_FUN_0054d370
    PUSH ESI                            ; 0054d371
    PUSH 0x1fe5fac                      ; 0054d372
    CALL core_dmodel.cpp_FUN_00467160   ; 0054d377
        ;   XREF to: 00467160 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00467160()
    ADD ESP,0x4                         ; 0054d37c
    MOV ESI,dword ptr [ESP + 0xc]       ; 0054d37f
    ADD ESI,0x4                         ; 0054d383
    MOV EBX,ESI                         ; 0054d386
    ADD ESI,0x19a28                     ; 0054d388
    PUSH EBX                            ; 0054d38e
        ;   Label: LAB_0054d38e
    CALL core_setutil.cpp_C3DSCamera_free_FUN_0055c100 ; 0054d38f
        ;   XREF to: 0055c100 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSCamera_free_FUN_0055c100()
    ADD EBX,0x1a4                       ; 0054d394
    ADD ESP,0x4                         ; 0054d39a
    CMP EBX,ESI                         ; 0054d39d
    JNZ 0x0054d38e                      ; 0054d39f
        ;   XREF to: 0054d38e (CONDITIONAL_JUMP)  ; LAB_0054d38e
    MOV EDX,dword ptr [0x00625bc0]      ; 0054d3a1 | DAT_00625bc0
    PUSH EDX                            ; 0054d3a7
    CALL core_terrain.cpp_CTerrain_free_FUN_0059f3c0 ; 0054d3a8
        ;   XREF to: 0059f3c0 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_free_FUN_0059f3c0(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 0054d3ad
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054d3b0
    PUSH ECX                            ; 0054d3b4
    CALL core_setdir.cpp_FUN_0055c0a0   ; 0054d3b5
        ;   XREF to: 0055c0a0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_FUN_0055c0a0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0054d3ba
    POP ESI                             ; 0054d3bd
    POP EBX                             ; 0054d3be
    RET                                 ; 0054d3bf

