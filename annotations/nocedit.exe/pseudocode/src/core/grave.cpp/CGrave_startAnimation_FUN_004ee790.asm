; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004ee790(CGrave *this_ptr)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_grave.cpp_CGrave_process_FUN_004ee5c0 at 004ee615
;   core_tentacle.cpp_CTentacle_process_FUN_005db050 at 005db15d
;   core_zombie.cpp_CZombie_process_FUN_005f9470 at 005fa5cd
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee790
        ;   Label: core_grave.cpp_CGrave_startAnimation_FUN_004ee790
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ee791
    MOV EDX,dword ptr [EBX + 0x2dc]     ; 004ee795
    TEST EDX,EDX                        ; 004ee79b
    JNZ 0x004ee7e6                      ; 004ee79d
        ;   XREF to: 004ee7e6 (CONDITIONAL_JUMP)  ; LAB_004ee7e6
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004ee79f
    JNZ 0x004ee7e6                      ; 004ee7a6
        ;   XREF to: 004ee7e6 (CONDITIONAL_JUMP)  ; LAB_004ee7e6
    MOV dword ptr [EBX + 0x2e0],0x1     ; 004ee7a8
    MOV AH,byte ptr [EBX + 0x34c]       ; 004ee7b2
    MOV dword ptr [EBX + 0x2d4],EDX     ; 004ee7b8
    TEST AH,AH                          ; 004ee7be
    JZ 0x004ee7d6                       ; 004ee7c0
        ;   XREF to: 004ee7d6 (CONDITIONAL_JUMP)  ; LAB_004ee7d6
    LEA EAX,[EBX + 0x34c]               ; 004ee7c2
    PUSH EAX                            ; 004ee7c8
    MOV EDX,dword ptr [EBX + 0x154]     ; 004ee7c9
    PUSH EBX                            ; 004ee7cf
    CALL dword ptr [EDX + 0x24]         ; 004ee7d0
    ADD ESP,0x8                         ; 004ee7d3
    PUSH EBX                            ; 004ee7d6
        ;   Label: LAB_004ee7d6
    MOV EBX,dword ptr [0x006810c8]      ; 004ee7d7 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 004ee7dd | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0 ; 004ee7de
        ;   XREF to: 0056ade0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004ee7e3
    POP EBX                             ; 004ee7e6
        ;   Label: LAB_004ee7e6
    RET                                 ; 004ee7e7

