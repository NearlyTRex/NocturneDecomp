; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_sentinel_cpp_CSentinel_attractActorToward_FUN_005066e0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00590095
;   undefined4 DAT_00590099
;   undefined4 DAT_0059009d
;   undefined4 DAT_01e5721c
;   undefined4 DAT_01e57220
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005066e0
        ;   Label: core_sentinel.cpp_CSentinel_attractActorToward_FUN_005066e0
    SUB ESP,0x3c                        ; 005066e1
    MOV EDI,dword ptr [ESP + 0x48]      ; 005066e4
    TEST EDI,EDI                        ; 005066e8
    JNZ 0x005066f3                      ; 005066ea
        ;   XREF to: 005066f3 (CONDITIONAL_JUMP)  ; LAB_005066f3
    XOR EAX,EAX                         ; 005066ec
    ADD ESP,0x3c                        ; 005066ee
    POP EDI                             ; 005066f1
    RET                                 ; 005066f2
    PUSH ESI                            ; 005066f3
        ;   Label: LAB_005066f3
    PUSH EBX                            ; 005066f4
    MOV EDX,dword ptr [0x01e5721c]      ; 005066f5 | DAT_01e5721c
    LEA EAX,[EDX*0x4 + 0x0]             ; 005066fb
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00506702
    SUB EAX,EDX                         ; 00506706
    ADD ESI,0xfd0                       ; 00506708
    SHL EAX,0x4                         ; 0050670e
    ADD EAX,ESI                         ; 00506711
    PUSH EAX                            ; 00506713
    PUSH 0x2dd1184                      ; 00506714 | DAT_02dd1184
    LEA EAX,[ESP + 0x40]                ; 00506719
    PUSH EAX                            ; 0050671d
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0050671e
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    MOV EDX,dword ptr [0x01e57220]      ; 00506723 | DAT_01e57220
    MOV EBX,EAX                         ; 00506729
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050672b
    SUB EAX,EDX                         ; 00506732
    SHL EAX,0x4                         ; 00506734
    ADD ESP,0xc                         ; 00506737
    ADD EAX,ESI                         ; 0050673a
    PUSH EAX                            ; 0050673c
    PUSH 0x2dd1184                      ; 0050673d | DAT_02dd1184
    LEA EAX,[ESP + 0x1c]                ; 00506742
    PUSH EAX                            ; 00506746
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00506747
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    FLD float ptr [EAX]                 ; 0050674c
    FADD float ptr [EBX]                ; 0050674e
    ADD ESP,0xc                         ; 00506750
    FST float ptr [ESP + 0x8]           ; 00506753
    FLD float ptr [EAX + 0x4]           ; 00506757
    FADD float ptr [EBX + 0x4]          ; 0050675a
    FXCH                                ; 0050675d
    FLD float ptr [0x00590095]          ; 0050675f | DAT_00590095
    FXCH                                ; 00506765
    FMUL ST1                            ; 00506767
    FXCH ST2                            ; 00506769
    FST float ptr [ESP + 0xc]           ; 0050676b
    FLD float ptr [EAX + 0x8]           ; 0050676f
    FADD float ptr [EBX + 0x8]          ; 00506772
    FXCH                                ; 00506775
    FMUL ST2                            ; 00506777
    FXCH                                ; 00506779
    FST float ptr [ESP + 0x10]          ; 0050677b
    FMULP ST2                           ; 0050677f
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00506781
    LEA EAX,[ESP + 0x2c]                ; 00506785
    FXCH ST2                            ; 00506789
    FSTP float ptr [ESP + 0x2c]         ; 0050678b
    PUSH EAX                            ; 0050678f
    LEA EAX,[ESP + 0x24]                ; 00506790
    FXCH                                ; 00506794
    FSTP float ptr [ESP + 0x34]         ; 00506796
    PUSH EAX                            ; 0050679a
    FADD float ptr [0x00590099]         ; 0050679b | DAT_00590099
    PUSH EDX                            ; 005067a1
    FSTP float ptr [ESP + 0x40]         ; 005067a2
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005067a6
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 005067ab
    LEA EAX,[EDI + 0x30]                ; 005067ae
    FLD float ptr [ESP + 0x24]          ; 005067b1
    PUSH EAX                            ; 005067b5
    LEA EAX,[ESP + 0x24]                ; 005067b6
    FADD float ptr [0x0059009d]         ; 005067ba | DAT_0059009d
    PUSH EAX                            ; 005067c0
    FSTP float ptr [ESP + 0x2c]         ; 005067c1
    MOV EDX,dword ptr [EDI + 0x14c]     ; 005067c5
    PUSH EDI                            ; 005067cb
    CALL dword ptr [EDX + 0x60]         ; 005067cc
    MOV EAX,0x1                         ; 005067cf
    ADD ESP,0xc                         ; 005067d4
    POP EBX                             ; 005067d7
    POP ESI                             ; 005067d8
    ADD ESP,0x3c                        ; 005067d9
    POP EDI                             ; 005067dc
    RET                                 ; 005067dd

