; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_process_FUN_004e5e80(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004d8060 at 004d8284
;
; Referenced Globals:
;   undefined4 g_BloodParticles[0].base.lifetime_remaining
;   undefined4 g_BloodParticles[1].base.lifetime_remaining
;   undefined4 g_BloodParticles[1].base.vtable
;   undefined4 DAT_01cd56b0
;   undefined4 DAT_01cf69f8
;
; Called Functions:
;   core_gore.cpp_CBloodPool_processAge_FUN_004e5540
;   core_gore.cpp_CBloodPool_setupRenderState_FUN_004e50e0
;   core_gore.cpp_CBloodSplat_processAge_FUN_004e4f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5e80
        ;   Label: core_gore.cpp_CGore_process_FUN_004e5e80
    PUSH ESI                            ; 004e5e81
    PUSH EDI                            ; 004e5e82
    PUSH EBP                            ; 004e5e83
    MOV EBP,ESP                         ; 004e5e84
    AND ESP,0xfffffff8                  ; 004e5e86
    MOV EBX,0x1cd0eac                   ; 004e5e89
    LEA ESI,[EBX + 0x4800]              ; 004e5e8e
    FLD float ptr [EBX + 0x24]          ; 004e5e94 | g_BloodParticles[0].base.lifetime_remaining | g_BloodParticles[1].base.lifetime_remaining
        ;   Label: LAB_004e5e94
    FLDZ                                ; 004e5e97
    FCOMPP                              ; 004e5e99
    FNSTSW AX                           ; 004e5e9b
    SAHF                                ; 004e5e9d
    JC 0x004e5f27                       ; 004e5e9e
        ;   XREF to: 004e5f27 (CONDITIONAL_JUMP)  ; LAB_004e5f27
    ADD EBX,0x48                        ; 004e5ea4
        ;   Label: LAB_004e5ea4
    CMP EBX,ESI                         ; 004e5ea7
    JNZ 0x004e5e94                      ; 004e5ea9
        ;   XREF to: 004e5e94 (CONDITIONAL_JUMP)  ; LAB_004e5e94
    MOV EDX,dword ptr [0x01cd56b0]      ; 004e5eab | DAT_01cd56b0
    XOR EBX,ESI                         ; 004e5eb1
    TEST EDX,EDX                        ; 004e5eb3
    JLE 0x004e5ee0                      ; 004e5eb5
        ;   XREF to: 004e5ee0 (CONDITIONAL_JUMP)  ; LAB_004e5ee0
    MOV ESI,0x1cd56b4                   ; 004e5eb7
    PUSH ESI                            ; 004e5ebc
        ;   Label: LAB_004e5ebc
    CALL core_gore.cpp_CBloodSplat_processAge_FUN_004e4f70 ; 004e5ebd
        ;   XREF to: 004e4f70 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_processAge_FUN_004e4f70(CBloodSplat * this_ptr)
    INC EBX                             ; 004e5ec2
    MOV ECX,dword ptr [0x01cd56b0]      ; 004e5ec3 | DAT_01cd56b0
    ADD ESP,0x4                         ; 004e5ec9
    ADD ESI,0x44                        ; 004e5ecc
    CMP EBX,ECX                         ; 004e5ecf
    JL 0x004e5ebc                       ; 004e5ed1
        ;   XREF to: 004e5ebc (CONDITIONAL_JUMP)  ; LAB_004e5ebc
    LEA EAX,[EAX]                       ; 004e5ed3
    LEA EDX,[EDX]                       ; 004e5ed9
    NOP                                 ; 004e5edf
    PUSH 0x1cf69fc                      ; 004e5ee0
        ;   Label: LAB_004e5ee0
    CALL core_gore.cpp_CBloodPool_setupRenderState_FUN_004e50e0 ; 004e5ee5
        ;   XREF to: 004e50e0 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodPool_setupRenderState_FUN_004e50e0(CBloodPool * this_ptr)
    XOR ESI,ESI                         ; 004e5eea
    MOV EBX,dword ptr [0x01cf69f8]      ; 004e5eec | DAT_01cf69f8
    ADD ESP,0x4                         ; 004e5ef2
    TEST EBX,EBX                        ; 004e5ef5
    JLE 0x004e5f20                      ; 004e5ef7
        ;   XREF to: 004e5f20 (CONDITIONAL_JUMP)  ; LAB_004e5f20
    MOV EBX,0x1cf69fc                   ; 004e5ef9
    PUSH EBX                            ; 004e5efe
        ;   Label: LAB_004e5efe
    CALL core_gore.cpp_CBloodPool_processAge_FUN_004e5540 ; 004e5eff
        ;   XREF to: 004e5540 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_processAge_FUN_004e5540(CBloodPool * this_ptr)
    INC ESI                             ; 004e5f04
    MOV EDI,dword ptr [0x01cf69f8]      ; 004e5f05 | DAT_01cf69f8
    ADD ESP,0x4                         ; 004e5f0b
    ADD EBX,0x28                        ; 004e5f0e
    CMP ESI,EDI                         ; 004e5f11
    JL 0x004e5efe                       ; 004e5f13
        ;   XREF to: 004e5efe (CONDITIONAL_JUMP)  ; LAB_004e5efe
    LEA EAX,[EAX]                       ; 004e5f15
    LEA EDX,[EDX]                       ; 004e5f1b
    MOV EBX,EBX                         ; 004e5f1e
    MOV ESP,EBP                         ; 004e5f20
        ;   Label: LAB_004e5f20
    POP EBP                             ; 004e5f22
    POP EDI                             ; 004e5f23
    POP ESI                             ; 004e5f24
    POP EBX                             ; 004e5f25
    RET                                 ; 004e5f26
    PUSH EBX                            ; 004e5f27
        ;   Label: LAB_004e5f27
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004e5f28 | g_BloodParticles[1].base.vtable
    CALL dword ptr [EAX + 0x4]          ; 004e5f2b
    ADD ESP,0x4                         ; 004e5f2e
    JMP 0x004e5ea4                      ; 004e5f31
        ;   XREF to: 004e5ea4 (UNCONDITIONAL_JUMP)  ; LAB_004e5ea4

