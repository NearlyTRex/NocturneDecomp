; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_CFlies_setup_FUN_004ad870(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_flies.cpp_CFlies_initFly_FUN_004ae280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad870
        ;   Label: core_flies.cpp_CFlies_setup_FUN_004ad870
    PUSH ESI                            ; 004ad871
    MOV ESI,dword ptr [ESP + 0xc]       ; 004ad872
    PUSH ESI                            ; 004ad876
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 004ad877
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    XOR EBX,EBX                         ; 004ad87c
    MOV EDX,dword ptr [ESI + 0x164]     ; 004ad87e
    ADD ESP,0x4                         ; 004ad884
    TEST EDX,EDX                        ; 004ad887
    JLE 0x004ad8a0                      ; 004ad889
        ;   XREF to: 004ad8a0 (CONDITIONAL_JUMP)  ; LAB_004ad8a0
    PUSH EBX                            ; 004ad88b
        ;   Label: LAB_004ad88b
    PUSH ESI                            ; 004ad88c
    CALL core_flies.cpp_CFlies_initFly_FUN_004ae280 ; 004ad88d
        ;   XREF to: 004ae280 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_CFlies_initFly_FUN_004ae280(CFlies * this_ptr, int fly_index)
    INC EBX                             ; 004ad892
    MOV ECX,dword ptr [ESI + 0x164]     ; 004ad893
    ADD ESP,0x8                         ; 004ad899
    CMP EBX,ECX                         ; 004ad89c
    JL 0x004ad88b                       ; 004ad89e
        ;   XREF to: 004ad88b (CONDITIONAL_JUMP)  ; LAB_004ad88b
    MOV dword ptr [ESI + 0x2a1c],0x1    ; 004ad8a0
        ;   Label: LAB_004ad8a0
    POP ESI                             ; 004ad8aa
    POP EBX                             ; 004ad8ab
    RET                                 ; 004ad8ac

