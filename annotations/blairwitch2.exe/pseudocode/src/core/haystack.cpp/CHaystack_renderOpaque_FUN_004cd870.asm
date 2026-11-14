; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_haystack_cpp_CHaystack_renderOpaque_FUN_004cd870(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cd870
        ;   Label: core_haystack.cpp_CHaystack_renderOpaque_FUN_004cd870
    PUSH EDX                            ; 004cd874
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0 ; 004cd875
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004cd87a
    RET                                 ; 004cd87d

