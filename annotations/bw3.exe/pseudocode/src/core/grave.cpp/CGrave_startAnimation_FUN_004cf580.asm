; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004cf580(CGrave *this_ptr)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_demnfolk.cpp_FUN_00455080 at 0045640f
;   core_grave.cpp_CGrave_process_FUN_004cf370 at 004cf3c5
;   core_zombie.cpp_CZombie_process_FUN_00588ee0 at 0058a2d6
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00534820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf580
        ;   Label: core_grave.cpp_CGrave_startAnimation_FUN_004cf580
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cf581
    MOV EDX,dword ptr [EBX + 0x2dc]     ; 004cf585
    TEST EDX,EDX                        ; 004cf58b
    JNZ 0x004cf5d6                      ; 004cf58d
        ;   XREF to: 004cf5d6 (CONDITIONAL_JUMP)  ; LAB_004cf5d6
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004cf58f
    JNZ 0x004cf5d6                      ; 004cf596
        ;   XREF to: 004cf5d6 (CONDITIONAL_JUMP)  ; LAB_004cf5d6
    MOV dword ptr [EBX + 0x2e0],0x1     ; 004cf598
    MOV AH,byte ptr [EBX + 0x34c]       ; 004cf5a2
    MOV dword ptr [EBX + 0x2d4],EDX     ; 004cf5a8
    TEST AH,AH                          ; 004cf5ae
    JZ 0x004cf5c6                       ; 004cf5b0
        ;   XREF to: 004cf5c6 (CONDITIONAL_JUMP)  ; LAB_004cf5c6
    LEA EAX,[EBX + 0x34c]               ; 004cf5b2
    PUSH EAX                            ; 004cf5b8
    MOV EDX,dword ptr [EBX + 0x154]     ; 004cf5b9
    PUSH EBX                            ; 004cf5bf
    CALL dword ptr [EDX + 0x2c]         ; 004cf5c0
    ADD ESP,0x8                         ; 004cf5c3
    PUSH EBX                            ; 004cf5c6
        ;   Label: LAB_004cf5c6
    MOV EBX,dword ptr [0x00603b28]      ; 004cf5c7 | g_CDemonSetPtr
    PUSH EBX                            ; 004cf5cd | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00534820 ; 004cf5ce
        ;   XREF to: 00534820 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00534820(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004cf5d3
    POP EBX                             ; 004cf5d6
        ;   Label: LAB_004cf5d6
    RET                                 ; 004cf5d7

