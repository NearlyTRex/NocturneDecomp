; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_qsortByDisplayListEntry_FUN_00539f00(SDisplayListSortEntry *a,SDisplayListSortEntry *b)
;
; Parameters:
; SDisplayListSortEntry * Stack[0x4]:4   a
; SDisplayListSortEntry * Stack[0x8]:4   b
;
; XREF[1]:
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_00539f30 at 0053a02b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00539f00
        ;   Label: core_set.cpp_qsortByDisplayListEntry_FUN_00539f00
    MOV ECX,dword ptr [ESP + 0x8]       ; 00539f04
    FLD float ptr [EDX + 0x4]           ; 00539f08
    FCOMP float ptr [ECX + 0x4]         ; 00539f0b
    FNSTSW AX                           ; 00539f0e
    SAHF                                ; 00539f10
    JA 0x00539f24                       ; 00539f11
        ;   XREF to: 00539f24 (CONDITIONAL_JUMP)  ; LAB_00539f24
    FLD float ptr [EDX + 0x4]           ; 00539f13
    FCOMP float ptr [ECX + 0x4]         ; 00539f16
    FNSTSW AX                           ; 00539f19
    SAHF                                ; 00539f1b
    JNC 0x00539f2a                      ; 00539f1c
        ;   XREF to: 00539f2a (CONDITIONAL_JUMP)  ; LAB_00539f2a
    MOV EAX,0xffffffff                  ; 00539f1e
    RET                                 ; 00539f23
    MOV EAX,0x1                         ; 00539f24
        ;   Label: LAB_00539f24
    RET                                 ; 00539f29
    XOR EAX,EAX                         ; 00539f2a
        ;   Label: LAB_00539f2a
    RET                                 ; 00539f2c

