; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_skeleton_cpp_FUN_0054fa00(CDeformableModelInstance *param_1)
;
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004322a0 at 004322cb
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041d840
;   core_box.cpp_CBoundingBox3D_reset_FUN_0041e8b0
;   core_box.cpp_FUN_0041d8b0
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_xform.cpp_FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054fa00
        ;   Label: core_skeleton.cpp_FUN_0054fa00
    PUSH EDI                            ; 0054fa01
    PUSH EBP                            ; 0054fa02
    SUB ESP,0x64                        ; 0054fa03
    MOV dword ptr [ESP + 0x48],ESI      ; 0054fa06
    MOV ESI,dword ptr [ESP + 0x74]      ; 0054fa0a
    PUSH ESI                            ; 0054fa0e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054fa0f
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054fa14
    PUSH EAX                            ; 0054fa17
    MOV EBX,EAX                         ; 0054fa18
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0 ; 0054fa1a
        ;   XREF to: 005487e0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0054fa1f
    MOV EAX,dword ptr [EAX + 0x1de78]   ; 0054fa22
    MOV dword ptr [ESP + 0x4c],EAX      ; 0054fa28
    MOV EAX,ESP                         ; 0054fa2c
    PUSH EAX                            ; 0054fa2e
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_0041e8b0 ; 0054fa2f
        ;   XREF to: 0041e8b0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_reset_FUN_0041e8b0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0054fa34
    XOR EDX,EDX                         ; 0054fa37
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0054fa39
    MOV dword ptr [ESP + 0x5c],EDX      ; 0054fa3d
    TEST ECX,ECX                        ; 0054fa41
    JLE 0x0054fa9c                      ; 0054fa43
        ;   XREF to: 0054fa9c (CONDITIONAL_JUMP)  ; LAB_0054fa9c
    LEA EAX,[EBX + 0x274c]              ; 0054fa45
    ADD ESI,0xe80                       ; 0054fa4b
    MOV dword ptr [ESP + 0x50],EBX      ; 0054fa51
    MOV dword ptr [ESP + 0x58],EAX      ; 0054fa55
    MOV dword ptr [ESP + 0x54],ESI      ; 0054fa59
    MOV EAX,dword ptr [ESP + 0x50]      ; 0054fa5d
        ;   Label: LAB_0054fa5d
    CMP dword ptr [EAX + 0x30ac],0x2    ; 0054fa61
    JZ 0x0054fab4                       ; 0054fa68
        ;   XREF to: 0054fab4 (CONDITIONAL_JUMP)  ; LAB_0054fab4
    MOV EBX,dword ptr [ESP + 0x50]      ; 0054fa6a
        ;   Label: LAB_0054fa6a
    MOV ESI,dword ptr [ESP + 0x58]      ; 0054fa6e
    MOV EDI,dword ptr [ESP + 0x54]      ; 0054fa72
    MOV EBP,dword ptr [ESP + 0x5c]      ; 0054fa76
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0054fa7a
    ADD EBX,0x4                         ; 0054fa7e
    ADD ESI,0x18                        ; 0054fa81
    ADD EDI,0x30                        ; 0054fa84
    INC EBP                             ; 0054fa87
    MOV dword ptr [ESP + 0x50],EBX      ; 0054fa88
    MOV dword ptr [ESP + 0x58],ESI      ; 0054fa8c
    MOV dword ptr [ESP + 0x54],EDI      ; 0054fa90
    MOV dword ptr [ESP + 0x5c],EBP      ; 0054fa94
    CMP EBP,EDX                         ; 0054fa98
    JL 0x0054fa5d                       ; 0054fa9a
        ;   XREF to: 0054fa5d (CONDITIONAL_JUMP)  ; LAB_0054fa5d
    MOV ECX,0x6                         ; 0054fa9c
        ;   Label: LAB_0054fa9c
    MOV EDI,dword ptr [ESP + 0x48]      ; 0054faa1
    MOV ESI,ESP                         ; 0054faa5
    MOVSD.REP ES:EDI,ESI                ; 0054faa7
    MOV EAX,dword ptr [ESP + 0x48]      ; 0054faa9
    ADD ESP,0x64                        ; 0054faad
    POP EBP                             ; 0054fab0
    POP EDI                             ; 0054fab1
    POP EBX                             ; 0054fab2
    RET                                 ; 0054fab3
    MOV EBP,dword ptr [ESP + 0x54]      ; 0054fab4
        ;   Label: LAB_0054fab4
    MOV EAX,dword ptr [ESP + 0x58]      ; 0054fab8
    XOR EBX,EBX                         ; 0054fabc
    MOV dword ptr [ESP + 0x60],EAX      ; 0054fabe
    PUSH EBP                            ; 0054fac2
        ;   Label: LAB_0054fac2
    PUSH EBX                            ; 0054fac3
    MOV ESI,dword ptr [ESP + 0x68]      ; 0054fac4
    PUSH ESI                            ; 0054fac8
    LEA ESI,[ESP + 0x30]                ; 0054fac9
    LEA EDI,[ESP + 0x3c]                ; 0054facd
    CALL core_box.cpp_FUN_0041d8b0      ; 0054fad1
        ;   XREF to: 0041d8b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041d8b0()
    LEA ESI,[ESP + 0x30]                ; 0054fad6
    ADD ESP,0x8                         ; 0054fada
    MOVSD ES:EDI,ESI                    ; 0054fadd
    MOVSD ES:EDI,ESI                    ; 0054fade
    MOVSD ES:EDI,ESI                    ; 0054fadf
    LEA ESI,[ESP + 0x34]                ; 0054fae0
    PUSH ESI                            ; 0054fae4
    LEA ESI,[ESP + 0x44]                ; 0054fae5
    LEA EDI,[ESP + 0x20]                ; 0054fae9
    CALL core_xform.cpp_FUN_00583260    ; 0054faed
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x44]                ; 0054faf2
    ADD ESP,0x8                         ; 0054faf6
    MOVSD ES:EDI,ESI                    ; 0054faf9
    MOVSD ES:EDI,ESI                    ; 0054fafa
    MOVSD ES:EDI,ESI                    ; 0054fafb
    LEA ESI,[ESP + 0x18]                ; 0054fafc
    PUSH ESI                            ; 0054fb00
    LEA ESI,[ESP + 0x4]                 ; 0054fb01
    PUSH ESI                            ; 0054fb05
    INC EBX                             ; 0054fb06
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041d840 ; 0054fb07
        ;   XREF to: 0041d840 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041d840(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0054fb0c
    CMP EBX,0x8                         ; 0054fb0f
    JGE 0x0054fa6a                      ; 0054fb12
        ;   XREF to: 0054fa6a (CONDITIONAL_JUMP)  ; LAB_0054fa6a
    JMP 0x0054fac2                      ; 0054fb18
        ;   XREF to: 0054fac2 (UNCONDITIONAL_JUMP)  ; LAB_0054fac2

