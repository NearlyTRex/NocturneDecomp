; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_004118a0(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_FUN_00511a10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004118a0
        ;   Label: core_barrier.cpp_CBarrier_updateCollisionData_FUN_004118a0
    CMP dword ptr [EAX + 0x15c],0x0     ; 004118a4
    JNZ 0x004118ae                      ; 004118ab
        ;   XREF to: 004118ae (CONDITIONAL_JUMP)  ; LAB_004118ae
    RET                                 ; 004118ad
    PUSH EAX                            ; 004118ae
        ;   Label: LAB_004118ae
    MOV ECX,dword ptr [0x005be368]      ; 004118af | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 004118b5 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_FUN_00511a10 ; 004118b6
        ;   XREF to: 00511a10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_FUN_00511a10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004118bb
    RET                                 ; 004118be

