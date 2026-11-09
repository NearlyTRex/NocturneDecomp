; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spirmine_cpp_FUN_005ad940(int param_1)
;
;
; XREF[1]:
;   core_spirmine.cpp_FUN_005ad530 at 005ad56d
;
; Referenced Globals:
;   undefined4 DAT_005f0eef
;   undefined4 DAT_005f0ef3
;
; Called Functions:
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad940
        ;   Label: core_spirmine.cpp_FUN_005ad940
    PUSH ESI                            ; 005ad941
    PUSH EDI                            ; 005ad942
    SUB ESP,0x1c                        ; 005ad943
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005ad946
    LEA EDX,[EBX + 0x20]                ; 005ad94a
    LEA EDI,[ESP + 0xc]                 ; 005ad94d
    MOV ESI,ESP                         ; 005ad951
    MOV EAX,dword ptr [EDX]             ; 005ad953
    FLD float ptr [EDX + 0x4]           ; 005ad955
    MOV dword ptr [ESP],EAX             ; 005ad958
    MOV EAX,dword ptr [EDX + 0x8]       ; 005ad95b
    FADD float ptr [0x005f0eef]         ; 005ad95e | DAT_005f0eef
    MOV dword ptr [ESP + 0x8],EAX       ; 005ad964
    FSTP float ptr [ESP + 0x4]          ; 005ad968
    MOVSD ES:EDI,ESI                    ; 005ad96c
    MOVSD ES:EDI,ESI                    ; 005ad96d
    MOVSD ES:EDI,ESI                    ; 005ad96e
    FLD float ptr [EBX + 0x7e8]         ; 005ad96f
    FDIV float ptr [EBX + 0x7dc]        ; 005ad975
    ADD EBX,0x7f4                       ; 005ad97b
    LEA EAX,[ESP + 0xc]                 ; 005ad981
    FLD1                                ; 005ad985
    FSUBRP                              ; 005ad987
    PUSH EAX                            ; 005ad989
    FMUL double ptr [0x005f0ef3]        ; 005ad98a | DAT_005f0ef3
    PUSH EBX                            ; 005ad990
    CALL crt_math.c_round_FUN_005b7ff0  ; 005ad991
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x20]        ; 005ad996
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810 ; 005ad99a
        ;   XREF to: 00448810 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 005ad99f
    MOV EAX,dword ptr [ESP + 0x18]      ; 005ad9a2
    MOV EDX,EAX                         ; 005ad9a6
    SAR EDX,0x1f                        ; 005ad9a8
    MOV dword ptr [EBX + 0x3c],EAX      ; 005ad9ab
    SHL EDX,0x8                         ; 005ad9ae
    SBB EAX,EDX                         ; 005ad9b1
    SAR EAX,0x8                         ; 005ad9b3
    MOV EDX,EAX                         ; 005ad9b6
    SAR EDX,0x1f                        ; 005ad9b8
    SHL EDX,0x2                         ; 005ad9bb
    SBB EAX,EDX                         ; 005ad9be
    SAR EAX,0x2                         ; 005ad9c0
    PUSH 0x40a00000                     ; 005ad9c3
    PUSH EBX                            ; 005ad9c8
    MOV byte ptr [EBX + 0x1c],AL        ; 005ad9c9
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860 ; 005ad9cc
        ;   XREF to: 00448860 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 005ad9d1
    MOV dword ptr [EBX + 0x20],0x2      ; 005ad9d4
    ADD ESP,0x1c                        ; 005ad9db
    POP EDI                             ; 005ad9de
    POP ESI                             ; 005ad9df
    POP EBX                             ; 005ad9e0
    RET                                 ; 005ad9e1

