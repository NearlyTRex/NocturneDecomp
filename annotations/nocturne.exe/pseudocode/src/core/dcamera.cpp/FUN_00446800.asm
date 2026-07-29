; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_FUN_00446800(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043ff50 at 0043ff98
;
; Called Functions:
;   core_dcamera.cpp_generateFogGrid_FUN_0043fa50
;
; *****************************************************************************

section .text

    PUSH 0x140d784                      ; 00446800
        ;   Label: core_dcamera.cpp_FUN_00446800
    CALL core_dcamera.cpp_generateFogGrid_FUN_0043fa50 ; 00446805
        ;   XREF to: 0043fa50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_generateFogGrid_FUN_0043fa50(SFogGrid * fog)
    ADD ESP,0x4                         ; 0044680a
    RET                                 ; 0044680d

