; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_CDemonCamera_generateFogGrid_FUN_004529a0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0 at 0044c11a
;
; Referenced Globals:
;   SFogGrid g_CameraFogGrid
;
; Called Functions:
;   core_dcamera.cpp_generateFogGrid_FUN_0044bba0
;
; *****************************************************************************

section .text

    PUSH 0x1519384                      ; 004529a0 | g_CameraFogGrid
        ;   Label: core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_004529a0
    CALL core_dcamera.cpp_generateFogGrid_FUN_0044bba0 ; 004529a5
        ;   XREF to: 0044bba0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_generateFogGrid_FUN_0044bba0(SFogGrid * fog)
    ADD ESP,0x4                         ; 004529aa
    RET                                 ; 004529ad

