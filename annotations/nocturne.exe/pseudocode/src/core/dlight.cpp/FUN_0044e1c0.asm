; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dlight_cpp_FUN_0044e1c0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0041fa10 at 0041fa25
;   core_set.cpp_FUN_0050ad20 at 0050adaa
;
; Called Functions:
;   core_dlight.cpp_FUN_0044e2c0
;   FUN_0043ff30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0044e1c0
        ;   Label: core_dlight.cpp_FUN_0044e1c0
    PUSH EDX                            ; 0044e1c4
    CALL core_dlight.cpp_FUN_0044e2c0   ; 0044e1c5
        ;   XREF to: 0044e2c0 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_FUN_0044e2c0()
    ADD ESP,0x4                         ; 0044e1ca
    PUSH 0x1                            ; 0044e1cd
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044e1cf
    PUSH ECX                            ; 0044e1d3
    CALL FUN_0043ff30                   ; 0044e1d4
        ;   XREF to: 0043ff30 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ff30()
    ADD ESP,0x8                         ; 0044e1d9
    RET                                 ; 0044e1dc

