; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408a40(CDemonActor *this_ptr,float radius,CVector3f *out_normal)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   radius
; CVector3f *      Stack[0xc]:4   out_normal
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CPlatformClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.collision_normal.x
;   undefined4 g_CDemonSetInstance.collision_normal.y
;   undefined4 g_CDemonSetInstance.collision_normal.z
;   undefined4 g_CDemonSetInstance.collision_actor
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_setcolid.cpp_CDemonSet_enableCollision_FUN_0053ec80
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_0053ea20
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_0053e870
;   core_setcolid.cpp_FUN_0053bc80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408a40
        ;   Label: core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408a40
    PUSH ESI                            ; 00408a41
    PUSH EDI                            ; 00408a42
    PUSH EBP                            ; 00408a43
    SUB ESP,0x8                         ; 00408a44
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00408a47
    MOV EBX,dword ptr [ESP + 0x24]      ; 00408a4b
    MOV EDX,dword ptr [0x00603b28]      ; 00408a4f | g_CDemonSetPtr
    PUSH EDX                            ; 00408a55 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_0053e870 ; 00408a56
        ;   XREF to: 0053e870 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_0053e870(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00408a5b
    PUSH ESI                            ; 00408a5e
    MOV ECX,dword ptr [0x00603b28]      ; 00408a5f | g_CDemonSetPtr
    PUSH ECX                            ; 00408a65 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00408a66
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00408a6b
    MOV EDI,dword ptr [0x00603b28]      ; 00408a6e | g_CDemonSetPtr
    PUSH EDI                            ; 00408a74 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_enableCollision_FUN_0053ec80 ; 00408a75
        ;   XREF to: 0053ec80 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_enableCollision_FUN_0053ec80(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00408a7a
    LEA EAX,[ESI + 0x20]                ; 00408a7d
    PUSH dword ptr [ESP + 0x20]         ; 00408a80
    PUSH EAX                            ; 00408a84
    MOV EBP,dword ptr [0x00603b28]      ; 00408a85 | g_CDemonSetPtr
    PUSH EBP                            ; 00408a8b | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053bc80 ; 00408a8c
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053bc80()
    MOV dword ptr [ESP + 0x10],EAX      ; 00408a91
    FLD float ptr [ESP + 0x10]          ; 00408a95
    ADD ESP,0xc                         ; 00408a99
    MOV EAX,[0x01ed2aec]                ; 00408a9c | g_CPlatformClassInfo.name_hash
    PUSH EAX                            ; 00408aa1
    MOV EAX,[0x00603b28]                ; 00408aa2 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00408aa7 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00408aad
    FSTP float ptr [ESP + 0x8]          ; 00408aae
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00408ab2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00408ab7
    MOV dword ptr [ESI + 0xdc],EAX      ; 00408aba
    TEST EBX,EBX                        ; 00408ac0
    JZ 0x00408ae2                       ; 00408ac2
        ;   XREF to: 00408ae2 (CONDITIONAL_JUMP)  ; LAB_00408ae2
    MOV EAX,[0x00603b28]                ; 00408ac4 | g_CDemonSetPtr
    ADD EAX,0x14d128                    ; 00408ac9
    CMP EBX,EAX                         ; 00408ace
    JZ 0x00408ae2                       ; 00408ad0
        ;   XREF to: 00408ae2 (CONDITIONAL_JUMP)  ; LAB_00408ae2
    MOV EDX,dword ptr [EAX]             ; 00408ad2 | g_CDemonSetInstance.collision_normal.x
    MOV dword ptr [EBX],EDX             ; 00408ad4
    MOV EDX,dword ptr [EAX + 0x4]       ; 00408ad6 | g_CDemonSetInstance.collision_normal.y
    MOV dword ptr [EBX + 0x4],EDX       ; 00408ad9
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408adc | g_CDemonSetInstance.collision_normal.z
    MOV dword ptr [EBX + 0x8],EDX       ; 00408adf
    MOV ECX,dword ptr [0x00603b28]      ; 00408ae2 | g_CDemonSetPtr
        ;   Label: LAB_00408ae2
    PUSH ECX                            ; 00408ae8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_0053ea20 ; 00408ae9
        ;   XREF to: 0053ea20 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_0053ea20(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00408aee
    MOV EAX,dword ptr [ESP]             ; 00408af1
    ADD ESP,0x8                         ; 00408af4
    POP EBP                             ; 00408af7
    POP EDI                             ; 00408af8
    POP ESI                             ; 00408af9
    POP EBX                             ; 00408afa
    RET                                 ; 00408afb

