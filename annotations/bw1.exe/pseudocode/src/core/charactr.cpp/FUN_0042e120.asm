; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_FUN_0042e120(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[24]:
;   core_batcreat.cpp_FUN_004115b0 at 004116fd
;   core_batman.cpp_FUN_00412ba0 at 00412cf2
;   core_biggs.cpp_FUN_00414b30 at 00414c20
;   core_boneguy.cpp_FUN_0041bb40 at 0041c003
;   core_bride.cpp_FUN_00423b70 at 00424673
;   core_carved.cpp_FUN_00428ae0 at 00429714
;   core_constrct.cpp_FUN_00445cb0 at 0044660c
;   core_cow.cpp_FUN_00448570 at 00448688
;   core_demnfolk.cpp_FUN_00459100 at 0045af64
;   core_dog.cpp_FUN_004768a0 at 00476a0f
;   ... and 14 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042e120
        ;   Label: core_charactr.cpp_FUN_0042e120
    CMP dword ptr [EDX + 0xdc],0x0      ; 0042e124
    JNZ 0x0042e13b                      ; 0042e12b
        ;   XREF to: 0042e13b (CONDITIONAL_JUMP)  ; LAB_0042e13b
    FLD float ptr [EDX + 0x24]          ; 0042e12d
    FCOMP float ptr [EDX + 0x2504]      ; 0042e130
    FNSTSW AX                           ; 0042e136
    SAHF                                ; 0042e138
    JZ 0x0042e141                       ; 0042e139
        ;   XREF to: 0042e141 (CONDITIONAL_JUMP)  ; LAB_0042e141
    MOV EAX,0x1                         ; 0042e13b
        ;   Label: LAB_0042e13b
    RET                                 ; 0042e140
    CMP dword ptr [EDX + 0x2500],0x0    ; 0042e141
        ;   Label: LAB_0042e141
    JZ 0x0042e13b                       ; 0042e148
        ;   XREF to: 0042e13b (CONDITIONAL_JUMP)  ; LAB_0042e13b
    PUSH EDX                            ; 0042e14a
    MOV EAX,dword ptr [EDX + 0x154]     ; 0042e14b
    CALL dword ptr [EAX + 0x5c]         ; 0042e151
    ADD ESP,0x4                         ; 0042e154
    TEST EAX,EAX                        ; 0042e157
    JNZ 0x0042e13b                      ; 0042e159
        ;   XREF to: 0042e13b (CONDITIONAL_JUMP)  ; LAB_0042e13b
    RET                                 ; 0042e15b

