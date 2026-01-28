; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050aef0(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a610 at 0050a86f
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a8d0 at 0050ab3c
;   core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040 at 0050b09b
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0 at 0050abb1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0050aef0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050aef0
    DEC EAX                             ; 0050aef4
    TEST EAX,EAX                        ; 0050aef5
    JL 0x0050aefa                       ; 0050aef7
        ;   XREF to: 0050aefa (CONDITIONAL_JUMP)  ; LAB_0050aefa
    RET                                 ; 0050aef9
    MOV EAX,0xb                         ; 0050aefa
        ;   Label: LAB_0050aefa
    RET                                 ; 0050aeff

