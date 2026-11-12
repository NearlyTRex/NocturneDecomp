; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_muzzle_cpp_FUN_0059d940(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_muzzle.cpp_FUN_0059d880 at 0059d8d3
;
; Called Functions:
;   core_muzzle.cpp_FUN_0059d8e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0059d940
        ;   Label: core_muzzle.cpp_FUN_0059d940
    PUSH EDX                            ; 0059d944
    MOV ECX,dword ptr [ESP + 0x8]       ; 0059d945
    PUSH ECX                            ; 0059d949
    CALL core_muzzle.cpp_FUN_0059d8e0   ; 0059d94a
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 0059d94f
    RET                                 ; 0059d952

