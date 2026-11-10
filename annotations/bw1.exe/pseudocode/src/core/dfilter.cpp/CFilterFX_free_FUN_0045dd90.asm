; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_0045dd90(CFilterFX *this_ptr)
;
; Parameters:
; CFilterFX *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CFilterFX_dtor_FUN_0045dd70 at 0045dd76
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_0045ddb0 at 0045ddc8
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dd90
        ;   Label: core_dfilter.cpp_CFilterFX_free_FUN_0045dd90
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045dd91
    MOV EDX,dword ptr [EBX + 0x4]       ; 0045dd95
    TEST EDX,EDX                        ; 0045dd98
    JNZ 0x0045dd9e                      ; 0045dd9a
        ;   XREF to: 0045dd9e (CONDITIONAL_JUMP)  ; LAB_0045dd9e
    POP EBX                             ; 0045dd9c
    RET                                 ; 0045dd9d
    PUSH EDX                            ; 0045dd9e
        ;   Label: LAB_0045dd9e
    CALL crt_unknown.c_FUN_005c09f0     ; 0045dd9f
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0045dda4
    MOV dword ptr [EBX + 0x4],0x0       ; 0045dda7
    POP EBX                             ; 0045ddae
    RET                                 ; 0045ddaf

