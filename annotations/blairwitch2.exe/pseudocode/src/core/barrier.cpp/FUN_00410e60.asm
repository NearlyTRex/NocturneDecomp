; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_barrier_cpp_FUN_00410e60(CDemonActor *param_1)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_setcolid.cpp_FUN_00538020
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00410e60
        ;   Label: core_barrier.cpp_FUN_00410e60
    CMP dword ptr [EAX + 0x2c0],0x0     ; 00410e64
    JNZ 0x00410e6e                      ; 00410e6b
        ;   XREF to: 00410e6e (CONDITIONAL_JUMP)  ; LAB_00410e6e
    RET                                 ; 00410e6d
    PUSH EAX                            ; 00410e6e
        ;   Label: LAB_00410e6e
    MOV ECX,dword ptr [0x0061b5a8]      ; 00410e6f | g_CDemonSetPtr
    PUSH ECX                            ; 00410e75
    CALL core_setcolid.cpp_FUN_00538020 ; 00410e76
        ;   XREF to: 00538020 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_FUN_00538020(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00410e7b
    RET                                 ; 00410e7e

