; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_004627f0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dlight.cpp_FUN_00462670 at 00462681
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f198
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004627f0
        ;   Label: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_004627f0
    CMP dword ptr [EAX + 0x2f9c],0x0    ; 004627f4
    JNZ 0x004627fe                      ; 004627fb
        ;   XREF to: 004627fe (CONDITIONAL_JUMP)  ; LAB_004627fe
    RET                                 ; 004627fd
    MOV dword ptr [EAX + 0x164],0x0     ; 004627fe
        ;   Label: LAB_004627fe
    MOV dword ptr [EAX + 0x2f9c],0x0    ; 00462808
    RET                                 ; 00462812

