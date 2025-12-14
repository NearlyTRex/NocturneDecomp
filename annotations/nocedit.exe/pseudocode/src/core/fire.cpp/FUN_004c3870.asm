; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_fire.cpp_FUN_004c3870()
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c6ed6
;
; Referenced Globals:
;   int g_GlobalDeltaTimeInt
;   undefined4 DAT_02d13560
;   undefined4 DAT_02d13564
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3870
        ;   Label: core_fire.cpp_FUN_004c3870
    PUSH ESI                            ; 004c3871
    MOV ECX,dword ptr [0x02cf6a80]      ; 004c3872 | g_GlobalDeltaTimeInt
    MOV EBX,dword ptr [0x02d13564]      ; 004c3878 | DAT_02d13564
    MOV ESI,dword ptr [0x02d13560]      ; 004c387e | DAT_02d13560
    MOV EDX,ECX                         ; 004c3884
    MOV EAX,ECX                         ; 004c3886
    SAR EDX,0x1f                        ; 004c3888
    SHL EDX,0x8                         ; 004c388b
    SBB EAX,EDX                         ; 004c388e
    SAR EAX,0x8                         ; 004c3890
    MOV EDX,ECX                         ; 004c3893
    ADD EBX,EAX                         ; 004c3895
    MOV EAX,ECX                         ; 004c3897
    SAR EDX,0x1f                        ; 004c3899
    SHL EDX,0x7                         ; 004c389c
    SBB EAX,EDX                         ; 004c389f
    SAR EAX,0x7                         ; 004c38a1
    ADD ESI,EAX                         ; 004c38a4
    AND EBX,0xff                        ; 004c38a6
    AND ESI,0x7f                        ; 004c38ac
    MOV dword ptr [0x02d13564],EBX      ; 004c38af | DAT_02d13564
    MOV dword ptr [0x02d13560],ESI      ; 004c38b5 | DAT_02d13560
    POP ESI                             ; 004c38bb
    POP EBX                             ; 004c38bc
    RET                                 ; 004c38bd

