; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
;
; XREF[4]:
;   core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0 at 004e774b
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220 at 004e7231
;   core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40 at 004e6ebb
;   core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004e6f20 at 004e71ba
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004e7570
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570
    DEC EAX                             ; 004e7574
    TEST EAX,EAX                        ; 004e7575
    JL 0x004e757a                       ; 004e7577
        ;   XREF to: 004e757a (CONDITIONAL_JUMP)  ; LAB_004e757a
    RET                                 ; 004e7579
    MOV EAX,0xb                         ; 004e757a
        ;   Label: LAB_004e757a
    RET                                 ; 004e757f

