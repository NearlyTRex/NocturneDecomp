; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_00459960(CDemonFilter *this_ptr)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00459910 at 00459916
;   core_dfilter.cpp_CDemonFilter_dtor_FUN_004598f0 at 004598f6
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459960
        ;   Label: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_00459960
    MOV EBX,dword ptr [ESP + 0x8]       ; 00459961
    MOV EDX,dword ptr [EBX + 0x48]      ; 00459965
    TEST EDX,EDX                        ; 00459968
    JNZ 0x0045996e                      ; 0045996a
        ;   XREF to: 0045996e (CONDITIONAL_JUMP)  ; LAB_0045996e
    POP EBX                             ; 0045996c
    RET                                 ; 0045996d
    PUSH EDX                            ; 0045996e
        ;   Label: LAB_0045996e
    CALL crt_unknown.c_FUN_005a3770     ; 0045996f
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00459974
    MOV dword ptr [EBX + 0x48],0x0      ; 00459977
    POP EBX                             ; 0045997e
    RET                                 ; 0045997f

