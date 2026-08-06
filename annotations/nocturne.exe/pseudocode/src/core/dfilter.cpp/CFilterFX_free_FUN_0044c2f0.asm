; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_0044c2f0(CFilterFX *this_ptr)
;
; Parameters:
; CFilterFX *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CFilterFX_dtor_FUN_0044c2d0 at 0044c2d6
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_0044c310 at 0044c328
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c2f0
        ;   Label: core_dfilter.cpp_CFilterFX_free_FUN_0044c2f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044c2f1
    MOV EDX,dword ptr [EBX + 0x4]       ; 0044c2f5
    TEST EDX,EDX                        ; 0044c2f8
    JNZ 0x0044c2fe                      ; 0044c2fa
        ;   XREF to: 0044c2fe (CONDITIONAL_JUMP)  ; LAB_0044c2fe
    POP EBX                             ; 0044c2fc
    RET                                 ; 0044c2fd
    PUSH EDX                            ; 0044c2fe
        ;   Label: LAB_0044c2fe
    CALL crt_memory.c_free_FUN_005638d0 ; 0044c2ff
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 0044c304
    MOV dword ptr [EBX + 0x4],0x0       ; 0044c307
    POP EBX                             ; 0044c30e
    RET                                 ; 0044c30f

