; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CGore_process_FUN_004ed9e0(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e33b4
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 00539934
;   core_msnedit.cpp_CDemonMission_editGore_FUN_0053e220 at 0053e525
;
; Referenced Globals:
;   CBloodParticle[256] g_BloodParticles
;   undefined4 DAT_02d833ec
;   undefined4 DAT_02d83408
;   undefined4 DAT_02d83414
;   undefined4 DAT_02d8342c
;   undefined4 DAT_02d83448
;   int g_BloodSplatIndex
;   int g_BloodSplatCount
;   CBloodSplat[2000] g_BloodSplats
;   undefined4 DAT_02d87420
;   int g_BloodPoolCount
;   CBloodPool[32] g_BloodPools
;   undefined4 DAT_02da874c
;
; Called Functions:
;   core_gore.cpp_CBloodPool_processAge_FUN_004ed0a0
;   core_gore.cpp_CBloodPool_setupRenderState_FUN_004ecc40
;   core_gore.cpp_CBloodSplat_processAge_FUN_004ecad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed9e0
        ;   Label: core_gore.cpp_CGore_process_FUN_004ed9e0
    PUSH ESI                            ; 004ed9e1
    PUSH EDI                            ; 004ed9e2
    PUSH EBP                            ; 004ed9e3
    MOV EBP,ESP                         ; 004ed9e4
    AND ESP,0xfffffff8                  ; 004ed9e6
    MOV EBX,0x2d833d4                   ; 004ed9e9 | g_BloodParticles
    LEA ESI,[EBX + 0x4000]              ; 004ed9ee | g_BloodSplatIndex
    FLD float ptr [EBX + 0x18]          ; 004ed9f4 | DAT_02d833ec | DAT_02d8342c
        ;   Label: LAB_004ed9f4
    FLDZ                                ; 004ed9f7
    FCOMPP                              ; 004ed9f9
    FNSTSW AX                           ; 004ed9fb
    SAHF                                ; 004ed9fd
    JC 0x004eda87                       ; 004ed9fe
        ;   XREF to: 004eda87 (CONDITIONAL_JUMP)  ; LAB_004eda87
    ADD EBX,0x40                        ; 004eda04
        ;   Label: LAB_004eda04
    CMP EBX,ESI                         ; 004eda07
    JNZ 0x004ed9f4                      ; 004eda09
        ;   XREF to: 004ed9f4 (CONDITIONAL_JUMP)  ; LAB_004ed9f4
    MOV EDX,dword ptr [0x02d873d8]      ; 004eda0b | g_BloodSplatCount
    XOR EBX,ESI                         ; 004eda11
    TEST EDX,EDX                        ; 004eda13
    JLE 0x004eda40                      ; 004eda15
        ;   XREF to: 004eda40 (CONDITIONAL_JUMP)  ; LAB_004eda40
    MOV ESI,0x2d873dc                   ; 004eda17 | g_BloodSplats
    PUSH ESI                            ; 004eda1c | g_BloodSplats | DAT_02d87420
        ;   Label: LAB_004eda1c
    CALL core_gore.cpp_CBloodSplat_processAge_FUN_004ecad0 ; 004eda1d
        ;   XREF to: 004ecad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_processAge_FUN_004ecad0(CBloodSplat * this_ptr)
    INC EBX                             ; 004eda22
    MOV ECX,dword ptr [0x02d873d8]      ; 004eda23 | g_BloodSplatCount
    ADD ESP,0x4                         ; 004eda29
    ADD ESI,0x44                        ; 004eda2c
    CMP EBX,ECX                         ; 004eda2f
    JL 0x004eda1c                       ; 004eda31
        ;   XREF to: 004eda1c (CONDITIONAL_JUMP)  ; LAB_004eda1c
    LEA EAX,[EAX]                       ; 004eda33
    LEA EDX,[EDX]                       ; 004eda39
    NOP                                 ; 004eda3f
    PUSH 0x2da8724                      ; 004eda40 | g_BloodPools
        ;   Label: LAB_004eda40
    CALL core_gore.cpp_CBloodPool_setupRenderState_FUN_004ecc40 ; 004eda45
        ;   XREF to: 004ecc40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_setupRenderState_FUN_004ecc40(CBloodPool * this_ptr)
    XOR ESI,ESI                         ; 004eda4a
    MOV EBX,dword ptr [0x02da8720]      ; 004eda4c | g_BloodPoolCount
    ADD ESP,0x4                         ; 004eda52
    TEST EBX,EBX                        ; 004eda55
    JLE 0x004eda80                      ; 004eda57
        ;   XREF to: 004eda80 (CONDITIONAL_JUMP)  ; LAB_004eda80
    MOV EBX,0x2da8724                   ; 004eda59 | g_BloodPools
    PUSH EBX                            ; 004eda5e | g_BloodPools | DAT_02da874c
        ;   Label: LAB_004eda5e
    CALL core_gore.cpp_CBloodPool_processAge_FUN_004ed0a0 ; 004eda5f
        ;   XREF to: 004ed0a0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_processAge_FUN_004ed0a0(CBloodPool * this_ptr)
    INC ESI                             ; 004eda64
    MOV EDI,dword ptr [0x02da8720]      ; 004eda65 | g_BloodPoolCount
    ADD ESP,0x4                         ; 004eda6b
    ADD EBX,0x28                        ; 004eda6e | DAT_02da874c
    CMP ESI,EDI                         ; 004eda71
    JL 0x004eda5e                       ; 004eda73
        ;   XREF to: 004eda5e (CONDITIONAL_JUMP)  ; LAB_004eda5e
    LEA EAX,[EAX]                       ; 004eda75
    LEA EDX,[EDX]                       ; 004eda7b
    MOV EBX,EBX                         ; 004eda7e
    MOV ESP,EBP                         ; 004eda80
        ;   Label: LAB_004eda80
    POP EBP                             ; 004eda82
    POP EDI                             ; 004eda83
    POP ESI                             ; 004eda84
    POP EBX                             ; 004eda85
    RET                                 ; 004eda86
    PUSH EBX                            ; 004eda87 | DAT_02d83414
        ;   Label: LAB_004eda87
    MOV EAX,dword ptr [EBX + 0x34]      ; 004eda88 | DAT_02d83408 | DAT_02d83448
    CALL dword ptr [EAX + 0x4]          ; 004eda8b
    ADD ESP,0x4                         ; 004eda8e
    JMP 0x004eda04                      ; 004eda91
        ;   XREF to: 004eda04 (UNCONDITIONAL_JUMP)  ; LAB_004eda04

