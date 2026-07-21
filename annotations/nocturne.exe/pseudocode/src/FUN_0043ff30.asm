; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043ff30(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0044e1c0 at 0044e1d4
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_free_FUN_004401d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ff30
        ;   Label: FUN_0043ff30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043ff31
    PUSH EBX                            ; 0043ff35
    CALL core_dcamera.cpp_CDemonCamera_free_FUN_004401d0 ; 0043ff36
        ;   XREF to: 004401d0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_free_FUN_004401d0()
    ADD ESP,0x4                         ; 0043ff3b
    MOV EAX,EBX                         ; 0043ff3e
    POP EBX                             ; 0043ff40
    RET                                 ; 0043ff41

