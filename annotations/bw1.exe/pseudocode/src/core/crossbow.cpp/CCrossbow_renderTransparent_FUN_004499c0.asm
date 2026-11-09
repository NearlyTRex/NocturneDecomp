; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_crossbow_cpp_CCrossbow_renderTransparent_FUN_004499c0(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_flame.cpp_CFlame_renderTransparent_FUN_004b8100
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004499c0
        ;   Label: core_crossbow.cpp_CCrossbow_renderTransparent_FUN_004499c0
    CMP dword ptr [EAX + 0x578],0x0     ; 004499c4
    JNZ 0x004499d0                      ; 004499cb
        ;   XREF to: 004499d0 (CONDITIONAL_JUMP)  ; LAB_004499d0
    XOR EAX,EAX                         ; 004499cd
    RET                                 ; 004499cf
    ADD EAX,0x57c                       ; 004499d0
        ;   Label: LAB_004499d0
    PUSH EAX                            ; 004499d5
    CALL core_flame.cpp_CFlame_renderTransparent_FUN_004b8100 ; 004499d6
        ;   XREF to: 004b8100 (UNCONDITIONAL_CALL)  ; int core_flame.cpp_CFlame_renderTransparent_FUN_004b8100(CFlame * this_ptr)
    MOV EAX,0x1                         ; 004499db
    ADD ESP,0x4                         ; 004499e0
    RET                                 ; 004499e3

