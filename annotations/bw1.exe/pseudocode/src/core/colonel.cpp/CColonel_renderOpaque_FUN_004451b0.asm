; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_colonel_cpp_CColonel_renderOpaque_FUN_004451b0(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004451b0
        ;   Label: core_colonel.cpp_CColonel_renderOpaque_FUN_004451b0
    PUSH EDX                            ; 004451b4
    CALL core_charactr.cpp_FUN_0042f240 ; 004451b5
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004451ba
    RET                                 ; 004451bd

