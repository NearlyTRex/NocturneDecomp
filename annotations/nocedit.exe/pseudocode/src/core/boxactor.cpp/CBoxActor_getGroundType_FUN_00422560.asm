; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_boxactor.cpp_CBoxActor_getGroundType_FUN_00422560(CBoxActor * this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00422560
        ;   Label: core_boxactor.cpp_CBoxActor_getGroundType_FUN_00422560
    MOV EAX,dword ptr [EAX + 0x5f0]     ; 00422564
    RET                                 ; 0042256a

