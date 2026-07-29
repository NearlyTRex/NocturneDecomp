; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_minecar_cpp_CMinecar_setup_FUN_004d6020(CMineCar *this_ptr)
;
; Parameters:
; CMineCar *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_platfrm.cpp_FUN_004f5f60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d6020
        ;   Label: core_minecar.cpp_CMinecar_setup_FUN_004d6020
    PUSH EDX                            ; 004d6024
    CALL core_platfrm.cpp_FUN_004f5f60  ; 004d6025
        ;   XREF to: 004f5f60 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_004f5f60(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 004d602a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d602d
    MOV dword ptr [EAX + 0x720],0x0     ; 004d6031
    RET                                 ; 004d603b

