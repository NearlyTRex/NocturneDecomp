; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_FUN_004a0590(CFlame *this_ptr)
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
;   core_flame.cpp_CFlame_process_FUN_0049f2e0 at 0049f455
;
; Referenced Globals:
;   undefined4 DAT_005d591d
;   undefined4 DAT_005d5925
;   undefined4 DAT_005d592d
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0590
        ;   Label: core_flame.cpp_FUN_004a0590
    PUSH ESI                            ; 004a0591
    PUSH EDI                            ; 004a0592
    PUSH EBP                            ; 004a0593
    MOV EBP,ESP                         ; 004a0594
    SUB ESP,0x18                        ; 004a0596
    AND ESP,0xfffffff8                  ; 004a0599
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a059c
    MOV EDI,ESP                         ; 004a059f
    LEA ESI,[EBX + 0x20]                ; 004a05a1
    MOVSD ES:EDI,ESI                    ; 004a05a4
    MOVSD ES:EDI,ESI                    ; 004a05a5
    MOVSD ES:EDI,ESI                    ; 004a05a6
    MOV EAX,ESP                         ; 004a05a7
    FLD float ptr [EBX + 0x2b8]         ; 004a05a9
    FMUL double ptr [0x005d591d]        ; 004a05af | DAT_005d591d
    PUSH EAX                            ; 004a05b5
    LEA ESI,[EBX + 0x2c4]               ; 004a05b6
    FLD float ptr [ESP + 0x8]           ; 004a05bc
    FXCH                                ; 004a05c0
    FADD ST0,ST1                        ; 004a05c2
    PUSH ESI                            ; 004a05c4
    FSTP ST1                            ; 004a05c5
    FSTP float ptr [ESP + 0xc]          ; 004a05c7
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810 ; 004a05cb
        ;   XREF to: 00448810 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004a05d0
    PUSH dword ptr [EBX + 0x3e0]        ; 004a05d3
    FLD float ptr [EBX + 0x3e0]         ; 004a05d9
    SUB ESP,0x4                         ; 004a05df
    FCHS                                ; 004a05e2
    FSTP float ptr [ESP]                ; 004a05e4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004a05e7
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1c],EAX      ; 004a05ec
    FLD float ptr [ESP + 0x1c]          ; 004a05f0
    FADD float ptr [EBX + 0x3dc]        ; 004a05f4
    FMUL double ptr [0x005d5925]        ; 004a05fa | DAT_005d5925
    ADD ESP,0x8                         ; 004a0600
    CALL crt_math.c_round_FUN_005b7ff0  ; 004a0603
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x14]        ; 004a0608
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a060c
    MOV EDX,EAX                         ; 004a0610
    SAR EDX,0x1f                        ; 004a0612
    MOV dword ptr [ESI + 0x3c],EAX      ; 004a0615
    SHL EDX,0x8                         ; 004a0618
    SBB EAX,EDX                         ; 004a061b
    SAR EAX,0x8                         ; 004a061d
    MOV EDX,EAX                         ; 004a0620
    SAR EDX,0x1f                        ; 004a0622
    SHL EDX,0x2                         ; 004a0625
    SBB EAX,EDX                         ; 004a0628
    SAR EAX,0x2                         ; 004a062a
    MOV byte ptr [ESI + 0x1c],AL        ; 004a062d
    FLD float ptr [EBX + 0x2b8]         ; 004a0630
    FMUL float ptr [EBX + 0x308]        ; 004a0636
    FMUL double ptr [0x005d592d]        ; 004a063c | DAT_005d592d
    SUB ESP,0x4                         ; 004a0642
    FSTP float ptr [ESP]                ; 004a0645
    PUSH ESI                            ; 004a0648
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860 ; 004a0649
        ;   XREF to: 00448860 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 004a064e
    MOV dword ptr [ESI + 0x20],0x2      ; 004a0651
    MOV ESP,EBP                         ; 004a0658
    POP EBP                             ; 004a065a
    POP EDI                             ; 004a065b
    POP ESI                             ; 004a065c
    POP EBX                             ; 004a065d
    RET                                 ; 004a065e

