; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_dtor_FUN_00541aa0(C3DSCamera *this_ptr,uint flags)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_setutil.cpp_C3DSCamera_free_FUN_00541ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541aa0
        ;   Label: core_setutil.cpp_C3DSCamera_dtor_FUN_00541aa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00541aa1
    PUSH EBX                            ; 00541aa5
    CALL core_setutil.cpp_C3DSCamera_free_FUN_00541ac0 ; 00541aa6
        ;   XREF to: 00541ac0 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSCamera_free_FUN_00541ac0()
    ADD ESP,0x4                         ; 00541aab
    MOV EAX,EBX                         ; 00541aae
    POP EBX                             ; 00541ab0
    RET                                 ; 00541ab1

