; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_qsortByDisplayListEntry_FUN_0050d2a0(SDisplayListSortEntry *a,SDisplayListSortEntry *b)
;
; Parameters:
; SDisplayListSortEntry * Stack[0x4]:4   a
; SDisplayListSortEntry * Stack[0x8]:4   b
;
; XREF[1]:
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0 at 0050d3a9
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0050d2a0
        ;   Label: core_set.cpp_qsortByDisplayListEntry_FUN_0050d2a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0050d2a4
    FLD float ptr [EDX + 0x4]           ; 0050d2a8
    FCOMP float ptr [ECX + 0x4]         ; 0050d2ab
    FNSTSW AX                           ; 0050d2ae
    SAHF                                ; 0050d2b0
    JA 0x0050d2c4                       ; 0050d2b1
        ;   XREF to: 0050d2c4 (CONDITIONAL_JUMP)  ; LAB_0050d2c4
    FLD float ptr [EDX + 0x4]           ; 0050d2b3
    FCOMP float ptr [ECX + 0x4]         ; 0050d2b6
    FNSTSW AX                           ; 0050d2b9
    SAHF                                ; 0050d2bb
    JNC 0x0050d2ca                      ; 0050d2bc
        ;   XREF to: 0050d2ca (CONDITIONAL_JUMP)  ; LAB_0050d2ca
    MOV EAX,0xffffffff                  ; 0050d2be
    RET                                 ; 0050d2c3
    MOV EAX,0x1                         ; 0050d2c4
        ;   Label: LAB_0050d2c4
    RET                                 ; 0050d2c9
    XOR EAX,EAX                         ; 0050d2ca
        ;   Label: LAB_0050d2ca
    RET                                 ; 0050d2cc

