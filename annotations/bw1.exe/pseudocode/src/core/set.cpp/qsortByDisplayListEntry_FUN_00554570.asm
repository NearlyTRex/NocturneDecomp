; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_qsortByDisplayListEntry_FUN_00554570(SDisplayListSortEntry *a,SDisplayListSortEntry *b)
;
; Parameters:
; SDisplayListSortEntry * Stack[0x4]:4   a
; SDisplayListSortEntry * Stack[0x8]:4   b
;
; XREF[1]:
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_005545a0 at 0055469b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00554570
        ;   Label: core_set.cpp_qsortByDisplayListEntry_FUN_00554570
    MOV ECX,dword ptr [ESP + 0x8]       ; 00554574
    FLD float ptr [EDX + 0x4]           ; 00554578
    FCOMP float ptr [ECX + 0x4]         ; 0055457b
    FNSTSW AX                           ; 0055457e
    SAHF                                ; 00554580
    JA 0x00554594                       ; 00554581
        ;   XREF to: 00554594 (CONDITIONAL_JUMP)  ; LAB_00554594
    FLD float ptr [EDX + 0x4]           ; 00554583
    FCOMP float ptr [ECX + 0x4]         ; 00554586
    FNSTSW AX                           ; 00554589
    SAHF                                ; 0055458b
    JNC 0x0055459a                      ; 0055458c
        ;   XREF to: 0055459a (CONDITIONAL_JUMP)  ; LAB_0055459a
    MOV EAX,0xffffffff                  ; 0055458e
    RET                                 ; 00554593
    MOV EAX,0x1                         ; 00554594
        ;   Label: LAB_00554594
    RET                                 ; 00554599
    XOR EAX,EAX                         ; 0055459a
        ;   Label: LAB_0055459a
    RET                                 ; 0055459c

