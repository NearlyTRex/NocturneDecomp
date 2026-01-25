; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_boxactor.cpp_CBoxActor_FUN_004224e0(CBoxActor * this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004224e0
        ;   Label: core_boxactor.cpp_CBoxActor_FUN_004224e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004224e4
    MOV dword ptr [EDX + 0x318],EAX     ; 004224e8
    RET                                 ; 004224ee

