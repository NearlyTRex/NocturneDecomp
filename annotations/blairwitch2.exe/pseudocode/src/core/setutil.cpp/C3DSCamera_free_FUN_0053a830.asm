; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_0053a830(C3DSCamera *this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_set.cpp_CDemonSet_clear_FUN_0052c090 at 0052c0af
;   core_setutil.cpp_C3DSCamera_dtor_FUN_0053a810 at 0053a816
;   core_setutil.cpp_C3DSCamera_reset_FUN_0053a870 at 0053a876
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a830
        ;   Label: core_setutil.cpp_C3DSCamera_free_FUN_0053a830
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053a831
    MOV EDX,dword ptr [EBX + 0x198]     ; 0053a835
    TEST EDX,EDX                        ; 0053a83b
    JNZ 0x0053a84b                      ; 0053a83d
        ;   XREF to: 0053a84b (CONDITIONAL_JUMP)  ; LAB_0053a84b
    MOV dword ptr [EBX + 0x194],0x0     ; 0053a83f
    POP EBX                             ; 0053a849
    RET                                 ; 0053a84a
    PUSH EDX                            ; 0053a84b
        ;   Label: LAB_0053a84b
    CALL crt_unknown.c_FUN_005b86a0     ; 0053a84c
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0053a851
    MOV dword ptr [EBX + 0x198],0x0     ; 0053a854
    MOV dword ptr [EBX + 0x194],0x0     ; 0053a85e
    POP EBX                             ; 0053a868
    RET                                 ; 0053a869

