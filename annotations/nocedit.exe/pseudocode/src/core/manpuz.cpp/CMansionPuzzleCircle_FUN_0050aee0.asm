; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050aee0(CMansionPuzzleCircle * this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a610 at 0050a887
;   core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290 at 0050a2ff
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40 at 0050ad67
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0050aee0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050aee0
    INC EAX                             ; 0050aee4
    CMP EAX,0xc                         ; 0050aee5
    JL 0x0050aeec                       ; 0050aee8
        ;   XREF to: 0050aeec (CONDITIONAL_JUMP)  ; LAB_0050aeec
    XOR EAX,EAX                         ; 0050aeea
    RET                                 ; 0050aeec
        ;   Label: LAB_0050aeec

