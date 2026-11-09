; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_0040ec70(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040ec70
        ;   Label: core_barrier.cpp_CBarrier_updateCollisionData_FUN_0040ec70
    CMP dword ptr [EAX + 0x164],0x0     ; 0040ec74
    JNZ 0x0040ec7e                      ; 0040ec7b
        ;   XREF to: 0040ec7e (CONDITIONAL_JUMP)  ; LAB_0040ec7e
    RET                                 ; 0040ec7d
    PUSH EAX                            ; 0040ec7e
        ;   Label: LAB_0040ec7e
    MOV ECX,dword ptr [0x00603b28]      ; 0040ec7f | g_CDemonSetPtr
    PUSH ECX                            ; 0040ec85
    CALL core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00 ; 0040ec86
        ;   XREF to: 0053ee00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040ec8b
    RET                                 ; 0040ec8e

