; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_004b4ac0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0 at 004b586a
;
; Referenced Globals:
;   undefined4 DAT_01c6eaa0
;   undefined4 DAT_01c6eaa4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4ac0
        ;   Label: core_fire.cpp_allocateBulletHole_FUN_004b4ac0
    MOV ECX,dword ptr [0x01c6eaa4]      ; 004b4ac1 | DAT_01c6eaa4
    MOV EBX,dword ptr [0x01c6eaa0]      ; 004b4ac7 | DAT_01c6eaa0
    LEA EAX,[ECX*0x4 + 0x0]             ; 004b4acd
    MOV EDX,EAX                         ; 004b4ad4
    SHL EAX,0x4                         ; 004b4ad6
    SUB EAX,EDX                         ; 004b4ad9
    INC ECX                             ; 004b4adb
    ADD EAX,0x1c6eaa8                   ; 004b4adc
    CMP ECX,0x100                       ; 004b4ae1
    JL 0x004b4aeb                       ; 004b4ae7
        ;   XREF to: 004b4aeb (CONDITIONAL_JUMP)  ; LAB_004b4aeb
    XOR ECX,ECX                         ; 004b4ae9
    INC EBX                             ; 004b4aeb
        ;   Label: LAB_004b4aeb
    CMP EBX,0x100                       ; 004b4aec
    JLE 0x004b4af9                      ; 004b4af2
        ;   XREF to: 004b4af9 (CONDITIONAL_JUMP)  ; LAB_004b4af9
    MOV EBX,0x100                       ; 004b4af4
    MOV dword ptr [0x01c6eaa0],EBX      ; 004b4af9 | DAT_01c6eaa0
        ;   Label: LAB_004b4af9
    MOV dword ptr [0x01c6eaa4],ECX      ; 004b4aff | DAT_01c6eaa4
    POP EBX                             ; 004b4b05
    RET                                 ; 004b4b06

