; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog_cpp_FUN_0045e2e0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine1_005d0894
;   TerminatedCString s_Bip01_Head_005d08a1
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e2e0
        ;   Label: core_dog.cpp_FUN_0045e2e0
    PUSH ESI                            ; 0045e2e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0045e2e2
    LEA EBX,[ESI + 0x2b4]               ; 0045e2e6
    PUSH EBX                            ; 0045e2ec
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 0045e2ed
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0045e2f2
    PUSH EBX                            ; 0045e2f5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0045e2f6
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0045e2fb
    PUSH 0x1                            ; 0045e2fe
    PUSH 0x5d0894                       ; 0045e300 | = "Bip01 Spine1"
    PUSH EAX                            ; 0045e305
    MOV EBX,EAX                         ; 0045e306
    CALL core_skeleton.cpp_FUN_00540e80 ; 0045e308
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0045e30d
    PUSH 0x1                            ; 0045e310
    PUSH 0x5d08a1                       ; 0045e312 | = "Bip01 Head"
    PUSH EBX                            ; 0045e317
    MOV dword ptr [ESI + 0x10af8],EAX   ; 0045e318
    CALL core_skeleton.cpp_FUN_00540e80 ; 0045e31e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0045e323
    PUSH ESI                            ; 0045e326
    MOV dword ptr [ESI + 0x10afc],EAX   ; 0045e327
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 0045e32d
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0045e332
    POP ESI                             ; 0045e335
    POP EBX                             ; 0045e336
    RET                                 ; 0045e337

