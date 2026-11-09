; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
;
; XREF[4]:
;   core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390 at 005063eb
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_00505ec0 at 00505ed1
;   core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0 at 00505b5b
;   core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0 at 00505e5a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00506210
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210
    DEC EAX                             ; 00506214
    TEST EAX,EAX                        ; 00506215
    JL 0x0050621a                       ; 00506217
        ;   XREF to: 0050621a (CONDITIONAL_JUMP)  ; LAB_0050621a
    RET                                 ; 00506219
    MOV EAX,0xb                         ; 0050621a
        ;   Label: LAB_0050621a
    RET                                 ; 0050621f

