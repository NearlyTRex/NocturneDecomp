; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spike_cpp_CSpike_setup_FUN_005669a0(CSpike *this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_actor.cpp_FUN_00408b00
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005669a0
        ;   Label: core_spike.cpp_CSpike_setup_FUN_005669a0
    PUSH ESI                            ; 005669a1
    PUSH EDI                            ; 005669a2
    SUB ESP,0x40                        ; 005669a3
    MOV EBX,dword ptr [ESP + 0x50]      ; 005669a6
    LEA EAX,[EBX + 0x158]               ; 005669aa
    PUSH EAX                            ; 005669b0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 005669b1
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005669b6
    PUSH EBX                            ; 005669b9
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 005669ba
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    FLD float ptr [EBX + 0x2ec]         ; 005669bf
    FMUL float ptr [EBX + 0x55c]        ; 005669c5
    ADD ESP,0x4                         ; 005669cb
    FSTP float ptr [ESP + 0x3c]         ; 005669ce
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005669d2
    MOV dword ptr [ESP + 0x20],EAX      ; 005669d6
    LEA EAX,[ESP + 0x18]                ; 005669da
    LEA ESI,[ESP + 0x24]                ; 005669de
    PUSH EAX                            ; 005669e2
    LEA EDI,[ESP + 0x10]                ; 005669e3
    XOR EDX,EDX                         ; 005669e7
    PUSH EBX                            ; 005669e9
    MOV dword ptr [ESP + 0x20],EDX      ; 005669ea
    MOV dword ptr [ESP + 0x24],EDX      ; 005669ee
    CALL core_actor.cpp_FUN_00408b00    ; 005669f2
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x2c]                ; 005669f7
    ADD ESP,0x8                         ; 005669fb
    LEA EAX,[EBX + 0x20]                ; 005669fe
    MOVSD ES:EDI,ESI                    ; 00566a01
    MOVSD ES:EDI,ESI                    ; 00566a02
    MOVSD ES:EDI,ESI                    ; 00566a03
    LEA EDX,[EBX + 0x2e0]               ; 00566a04
    FLD float ptr [EAX + 0x4]           ; 00566a0a
    FLD float ptr [EAX + 0x8]           ; 00566a0d
    FLD float ptr [EAX]                 ; 00566a10
    LEA EDI,[ESP + 0x30]                ; 00566a12
    MOV ESI,ESP                         ; 00566a16
    LEA EAX,[ESP + 0x30]                ; 00566a18
    FSUB float ptr [ESP + 0xc]          ; 00566a1c
    FXCH ST2                            ; 00566a20
    FSUB float ptr [ESP + 0x10]         ; 00566a22
    FXCH                                ; 00566a26
    FSUB float ptr [ESP + 0x14]         ; 00566a28
    FXCH ST2                            ; 00566a2c
    FSTP float ptr [ESP]                ; 00566a2e
    FSTP float ptr [ESP + 0x4]          ; 00566a31
    FSTP float ptr [ESP + 0x8]          ; 00566a35
    MOVSD ES:EDI,ESI                    ; 00566a39
    MOVSD ES:EDI,ESI                    ; 00566a3a
    MOVSD ES:EDI,ESI                    ; 00566a3b
    CMP EDX,EAX                         ; 00566a3c
    JNZ 0x00566a51                      ; 00566a3e
        ;   XREF to: 00566a51 (CONDITIONAL_JUMP)  ; LAB_00566a51
    MOV dword ptr [EBX + 0x488],0x0     ; 00566a40
    ADD ESP,0x40                        ; 00566a4a
    POP EDI                             ; 00566a4d
    POP ESI                             ; 00566a4e
    POP EBX                             ; 00566a4f
    RET                                 ; 00566a50
    MOV EAX,dword ptr [ESP + 0x30]      ; 00566a51
        ;   Label: LAB_00566a51
    MOV dword ptr [EDX],EAX             ; 00566a55
    MOV EAX,dword ptr [ESP + 0x34]      ; 00566a57
    MOV dword ptr [EDX + 0x4],EAX       ; 00566a5b
    MOV EAX,dword ptr [ESP + 0x38]      ; 00566a5e
    MOV dword ptr [EDX + 0x8],EAX       ; 00566a62
    MOV dword ptr [EBX + 0x488],0x0     ; 00566a65
    ADD ESP,0x40                        ; 00566a6f
    POP EDI                             ; 00566a72
    POP ESI                             ; 00566a73
    POP EBX                             ; 00566a74
    RET                                 ; 00566a75

