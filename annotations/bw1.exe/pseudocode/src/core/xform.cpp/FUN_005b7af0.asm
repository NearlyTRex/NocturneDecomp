; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b7af0(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[13]:
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_00433b30 at 00433b6e
;   core_doc.cpp_FUN_0046caa0 at 0046ce93
;   core_doc.cpp_FUN_0046ea80 at 0046ef9d
;   core_doc.cpp_FUN_0046f200 at 0046f3a3
;   core_gabriela.cpp_FUN_004c89c0 at 004c8b55
;   core_icepick.cpp_FUN_004f1670 at 004f173d
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_0051def0 at 0051e1bf
;   core_scat.cpp_FUN_00542270 at 0054239a
;   core_skeleton.cpp_FUN_00569440 at 00569529
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0058aab0 at 0058ac31
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_005fa17c
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005b7af0
        ;   Label: core_xform.cpp_FUN_005b7af0
    SUB ESP,0x18                        ; 005b7af1
    MOV EDX,ESI                         ; 005b7af4
    FLD float ptr [ESP + 0x20]          ; 005b7af6
    FMUL float ptr [0x005fa17c]         ; 005b7afa | DAT_005fa17c
    FLD ST0                             ; 005b7b00
    FCOS                                ; 005b7b02
    FXCH                                ; 005b7b04
    FSIN                                ; 005b7b06
    MOV EDI,ESI                         ; 005b7b08
    XOR ECX,ECX                         ; 005b7b0a
    MOV ESI,ESP                         ; 005b7b0c
    MOV dword ptr [ESP + 0x8],ECX       ; 005b7b0e
    MOV dword ptr [ESP + 0xc],ECX       ; 005b7b12
    FXCH                                ; 005b7b16
    FSTP float ptr [ESP]                ; 005b7b18
    FSTP float ptr [ESP + 0x4]          ; 005b7b1b
    MOVSD ES:EDI,ESI                    ; 005b7b1f
    MOVSD ES:EDI,ESI                    ; 005b7b20
    MOVSD ES:EDI,ESI                    ; 005b7b21
    MOVSD ES:EDI,ESI                    ; 005b7b22
    MOV EAX,EDX                         ; 005b7b23
    ADD ESP,0x18                        ; 005b7b25
    POP EDI                             ; 005b7b28
    RET                                 ; 005b7b29

