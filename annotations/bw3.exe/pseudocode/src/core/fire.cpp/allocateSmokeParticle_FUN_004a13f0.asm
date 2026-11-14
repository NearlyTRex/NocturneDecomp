; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSmokeParticle * __cdecl core_fire_cpp_allocateSmokeParticle_FUN_004a13f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c74e9c
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x01c74e9c]      ; 004a13f0 | DAT_01c74e9c
        ;   Label: core_fire.cpp_allocateSmokeParticle_FUN_004a13f0
    LEA EAX,[ECX*0x4 + 0x0]             ; 004a13f6
    SUB EAX,ECX                         ; 004a13fd
    SHL EAX,0x2                         ; 004a13ff
    SUB EAX,ECX                         ; 004a1402
    SHL EAX,0x2                         ; 004a1404
    INC ECX                             ; 004a1407
    ADD EAX,0x1c74ea0                   ; 004a1408
    CMP ECX,0x800                       ; 004a140d
    JL 0x004a1417                       ; 004a1413
        ;   XREF to: 004a1417 (CONDITIONAL_JUMP)  ; LAB_004a1417
    XOR ECX,ECX                         ; 004a1415
    MOV dword ptr [0x01c74e9c],ECX      ; 004a1417 | DAT_01c74e9c
        ;   Label: LAB_004a1417
    RET                                 ; 004a141d

