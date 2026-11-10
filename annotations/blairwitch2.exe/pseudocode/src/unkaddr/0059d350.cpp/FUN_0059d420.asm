; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059d350_cpp_FUN_0059d420(int *param_1)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0049c430 at 0049c4d8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059d420
        ;   Label: unkaddr_0059d350.cpp_FUN_0059d420
    MOV EDX,dword ptr [EAX]             ; 0059d424
    DEC EDX                             ; 0059d426
    MOV dword ptr [EAX],EDX             ; 0059d427
    TEST EDX,EDX                        ; 0059d429
    JL 0x0059d42e                       ; 0059d42b
        ;   XREF to: 0059d42e (CONDITIONAL_JUMP)  ; LAB_0059d42e
    RET                                 ; 0059d42d
    MOV dword ptr [EAX],0x0             ; 0059d42e
        ;   Label: LAB_0059d42e
    RET                                 ; 0059d434

