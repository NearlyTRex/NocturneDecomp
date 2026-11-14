; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spike_cpp_CSpike_setup_FUN_00560680(CSpike *this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_actor.cpp_FUN_00408cf0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560680
        ;   Label: core_spike.cpp_CSpike_setup_FUN_00560680
    PUSH ESI                            ; 00560681
    PUSH EDI                            ; 00560682
    SUB ESP,0x40                        ; 00560683
    MOV EBX,dword ptr [ESP + 0x50]      ; 00560686
    LEA EAX,[EBX + 0x2b4]               ; 0056068a
    PUSH EAX                            ; 00560690
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00560691
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00560696
    PUSH EBX                            ; 00560699
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 0056069a
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    FLD float ptr [EBX + 0x448]         ; 0056069f
    FMUL float ptr [EBX + 0x6b8]        ; 005606a5
    ADD ESP,0x4                         ; 005606ab
    FSTP float ptr [ESP + 0x3c]         ; 005606ae
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005606b2
    MOV dword ptr [ESP + 0x20],EAX      ; 005606b6
    LEA EAX,[ESP + 0x18]                ; 005606ba
    LEA ESI,[ESP + 0x24]                ; 005606be
    PUSH EAX                            ; 005606c2
    LEA EDI,[ESP + 0x10]                ; 005606c3
    XOR EDX,EDX                         ; 005606c7
    PUSH EBX                            ; 005606c9
    MOV dword ptr [ESP + 0x20],EDX      ; 005606ca
    MOV dword ptr [ESP + 0x24],EDX      ; 005606ce
    CALL core_actor.cpp_FUN_00408cf0    ; 005606d2
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x2c]                ; 005606d7
    ADD ESP,0x8                         ; 005606db
    LEA EAX,[EBX + 0x20]                ; 005606de
    MOVSD ES:EDI,ESI                    ; 005606e1
    MOVSD ES:EDI,ESI                    ; 005606e2
    MOVSD ES:EDI,ESI                    ; 005606e3
    LEA EDX,[EBX + 0x43c]               ; 005606e4
    FLD float ptr [EAX + 0x4]           ; 005606ea
    FLD float ptr [EAX + 0x8]           ; 005606ed
    FLD float ptr [EAX]                 ; 005606f0
    LEA EDI,[ESP + 0x30]                ; 005606f2
    MOV ESI,ESP                         ; 005606f6
    LEA EAX,[ESP + 0x30]                ; 005606f8
    FSUB float ptr [ESP + 0xc]          ; 005606fc
    FXCH ST2                            ; 00560700
    FSUB float ptr [ESP + 0x10]         ; 00560702
    FXCH                                ; 00560706
    FSUB float ptr [ESP + 0x14]         ; 00560708
    FXCH ST2                            ; 0056070c
    FSTP float ptr [ESP]                ; 0056070e
    FSTP float ptr [ESP + 0x4]          ; 00560711
    FSTP float ptr [ESP + 0x8]          ; 00560715
    MOVSD ES:EDI,ESI                    ; 00560719
    MOVSD ES:EDI,ESI                    ; 0056071a
    MOVSD ES:EDI,ESI                    ; 0056071b
    CMP EDX,EAX                         ; 0056071c
    JNZ 0x00560731                      ; 0056071e
        ;   XREF to: 00560731 (CONDITIONAL_JUMP)  ; LAB_00560731
    MOV dword ptr [EBX + 0x5e4],0x0     ; 00560720
    ADD ESP,0x40                        ; 0056072a
    POP EDI                             ; 0056072d
    POP ESI                             ; 0056072e
    POP EBX                             ; 0056072f
    RET                                 ; 00560730
    MOV EAX,dword ptr [ESP + 0x30]      ; 00560731
        ;   Label: LAB_00560731
    MOV dword ptr [EDX],EAX             ; 00560735
    MOV EAX,dword ptr [ESP + 0x34]      ; 00560737
    MOV dword ptr [EDX + 0x4],EAX       ; 0056073b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0056073e
    MOV dword ptr [EDX + 0x8],EAX       ; 00560742
    MOV dword ptr [EBX + 0x5e4],0x0     ; 00560745
    ADD ESP,0x40                        ; 0056074f
    POP EDI                             ; 00560752
    POP ESI                             ; 00560753
    POP EBX                             ; 00560754
    RET                                 ; 00560755

