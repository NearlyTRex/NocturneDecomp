; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_FUN_004b8e40(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_flame.cpp_FUN_004b7b90 at 004b7d05
;
; Referenced Globals:
;   undefined4 DAT_005df75f
;   undefined4 DAT_005df767
;   undefined4 DAT_005df76f
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8e40
        ;   Label: core_flame.cpp_FUN_004b8e40
    PUSH ESI                            ; 004b8e41
    PUSH EDI                            ; 004b8e42
    PUSH EBP                            ; 004b8e43
    MOV EBP,ESP                         ; 004b8e44
    SUB ESP,0x18                        ; 004b8e46
    AND ESP,0xfffffff8                  ; 004b8e49
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b8e4c
    MOV EDI,ESP                         ; 004b8e4f
    LEA ESI,[EBX + 0x20]                ; 004b8e51
    MOVSD ES:EDI,ESI                    ; 004b8e54
    MOVSD ES:EDI,ESI                    ; 004b8e55
    MOVSD ES:EDI,ESI                    ; 004b8e56
    MOV EAX,ESP                         ; 004b8e57
    FLD float ptr [EBX + 0x15c]         ; 004b8e59
    FMUL double ptr [0x005df75f]        ; 004b8e5f | DAT_005df75f
    PUSH EAX                            ; 004b8e65
    LEA ESI,[EBX + 0x168]               ; 004b8e66
    FLD float ptr [ESP + 0x8]           ; 004b8e6c
    FXCH                                ; 004b8e70
    FADD ST0,ST1                        ; 004b8e72
    PUSH ESI                            ; 004b8e74
    FSTP ST1                            ; 004b8e75
    FSTP float ptr [ESP + 0xc]          ; 004b8e77
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970 ; 004b8e7b
        ;   XREF to: 0045e970 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004b8e80
    PUSH dword ptr [EBX + 0x284]        ; 004b8e83
    FLD float ptr [EBX + 0x284]         ; 004b8e89
    SUB ESP,0x4                         ; 004b8e8f
    FCHS                                ; 004b8e92
    FSTP float ptr [ESP]                ; 004b8e94
    CALL core_actor.cpp_FUN_0040cc00    ; 004b8e97
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x1c],EAX      ; 004b8e9c
    FLD float ptr [ESP + 0x1c]          ; 004b8ea0
    FADD float ptr [EBX + 0x280]        ; 004b8ea4
    FMUL double ptr [0x005df767]        ; 004b8eaa | DAT_005df767
    ADD ESP,0x8                         ; 004b8eb0
    CALL crt_math.c_round_FUN_005c03a0  ; 004b8eb3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x14]        ; 004b8eb8
    MOV EAX,dword ptr [ESP + 0x14]      ; 004b8ebc
    MOV EDX,EAX                         ; 004b8ec0
    SAR EDX,0x1f                        ; 004b8ec2
    MOV dword ptr [ESI + 0x3c],EAX      ; 004b8ec5
    SHL EDX,0x8                         ; 004b8ec8
    SBB EAX,EDX                         ; 004b8ecb
    SAR EAX,0x8                         ; 004b8ecd
    MOV EDX,EAX                         ; 004b8ed0
    SAR EDX,0x1f                        ; 004b8ed2
    SHL EDX,0x2                         ; 004b8ed5
    SBB EAX,EDX                         ; 004b8ed8
    SAR EAX,0x2                         ; 004b8eda
    MOV byte ptr [ESI + 0x1c],AL        ; 004b8edd
    FLD float ptr [EBX + 0x15c]         ; 004b8ee0
    FMUL float ptr [EBX + 0x1ac]        ; 004b8ee6
    FMUL double ptr [0x005df76f]        ; 004b8eec | DAT_005df76f
    SUB ESP,0x4                         ; 004b8ef2
    FSTP float ptr [ESP]                ; 004b8ef5
    PUSH ESI                            ; 004b8ef8
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0 ; 004b8ef9
        ;   XREF to: 0045e9c0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 004b8efe
    MOV dword ptr [ESI + 0x20],0x2      ; 004b8f01
    MOV ESP,EBP                         ; 004b8f08
    POP EBP                             ; 004b8f0a
    POP EDI                             ; 004b8f0b
    POP ESI                             ; 004b8f0c
    POP EBX                             ; 004b8f0d
    RET                                 ; 004b8f0e

