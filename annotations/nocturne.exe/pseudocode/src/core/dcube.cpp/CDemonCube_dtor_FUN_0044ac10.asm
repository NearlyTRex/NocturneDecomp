; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCube * __cdecl core_dcube_cpp_CDemonCube_dtor_FUN_0044ac10(CDemonCube *this_ptr,uint flags)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dcube.cpp_FUN_0044adf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ac10
        ;   Label: core_dcube.cpp_CDemonCube_dtor_FUN_0044ac10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044ac11
    PUSH EBX                            ; 0044ac15
    CALL core_dcube.cpp_FUN_0044adf0    ; 0044ac16
        ;   XREF to: 0044adf0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_0044adf0()
    ADD ESP,0x4                         ; 0044ac1b
    MOV EAX,EBX                         ; 0044ac1e
    POP EBX                             ; 0044ac20
    RET                                 ; 0044ac21

