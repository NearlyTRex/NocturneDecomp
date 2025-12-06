; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_set.cpp_FUN_0056fba0()
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_0056fbd0 at 0056fc90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056fba0
        ;   Label: core_set.cpp_FUN_0056fba0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056fba4
    FLD float ptr [EDX + 0x4]           ; 0056fba8
    FCOMP float ptr [ECX + 0x4]         ; 0056fbab
    FNSTSW AX                           ; 0056fbae
    SAHF                                ; 0056fbb0
    JA 0x0056fbc4                       ; 0056fbb1 | LAB_0056fbc4
        ;   XREF to: 0056fbc4 (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x4]           ; 0056fbb3
    FCOMP float ptr [ECX + 0x4]         ; 0056fbb6
    FNSTSW AX                           ; 0056fbb9
    SAHF                                ; 0056fbbb
    JNC 0x0056fbca                      ; 0056fbbc | LAB_0056fbca
        ;   XREF to: 0056fbca (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 0056fbbe
    RET                                 ; 0056fbc3
    MOV EAX,0x1                         ; 0056fbc4
        ;   Label: LAB_0056fbc4
    RET                                 ; 0056fbc9
    XOR EAX,EAX                         ; 0056fbca
        ;   Label: LAB_0056fbca
    RET                                 ; 0056fbcc

