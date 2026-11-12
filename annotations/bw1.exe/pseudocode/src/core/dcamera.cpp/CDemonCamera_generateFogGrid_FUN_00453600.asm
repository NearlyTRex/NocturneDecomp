; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_generateFogGrid_FUN_00453600(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044cb60 at 0044cb93
;
; Called Functions:
;   core_dcamera.cpp_generateFogGrid_FUN_0044c610
;
; *****************************************************************************

section .text

    PUSH 0x1480e2c                      ; 00453600
        ;   Label: core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_00453600
    CALL core_dcamera.cpp_generateFogGrid_FUN_0044c610 ; 00453605
        ;   XREF to: 0044c610 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_generateFogGrid_FUN_0044c610(SFogGrid * fog)
    ADD ESP,0x4                         ; 0045360a
    RET                                 ; 0045360d

