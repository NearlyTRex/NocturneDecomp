; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_bugs_cpp_maxFloat_FUN_00428150(float param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_bugs.cpp_FUN_00425ee0 at 00425f7d
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00428150
        ;   Label: core_bugs.cpp_maxFloat_FUN_00428150
    FLD float ptr [ESP + 0x8]           ; 00428153
    FCOMP float ptr [ESP + 0xc]         ; 00428157
    FNSTSW AX                           ; 0042815b
    SAHF                                ; 0042815d
    JBE 0x0042816e                      ; 0042815e
        ;   XREF to: 0042816e (CONDITIONAL_JUMP)  ; LAB_0042816e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00428160
    MOV dword ptr [ESP],EAX             ; 00428164
    MOV EAX,dword ptr [ESP]             ; 00428167
    ADD ESP,0x4                         ; 0042816a
    RET                                 ; 0042816d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042816e
        ;   Label: LAB_0042816e
    MOV dword ptr [ESP],EAX             ; 00428172
    MOV EAX,dword ptr [ESP]             ; 00428175
    ADD ESP,0x4                         ; 00428178
    RET                                 ; 0042817b

