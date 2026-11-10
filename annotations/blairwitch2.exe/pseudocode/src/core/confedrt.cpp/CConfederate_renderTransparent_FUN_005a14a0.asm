; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_confedrt_cpp_CConfederate_renderTransparent_FUN_005a14a0(CConfederate *this_ptr)
;
; Parameters:
; CConfederate *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980
;   unkafter_superopt.cpp_FUN_005a8290
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a14a0
        ;   Label: core_confedrt.cpp_CConfederate_renderTransparent_FUN_005a14a0
    PUSH EDX                            ; 005a14a4
    CALL core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980 ; 005a14a5
        ;   XREF to: 0059f980 (UNCONDITIONAL_CALL)  ; int core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a14aa
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a14ad
    ADD EAX,0x154                       ; 005a14b1
    PUSH EAX                            ; 005a14b6
    CALL unkafter_superopt.cpp_FUN_005a8290 ; 005a14b7
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8290()
    MOV EAX,0x1                         ; 005a14bc
    ADD ESP,0x4                         ; 005a14c1
    RET                                 ; 005a14c4

