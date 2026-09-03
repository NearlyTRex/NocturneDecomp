; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
;
; XREF[4]:
;   core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40 at 004cba9b
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0 at 004cb5b1
;   core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_004cb010 at 004cb26f
;   core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0 at 004cb53c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004cb8f0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0
    DEC EAX                             ; 004cb8f4
    TEST EAX,EAX                        ; 004cb8f5
    JL 0x004cb8fa                       ; 004cb8f7
        ;   XREF to: 004cb8fa (CONDITIONAL_JUMP)  ; LAB_004cb8fa
    RET                                 ; 004cb8f9
    MOV EAX,0xb                         ; 004cb8fa
        ;   Label: LAB_004cb8fa
    RET                                 ; 004cb8ff

