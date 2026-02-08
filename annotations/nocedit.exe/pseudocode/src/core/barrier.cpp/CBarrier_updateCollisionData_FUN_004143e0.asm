; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_004143e0(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_FUN_00574440
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004143e0
        ;   Label: core_barrier.cpp_CBarrier_updateCollisionData_FUN_004143e0
    CMP dword ptr [EAX + 0x164],0x0     ; 004143e4
    JNZ 0x004143ee                      ; 004143eb
        ;   XREF to: 004143ee (CONDITIONAL_JUMP)  ; LAB_004143ee
    RET                                 ; 004143ed
    PUSH EAX                            ; 004143ee
        ;   Label: LAB_004143ee
    MOV ECX,dword ptr [0x006810c8]      ; 004143ef | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004143f5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_FUN_00574440 ; 004143f6
        ;   XREF to: 00574440 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_FUN_00574440(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 004143fb
    RET                                 ; 004143fe

