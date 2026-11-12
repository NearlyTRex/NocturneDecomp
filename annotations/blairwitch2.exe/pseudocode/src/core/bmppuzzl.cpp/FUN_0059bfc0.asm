; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bmppuzzl_cpp_FUN_0059bfc0(undefined4 param_1)
;
;
; XREF[1]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_0059bec0 at 0059bed2
;
; Referenced Globals:
;   WatcomTypeInfo g___1hlg6hbuttonStructTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5fe5f0                       ; 0059bfc0 | g___1hlg6hbuttonStructTypeInfo
        ;   Label: core_bmppuzzl.cpp_FUN_0059bfc0
    PUSH 0x1e                           ; 0059bfc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059bfc7
    PUSH EDX                            ; 0059bfcb
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0059bfcc
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 0059bfd1
    RET                                 ; 0059bfd4

