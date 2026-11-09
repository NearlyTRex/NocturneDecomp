; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dlight.cpp_FUN_00449e70 at 00449e81
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052deb8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00449ff0
        ;   Label: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0
    CMP dword ptr [EAX + 0x2f9c],0x0    ; 00449ff4
    JNZ 0x00449ffe                      ; 00449ffb
        ;   XREF to: 00449ffe (CONDITIONAL_JUMP)  ; LAB_00449ffe
    RET                                 ; 00449ffd
    MOV dword ptr [EAX + 0x164],0x0     ; 00449ffe
        ;   Label: LAB_00449ffe
    MOV dword ptr [EAX + 0x2f9c],0x0    ; 0044a008
    RET                                 ; 0044a012

