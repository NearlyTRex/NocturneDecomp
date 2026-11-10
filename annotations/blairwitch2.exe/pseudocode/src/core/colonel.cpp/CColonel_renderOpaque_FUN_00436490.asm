; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_colonel_cpp_CColonel_renderOpaque_FUN_00436490(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00436490
        ;   Label: core_colonel.cpp_CColonel_renderOpaque_FUN_00436490
    PUSH EDX                            ; 00436494
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0 ; 00436495
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0043649a
    RET                                 ; 0043649d

