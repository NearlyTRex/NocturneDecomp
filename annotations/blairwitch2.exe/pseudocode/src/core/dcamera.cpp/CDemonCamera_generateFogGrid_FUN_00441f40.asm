; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_generateFogGrid_FUN_00441f40(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043b4c0 at 0043b4f5
;
; Called Functions:
;   core_dcamera.cpp_generateFogGrid_FUN_0043af70
;
; *****************************************************************************

section .text

    PUSH 0x146592c                      ; 00441f40
        ;   Label: core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_00441f40
    CALL core_dcamera.cpp_generateFogGrid_FUN_0043af70 ; 00441f45
        ;   XREF to: 0043af70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_generateFogGrid_FUN_0043af70()
    ADD ESP,0x4                         ; 00441f4a
    RET                                 ; 00441f4d

