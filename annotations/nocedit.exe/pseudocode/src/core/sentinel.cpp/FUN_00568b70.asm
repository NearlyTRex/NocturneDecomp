; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_sentinel.cpp_FUN_00568b70()
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined1       Stack[-0x34]:1  local_34
; undefined1       Stack[-0x28]:1  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   float FLOAT_00645882 = 0.5
;   float FLOAT_00645886 = -0.5
;   float FLOAT_0064588a = -4
;   undefined4 DAT_03114210
;   undefined4 DAT_03114214
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00568b70
        ;   Label: core_sentinel.cpp_FUN_00568b70
    SUB ESP,0x3c                        ; 00568b71
    MOV EDI,dword ptr [ESP + 0x48]      ; 00568b74
    TEST EDI,EDI                        ; 00568b78
    JNZ 0x00568b83                      ; 00568b7a | LAB_00568b83
        ;   XREF to: 00568b83 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00568b7c
    ADD ESP,0x3c                        ; 00568b7e
    POP EDI                             ; 00568b81
    RET                                 ; 00568b82
    PUSH ESI                            ; 00568b83
        ;   Label: LAB_00568b83
    PUSH EBX                            ; 00568b84
    MOV EDX,dword ptr [0x03114210]      ; 00568b85 | undefined4 DAT_03114210
    LEA EAX,[EDX*0x4 + 0x0]             ; 00568b8b
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00568b92
    SUB EAX,EDX                         ; 00568b96
    ADD ESI,0xfd8                       ; 00568b98
    SHL EAX,0x4                         ; 00568b9e
    ADD EAX,ESI                         ; 00568ba1
    PUSH EAX                            ; 00568ba3
    PUSH 0x3f87558                      ; 00568ba4 | CVector3f g_ZeroVector
    LEA EAX,[ESP + 0x40]                ; 00568ba9
    PUSH EAX                            ; 00568bad
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00568bae | CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x03114214]      ; 00568bb3 | undefined4 DAT_03114214
    MOV EBX,EAX                         ; 00568bb9
    LEA EAX,[EDX*0x4 + 0x0]             ; 00568bbb
    SUB EAX,EDX                         ; 00568bc2
    SHL EAX,0x4                         ; 00568bc4
    ADD ESP,0xc                         ; 00568bc7
    ADD EAX,ESI                         ; 00568bca
    PUSH EAX                            ; 00568bcc
    PUSH 0x3f87558                      ; 00568bcd | CVector3f g_ZeroVector
    LEA EAX,[ESP + 0x1c]                ; 00568bd2
    PUSH EAX                            ; 00568bd6
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00568bd7 | CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
    FLD float ptr [EAX]                 ; 00568bdc
    FADD float ptr [EBX]                ; 00568bde
    ADD ESP,0xc                         ; 00568be0
    FST float ptr [ESP + 0x8]           ; 00568be3
    FLD float ptr [EAX + 0x4]           ; 00568be7
    FADD float ptr [EBX + 0x4]          ; 00568bea
    FXCH                                ; 00568bed
    FLD float ptr [0x00645882]          ; 00568bef | float FLOAT_00645882
    FXCH                                ; 00568bf5
    FMUL ST1                            ; 00568bf7
    FXCH ST2                            ; 00568bf9
    FST float ptr [ESP + 0xc]           ; 00568bfb
    FLD float ptr [EAX + 0x8]           ; 00568bff
    FADD float ptr [EBX + 0x8]          ; 00568c02
    FXCH                                ; 00568c05
    FMUL ST2                            ; 00568c07
    FXCH                                ; 00568c09
    FST float ptr [ESP + 0x10]          ; 00568c0b
    FMULP ST2                           ; 00568c0f
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00568c11
    LEA EAX,[ESP + 0x2c]                ; 00568c15
    FXCH ST2                            ; 00568c19
    FSTP float ptr [ESP + 0x2c]         ; 00568c1b
    PUSH EAX                            ; 00568c1f
    LEA EAX,[ESP + 0x24]                ; 00568c20
    FXCH                                ; 00568c24
    FSTP float ptr [ESP + 0x34]         ; 00568c26
    PUSH EAX                            ; 00568c2a
    FADD float ptr [0x00645886]         ; 00568c2b | float FLOAT_00645886
    PUSH EDX                            ; 00568c31
    FSTP float ptr [ESP + 0x40]         ; 00568c32
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00568c36 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00568c3b
    LEA EAX,[EDI + 0x30]                ; 00568c3e
    FLD float ptr [ESP + 0x24]          ; 00568c41
    PUSH EAX                            ; 00568c45
    LEA EAX,[ESP + 0x24]                ; 00568c46
    FADD float ptr [0x0064588a]         ; 00568c4a | float FLOAT_0064588a
    PUSH EAX                            ; 00568c50
    FSTP float ptr [ESP + 0x2c]         ; 00568c51
    MOV EDX,dword ptr [EDI + 0x154]     ; 00568c55
    PUSH EDI                            ; 00568c5b
    CALL dword ptr [EDX + 0x60]         ; 00568c5c
    MOV EAX,0x1                         ; 00568c5f
    ADD ESP,0xc                         ; 00568c64
    POP EBX                             ; 00568c67
    POP ESI                             ; 00568c68
    ADD ESP,0x3c                        ; 00568c69
    POP EDI                             ; 00568c6c
    RET                                 ; 00568c6d

