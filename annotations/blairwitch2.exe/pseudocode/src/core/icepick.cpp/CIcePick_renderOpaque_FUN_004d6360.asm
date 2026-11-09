; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_icepick_cpp_CIcePick_renderOpaque_FUN_004d6360(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_FUN_004254b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d6360
        ;   Label: core_icepick.cpp_CIcePick_renderOpaque_FUN_004d6360
    PUSH EDX                            ; 004d6364
    CALL core_charactr.cpp_FUN_004254b0 ; 004d6365
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004254b0()
    ADD ESP,0x4                         ; 004d636a
    RET                                 ; 004d636d

