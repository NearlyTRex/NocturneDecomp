; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004ca3e0(CGrave *this_ptr)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_grave.cpp_CGrave_process_FUN_004ca1d0 at 004ca225
;   core_tentacle.cpp_CTentacle_process_FUN_005726c0 at 005727cd
;   core_zombie.cpp_CZombie_process_FUN_00595f30 at 00597297
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca3e0
        ;   Label: core_grave.cpp_CGrave_startAnimation_FUN_004ca3e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ca3e1
    MOV EDX,dword ptr [EBX + 0x438]     ; 004ca3e5
    TEST EDX,EDX                        ; 004ca3eb
    JNZ 0x004ca436                      ; 004ca3ed
        ;   XREF to: 004ca436 (CONDITIONAL_JUMP)  ; LAB_004ca436
    CMP dword ptr [EBX + 0x43c],0x0     ; 004ca3ef
    JNZ 0x004ca436                      ; 004ca3f6
        ;   XREF to: 004ca436 (CONDITIONAL_JUMP)  ; LAB_004ca436
    MOV dword ptr [EBX + 0x43c],0x1     ; 004ca3f8
    MOV AH,byte ptr [EBX + 0x4a8]       ; 004ca402
    MOV dword ptr [EBX + 0x430],EDX     ; 004ca408
    TEST AH,AH                          ; 004ca40e
    JZ 0x004ca426                       ; 004ca410
        ;   XREF to: 004ca426 (CONDITIONAL_JUMP)  ; LAB_004ca426
    LEA EAX,[EBX + 0x4a8]               ; 004ca412
    PUSH EAX                            ; 004ca418
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004ca419
    PUSH EBX                            ; 004ca41f
    CALL dword ptr [EDX + 0x34]         ; 004ca420
    ADD ESP,0x8                         ; 004ca423
    PUSH EBX                            ; 004ca426
        ;   Label: LAB_004ca426
    MOV EBX,dword ptr [0x0061b5a8]      ; 004ca427 | g_CDemonSetPtr
    PUSH EBX                            ; 004ca42d | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80 ; 004ca42e
        ;   XREF to: 0052dd80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004ca433
    POP EBX                             ; 004ca436
        ;   Label: LAB_004ca436
    RET                                 ; 004ca437

