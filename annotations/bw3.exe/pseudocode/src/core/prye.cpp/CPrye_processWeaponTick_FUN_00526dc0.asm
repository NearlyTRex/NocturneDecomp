; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_prye_cpp_CPrye_processWeaponTick_FUN_00526dc0(CPrye *this_ptr,float delta_time)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[2]:
;   core_prye.cpp_CPrye_processFrame_FUN_00518cd0 at 00519e6c
;   core_prye.cpp_CPrye_process_FUN_00518ab0 at 00518c78
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00526dc0
        ;   Label: core_prye.cpp_CPrye_processWeaponTick_FUN_00526dc0
    MOV EDX,dword ptr [EAX + 0x20c24]   ; 00526dc4
    TEST EDX,EDX                        ; 00526dca
    JNZ 0x00526dcf                      ; 00526dcc
        ;   XREF to: 00526dcf (CONDITIONAL_JUMP)  ; LAB_00526dcf
    RET                                 ; 00526dce
    MOV EAX,EDX                         ; 00526dcf
        ;   Label: LAB_00526dcf
    PUSH dword ptr [ESP + 0x8]          ; 00526dd1
    PUSH EAX                            ; 00526dd5
    MOV EDX,dword ptr [EDX + 0x154]     ; 00526dd6
    CALL dword ptr [EDX + 0xc]          ; 00526ddc
    ADD ESP,0x8                         ; 00526ddf
    RET                                 ; 00526de2

