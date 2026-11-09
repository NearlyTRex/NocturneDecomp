; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_FUN_0044f740(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_00448ca0 at 00448cd3
;
; Called Functions:
;   core_dcamera.cpp_generateFogGrid_FUN_00448750
;
; *****************************************************************************

section .text

    PUSH 0x149d6dc                      ; 0044f740
        ;   Label: core_dcamera.cpp_FUN_0044f740
    CALL core_dcamera.cpp_generateFogGrid_FUN_00448750 ; 0044f745
        ;   XREF to: 00448750 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_generateFogGrid_FUN_00448750()
    ADD ESP,0x4                         ; 0044f74a
    RET                                 ; 0044f74d

