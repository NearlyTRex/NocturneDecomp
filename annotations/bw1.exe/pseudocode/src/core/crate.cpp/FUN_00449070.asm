; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crate_cpp_FUN_00449070(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d7337
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449070
        ;   Label: core_crate.cpp_FUN_00449070
    PUSH ESI                            ; 00449071
    PUSH EDI                            ; 00449072
    SUB ESP,0x38                        ; 00449073
    MOV EBX,dword ptr [ESP + 0x48]      ; 00449076
    PUSH EBX                            ; 0044907a
    CALL core_actor.cpp_FUN_00408850    ; 0044907b
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00449080
    LEA ESI,[EBX + 0x158]               ; 00449083
    PUSH ESI                            ; 00449089
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0044908a
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0044908f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00449092
    PUSH EBX                            ; 00449098
    LEA ESI,[ESP + 0x1c]                ; 00449099
    LEA EDI,[ESP + 0x4]                 ; 0044909d
    CALL dword ptr [EAX + 0x1c]         ; 004490a1
    MOV ECX,0x6                         ; 004490a4
    LEA ESI,[ESP + 0x1c]                ; 004490a9
    ADD ESP,0x4                         ; 004490ad
    MOVSD.REP ES:EDI,ESI                ; 004490b0
    FLD float ptr [ESP + 0x14]          ; 004490b2
    FLD float ptr [ESP + 0xc]           ; 004490b6
    FSUB float ptr [ESP]                ; 004490ba
    FXCH                                ; 004490bd
    FSUB float ptr [ESP + 0x8]          ; 004490bf
    FXCH                                ; 004490c3
    FLD double ptr [0x005d7337]         ; 004490c5 | DAT_005d7337
    FXCH                                ; 004490cb
    FMUL ST1                            ; 004490cd
    FXCH ST2                            ; 004490cf
    FMULP                               ; 004490d1
    FXCH                                ; 004490d3
    FSTP float ptr [ESP + 0x34]         ; 004490d5
    FST float ptr [ESP + 0x30]          ; 004490d9
    FCOMP float ptr [ESP + 0x34]        ; 004490dd
    FNSTSW AX                           ; 004490e1
    SAHF                                ; 004490e3
    JBE 0x00449147                      ; 004490e4
        ;   XREF to: 00449147 (CONDITIONAL_JUMP)  ; LAB_00449147
    MOV EAX,dword ptr [ESP + 0x34]      ; 004490e6
    MOV dword ptr [EBX + 0x2d8],EAX     ; 004490ea
        ;   Label: LAB_004490ea
    MOV dword ptr [EBX + 0x2e0],0xc61c3f9a ; 004490f0
    MOV dword ptr [EBX + 0x2e4],0xc61c3f9a ; 004490fa
    MOV dword ptr [EBX + 0x2e8],0xc61c3f9a ; 00449104
    MOV dword ptr [EBX + 0x2ec],0xc61c3f9a ; 0044910e
    MOV dword ptr [EBX + 0x2f4],0xc61c3f9a ; 00449118
    MOV dword ptr [EBX + 0x2f0],0xc61c3f9a ; 00449122
    MOV dword ptr [EBX + 0x2f8],0x461c3f9a ; 0044912c
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00449136
    ADD ESP,0x38                        ; 00449140
    POP EDI                             ; 00449143
    POP ESI                             ; 00449144
    POP EBX                             ; 00449145
    RET                                 ; 00449146
    MOV EAX,dword ptr [ESP + 0x30]      ; 00449147
        ;   Label: LAB_00449147
    JMP 0x004490ea                      ; 0044914b
        ;   XREF to: 004490ea (UNCONDITIONAL_JUMP)  ; LAB_004490ea

