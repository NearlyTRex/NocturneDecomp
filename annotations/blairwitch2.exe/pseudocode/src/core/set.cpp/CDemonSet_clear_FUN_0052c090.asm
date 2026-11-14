; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_clear_FUN_0052c090(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_set.cpp_CDemonSet_dtor_FUN_0052c060 at 0052c066
;   core_set.cpp_CDemonSet_load_FUN_0052c0e0 at 0052c115
;
; Referenced Globals:
;   undefined4 DAT_0061e450
;
; Called Functions:
;   core_dmodel.cpp_FUN_0044e590
;   core_setdir.cpp_CDemonSet_freeThumbs_FUN_00539be0
;   core_setutil.cpp_C3DSCamera_free_FUN_0053a830
;   core_terrain.cpp_CTerrain_free_FUN_0057b840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c090
        ;   Label: core_set.cpp_CDemonSet_clear_FUN_0052c090
    PUSH ESI                            ; 0052c091
    PUSH 0x1fc9ff8                      ; 0052c092
    CALL core_dmodel.cpp_FUN_0044e590   ; 0052c097
        ;   XREF to: 0044e590 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_0044e590()
    ADD ESP,0x4                         ; 0052c09c
    MOV ESI,dword ptr [ESP + 0xc]       ; 0052c09f
    ADD ESI,0x4                         ; 0052c0a3
    MOV EBX,ESI                         ; 0052c0a6
    ADD ESI,0x19a28                     ; 0052c0a8
    PUSH EBX                            ; 0052c0ae
        ;   Label: LAB_0052c0ae
    CALL core_setutil.cpp_C3DSCamera_free_FUN_0053a830 ; 0052c0af
        ;   XREF to: 0053a830 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_free_FUN_0053a830(C3DSCamera * this_ptr)
    ADD EBX,0x1a4                       ; 0052c0b4
    ADD ESP,0x4                         ; 0052c0ba
    CMP EBX,ESI                         ; 0052c0bd
    JNZ 0x0052c0ae                      ; 0052c0bf
        ;   XREF to: 0052c0ae (CONDITIONAL_JUMP)  ; LAB_0052c0ae
    MOV EDX,dword ptr [0x0061e450]      ; 0052c0c1 | DAT_0061e450
    PUSH EDX                            ; 0052c0c7
    CALL core_terrain.cpp_CTerrain_free_FUN_0057b840 ; 0052c0c8
        ;   XREF to: 0057b840 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_free_FUN_0057b840(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 0052c0cd
    MOV ECX,dword ptr [ESP + 0xc]       ; 0052c0d0
    PUSH ECX                            ; 0052c0d4
    CALL core_setdir.cpp_CDemonSet_freeThumbs_FUN_00539be0 ; 0052c0d5
        ;   XREF to: 00539be0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_freeThumbs_FUN_00539be0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052c0da
    POP ESI                             ; 0052c0dd
    POP EBX                             ; 0052c0de
    RET                                 ; 0052c0df

