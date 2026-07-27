; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_staticInit_FUN_004b1060(void)
;
;
; Called Functions:
;   core_ground.cpp_CGround_ctor_FUN_004b1350
;   crt_unknown.c_FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x100                          ; 004b1060
        ;   Label: core_ground.cpp_staticInit_FUN_004b1060
    PUSH 0x100                          ; 004b1065
    PUSH 0x1cadf80                      ; 004b106a
    CALL core_ground.cpp_CGround_ctor_FUN_004b1350 ; 004b106f
        ;   XREF to: 004b1350 (UNCONDITIONAL_CALL)  ; undefined core_ground.cpp_CGround_ctor_FUN_004b1350()
    ADD ESP,0xc                         ; 004b1074
    PUSH 0x5ba8dc                       ; 004b1077
    CALL crt_unknown.c_FUN_00564bb0     ; 004b107c
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 004b1081
    RET                                 ; 004b1084

