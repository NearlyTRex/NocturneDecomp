; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGround * core_ground_cpp_FUN_004b13b0(CGround *param_1)
;
;
; Called Functions:
;   core_ground.cpp_CGround_free_FUN_004b1470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b13b0
        ;   Label: core_ground.cpp_FUN_004b13b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b13b1
    PUSH EBX                            ; 004b13b5
    CALL core_ground.cpp_CGround_free_FUN_004b1470 ; 004b13b6
        ;   XREF to: 004b1470 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_free_FUN_004b1470(CGround * this_ptr)
    ADD ESP,0x4                         ; 004b13bb
    MOV EAX,EBX                         ; 004b13be
    POP EBX                             ; 004b13c0
    RET                                 ; 004b13c1

