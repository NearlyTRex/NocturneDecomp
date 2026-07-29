; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_bugs_cpp_maxFloat_FUN_00423d60(float a,float b)
;
; Parameters:
; float            Stack[0x4]:4   a
; float            Stack[0x8]:4   b
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00421f00 at 00421f9d
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00423d60
        ;   Label: core_bugs.cpp_maxFloat_FUN_00423d60
    FLD float ptr [ESP + 0x8]           ; 00423d63
    FCOMP float ptr [ESP + 0xc]         ; 00423d67
    FNSTSW AX                           ; 00423d6b
    SAHF                                ; 00423d6d
    JBE 0x00423d7e                      ; 00423d6e
        ;   XREF to: 00423d7e (CONDITIONAL_JUMP)  ; LAB_00423d7e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00423d70
    MOV dword ptr [ESP],EAX             ; 00423d74
    MOV EAX,dword ptr [ESP]             ; 00423d77
    ADD ESP,0x4                         ; 00423d7a
    RET                                 ; 00423d7d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00423d7e
        ;   Label: LAB_00423d7e
    MOV dword ptr [ESP],EAX             ; 00423d82
    MOV EAX,dword ptr [ESP]             ; 00423d85
    ADD ESP,0x4                         ; 00423d88
    RET                                 ; 00423d8b

