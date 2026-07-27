; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_larva_cpp_FUN_004c5630(int param_1)
;
;
; XREF[1]:
;   core_level.cpp_staticInit_FUN_004c5600 at 004c5605
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c5630
        ;   Label: core_larva.cpp_FUN_004c5630
    MOV dword ptr [EAX + 0xc],0x0       ; 004c5634
    RET                                 ; 004c563b

