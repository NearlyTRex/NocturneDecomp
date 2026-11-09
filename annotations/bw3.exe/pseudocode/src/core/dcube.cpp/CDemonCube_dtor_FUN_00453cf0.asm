; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCube * __cdecl core_dcube_cpp_CDemonCube_dtor_FUN_00453cf0(CDemonCube *this_ptr,uint flags)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dcube.cpp_FUN_00453ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453cf0
        ;   Label: core_dcube.cpp_CDemonCube_dtor_FUN_00453cf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00453cf1
    PUSH EBX                            ; 00453cf5
    CALL core_dcube.cpp_FUN_00453ec0    ; 00453cf6
        ;   XREF to: 00453ec0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_00453ec0()
    ADD ESP,0x4                         ; 00453cfb
    MOV EAX,EBX                         ; 00453cfe
    POP EBX                             ; 00453d00
    RET                                 ; 00453d01

