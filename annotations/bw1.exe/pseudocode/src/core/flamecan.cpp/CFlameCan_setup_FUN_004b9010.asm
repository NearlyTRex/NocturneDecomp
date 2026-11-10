; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_setup_FUN_004b9010(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005df797
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9010
        ;   Label: core_flamecan.cpp_CFlameCan_setup_FUN_004b9010
    PUSH ESI                            ; 004b9011
    PUSH EDI                            ; 004b9012
    PUSH EBP                            ; 004b9013
    MOV EBP,ESP                         ; 004b9014
    SUB ESP,0x74                        ; 004b9016
    AND ESP,0xfffffff8                  ; 004b9019
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b901c
    PUSH EBX                            ; 004b901f
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 004b9020
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004b9025
    LEA EAX,[EBX + 0x158]               ; 004b9028
    PUSH EAX                            ; 004b902e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004b902f
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b9034
    LEA ESI,[ESP + 0x28]                ; 004b9037
    MOV EAX,dword ptr [EBX + 0x154]     ; 004b903b
    PUSH EBX                            ; 004b9041
    MOV dword ptr [EBX + 0x4f4],0x0     ; 004b9042
    LEA EDI,[ESP + 0x14]                ; 004b904c
    CALL dword ptr [EAX + 0x1c]         ; 004b9050
    MOV ECX,0x6                         ; 004b9053
    LEA ESI,[ESP + 0x2c]                ; 004b9058
    ADD ESP,0x4                         ; 004b905c
    LEA EDX,[EBX + 0x360]               ; 004b905f
    MOVSD.REP ES:EDI,ESI                ; 004b9065
    LEA EAX,[EBX + 0x20]                ; 004b9067
    FLD float ptr [ESP + 0x20]          ; 004b906a
    FLD float ptr [ESP + 0x1c]          ; 004b906e
    FLD float ptr [ESP + 0x24]          ; 004b9072
    FLD float ptr [EAX]                 ; 004b9076
    LEA EDI,[ESP + 0x4c]                ; 004b9078
    LEA ESI,[ESP + 0x58]                ; 004b907c
    FSTP float ptr [EDX]                ; 004b9080
    FLD float ptr [EAX + 0x4]           ; 004b9082
    FXCH ST3                            ; 004b9085
    FSUB float ptr [ESP + 0x14]         ; 004b9087
    FXCH ST2                            ; 004b908b
    FSUB float ptr [ESP + 0x10]         ; 004b908d
    FXCH                                ; 004b9091
    FSUB float ptr [ESP + 0x18]         ; 004b9093
    FXCH ST3                            ; 004b9097
    FSTP float ptr [EDX + 0x4]          ; 004b9099
    FXCH                                ; 004b909c
    FSTP float ptr [ESP + 0x70]         ; 004b909e
    MOV ECX,dword ptr [EAX + 0x8]       ; 004b90a2
    MOV dword ptr [EDX + 0x8],ECX       ; 004b90a5
    MOV EAX,dword ptr [EAX + 0xc]       ; 004b90a8
    FSTP float ptr [ESP + 0x58]         ; 004b90ab
    MOV dword ptr [EDX + 0xc],EAX       ; 004b90af
    FSTP float ptr [ESP + 0x60]         ; 004b90b2
    FLD float ptr [EBX + 0x364]         ; 004b90b6
    MOV EAX,dword ptr [ESP + 0x70]      ; 004b90bc
    FADD float ptr [ESP + 0x70]         ; 004b90c0
    MOV dword ptr [ESP + 0x5c],EAX      ; 004b90c4
    FSTP float ptr [EBX + 0x364]        ; 004b90c8
    MOVSD ES:EDI,ESI                    ; 004b90ce
    MOVSD ES:EDI,ESI                    ; 004b90cf
    MOVSD ES:EDI,ESI                    ; 004b90d0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004b90d1
    LEA EDX,[EBX + 0x498]               ; 004b90d5
    MOV dword ptr [ESP + 0x64],EAX      ; 004b90db
    MOV EAX,dword ptr [ESP + 0x50]      ; 004b90df
    LEA EDI,[ESP + 0x40]                ; 004b90e3
    MOV dword ptr [ESP + 0x68],EAX      ; 004b90e7
    MOV EAX,dword ptr [ESP + 0x54]      ; 004b90eb
    LEA ESI,[ESP + 0x64]                ; 004b90ef
    MOV dword ptr [ESP + 0x6c],EAX      ; 004b90f3
    LEA EAX,[ESP + 0x40]                ; 004b90f7
    MOVSD ES:EDI,ESI                    ; 004b90fb
    MOVSD ES:EDI,ESI                    ; 004b90fc
    MOVSD ES:EDI,ESI                    ; 004b90fd
    CMP EDX,EAX                         ; 004b90fe
    JNZ 0x004b9158                      ; 004b9100
        ;   XREF to: 004b9158 (CONDITIONAL_JUMP)  ; LAB_004b9158
    FLD float ptr [EBX + 0x498]         ; 004b9102
        ;   Label: LAB_004b9102
    FSTP double ptr [ESP]               ; 004b9108
    MOV dword ptr [EBX + 0x4e8],0x0     ; 004b910b
    FLD double ptr [ESP]                ; 004b9115
    FMUL double ptr [0x005df797]        ; 004b9118 | DAT_005df797
    FLD float ptr [EBX + 0x49c]         ; 004b911e
    MOV dword ptr [EBX + 0x4ec],0x0     ; 004b9124
    FXCH                                ; 004b912e
    FSTP double ptr [ESP + 0x8]         ; 004b9130
    FCOMP double ptr [ESP + 0x8]        ; 004b9134
    FNSTSW AX                           ; 004b9138
    SAHF                                ; 004b913a
    JC 0x004b916e                       ; 004b913b
        ;   XREF to: 004b916e (CONDITIONAL_JUMP)  ; LAB_004b916e
    MOV dword ptr [EBX + 0x5e4],0x0     ; 004b913d
        ;   Label: LAB_004b913d
    MOV dword ptr [EBX + 0xfc],0x1      ; 004b9147
    MOV ESP,EBP                         ; 004b9151
    POP EBP                             ; 004b9153
    POP EDI                             ; 004b9154
    POP ESI                             ; 004b9155
    POP EBX                             ; 004b9156
    RET                                 ; 004b9157
    MOV EAX,dword ptr [ESP + 0x40]      ; 004b9158
        ;   Label: LAB_004b9158
    MOV dword ptr [EDX],EAX             ; 004b915c
    MOV EAX,dword ptr [ESP + 0x44]      ; 004b915e
    MOV dword ptr [EDX + 0x4],EAX       ; 004b9162
    MOV EAX,dword ptr [ESP + 0x48]      ; 004b9165
    MOV dword ptr [EDX + 0x8],EAX       ; 004b9169
    JMP 0x004b9102                      ; 004b916c
        ;   XREF to: 004b9102 (UNCONDITIONAL_JUMP)  ; LAB_004b9102
    FLD double ptr [ESP + 0x8]          ; 004b916e
        ;   Label: LAB_004b916e
    FSTP float ptr [EBX + 0x49c]        ; 004b9172
    JMP 0x004b913d                      ; 004b9178
        ;   XREF to: 004b913d (UNCONDITIONAL_JUMP)  ; LAB_004b913d

