; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moocow_cpp_FUN_004f8bb0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine2_005c9177
;   TerminatedCString s_Bip01_Head_005c9184
;   undefined4 DAT_005c918f
;   TerminatedCString s_lforearm_005c9194
;   TerminatedCString s_rforearm_005c919d
;   TerminatedCString s_lshin_005c91a6
;   TerminatedCString s_rshin_005c91ac
;   TerminatedCString s_torso_005c91b2
;
; Called Functions:
;   core_charactr.cpp_FUN_0042b0e0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_FUN_00548090
;   core_skeleton.cpp_FUN_0054a310
;   core_skeleton.cpp_FUN_0054e6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8bb0
        ;   Label: core_moocow.cpp_FUN_004f8bb0
    PUSH ESI                            ; 004f8bb1
    PUSH EDI                            ; 004f8bb2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f8bb3
    LEA ESI,[EBX + 0x158]               ; 004f8bb7
    PUSH ESI                            ; 004f8bbd
    CALL core_skeleton.cpp_FUN_0054e6b0 ; 004f8bbe
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f8bc3
    PUSH ESI                            ; 004f8bc6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 004f8bc7
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f8bcc
    PUSH 0x1                            ; 004f8bcf
    PUSH 0x5c9177                       ; 004f8bd1 | = "Bip01 Spine2"
    PUSH EAX                            ; 004f8bd6
    MOV EDI,EAX                         ; 004f8bd7
    CALL core_skeleton.cpp_FUN_00548090 ; 004f8bd9
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f8bde
    PUSH 0x1                            ; 004f8be1
    PUSH 0x5c9184                       ; 004f8be3 | = "Bip01 Head"
    PUSH EDI                            ; 004f8be8
    MOV dword ptr [EBX + 0xcdcc],EAX    ; 004f8be9
    CALL core_skeleton.cpp_FUN_00548090 ; 004f8bef
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f8bf4
    PUSH EBX                            ; 004f8bf7
    MOV dword ptr [EBX + 0xcdd0],EAX    ; 004f8bf8
    CALL core_charactr.cpp_FUN_0042b0e0 ; 004f8bfe
        ;   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b0e0()
    ADD ESP,0x4                         ; 004f8c03
    PUSH ESI                            ; 004f8c06
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 004f8c07
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f8c0c
    PUSH 0x1                            ; 004f8c0f
    PUSH 0x5c918f                       ; 004f8c11 | DAT_005c918f
    PUSH EAX                            ; 004f8c16
    MOV ESI,EAX                         ; 004f8c17
    CALL core_skeleton.cpp_FUN_0054a310 ; 004f8c19
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f8c1e
    PUSH 0x1                            ; 004f8c21
    PUSH 0x5c9194                       ; 004f8c23 | = "lforearm"
    PUSH ESI                            ; 004f8c28
    MOV dword ptr [EBX + 0xcdd8],EAX    ; 004f8c29
    CALL core_skeleton.cpp_FUN_0054a310 ; 004f8c2f
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f8c34
    PUSH 0x1                            ; 004f8c37
    PUSH 0x5c919d                       ; 004f8c39 | = "rforearm"
    PUSH ESI                            ; 004f8c3e
    MOV dword ptr [EBX + 0xcddc],EAX    ; 004f8c3f
    CALL core_skeleton.cpp_FUN_0054a310 ; 004f8c45
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f8c4a
    PUSH 0x1                            ; 004f8c4d
    PUSH 0x5c91a6                       ; 004f8c4f | = "lshin"
    PUSH ESI                            ; 004f8c54
    MOV dword ptr [EBX + 0xcde0],EAX    ; 004f8c55
    CALL core_skeleton.cpp_FUN_0054a310 ; 004f8c5b
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f8c60
    PUSH 0x1                            ; 004f8c63
    PUSH 0x5c91ac                       ; 004f8c65 | = "rshin"
    PUSH ESI                            ; 004f8c6a
    MOV dword ptr [EBX + 0xcde4],EAX    ; 004f8c6b
    CALL core_skeleton.cpp_FUN_0054a310 ; 004f8c71
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f8c76
    PUSH 0x1                            ; 004f8c79
    PUSH 0x5c91b2                       ; 004f8c7b | = "torso"
    PUSH ESI                            ; 004f8c80
    MOV dword ptr [EBX + 0xcde8],EAX    ; 004f8c81
    CALL core_skeleton.cpp_FUN_0054a310 ; 004f8c87
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f8c8c
    MOV dword ptr [EBX + 0xcdec],EAX    ; 004f8c8f
    POP EDI                             ; 004f8c95
    POP ESI                             ; 004f8c96
    POP EBX                             ; 004f8c97
    RET                                 ; 004f8c98

