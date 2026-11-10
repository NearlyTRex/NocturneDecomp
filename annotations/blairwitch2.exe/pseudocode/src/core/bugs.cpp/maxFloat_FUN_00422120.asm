; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_bugs_cpp_maxFloat_FUN_00422120(float param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_bugs.cpp_CBugs_sampleGroundHeight_FUN_0041feb0 at 0041ff4d
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00422120
        ;   Label: core_bugs.cpp_maxFloat_FUN_00422120
    FLD float ptr [ESP + 0x8]           ; 00422123
    FCOMP float ptr [ESP + 0xc]         ; 00422127
    FNSTSW AX                           ; 0042212b
    SAHF                                ; 0042212d
    JBE 0x0042213e                      ; 0042212e
        ;   XREF to: 0042213e (CONDITIONAL_JUMP)  ; LAB_0042213e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00422130
    MOV dword ptr [ESP],EAX             ; 00422134
    MOV EAX,dword ptr [ESP]             ; 00422137
    ADD ESP,0x4                         ; 0042213a
    RET                                 ; 0042213d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042213e
        ;   Label: LAB_0042213e
    MOV dword ptr [ESP],EAX             ; 00422142
    MOV EAX,dword ptr [ESP]             ; 00422145
    ADD ESP,0x4                         ; 00422148
    RET                                 ; 0042214b

