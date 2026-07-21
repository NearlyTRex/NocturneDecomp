; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_copyVector_FUN_0040e180(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00501526
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e180
        ;   Label: core_actor.cpp_copyVector_FUN_0040e180
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040e184
    CMP EAX,EDX                         ; 0040e188
    JNZ 0x0040e18d                      ; 0040e18a
        ;   XREF to: 0040e18d (CONDITIONAL_JUMP)  ; LAB_0040e18d
    RET                                 ; 0040e18c
    MOV ECX,dword ptr [EDX]             ; 0040e18d
        ;   Label: LAB_0040e18d
    MOV dword ptr [EAX],ECX             ; 0040e18f
    MOV ECX,dword ptr [EDX + 0x4]       ; 0040e191
    MOV dword ptr [EAX + 0x4],ECX       ; 0040e194
    MOV ECX,dword ptr [EDX + 0x8]       ; 0040e197
    MOV dword ptr [EAX + 0x8],ECX       ; 0040e19a
    RET                                 ; 0040e19d

