; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00446800(void)
;
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
        ;   Label: FUN_00446800
    CALL core_dcamera.cpp_generateFogGrid_FUN_0043fa50 ; 00446805
        ;   XREF to: 0043fa50 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_generateFogGrid_FUN_0043fa50()
    ADD ESP,0x4                         ; 0044680a
    RET                                 ; 0044680d

