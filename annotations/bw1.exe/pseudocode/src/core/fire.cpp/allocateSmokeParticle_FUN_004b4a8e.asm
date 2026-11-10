; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * core_fire_cpp_allocateSmokeParticle_FUN_004b4a8e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c58a9c
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 004b4a8e
        ;   Label: core_fire.cpp_allocateSmokeParticle_FUN_004b4a8e
    MOV ECX,dword ptr [0x01c58a9c]      ; 004b4a90 | DAT_01c58a9c
    LEA EAX,[ECX*0x4 + 0x0]             ; 004b4a96
    SUB EAX,ECX                         ; 004b4a9d
    SHL EAX,0x2                         ; 004b4a9f
    SUB EAX,ECX                         ; 004b4aa2
    SHL EAX,0x2                         ; 004b4aa4
    INC ECX                             ; 004b4aa7
    ADD EAX,0x1c58aa0                   ; 004b4aa8
    CMP ECX,0x800                       ; 004b4aad
    JL 0x004b4ab7                       ; 004b4ab3
        ;   XREF to: 004b4ab7 (CONDITIONAL_JUMP)  ; LAB_004b4ab7
    XOR ECX,ECX                         ; 004b4ab5
    MOV dword ptr [0x01c58a9c],ECX      ; 004b4ab7 | DAT_01c58a9c
        ;   Label: LAB_004b4ab7
    RET                                 ; 004b4abd

