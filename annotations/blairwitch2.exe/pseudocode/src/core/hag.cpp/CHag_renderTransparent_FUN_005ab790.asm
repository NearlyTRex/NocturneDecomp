; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hag_cpp_CHag_renderTransparent_FUN_005ab790(CHag *this_ptr)
;
; Parameters:
; CHag *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980
;   unkafter_superopt.cpp_FUN_005a8290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab790
        ;   Label: core_hag.cpp_CHag_renderTransparent_FUN_005ab790
    PUSH ESI                            ; 005ab791
    MOV ESI,dword ptr [ESP + 0xc]       ; 005ab792
    PUSH ESI                            ; 005ab796
    CALL core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980 ; 005ab797
        ;   XREF to: 0059f980 (UNCONDITIONAL_CALL)  ; int core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005ab79c
    MOV EBX,EAX                         ; 005ab79f
    LEA EAX,[ESI + 0x154]               ; 005ab7a1
    PUSH EAX                            ; 005ab7a7
    CALL unkafter_superopt.cpp_FUN_005a8290 ; 005ab7a8
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8290()
    ADD ESP,0x4                         ; 005ab7ad
    LEA EAX,[ESI + 0x264]               ; 005ab7b0
    PUSH EAX                            ; 005ab7b6
    CALL unkafter_superopt.cpp_FUN_005a8290 ; 005ab7b7
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8290()
    ADD ESP,0x4                         ; 005ab7bc
    MOV EAX,EBX                         ; 005ab7bf
    POP ESI                             ; 005ab7c1
    POP EBX                             ; 005ab7c2
    RET                                 ; 005ab7c3

