; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flies_cpp_CFlies_setup_FUN_0048efb0(CFlies *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_flies.cpp_CFlies_initFly_FUN_0048f8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048efb0
        ;   Label: core_flies.cpp_CFlies_setup_FUN_0048efb0
    PUSH ESI                            ; 0048efb1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0048efb2
    PUSH ESI                            ; 0048efb6
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 0048efb7
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    XOR EBX,EBX                         ; 0048efbc
    MOV EDX,dword ptr [ESI + 0x15c]     ; 0048efbe
    ADD ESP,0x4                         ; 0048efc4
    TEST EDX,EDX                        ; 0048efc7
    JLE 0x0048efe0                      ; 0048efc9
        ;   XREF to: 0048efe0 (CONDITIONAL_JUMP)  ; LAB_0048efe0
    PUSH EBX                            ; 0048efcb
        ;   Label: LAB_0048efcb
    PUSH ESI                            ; 0048efcc
    CALL core_flies.cpp_CFlies_initFly_FUN_0048f8f0 ; 0048efcd
        ;   XREF to: 0048f8f0 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_CFlies_initFly_FUN_0048f8f0(CFlies * this_ptr, int fly_index)
    INC EBX                             ; 0048efd2
    MOV ECX,dword ptr [ESI + 0x15c]     ; 0048efd3
    ADD ESP,0x8                         ; 0048efd9
    CMP EBX,ECX                         ; 0048efdc
    JL 0x0048efcb                       ; 0048efde
        ;   XREF to: 0048efcb (CONDITIONAL_JUMP)  ; LAB_0048efcb
    MOV dword ptr [ESI + 0x2a14],0x1    ; 0048efe0
        ;   Label: LAB_0048efe0
    POP ESI                             ; 0048efea
    POP EBX                             ; 0048efeb
    RET                                 ; 0048efec

