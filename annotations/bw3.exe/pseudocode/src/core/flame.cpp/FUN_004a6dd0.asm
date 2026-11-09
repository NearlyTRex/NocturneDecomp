; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_FUN_004a6dd0(CFlame *this_ptr)
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
;   core_flame.cpp_FUN_004a5b10 at 004a5c85
;
; Referenced Globals:
;   undefined4 DAT_005c0c74
;   undefined4 DAT_005c0c7c
;   undefined4 DAT_005c0c84
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6dd0
        ;   Label: core_flame.cpp_FUN_004a6dd0
    PUSH ESI                            ; 004a6dd1
    PUSH EDI                            ; 004a6dd2
    PUSH EBP                            ; 004a6dd3
    MOV EBP,ESP                         ; 004a6dd4
    SUB ESP,0x18                        ; 004a6dd6
    AND ESP,0xfffffff8                  ; 004a6dd9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a6ddc
    MOV EDI,ESP                         ; 004a6ddf
    LEA ESI,[EBX + 0x20]                ; 004a6de1
    MOVSD ES:EDI,ESI                    ; 004a6de4
    MOVSD ES:EDI,ESI                    ; 004a6de5
    MOVSD ES:EDI,ESI                    ; 004a6de6
    MOV EAX,ESP                         ; 004a6de7
    FLD float ptr [EBX + 0x15c]         ; 004a6de9
    FMUL double ptr [0x005c0c74]        ; 004a6def | DAT_005c0c74
    PUSH EAX                            ; 004a6df5
    LEA ESI,[EBX + 0x168]               ; 004a6df6
    FLD float ptr [ESP + 0x8]           ; 004a6dfc
    FXCH                                ; 004a6e00
    FADD ST0,ST1                        ; 004a6e02
    PUSH ESI                            ; 004a6e04
    FSTP ST1                            ; 004a6e05
    FSTP float ptr [ESP + 0xc]          ; 004a6e07
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0 ; 004a6e0b
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004a6e10
    PUSH dword ptr [EBX + 0x284]        ; 004a6e13
    FLD float ptr [EBX + 0x284]         ; 004a6e19
    SUB ESP,0x4                         ; 004a6e1f
    FCHS                                ; 004a6e22
    FSTP float ptr [ESP]                ; 004a6e24
    CALL core_actor.cpp_FUN_0040ce40    ; 004a6e27
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x1c],EAX      ; 004a6e2c
    FLD float ptr [ESP + 0x1c]          ; 004a6e30
    FADD float ptr [EBX + 0x280]        ; 004a6e34
    FMUL double ptr [0x005c0c7c]        ; 004a6e3a | DAT_005c0c7c
    ADD ESP,0x8                         ; 004a6e40
    CALL crt_math.c_round_FUN_005a3120  ; 004a6e43
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x14]        ; 004a6e48
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a6e4c
    MOV EDX,EAX                         ; 004a6e50
    SAR EDX,0x1f                        ; 004a6e52
    MOV dword ptr [ESI + 0x3c],EAX      ; 004a6e55
    SHL EDX,0x8                         ; 004a6e58
    SBB EAX,EDX                         ; 004a6e5b
    SAR EAX,0x8                         ; 004a6e5d
    MOV EDX,EAX                         ; 004a6e60
    SAR EDX,0x1f                        ; 004a6e62
    SHL EDX,0x2                         ; 004a6e65
    SBB EAX,EDX                         ; 004a6e68
    SAR EAX,0x2                         ; 004a6e6a
    MOV byte ptr [ESI + 0x1c],AL        ; 004a6e6d
    FLD float ptr [EBX + 0x15c]         ; 004a6e70
    FMUL float ptr [EBX + 0x1ac]        ; 004a6e76
    FMUL double ptr [0x005c0c84]        ; 004a6e7c | DAT_005c0c84
    SUB ESP,0x4                         ; 004a6e82
    FSTP float ptr [ESP]                ; 004a6e85
    PUSH ESI                            ; 004a6e88
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 004a6e89
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 004a6e8e
    MOV dword ptr [ESI + 0x20],0x2      ; 004a6e91
    MOV ESP,EBP                         ; 004a6e98
    POP EBP                             ; 004a6e9a
    POP EDI                             ; 004a6e9b
    POP ESI                             ; 004a6e9c
    POP EBX                             ; 004a6e9d
    RET                                 ; 004a6e9e

