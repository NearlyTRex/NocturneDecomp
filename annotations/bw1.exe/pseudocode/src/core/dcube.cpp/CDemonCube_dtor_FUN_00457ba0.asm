; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCube * __cdecl core_dcube_cpp_CDemonCube_dtor_FUN_00457ba0(CDemonCube *this_ptr,uint flags)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dcube.cpp_FUN_00457d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457ba0
        ;   Label: core_dcube.cpp_CDemonCube_dtor_FUN_00457ba0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00457ba1
    PUSH EBX                            ; 00457ba5
    CALL core_dcube.cpp_FUN_00457d70    ; 00457ba6
        ;   XREF to: 00457d70 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_00457d70()
    ADD ESP,0x4                         ; 00457bab
    MOV EAX,EBX                         ; 00457bae
    POP EBX                             ; 00457bb0
    RET                                 ; 00457bb1

