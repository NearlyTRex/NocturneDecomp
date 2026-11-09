; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_004ea8b0(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_melee.cpp_factoryFuncMelee_FUN_004ea880 at 004ea893
;   core_meleeaxe.cpp_CMeleeAxe_ctor_FUN_0059d220 at 0059d228
;   unkafter_cross.cpp_CCross_ctor_FUN_005a69f0 at 005a69f8
;   unkafter_cross.cpp_CSimpleCross_ctor_FUN_005a7980 at 005a7988
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_weapon.cpp_CWeapon_ctor_FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea8b0
        ;   Label: core_melee.cpp_CMelee_ctor_FUN_004ea8b0
    PUSH ESI                            ; 004ea8b1
    PUSH EDI                            ; 004ea8b2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ea8b3
    PUSH EDX                            ; 004ea8b7
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005899d0 ; 004ea8b8
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005899d0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004ea8bd
    PUSH 0x5dc915                       ; 004ea8c0
    MOV EBX,EAX                         ; 004ea8c5
    LEA EDI,[EAX + 0x2b4]               ; 004ea8c7
    PUSH EDI                            ; 004ea8cd
    MOV dword ptr [EAX + 0x2b0],0x5f9ca4 ; 004ea8ce
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004ea8d8
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x43c],0x6     ; 004ea8dd
    MOV dword ptr [EBX + 0x6f8],0xffffffff ; 004ea8e7
    MOV dword ptr [EBX + 0x6c4],0x0     ; 004ea8f1
    MOV dword ptr [EBX + 0x434],0x0     ; 004ea8fb
    MOV dword ptr [EBX + 0x438],0x0     ; 004ea905
    MOV dword ptr [EBX + 0x440],0x0     ; 004ea90f
    MOV dword ptr [EBX + 0x444],0x40a00000 ; 004ea919
    MOV dword ptr [EBX + 0x448],0x0     ; 004ea923
    MOV dword ptr [EBX + 0x44c],0x0     ; 004ea92d
    MOV dword ptr [EBX + 0x6d4],0x3     ; 004ea937
    MOV dword ptr [EBX + 0x6d8],0x41200000 ; 004ea941
    MOV dword ptr [EBX + 0x6dc],0x41700000 ; 004ea94b
    MOV dword ptr [EBX + 0x6e0],0x3f000000 ; 004ea955
    MOV dword ptr [EBX + 0x6e4],0x1     ; 004ea95f
    MOV ESI,0x5dc91f                    ; 004ea969
    MOV dword ptr [EBX + 0x6ec],0x0     ; 004ea96e
    ADD ESP,0x8                         ; 004ea978
    MOV dword ptr [EBX + 0x6f0],0x0     ; 004ea97b
    LEA EDI,[EBX + 0x6fc]               ; 004ea985
    MOV dword ptr [EBX + 0x6f8],0x0     ; 004ea98b
    PUSH EDI                            ; 004ea995
    MOV AL,byte ptr [ESI]               ; 004ea996
        ;   Label: LAB_004ea996
    MOV byte ptr [EDI],AL               ; 004ea998
    CMP AL,0x0                          ; 004ea99a
    JZ 0x004ea9ae                       ; 004ea99c
        ;   XREF to: 004ea9ae (CONDITIONAL_JUMP)  ; LAB_004ea9ae
    MOV AL,byte ptr [ESI + 0x1]         ; 004ea99e
    ADD ESI,0x2                         ; 004ea9a1
    MOV byte ptr [EDI + 0x1],AL         ; 004ea9a4
    ADD EDI,0x2                         ; 004ea9a7
    CMP AL,0x0                          ; 004ea9aa
    JNZ 0x004ea996                      ; 004ea9ac
        ;   XREF to: 004ea996 (CONDITIONAL_JUMP)  ; LAB_004ea996
    POP EDI                             ; 004ea9ae
        ;   Label: LAB_004ea9ae
    MOV ESI,0x5dc936                    ; 004ea9af
    LEA EDI,[EBX + 0x760]               ; 004ea9b4
    PUSH EDI                            ; 004ea9ba
    MOV AL,byte ptr [ESI]               ; 004ea9bb
        ;   Label: LAB_004ea9bb
    MOV byte ptr [EDI],AL               ; 004ea9bd
    CMP AL,0x0                          ; 004ea9bf
    JZ 0x004ea9d3                       ; 004ea9c1
        ;   XREF to: 004ea9d3 (CONDITIONAL_JUMP)  ; LAB_004ea9d3
    MOV AL,byte ptr [ESI + 0x1]         ; 004ea9c3
    ADD ESI,0x2                         ; 004ea9c6
    MOV byte ptr [EDI + 0x1],AL         ; 004ea9c9
    ADD EDI,0x2                         ; 004ea9cc
    CMP AL,0x0                          ; 004ea9cf
    JNZ 0x004ea9bb                      ; 004ea9d1
        ;   XREF to: 004ea9bb (CONDITIONAL_JUMP)  ; LAB_004ea9bb
    POP EDI                             ; 004ea9d3
        ;   Label: LAB_004ea9d3
    MOV ESI,0x5dc94d                    ; 004ea9d4
    LEA EDI,[EBX + 0x7c4]               ; 004ea9d9
    PUSH EDI                            ; 004ea9df
    MOV AL,byte ptr [ESI]               ; 004ea9e0
        ;   Label: LAB_004ea9e0
    MOV byte ptr [EDI],AL               ; 004ea9e2
    CMP AL,0x0                          ; 004ea9e4
    JZ 0x004ea9f8                       ; 004ea9e6
        ;   XREF to: 004ea9f8 (CONDITIONAL_JUMP)  ; LAB_004ea9f8
    MOV AL,byte ptr [ESI + 0x1]         ; 004ea9e8
    ADD ESI,0x2                         ; 004ea9eb
    MOV byte ptr [EDI + 0x1],AL         ; 004ea9ee
    ADD EDI,0x2                         ; 004ea9f1
    CMP AL,0x0                          ; 004ea9f4
    JNZ 0x004ea9e0                      ; 004ea9f6
        ;   XREF to: 004ea9e0 (CONDITIONAL_JUMP)  ; LAB_004ea9e0
    POP EDI                             ; 004ea9f8
        ;   Label: LAB_004ea9f8
    MOV EAX,EBX                         ; 004ea9f9
    POP EDI                             ; 004ea9fb
    POP ESI                             ; 004ea9fc
    POP EBX                             ; 004ea9fd
    RET                                 ; 004ea9fe

