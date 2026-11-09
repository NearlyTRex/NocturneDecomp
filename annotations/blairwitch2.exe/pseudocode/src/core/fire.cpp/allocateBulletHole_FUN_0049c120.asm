; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * __cdecl core_fire_cpp_allocateBulletHole_FUN_0049c120(void)
;
;
; XREF[1]:
;   core_fire.cpp_FUN_0049cd50 at 0049cf1a
;
; Referenced Globals:
;   undefined4 DAT_01c558e0
;   undefined4 DAT_01c558e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c120
        ;   Label: core_fire.cpp_allocateBulletHole_FUN_0049c120
    MOV ECX,dword ptr [0x01c558e4]      ; 0049c121 | DAT_01c558e4
    MOV EBX,dword ptr [0x01c558e0]      ; 0049c127 | DAT_01c558e0
    LEA EAX,[ECX*0x4 + 0x0]             ; 0049c12d
    MOV EDX,EAX                         ; 0049c134
    SHL EAX,0x4                         ; 0049c136
    SUB EAX,EDX                         ; 0049c139
    INC ECX                             ; 0049c13b
    ADD EAX,0x1c558e8                   ; 0049c13c
    CMP ECX,0x100                       ; 0049c141
    JL 0x0049c14b                       ; 0049c147
        ;   XREF to: 0049c14b (CONDITIONAL_JUMP)  ; LAB_0049c14b
    XOR ECX,ECX                         ; 0049c149
    INC EBX                             ; 0049c14b
        ;   Label: LAB_0049c14b
    CMP EBX,0x100                       ; 0049c14c
    JLE 0x0049c159                      ; 0049c152
        ;   XREF to: 0049c159 (CONDITIONAL_JUMP)  ; LAB_0049c159
    MOV EBX,0x100                       ; 0049c154
    MOV dword ptr [0x01c558e0],EBX      ; 0049c159 | DAT_01c558e0
        ;   Label: LAB_0049c159
    MOV dword ptr [0x01c558e4],ECX      ; 0049c15f | DAT_01c558e4
    POP EBX                             ; 0049c165
    RET                                 ; 0049c166

