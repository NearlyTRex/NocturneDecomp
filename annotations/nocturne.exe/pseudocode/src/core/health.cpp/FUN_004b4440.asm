; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_health_cpp_FUN_004b4440(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040b1a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004b4440
        ;   Label: core_health.cpp_FUN_004b4440
    PUSH EDX                            ; 004b4444
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b4445
    PUSH ECX                            ; 004b4449
    CALL core_actor.cpp_FUN_0040b1a0    ; 004b444a
        ;   XREF to: 0040b1a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040b1a0()
    ADD ESP,0x8                         ; 004b444f
    RET                                 ; 004b4452

