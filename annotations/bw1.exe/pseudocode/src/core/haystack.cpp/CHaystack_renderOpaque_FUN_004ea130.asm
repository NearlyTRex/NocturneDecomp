; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_haystack_cpp_CHaystack_renderOpaque_FUN_004ea130(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ea130
        ;   Label: core_haystack.cpp_CHaystack_renderOpaque_FUN_004ea130
    PUSH EDX                            ; 004ea134
    CALL core_charactr.cpp_FUN_0042f240 ; 004ea135
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004ea13a
    RET                                 ; 004ea13d

