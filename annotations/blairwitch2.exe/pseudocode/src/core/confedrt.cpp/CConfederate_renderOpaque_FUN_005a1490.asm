; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_confedrt_cpp_CConfederate_renderOpaque_FUN_005a1490(CConfederate *this_ptr)
;
; Parameters:
; CConfederate *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_renderOpaque_FUN_0059fa20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1490
        ;   Label: core_confedrt.cpp_CConfederate_renderOpaque_FUN_005a1490
    PUSH EDX                            ; 005a1494
    CALL core_basicene.cpp_CBasicEnemy_renderOpaque_FUN_0059fa20 ; 005a1495
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; int core_basicene.cpp_CBasicEnemy_renderOpaque_FUN_0059fa20(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a149a
    RET                                 ; 005a149d

