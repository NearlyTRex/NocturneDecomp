; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_00506200(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
;
; XREF[3]:
;   core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_00505560 at 005055cf
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060 at 00506087
;   core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0 at 00505b77
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00506200
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_00506200
    INC EAX                             ; 00506204
    CMP EAX,0xc                         ; 00506205
    JL 0x0050620c                       ; 00506208
        ;   XREF to: 0050620c (CONDITIONAL_JUMP)  ; LAB_0050620c
    XOR EAX,EAX                         ; 0050620a
    RET                                 ; 0050620c
        ;   Label: LAB_0050620c

