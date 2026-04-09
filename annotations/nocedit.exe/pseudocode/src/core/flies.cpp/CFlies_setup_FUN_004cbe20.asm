; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_CFlies_setup_FUN_004cbe20(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_flies.cpp_CFlies_initFly_FUN_004cc760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbe20
        ;   Label: core_flies.cpp_CFlies_setup_FUN_004cbe20
    PUSH ESI                            ; 004cbe21
    MOV ESI,dword ptr [ESP + 0xc]       ; 004cbe22
    PUSH ESI                            ; 004cbe26
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004cbe27
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    XOR EBX,EBX                         ; 004cbe2c
    MOV EDX,dword ptr [ESI + 0x164]     ; 004cbe2e
    ADD ESP,0x4                         ; 004cbe34
    TEST EDX,EDX                        ; 004cbe37
    JLE 0x004cbe50                      ; 004cbe39
        ;   XREF to: 004cbe50 (CONDITIONAL_JUMP)  ; LAB_004cbe50
    PUSH EBX                            ; 004cbe3b
        ;   Label: LAB_004cbe3b
    PUSH ESI                            ; 004cbe3c
    CALL core_flies.cpp_CFlies_initFly_FUN_004cc760 ; 004cbe3d
        ;   XREF to: 004cc760 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_CFlies_initFly_FUN_004cc760(CFlies * this_ptr, int fly_index)
    INC EBX                             ; 004cbe42
    MOV ECX,dword ptr [ESI + 0x164]     ; 004cbe43
    ADD ESP,0x8                         ; 004cbe49
    CMP EBX,ECX                         ; 004cbe4c
    JL 0x004cbe3b                       ; 004cbe4e
        ;   XREF to: 004cbe3b (CONDITIONAL_JUMP)  ; LAB_004cbe3b
    MOV dword ptr [ESI + 0x2a1c],0x1    ; 004cbe50
        ;   Label: LAB_004cbe50
    POP ESI                             ; 004cbe5a
    POP EBX                             ; 004cbe5b
    RET                                 ; 004cbe5c

