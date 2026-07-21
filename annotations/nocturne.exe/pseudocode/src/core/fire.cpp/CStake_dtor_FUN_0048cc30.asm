; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_fire_cpp_CStake_dtor_FUN_0048cc30(int param_1)
;
;
; Called Functions:
;   core_box.cpp_CBox_dtor_FUN_0041a6c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048cc30
        ;   Label: core_fire.cpp_CStake_dtor_FUN_0048cc30
    PUSH 0x0                            ; 0048cc34
    ADD EAX,0x4                         ; 0048cc36
    PUSH EAX                            ; 0048cc39
    CALL core_box.cpp_CBox_dtor_FUN_0041a6c0 ; 0048cc3a
        ;   XREF to: 0041a6c0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_dtor_FUN_0041a6c0()
    ADD ESP,0x8                         ; 0048cc3f
    SUB EAX,0x4                         ; 0048cc42
    RET                                 ; 0048cc45

