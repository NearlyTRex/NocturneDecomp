; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_FUN_004ab340(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005df0b7
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab340
        ;   Label: core_filmreel.cpp_FUN_004ab340
    PUSH ESI                            ; 004ab341
    PUSH EDI                            ; 004ab342
    SUB ESP,0x38                        ; 004ab343
    MOV EBX,dword ptr [ESP + 0x48]      ; 004ab346
    PUSH EBX                            ; 004ab34a
    CALL core_actor.cpp_FUN_00408850    ; 004ab34b
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ab350
    LEA ESI,[EBX + 0x158]               ; 004ab353
    PUSH ESI                            ; 004ab359
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004ab35a
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ab35f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ab362
    PUSH EBX                            ; 004ab368
    LEA ESI,[ESP + 0x1c]                ; 004ab369
    LEA EDI,[ESP + 0x4]                 ; 004ab36d
    CALL dword ptr [EAX + 0x1c]         ; 004ab371
    MOV ECX,0x6                         ; 004ab374
    LEA ESI,[ESP + 0x1c]                ; 004ab379
    ADD ESP,0x4                         ; 004ab37d
    MOVSD.REP ES:EDI,ESI                ; 004ab380
    FLD float ptr [ESP + 0x14]          ; 004ab382
    FLD float ptr [ESP + 0xc]           ; 004ab386
    FSUB float ptr [ESP]                ; 004ab38a
    FXCH                                ; 004ab38d
    FSUB float ptr [ESP + 0x8]          ; 004ab38f
    FXCH                                ; 004ab393
    FLD double ptr [0x005df0b7]         ; 004ab395 | DAT_005df0b7
    FXCH                                ; 004ab39b
    FMUL ST1                            ; 004ab39d
    FXCH ST2                            ; 004ab39f
    FMULP                               ; 004ab3a1
    FXCH                                ; 004ab3a3
    FSTP float ptr [ESP + 0x34]         ; 004ab3a5
    FST float ptr [ESP + 0x30]          ; 004ab3a9
    FCOMP float ptr [ESP + 0x34]        ; 004ab3ad
    FNSTSW AX                           ; 004ab3b1
    SAHF                                ; 004ab3b3
    JBE 0x004ab3d1                      ; 004ab3b4
        ;   XREF to: 004ab3d1 (CONDITIONAL_JUMP)  ; LAB_004ab3d1
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ab3b6
    MOV dword ptr [EBX + 0x2f8],EAX     ; 004ab3ba
        ;   Label: LAB_004ab3ba
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004ab3c0
    ADD ESP,0x38                        ; 004ab3ca
    POP EDI                             ; 004ab3cd
    POP ESI                             ; 004ab3ce
    POP EBX                             ; 004ab3cf
    RET                                 ; 004ab3d0
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ab3d1
        ;   Label: LAB_004ab3d1
    JMP 0x004ab3ba                      ; 004ab3d5
        ;   XREF to: 004ab3ba (UNCONDITIONAL_JUMP)  ; LAB_004ab3ba

