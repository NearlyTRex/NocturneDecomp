; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_crossbow_cpp_CCrossbow_renderTransparent_FUN_00448e80(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_flame.cpp_CFlame_renderTransparent_FUN_004ca110
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00448e80
        ;   Label: core_crossbow.cpp_CCrossbow_renderTransparent_FUN_00448e80
    CMP dword ptr [EAX + 0x578],0x0     ; 00448e84
    JNZ 0x00448e90                      ; 00448e8b
        ;   XREF to: 00448e90 (CONDITIONAL_JUMP)  ; LAB_00448e90
    XOR EAX,EAX                         ; 00448e8d
    RET                                 ; 00448e8f
    ADD EAX,0x57c                       ; 00448e90
        ;   Label: LAB_00448e90
    PUSH EAX                            ; 00448e95
    CALL core_flame.cpp_CFlame_renderTransparent_FUN_004ca110 ; 00448e96
        ;   XREF to: 004ca110 (UNCONDITIONAL_CALL)  ; int core_flame.cpp_CFlame_renderTransparent_FUN_004ca110(CFlame * this_ptr)
    MOV EAX,0x1                         ; 00448e9b
    ADD ESP,0x4                         ; 00448ea0
    RET                                 ; 00448ea3

