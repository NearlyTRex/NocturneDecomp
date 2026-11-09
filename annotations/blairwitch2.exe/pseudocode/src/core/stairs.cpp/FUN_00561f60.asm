; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stairs_cpp_FUN_00561f60(CStairs *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;   core_stairs.cpp_FUN_00562240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00561f60
        ;   Label: core_stairs.cpp_FUN_00561f60
    PUSH EDX                            ; 00561f64
    CALL core_actor.cpp_FUN_00408a80    ; 00561f65
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00561f6a
    MOV ECX,dword ptr [ESP + 0x4]       ; 00561f6d
    PUSH ECX                            ; 00561f71
    CALL core_stairs.cpp_FUN_00562240   ; 00561f72
        ;   XREF to: 00562240 (UNCONDITIONAL_CALL)  ; void core_stairs.cpp_FUN_00562240(CStairs * this_ptr)
    ADD ESP,0x4                         ; 00561f77
    LEA EAX,[EAX]                       ; 00561f7a

