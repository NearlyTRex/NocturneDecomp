; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spike_cpp_CSpike_setup_FUN_00533160(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533160
        ;   Label: core_spike.cpp_CSpike_setup_FUN_00533160
    SUB ESP,0x28                        ; 00533161
    MOV EBX,dword ptr [ESP + 0x30]      ; 00533164
    LEA EAX,[EBX + 0x150]               ; 00533168
    PUSH EAX                            ; 0053316e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0053316f
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    ADD ESP,0x4                         ; 00533174
    PUSH EBX                            ; 00533177
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 00533178
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    FLD float ptr [EBX + 0x2e4]         ; 0053317d
    FMUL float ptr [EBX + 0x554]        ; 00533183
    ADD ESP,0x4                         ; 00533189
    FSTP float ptr [ESP + 0x24]         ; 0053318c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00533190
    MOV dword ptr [ESP + 0x20],EAX      ; 00533194
    LEA EAX,[ESP + 0x18]                ; 00533198
    PUSH EAX                            ; 0053319c
    LEA EAX,[ESP + 0x10]                ; 0053319d
    PUSH EAX                            ; 005331a1
    XOR EDX,EDX                         ; 005331a2
    PUSH EBX                            ; 005331a4
    MOV dword ptr [ESP + 0x24],EDX      ; 005331a5
    MOV dword ptr [ESP + 0x28],EDX      ; 005331a9
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 005331ad
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    LEA EDX,[EBX + 0x20]                ; 005331b2
    FLD float ptr [EDX]                 ; 005331b5
    FSUB float ptr [EAX]                ; 005331b7
    ADD ESP,0xc                         ; 005331b9
    FSTP float ptr [ESP]                ; 005331bc
    FLD float ptr [EDX + 0x4]           ; 005331bf
    FSUB float ptr [EAX + 0x4]          ; 005331c2
    FSTP float ptr [ESP + 0x4]          ; 005331c5
    FLD float ptr [EDX + 0x8]           ; 005331c9
    LEA EDX,[EBX + 0x2d8]               ; 005331cc
    FSUB float ptr [EAX + 0x8]          ; 005331d2
    MOV EAX,ESP                         ; 005331d5
    FSTP float ptr [ESP + 0x8]          ; 005331d7
    CMP EDX,EAX                         ; 005331db
    JNZ 0x005331ee                      ; 005331dd
        ;   XREF to: 005331ee (CONDITIONAL_JUMP)  ; LAB_005331ee
    MOV dword ptr [EBX + 0x480],0x0     ; 005331df
    ADD ESP,0x28                        ; 005331e9
    POP EBX                             ; 005331ec
    RET                                 ; 005331ed
    MOV EAX,dword ptr [ESP]             ; 005331ee
        ;   Label: LAB_005331ee
    MOV dword ptr [EDX],EAX             ; 005331f1
    MOV EAX,dword ptr [ESP + 0x4]       ; 005331f3
    MOV dword ptr [EDX + 0x4],EAX       ; 005331f7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005331fa
    MOV dword ptr [EDX + 0x8],EAX       ; 005331fe
    MOV dword ptr [EBX + 0x480],0x0     ; 00533201
    ADD ESP,0x28                        ; 0053320b
    POP EBX                             ; 0053320e
    RET                                 ; 0053320f

