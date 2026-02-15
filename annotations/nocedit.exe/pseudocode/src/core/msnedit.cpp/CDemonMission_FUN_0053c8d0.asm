; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c8d0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 at 0040d097
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c8d0
        ;   Label: core_msnedit.cpp_CDemonMission_FUN_0053c8d0
    SUB ESP,0x4                         ; 0053c8d1
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053c8d4
    TEST EBX,EBX                        ; 0053c8d8
    JNZ 0x0053c8e1                      ; 0053c8da
        ;   XREF to: 0053c8e1 (CONDITIONAL_JUMP)  ; LAB_0053c8e1
    ADD ESP,0x4                         ; 0053c8dc
    POP EBX                             ; 0053c8df
    RET                                 ; 0053c8e0
    PUSH EBX                            ; 0053c8e1
        ;   Label: LAB_0053c8e1
    MOV EDX,dword ptr [0x006810c8]      ; 0053c8e2 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 0053c8e8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0053c8e9
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053c8ee
    LEA EAX,[EBX + 0x20]                ; 0053c8f1
    PUSH 0x0                            ; 0053c8f4
    PUSH EAX                            ; 0053c8f6
    MOV ECX,dword ptr [0x006810c8]      ; 0053c8f7 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 0053c8fd | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 0053c8fe
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0xc],EAX       ; 0053c903
    FLD float ptr [ESP + 0xc]           ; 0053c907
    ADD ESP,0xc                         ; 0053c90b
    FSTP float ptr [EBX + 0x24]         ; 0053c90e
    MOV EBX,dword ptr [0x006810c8]      ; 0053c911 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 0053c917 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 0053c918
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053c91d
    ADD ESP,0x4                         ; 0053c920
    POP EBX                             ; 0053c923
    RET                                 ; 0053c924

