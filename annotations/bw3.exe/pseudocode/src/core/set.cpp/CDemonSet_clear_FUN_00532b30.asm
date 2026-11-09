; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_clear_FUN_00532b30(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_set.cpp_CDemonSet_dtor_FUN_00532b00 at 00532b06
;   core_set.cpp_FUN_00532b80 at 00532bb5
;
; Referenced Globals:
;   undefined4 DAT_00606aa0
;
; Called Functions:
;   core_dmodel.cpp_FUN_00460e10
;   core_setdir.cpp_FUN_00541a60
;   core_setutil.cpp_C3DSCamera_free_FUN_00541ac0
;   core_terrain.cpp_CTerrain_free_FUN_005723b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532b30
        ;   Label: core_set.cpp_CDemonSet_clear_FUN_00532b30
    PUSH ESI                            ; 00532b31
    PUSH 0x203b70c                      ; 00532b32
    CALL core_dmodel.cpp_FUN_00460e10   ; 00532b37
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00460e10()
    ADD ESP,0x4                         ; 00532b3c
    MOV ESI,dword ptr [ESP + 0xc]       ; 00532b3f
    ADD ESI,0x4                         ; 00532b43
    MOV EBX,ESI                         ; 00532b46
    ADD ESI,0x19a28                     ; 00532b48
    PUSH EBX                            ; 00532b4e
        ;   Label: LAB_00532b4e
    CALL core_setutil.cpp_C3DSCamera_free_FUN_00541ac0 ; 00532b4f
        ;   XREF to: 00541ac0 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSCamera_free_FUN_00541ac0()
    ADD EBX,0x1a4                       ; 00532b54
    ADD ESP,0x4                         ; 00532b5a
    CMP EBX,ESI                         ; 00532b5d
    JNZ 0x00532b4e                      ; 00532b5f
        ;   XREF to: 00532b4e (CONDITIONAL_JUMP)  ; LAB_00532b4e
    MOV EDX,dword ptr [0x00606aa0]      ; 00532b61 | DAT_00606aa0
    PUSH EDX                            ; 00532b67
    CALL core_terrain.cpp_CTerrain_free_FUN_005723b0 ; 00532b68
        ;   XREF to: 005723b0 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_free_FUN_005723b0(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 00532b6d
    MOV ECX,dword ptr [ESP + 0xc]       ; 00532b70
    PUSH ECX                            ; 00532b74
    CALL core_setdir.cpp_FUN_00541a60   ; 00532b75
        ;   XREF to: 00541a60 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_FUN_00541a60(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00532b7a
    POP ESI                             ; 00532b7d
    POP EBX                             ; 00532b7e
    RET                                 ; 00532b7f

