; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_0045da10(CDemonFilter *this_ptr)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0045d9c0 at 0045d9c6
;   core_dfilter.cpp_CDemonFilter_dtor_FUN_0045d9a0 at 0045d9a6
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045da10
        ;   Label: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0045da10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045da11
    MOV EDX,dword ptr [EBX + 0x48]      ; 0045da15
    TEST EDX,EDX                        ; 0045da18
    JNZ 0x0045da1e                      ; 0045da1a
        ;   XREF to: 0045da1e (CONDITIONAL_JUMP)  ; LAB_0045da1e
    POP EBX                             ; 0045da1c
    RET                                 ; 0045da1d
    PUSH EDX                            ; 0045da1e
        ;   Label: LAB_0045da1e
    CALL crt_unknown.c_FUN_005c09f0     ; 0045da1f
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0045da24
    MOV dword ptr [EBX + 0x48],0x0      ; 0045da27
    POP EBX                             ; 0045da2e
    RET                                 ; 0045da2f

