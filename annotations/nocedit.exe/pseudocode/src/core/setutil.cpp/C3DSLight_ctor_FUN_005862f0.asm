; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSLight * __cdecl core_setutil_cpp_C3DSLight_ctor_FUN_005862f0(C3DSLight *this_ptr)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_setedit.cpp_CDemonSet_FUN_0057e7c0 at 0057f72b
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 00579cd8
;
; Called Functions:
;   core_setutil.cpp_C3DSLight_reset_FUN_005879b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005862f0
        ;   Label: core_setutil.cpp_C3DSLight_ctor_FUN_005862f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005862f1
    PUSH EBX                            ; 005862f5
    CALL core_setutil.cpp_C3DSLight_reset_FUN_005879b0 ; 005862f6
        ;   XREF to: 005879b0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_reset_FUN_005879b0(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 005862fb
    MOV EAX,EBX                         ; 005862fe
    POP EBX                             ; 00586300
    RET                                 ; 00586301

