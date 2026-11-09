; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCube * __cdecl core_dcube_cpp_CDemonCube_dtor_FUN_004464f0(CDemonCube *this_ptr,uint flags)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dcube.cpp_FUN_004466c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004464f0
        ;   Label: core_dcube.cpp_CDemonCube_dtor_FUN_004464f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004464f1
    PUSH EBX                            ; 004464f5
    CALL core_dcube.cpp_FUN_004466c0    ; 004464f6
        ;   XREF to: 004466c0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_004466c0()
    ADD ESP,0x4                         ; 004464fb
    MOV EAX,EBX                         ; 004464fe
    POP EBX                             ; 00446500
    RET                                 ; 00446501

