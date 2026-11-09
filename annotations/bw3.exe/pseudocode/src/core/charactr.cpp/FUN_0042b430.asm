; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042b430(int param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_004088d0
;   core_motion.cpp_FUN_004fc2c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b430
        ;   Label: core_charactr.cpp_FUN_0042b430
    ADD EAX,0x158                       ; 0042b434
    PUSH EAX                            ; 0042b439
    CALL core_motion.cpp_FUN_004fc2c0   ; 0042b43a
        ;   XREF to: 004fc2c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc2c0()
    ADD ESP,0x4                         ; 0042b43f
    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b442
    PUSH EDX                            ; 0042b446
    CALL core_actor.cpp_FUN_004088d0    ; 0042b447
        ;   XREF to: 004088d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004088d0()
    ADD ESP,0x4                         ; 0042b44c
    RET                                 ; 0042b44f

