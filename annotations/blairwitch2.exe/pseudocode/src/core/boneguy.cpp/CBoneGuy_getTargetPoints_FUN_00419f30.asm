; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boneguy_cpp_CBoneGuy_getTargetPoints_FUN_00419f30(CBoneGuy *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_007bc944
;   undefined4 DAT_007bc958
;   undefined4 DAT_007bc95c
;   undefined4 DAT_007bc968
;   undefined4 DAT_007bc96c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419f30
        ;   Label: core_boneguy.cpp_CBoneGuy_getTargetPoints_FUN_00419f30
    PUSH EBP                            ; 00419f31
    SUB ESP,0x78                        ; 00419f32
    MOV EBP,dword ptr [ESP + 0x84]      ; 00419f35
    MOV EBX,dword ptr [ESP + 0x88]      ; 00419f3c
    CMP dword ptr [EBP + 0x11118],0x0   ; 00419f43
    JZ 0x00419f54                       ; 00419f4a
        ;   XREF to: 00419f54 (CONDITIONAL_JUMP)  ; LAB_00419f54
    XOR EAX,EAX                         ; 00419f4c
    ADD ESP,0x78                        ; 00419f4e
    POP EBP                             ; 00419f51
    POP EBX                             ; 00419f52
    RET                                 ; 00419f53
    PUSH EDI                            ; 00419f54
        ;   Label: LAB_00419f54
    PUSH ESI                            ; 00419f55
    MOV ECX,dword ptr [0x007bc944]      ; 00419f56 | DAT_007bc944
    PUSH ECX                            ; 00419f5c
    LEA EAX,[EBP + 0x2b4]               ; 00419f5d
    PUSH EAX                            ; 00419f63
    LEA ESI,[ESP + 0x58]                ; 00419f64
    LEA EDI,[ESP + 0x4c]                ; 00419f68
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 00419f6c
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x58]                ; 00419f71
    ADD ESP,0x8                         ; 00419f75
    LEA EAX,[ESP + 0x44]                ; 00419f78
    MOVSD ES:EDI,ESI                    ; 00419f7c
    MOVSD ES:EDI,ESI                    ; 00419f7d
    MOVSD ES:EDI,ESI                    ; 00419f7e
    CMP EBX,EAX                         ; 00419f7f
    JZ 0x00419f97                       ; 00419f81
        ;   XREF to: 00419f97 (CONDITIONAL_JUMP)  ; LAB_00419f97
    MOV EAX,dword ptr [ESP + 0x44]      ; 00419f83
    MOV dword ptr [EBX],EAX             ; 00419f87
    MOV EAX,dword ptr [ESP + 0x48]      ; 00419f89
    MOV dword ptr [EBX + 0x4],EAX       ; 00419f8d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00419f90
    MOV dword ptr [EBX + 0x8],EAX       ; 00419f94
    MOV ESI,dword ptr [0x007bc958]      ; 00419f97 | DAT_007bc958
        ;   Label: LAB_00419f97
    PUSH ESI                            ; 00419f9d
    LEA EAX,[EBP + 0x2b4]               ; 00419f9e
    PUSH EAX                            ; 00419fa4
    LEA ESI,[ESP + 0x10]                ; 00419fa5
    LEA EDI,[ESP + 0x1c]                ; 00419fa9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 00419fad
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x10]                ; 00419fb2
    LEA EAX,[ESP + 0x1c]                ; 00419fb6
    ADD ESP,0x8                         ; 00419fba
    LEA EDX,[EBX + 0xc]                 ; 00419fbd
    MOVSD ES:EDI,ESI                    ; 00419fc0
    MOVSD ES:EDI,ESI                    ; 00419fc1
    MOVSD ES:EDI,ESI                    ; 00419fc2
    CMP EDX,EAX                         ; 00419fc3
    JZ 0x00419fdb                       ; 00419fc5
        ;   XREF to: 00419fdb (CONDITIONAL_JUMP)  ; LAB_00419fdb
    MOV EAX,dword ptr [ESP + 0x14]      ; 00419fc7
    MOV dword ptr [EDX],EAX             ; 00419fcb
    MOV EAX,dword ptr [ESP + 0x18]      ; 00419fcd
    MOV dword ptr [EDX + 0x4],EAX       ; 00419fd1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00419fd4
    MOV dword ptr [EDX + 0x8],EAX       ; 00419fd8
    MOV EDI,dword ptr [0x007bc95c]      ; 00419fdb | DAT_007bc95c
        ;   Label: LAB_00419fdb
    PUSH EDI                            ; 00419fe1
    LEA EAX,[EBP + 0x2b4]               ; 00419fe2
    PUSH EAX                            ; 00419fe8
    LEA ESI,[ESP + 0x7c]                ; 00419fe9
    LEA EDI,[ESP + 0x28]                ; 00419fed
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 00419ff1
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x7c]                ; 00419ff6
    LEA EAX,[ESP + 0x28]                ; 00419ffa
    ADD ESP,0x8                         ; 00419ffe
    LEA EDX,[EBX + 0x18]                ; 0041a001
    MOVSD ES:EDI,ESI                    ; 0041a004
    MOVSD ES:EDI,ESI                    ; 0041a005
    MOVSD ES:EDI,ESI                    ; 0041a006
    CMP EDX,EAX                         ; 0041a007
    JZ 0x0041a01f                       ; 0041a009
        ;   XREF to: 0041a01f (CONDITIONAL_JUMP)  ; LAB_0041a01f
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041a00b
    MOV dword ptr [EDX],EAX             ; 0041a00f
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041a011
    MOV dword ptr [EDX + 0x4],EAX       ; 0041a015
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041a018
    MOV dword ptr [EDX + 0x8],EAX       ; 0041a01c
    MOV EAX,[0x007bc968]                ; 0041a01f | DAT_007bc968
        ;   Label: LAB_0041a01f
    PUSH EAX                            ; 0041a024
    LEA EAX,[EBP + 0x2b4]               ; 0041a025
    PUSH EAX                            ; 0041a02b
    LEA ESI,[ESP + 0x40]                ; 0041a02c
    LEA EDI,[ESP + 0x64]                ; 0041a030
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 0041a034
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x40]                ; 0041a039
    LEA EAX,[ESP + 0x64]                ; 0041a03d
    ADD ESP,0x8                         ; 0041a041
    LEA EDX,[EBX + 0x24]                ; 0041a044
    MOVSD ES:EDI,ESI                    ; 0041a047
    MOVSD ES:EDI,ESI                    ; 0041a048
    MOVSD ES:EDI,ESI                    ; 0041a049
    CMP EDX,EAX                         ; 0041a04a
    JZ 0x0041a062                       ; 0041a04c
        ;   XREF to: 0041a062 (CONDITIONAL_JUMP)  ; LAB_0041a062
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0041a04e
    MOV dword ptr [EDX],EAX             ; 0041a052
    MOV EAX,dword ptr [ESP + 0x60]      ; 0041a054
    MOV dword ptr [EDX + 0x4],EAX       ; 0041a058
    MOV EAX,dword ptr [ESP + 0x64]      ; 0041a05b
    MOV dword ptr [EDX + 0x8],EAX       ; 0041a05f
    MOV EDX,dword ptr [0x007bc96c]      ; 0041a062 | DAT_007bc96c
        ;   Label: LAB_0041a062
    PUSH EDX                            ; 0041a068
    ADD EBP,0x2b4                       ; 0041a069
    LEA ESI,[ESP + 0x6c]                ; 0041a06f
    PUSH EBP                            ; 0041a073
    LEA EDI,[ESP + 0x34]                ; 0041a074
    ADD EBX,0x30                        ; 0041a078
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 0041a07b
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x70]                ; 0041a080
    ADD ESP,0x8                         ; 0041a084
    LEA EAX,[ESP + 0x2c]                ; 0041a087
    MOVSD ES:EDI,ESI                    ; 0041a08b
    MOVSD ES:EDI,ESI                    ; 0041a08c
    MOVSD ES:EDI,ESI                    ; 0041a08d
    CMP EBX,EAX                         ; 0041a08e
    JZ 0x0041a0a6                       ; 0041a090
        ;   XREF to: 0041a0a6 (CONDITIONAL_JUMP)  ; LAB_0041a0a6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041a092
    MOV dword ptr [EBX],EAX             ; 0041a096
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041a098
    MOV dword ptr [EBX + 0x4],EAX       ; 0041a09c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041a09f
    MOV dword ptr [EBX + 0x8],EAX       ; 0041a0a3
    MOV EAX,0x5                         ; 0041a0a6
        ;   Label: LAB_0041a0a6
    POP ESI                             ; 0041a0ab
    POP EDI                             ; 0041a0ac
    ADD ESP,0x78                        ; 0041a0ad
    POP EBP                             ; 0041a0b0
    POP EBX                             ; 0041a0b1
    RET                                 ; 0041a0b2

