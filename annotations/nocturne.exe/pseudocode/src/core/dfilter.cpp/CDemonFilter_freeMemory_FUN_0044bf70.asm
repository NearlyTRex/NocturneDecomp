; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_0044bf70(int param_1)
;
;
; XREF[2]:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0044bf20 at 0044bf26
;   core_dfilter.cpp_CDemonFilter_dtor_FUN_0044bf00 at 0044bf06
;
; Called Functions:
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bf70
        ;   Label: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0044bf70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044bf71
    MOV EDX,dword ptr [EBX + 0x48]      ; 0044bf75
    TEST EDX,EDX                        ; 0044bf78
    JNZ 0x0044bf7e                      ; 0044bf7a
        ;   XREF to: 0044bf7e (CONDITIONAL_JUMP)  ; LAB_0044bf7e
    POP EBX                             ; 0044bf7c
    RET                                 ; 0044bf7d
    PUSH EDX                            ; 0044bf7e
        ;   Label: LAB_0044bf7e
    CALL crt_unknown.c_FUN_005638d0     ; 0044bf7f
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 0044bf84
    MOV dword ptr [EBX + 0x48],0x0      ; 0044bf87
    POP EBX                             ; 0044bf8e
    RET                                 ; 0044bf8f

