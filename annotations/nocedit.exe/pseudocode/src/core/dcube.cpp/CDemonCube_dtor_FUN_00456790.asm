; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonCube * __cdecl core_dcube_cpp_CDemonCube_dtor_FUN_00456790(CDemonCube *this_ptr)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456790
        ;   Label: core_dcube.cpp_CDemonCube_dtor_FUN_00456790
    MOV EBX,dword ptr [ESP + 0x8]       ; 00456791
    PUSH EBX                            ; 00456795
    CALL core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0 ; 00456796
        ;   XREF to: 004569b0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 0045679b
    MOV EAX,EBX                         ; 0045679e
    POP EBX                             ; 004567a0
    RET                                 ; 004567a1

