; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
;
; XREF[3]:
;   core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004cac90 at 004cacff
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740 at 004cb767
;   core_manpuz.cpp_FUN_004cb010 at 004cb287
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004cb8e0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0
    INC EAX                             ; 004cb8e4
    CMP EAX,0xc                         ; 004cb8e5
    JL 0x004cb8ec                       ; 004cb8e8
        ;   XREF to: 004cb8ec (CONDITIONAL_JUMP)  ; LAB_004cb8ec
    XOR EAX,EAX                         ; 004cb8ea
    RET                                 ; 004cb8ec
        ;   Label: LAB_004cb8ec

