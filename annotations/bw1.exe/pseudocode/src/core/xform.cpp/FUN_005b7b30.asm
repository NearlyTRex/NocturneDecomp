; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b7b30(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[14]:
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_00433b30 at 00433b91
;   core_doc.cpp_FUN_0046caa0 at 0046cde5
;   core_doc.cpp_FUN_0046e630 at 0046e6d1
;   core_doc.cpp_FUN_0046ea80 at 0046f003
;   core_doc.cpp_FUN_0046f200 at 0046f244
;   core_gabriela.cpp_FUN_004c89c0 at 004c8b7f
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_0051def0 at 0051e204
;   core_scat.cpp_FUN_00542270 at 005422b6
;   core_skeleton.cpp_FUN_00569440 at 00569550
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0058aab0 at 0058aaf1
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_005fa180
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005b7b30
        ;   Label: core_xform.cpp_FUN_005b7b30
    SUB ESP,0x18                        ; 005b7b31
    MOV EDX,ESI                         ; 005b7b34
    FLD float ptr [ESP + 0x20]          ; 005b7b36
    FMUL float ptr [0x005fa180]         ; 005b7b3a | DAT_005fa180
    FLD ST0                             ; 005b7b40
    FCOS                                ; 005b7b42
    FXCH                                ; 005b7b44
    FSIN                                ; 005b7b46
    MOV EDI,ESI                         ; 005b7b48
    XOR ECX,ECX                         ; 005b7b4a
    MOV ESI,ESP                         ; 005b7b4c
    MOV dword ptr [ESP + 0x4],ECX       ; 005b7b4e
    MOV dword ptr [ESP + 0xc],ECX       ; 005b7b52
    FXCH                                ; 005b7b56
    FSTP float ptr [ESP]                ; 005b7b58
    FSTP float ptr [ESP + 0x8]          ; 005b7b5b
    MOVSD ES:EDI,ESI                    ; 005b7b5f
    MOVSD ES:EDI,ESI                    ; 005b7b60
    MOVSD ES:EDI,ESI                    ; 005b7b61
    MOVSD ES:EDI,ESI                    ; 005b7b62
    MOV EAX,EDX                         ; 005b7b63
    ADD ESP,0x18                        ; 005b7b65
    POP EDI                             ; 005b7b68
    RET                                 ; 005b7b69

