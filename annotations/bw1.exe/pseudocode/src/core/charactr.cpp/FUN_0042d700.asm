; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042d700(int param_1,float param_2)
;
;
; XREF[38]:
;   core_baron.cpp_FUN_0040f4d0 at 0040f662
;   core_batcreat.cpp_FUN_004115b0 at 0041171a
;   core_batman.cpp_FUN_00412ba0 at 00412d13
;   core_biggs.cpp_FUN_00414b30 at 00414c3a
;   core_boneguy.cpp_FUN_0041bb40 at 0041c054
;   core_bride.cpp_FUN_00423b70 at 0042468a
;   core_carved.cpp_FUN_00428ae0 at 00429765
;   core_constrct.cpp_FUN_00445cb0 at 0044662d
;   core_cow.cpp_FUN_00448570 at 004486d9
;   core_demnfolk.cpp_FUN_00459100 at 0045afb5
;   ... and 28 more
;
; Referenced Globals:
;   undefined4 DAT_005d5907
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042d700
        ;   Label: core_charactr.cpp_FUN_0042d700
    CMP dword ptr [EAX + 0x27a8],0x0    ; 0042d704
    JZ 0x0042d730                       ; 0042d70b
        ;   XREF to: 0042d730 (CONDITIONAL_JUMP)  ; LAB_0042d730
    MOV dword ptr [EAX + 0x2520],0x0    ; 0042d70d
    MOV EDX,dword ptr [EAX + 0x2520]    ; 0042d717
    MOV dword ptr [EAX + 0x251c],EDX    ; 0042d71d
    MOV EDX,dword ptr [EAX + 0x251c]    ; 0042d723
    MOV dword ptr [EAX + 0x2518],EDX    ; 0042d729
    RET                                 ; 0042d72f
    FLD float ptr [ESP + 0x8]           ; 0042d730
        ;   Label: LAB_0042d730
    FMUL float ptr [0x005d5907]         ; 0042d734 | DAT_005d5907
    FADD float ptr [EAX + 0x251c]       ; 0042d73a
    FSTP float ptr [EAX + 0x251c]       ; 0042d740
    RET                                 ; 0042d746

