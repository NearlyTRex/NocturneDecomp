; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_FUN_0058b830(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine3_005ee608
;   TerminatedCString s_Bip01_L_Finger1_005ee615
;   TerminatedCString s_Bip01_R_Finger1_005ee625
;   TerminatedCString s_Bip01jaw2_005ee635
;   TerminatedCString s_Bip01_Head_005ee63f
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058b830
        ;   Label: core_werewolf.cpp_FUN_0058b830
    PUSH ESI                            ; 0058b831
    SUB ESP,0x4                         ; 0058b832
    MOV EBX,dword ptr [ESP + 0x10]      ; 0058b835
    LEA ESI,[EBX + 0x2b4]               ; 0058b839
    PUSH ESI                            ; 0058b83f
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 0058b840
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0058b845
    PUSH ESI                            ; 0058b848
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0058b849
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0058b84e
    PUSH 0x1                            ; 0058b851
    PUSH 0x5ee608                       ; 0058b853 | = "Bip01 Spine3"
    PUSH EAX                            ; 0058b858
    MOV ESI,EAX                         ; 0058b859
    CALL core_skeleton.cpp_FUN_00540e80 ; 0058b85b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058b860
    PUSH 0x1                            ; 0058b863
    PUSH 0x5ee615                       ; 0058b865 | = "Bip01 L Finger1"
    PUSH ESI                            ; 0058b86a
    MOV dword ptr [EBX + 0x10afc],EAX   ; 0058b86b
    CALL core_skeleton.cpp_FUN_00540e80 ; 0058b871
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058b876
    PUSH 0x1                            ; 0058b879
    PUSH 0x5ee625                       ; 0058b87b | = "Bip01 R Finger1"
    PUSH ESI                            ; 0058b880
    MOV dword ptr [EBX + 0x10b00],EAX   ; 0058b881
    CALL core_skeleton.cpp_FUN_00540e80 ; 0058b887
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058b88c
    PUSH 0x1                            ; 0058b88f
    PUSH 0x5ee635                       ; 0058b891 | = "Bip01jaw2"
    PUSH ESI                            ; 0058b896
    MOV dword ptr [EBX + 0x10b04],EAX   ; 0058b897
    CALL core_skeleton.cpp_FUN_00540e80 ; 0058b89d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058b8a2
    PUSH 0x1                            ; 0058b8a5
    PUSH 0x5ee63f                       ; 0058b8a7 | = "Bip01 Head"
    PUSH ESI                            ; 0058b8ac
    MOV dword ptr [EBX + 0x10b08],EAX   ; 0058b8ad
    CALL core_skeleton.cpp_FUN_00540e80 ; 0058b8b3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058b8b8
    PUSH EBX                            ; 0058b8bb
    MOV dword ptr [EBX + 0x10b0c],EAX   ; 0058b8bc
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 0058b8c2
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0058b8c7
    PUSH 0x3f800000                     ; 0058b8ca
    MOV EAX,dword ptr [EBX + 0x10b10]   ; 0058b8cf
    PUSH 0x0                            ; 0058b8d5
    MOV dword ptr [EBX + 0xfc],EAX      ; 0058b8d7
    CALL core_actor.cpp_FUN_0040cf60    ; 0058b8dd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 0058b8e2
    MOV EDX,dword ptr [EBX + 0x10af8]   ; 0058b8e6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058b8ec
    MOV dword ptr [EBX + 0x10b3c],EAX   ; 0058b8f0
    ADD ESP,0x8                         ; 0058b8f6
    TEST EDX,EDX                        ; 0058b8f9
    JNZ 0x0058b907                      ; 0058b8fb
        ;   XREF to: 0058b907 (CONDITIONAL_JUMP)  ; LAB_0058b907
    MOV dword ptr [EBX + 0x3434],0x3fc00000 ; 0058b8fd
    PUSH 0x41f00000                     ; 0058b907
        ;   Label: LAB_0058b907
    PUSH 0x41200000                     ; 0058b90c
    MOV dword ptr [EBX + 0x10b14],0x0   ; 0058b911
    CALL core_actor.cpp_FUN_0040cf60    ; 0058b91b
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBX + 0x10b1c],0x0   ; 0058b920
    MOV dword ptr [ESP + 0x8],EAX       ; 0058b92a
    MOV dword ptr [EBX + 0x10b20],0x0   ; 0058b92e
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058b938
    MOV dword ptr [EBX + 0x10b18],EAX   ; 0058b93c
    ADD ESP,0x8                         ; 0058b942
    ADD ESP,0x4                         ; 0058b945
    POP ESI                             ; 0058b948
    POP EBX                             ; 0058b949
    RET                                 ; 0058b94a

