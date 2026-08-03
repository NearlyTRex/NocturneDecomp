; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_process_FUN_004b0030(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a6234
;
; Referenced Globals:
;   undefined4 g_CBloodParticle_ARRAY_01c78cec[0].base.lifetime_remaining
;   undefined4 g_CBloodParticle_ARRAY_01c78cec[1].base.lifetime_remaining
;   undefined4 g_CBloodParticle_ARRAY_01c78cec[1].base.vtable
;   undefined4 DAT_01c7ccf0
;   undefined4 DAT_01c9e038
;
; Called Functions:
;   core_gore.cpp_CBloodPool_processAge_FUN_004af700
;   core_gore.cpp_CBloodPool_setupRenderState_FUN_004af2a0
;   core_gore.cpp_CBloodSplat_processAge_FUN_004af130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0030
        ;   Label: core_gore.cpp_CGore_process_FUN_004b0030
    PUSH ESI                            ; 004b0031
    PUSH EDI                            ; 004b0032
    PUSH EBP                            ; 004b0033
    MOV EBP,ESP                         ; 004b0034
    AND ESP,0xfffffff8                  ; 004b0036
    MOV EBX,0x1c78cec                   ; 004b0039
    LEA ESI,[EBX + 0x4000]              ; 004b003e
    FLD float ptr [EBX + 0x18]          ; 004b0044 | g_CBloodParticle_ARRAY_01c78cec[0].base.lifetime_remaining | g_CBloodParticle_ARRAY_01c78cec[1].base.lifetime_remaining
        ;   Label: LAB_004b0044
    FLDZ                                ; 004b0047
    FCOMPP                              ; 004b0049
    FNSTSW AX                           ; 004b004b
    SAHF                                ; 004b004d
    JC 0x004b00d7                       ; 004b004e
        ;   XREF to: 004b00d7 (CONDITIONAL_JUMP)  ; LAB_004b00d7
    ADD EBX,0x40                        ; 004b0054
        ;   Label: LAB_004b0054
    CMP EBX,ESI                         ; 004b0057
    JNZ 0x004b0044                      ; 004b0059
        ;   XREF to: 004b0044 (CONDITIONAL_JUMP)  ; LAB_004b0044
    MOV EDX,dword ptr [0x01c7ccf0]      ; 004b005b | DAT_01c7ccf0
    XOR EBX,ESI                         ; 004b0061
    TEST EDX,EDX                        ; 004b0063
    JLE 0x004b0090                      ; 004b0065
        ;   XREF to: 004b0090 (CONDITIONAL_JUMP)  ; LAB_004b0090
    MOV ESI,0x1c7ccf4                   ; 004b0067
    PUSH ESI                            ; 004b006c
        ;   Label: LAB_004b006c
    CALL core_gore.cpp_CBloodSplat_processAge_FUN_004af130 ; 004b006d
        ;   XREF to: 004af130 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_processAge_FUN_004af130(CBloodSplat * this_ptr)
    INC EBX                             ; 004b0072
    MOV ECX,dword ptr [0x01c7ccf0]      ; 004b0073 | DAT_01c7ccf0
    ADD ESP,0x4                         ; 004b0079
    ADD ESI,0x44                        ; 004b007c
    CMP EBX,ECX                         ; 004b007f
    JL 0x004b006c                       ; 004b0081
        ;   XREF to: 004b006c (CONDITIONAL_JUMP)  ; LAB_004b006c
    LEA EAX,[EAX]                       ; 004b0083
    LEA EDX,[EDX]                       ; 004b0089
    NOP                                 ; 004b008f
    PUSH 0x1c9e03c                      ; 004b0090
        ;   Label: LAB_004b0090
    CALL core_gore.cpp_CBloodPool_setupRenderState_FUN_004af2a0 ; 004b0095
        ;   XREF to: 004af2a0 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodPool_setupRenderState_FUN_004af2a0(CBloodPool * this_ptr)
    XOR ESI,ESI                         ; 004b009a
    MOV EBX,dword ptr [0x01c9e038]      ; 004b009c | DAT_01c9e038
    ADD ESP,0x4                         ; 004b00a2
    TEST EBX,EBX                        ; 004b00a5
    JLE 0x004b00d0                      ; 004b00a7
        ;   XREF to: 004b00d0 (CONDITIONAL_JUMP)  ; LAB_004b00d0
    MOV EBX,0x1c9e03c                   ; 004b00a9
    PUSH EBX                            ; 004b00ae
        ;   Label: LAB_004b00ae
    CALL core_gore.cpp_CBloodPool_processAge_FUN_004af700 ; 004b00af
        ;   XREF to: 004af700 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_processAge_FUN_004af700(CBloodPool * this_ptr)
    INC ESI                             ; 004b00b4
    MOV EDI,dword ptr [0x01c9e038]      ; 004b00b5 | DAT_01c9e038
    ADD ESP,0x4                         ; 004b00bb
    ADD EBX,0x28                        ; 004b00be
    CMP ESI,EDI                         ; 004b00c1
    JL 0x004b00ae                       ; 004b00c3
        ;   XREF to: 004b00ae (CONDITIONAL_JUMP)  ; LAB_004b00ae
    LEA EAX,[EAX]                       ; 004b00c5
    LEA EDX,[EDX]                       ; 004b00cb
    MOV EBX,EBX                         ; 004b00ce
    MOV ESP,EBP                         ; 004b00d0
        ;   Label: LAB_004b00d0
    POP EBP                             ; 004b00d2
    POP EDI                             ; 004b00d3
    POP ESI                             ; 004b00d4
    POP EBX                             ; 004b00d5
    RET                                 ; 004b00d6
    PUSH EBX                            ; 004b00d7
        ;   Label: LAB_004b00d7
    MOV EAX,dword ptr [EBX + 0x34]      ; 004b00d8 | g_CBloodParticle_ARRAY_01c78cec[1].base.vtable
    CALL dword ptr [EAX + 0x4]          ; 004b00db
    ADD ESP,0x4                         ; 004b00de
    JMP 0x004b0054                      ; 004b00e1
        ;   XREF to: 004b0054 (UNCONDITIONAL_JUMP)  ; LAB_004b0054

