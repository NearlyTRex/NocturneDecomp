; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flamecan_cpp_FUN_004a6fa0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c0cac
;
; Called Functions:
;   core_actor.cpp_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6fa0
        ;   Label: core_flamecan.cpp_FUN_004a6fa0
    PUSH ESI                            ; 004a6fa1
    PUSH EDI                            ; 004a6fa2
    PUSH EBP                            ; 004a6fa3
    MOV EBP,ESP                         ; 004a6fa4
    SUB ESP,0x74                        ; 004a6fa6
    AND ESP,0xfffffff8                  ; 004a6fa9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a6fac
    PUSH EBX                            ; 004a6faf
    CALL core_actor.cpp_FUN_00408890    ; 004a6fb0
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a6fb5
    LEA EAX,[EBX + 0x158]               ; 004a6fb8
    PUSH EAX                            ; 004a6fbe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 004a6fbf
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004a6fc4
    LEA ESI,[ESP + 0x28]                ; 004a6fc7
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a6fcb
    PUSH EBX                            ; 004a6fd1
    MOV dword ptr [EBX + 0x4f4],0x0     ; 004a6fd2
    LEA EDI,[ESP + 0x14]                ; 004a6fdc
    CALL dword ptr [EAX + 0x1c]         ; 004a6fe0
    MOV ECX,0x6                         ; 004a6fe3
    LEA ESI,[ESP + 0x2c]                ; 004a6fe8
    ADD ESP,0x4                         ; 004a6fec
    LEA EDX,[EBX + 0x360]               ; 004a6fef
    MOVSD.REP ES:EDI,ESI                ; 004a6ff5
    LEA EAX,[EBX + 0x20]                ; 004a6ff7
    FLD float ptr [ESP + 0x20]          ; 004a6ffa
    FLD float ptr [ESP + 0x1c]          ; 004a6ffe
    FLD float ptr [ESP + 0x24]          ; 004a7002
    FLD float ptr [EAX]                 ; 004a7006
    LEA EDI,[ESP + 0x4c]                ; 004a7008
    LEA ESI,[ESP + 0x58]                ; 004a700c
    FSTP float ptr [EDX]                ; 004a7010
    FLD float ptr [EAX + 0x4]           ; 004a7012
    FXCH ST3                            ; 004a7015
    FSUB float ptr [ESP + 0x14]         ; 004a7017
    FXCH ST2                            ; 004a701b
    FSUB float ptr [ESP + 0x10]         ; 004a701d
    FXCH                                ; 004a7021
    FSUB float ptr [ESP + 0x18]         ; 004a7023
    FXCH ST3                            ; 004a7027
    FSTP float ptr [EDX + 0x4]          ; 004a7029
    FXCH                                ; 004a702c
    FSTP float ptr [ESP + 0x70]         ; 004a702e
    MOV ECX,dword ptr [EAX + 0x8]       ; 004a7032
    MOV dword ptr [EDX + 0x8],ECX       ; 004a7035
    MOV EAX,dword ptr [EAX + 0xc]       ; 004a7038
    FSTP float ptr [ESP + 0x58]         ; 004a703b
    MOV dword ptr [EDX + 0xc],EAX       ; 004a703f
    FSTP float ptr [ESP + 0x60]         ; 004a7042
    FLD float ptr [EBX + 0x364]         ; 004a7046
    MOV EAX,dword ptr [ESP + 0x70]      ; 004a704c
    FADD float ptr [ESP + 0x70]         ; 004a7050
    MOV dword ptr [ESP + 0x5c],EAX      ; 004a7054
    FSTP float ptr [EBX + 0x364]        ; 004a7058
    MOVSD ES:EDI,ESI                    ; 004a705e
    MOVSD ES:EDI,ESI                    ; 004a705f
    MOVSD ES:EDI,ESI                    ; 004a7060
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004a7061
    LEA EDX,[EBX + 0x498]               ; 004a7065
    MOV dword ptr [ESP + 0x64],EAX      ; 004a706b
    MOV EAX,dword ptr [ESP + 0x50]      ; 004a706f
    LEA EDI,[ESP + 0x40]                ; 004a7073
    MOV dword ptr [ESP + 0x68],EAX      ; 004a7077
    MOV EAX,dword ptr [ESP + 0x54]      ; 004a707b
    LEA ESI,[ESP + 0x64]                ; 004a707f
    MOV dword ptr [ESP + 0x6c],EAX      ; 004a7083
    LEA EAX,[ESP + 0x40]                ; 004a7087
    MOVSD ES:EDI,ESI                    ; 004a708b
    MOVSD ES:EDI,ESI                    ; 004a708c
    MOVSD ES:EDI,ESI                    ; 004a708d
    CMP EDX,EAX                         ; 004a708e
    JNZ 0x004a70e8                      ; 004a7090
        ;   XREF to: 004a70e8 (CONDITIONAL_JUMP)  ; LAB_004a70e8
    FLD float ptr [EBX + 0x498]         ; 004a7092
        ;   Label: LAB_004a7092
    FSTP double ptr [ESP]               ; 004a7098
    MOV dword ptr [EBX + 0x4e8],0x0     ; 004a709b
    FLD double ptr [ESP]                ; 004a70a5
    FMUL double ptr [0x005c0cac]        ; 004a70a8 | DAT_005c0cac
    FLD float ptr [EBX + 0x49c]         ; 004a70ae
    MOV dword ptr [EBX + 0x4ec],0x0     ; 004a70b4
    FXCH                                ; 004a70be
    FSTP double ptr [ESP + 0x8]         ; 004a70c0
    FCOMP double ptr [ESP + 0x8]        ; 004a70c4
    FNSTSW AX                           ; 004a70c8
    SAHF                                ; 004a70ca
    JC 0x004a70fe                       ; 004a70cb
        ;   XREF to: 004a70fe (CONDITIONAL_JUMP)  ; LAB_004a70fe
    MOV dword ptr [EBX + 0x5e4],0x0     ; 004a70cd
        ;   Label: LAB_004a70cd
    MOV dword ptr [EBX + 0xfc],0x1      ; 004a70d7
    MOV ESP,EBP                         ; 004a70e1
    POP EBP                             ; 004a70e3
    POP EDI                             ; 004a70e4
    POP ESI                             ; 004a70e5
    POP EBX                             ; 004a70e6
    RET                                 ; 004a70e7
    MOV EAX,dword ptr [ESP + 0x40]      ; 004a70e8
        ;   Label: LAB_004a70e8
    MOV dword ptr [EDX],EAX             ; 004a70ec
    MOV EAX,dword ptr [ESP + 0x44]      ; 004a70ee
    MOV dword ptr [EDX + 0x4],EAX       ; 004a70f2
    MOV EAX,dword ptr [ESP + 0x48]      ; 004a70f5
    MOV dword ptr [EDX + 0x8],EAX       ; 004a70f9
    JMP 0x004a7092                      ; 004a70fc
        ;   XREF to: 004a7092 (UNCONDITIONAL_JUMP)  ; LAB_004a7092
    FLD double ptr [ESP + 0x8]          ; 004a70fe
        ;   Label: LAB_004a70fe
    FSTP float ptr [EBX + 0x49c]        ; 004a7102
    JMP 0x004a70cd                      ; 004a7108
        ;   XREF to: 004a70cd (UNCONDITIONAL_JUMP)  ; LAB_004a70cd

