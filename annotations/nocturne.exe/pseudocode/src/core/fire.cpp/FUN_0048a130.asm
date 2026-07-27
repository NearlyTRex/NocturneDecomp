; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fire_cpp_FUN_0048a130(undefined4 param_1)
;
;
; XREF[1]:
;   core_fire.cpp_staticInit_FUN_004823b0 at 004823b5
;
; Called Functions:
;   core_fire.cpp_CFireEffect_init_FUN_0048a150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a130
        ;   Label: core_fire.cpp_FUN_0048a130
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048a131
    PUSH EBX                            ; 0048a135
    CALL core_fire.cpp_CFireEffect_init_FUN_0048a150 ; 0048a136
        ;   XREF to: 0048a150 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_init_FUN_0048a150()
    ADD ESP,0x4                         ; 0048a13b
    MOV EAX,EBX                         ; 0048a13e
    POP EBX                             ; 0048a140
    RET                                 ; 0048a141

