; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
;
; XREF[3]:
;   core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004e68c0 at 004e692f
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004e73c0 at 004e73e7
;   core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40 at 004e6ed7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004e7560
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560
    INC EAX                             ; 004e7564
    CMP EAX,0xc                         ; 004e7565
    JL 0x004e756c                       ; 004e7568
        ;   XREF to: 004e756c (CONDITIONAL_JUMP)  ; LAB_004e756c
    XOR EAX,EAX                         ; 004e756a
    RET                                 ; 004e756c
        ;   Label: LAB_004e756c

