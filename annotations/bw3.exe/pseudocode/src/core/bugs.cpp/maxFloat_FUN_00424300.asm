; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_bugs_cpp_maxFloat_FUN_00424300(float param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_bugs.cpp_FUN_00422070 at 0042210d
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00424300
        ;   Label: core_bugs.cpp_maxFloat_FUN_00424300
    FLD float ptr [ESP + 0x8]           ; 00424303
    FCOMP float ptr [ESP + 0xc]         ; 00424307
    FNSTSW AX                           ; 0042430b
    SAHF                                ; 0042430d
    JBE 0x0042431e                      ; 0042430e
        ;   XREF to: 0042431e (CONDITIONAL_JUMP)  ; LAB_0042431e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00424310
    MOV dword ptr [ESP],EAX             ; 00424314
    MOV EAX,dword ptr [ESP]             ; 00424317
    ADD ESP,0x4                         ; 0042431a
    RET                                 ; 0042431d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042431e
        ;   Label: LAB_0042431e
    MOV dword ptr [ESP],EAX             ; 00424322
    MOV EAX,dword ptr [ESP]             ; 00424325
    ADD ESP,0x4                         ; 00424328
    RET                                 ; 0042432b

