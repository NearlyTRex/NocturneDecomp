; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_00459ce0(CFilterFX *this_ptr)
;
; Parameters:
; CFilterFX *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CFilterFX_dtor_FUN_00459cc0 at 00459cc6
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_00459d00 at 00459d18
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459ce0
        ;   Label: core_dfilter.cpp_CFilterFX_free_FUN_00459ce0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00459ce1
    MOV EDX,dword ptr [EBX + 0x4]       ; 00459ce5
    TEST EDX,EDX                        ; 00459ce8
    JNZ 0x00459cee                      ; 00459cea
        ;   XREF to: 00459cee (CONDITIONAL_JUMP)  ; LAB_00459cee
    POP EBX                             ; 00459cec
    RET                                 ; 00459ced
    PUSH EDX                            ; 00459cee
        ;   Label: LAB_00459cee
    CALL crt_unknown.c_FUN_005a3770     ; 00459cef
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00459cf4
    MOV dword ptr [EBX + 0x4],0x0       ; 00459cf7
    POP EBX                             ; 00459cfe
    RET                                 ; 00459cff

