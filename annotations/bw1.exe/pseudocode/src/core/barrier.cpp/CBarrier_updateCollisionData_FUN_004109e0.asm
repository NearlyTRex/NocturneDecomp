; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_004109e0(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004109e0
        ;   Label: core_barrier.cpp_CBarrier_updateCollisionData_FUN_004109e0
    CMP dword ptr [EAX + 0x164],0x0     ; 004109e4
    JNZ 0x004109ee                      ; 004109eb
        ;   XREF to: 004109ee (CONDITIONAL_JUMP)  ; LAB_004109ee
    RET                                 ; 004109ed
    PUSH EAX                            ; 004109ee
        ;   Label: LAB_004109ee
    MOV ECX,dword ptr [0x00622c18]      ; 004109ef | g_CDemonSetPtr
    PUSH ECX                            ; 004109f5
    CALL core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440 ; 004109f6
        ;   XREF to: 00559440 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004109fb
    RET                                 ; 004109fe

