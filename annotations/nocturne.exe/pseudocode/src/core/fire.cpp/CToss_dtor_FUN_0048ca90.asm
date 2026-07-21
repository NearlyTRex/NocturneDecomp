; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_fire_cpp_CToss_dtor_FUN_0048ca90(int param_1)
;
;
; Called Functions:
;   core_box.cpp_CBox_dtor_FUN_0041a6c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048ca90
        ;   Label: core_fire.cpp_CToss_dtor_FUN_0048ca90
    PUSH 0x0                            ; 0048ca94
    ADD EAX,0x180                       ; 0048ca96
    PUSH EAX                            ; 0048ca9b
    CALL core_box.cpp_CBox_dtor_FUN_0041a6c0 ; 0048ca9c
        ;   XREF to: 0041a6c0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_dtor_FUN_0041a6c0()
    ADD ESP,0x8                         ; 0048caa1
    SUB EAX,0x180                       ; 0048caa4
    RET                                 ; 0048caa9

