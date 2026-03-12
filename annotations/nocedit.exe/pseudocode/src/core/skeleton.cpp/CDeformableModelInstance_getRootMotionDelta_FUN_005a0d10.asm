; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10(CDeformableModelInstance *this_ptr,CVector3f *output_buffer,float start_frame,float end_frame)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_buffer
; float            Stack[0xc]:4   start_frame
; float            Stack[0x10]:4   end_frame
; Local Variables:
; undefined8       Stack[-0x54]:8  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90 at 005a0ca5
;   core_skeleton.cpp_getRootMotionDeltaForMotion_FUN_005a0f50 at 005a0fc1
;
; Referenced Globals:
;   UVector3 g_ZeroVector
;   undefined4 g_ZeroVector+4
;   undefined4 g_ZeroVector+8
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   crt_math.c_ceil_FUN_006001b2
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005a0d10
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10
    PUSH EDI                            ; 005a0d11
    SUB ESP,0x40                        ; 005a0d12
    MOV EDI,dword ptr [ESP + 0x4c]      ; 005a0d15
    MOV ESI,dword ptr [ESP + 0x50]      ; 005a0d19
    FLD float ptr [ESP + 0x54]          ; 005a0d1d
    FCOMP float ptr [ESP + 0x58]        ; 005a0d21
    FNSTSW AX                           ; 005a0d25
    SAHF                                ; 005a0d27
    JC 0x005a0d4d                       ; 005a0d28
        ;   XREF to: 005a0d4d (CONDITIONAL_JUMP)  ; LAB_005a0d4d
    MOV EAX,[0x03f87558]                ; 005a0d2a | g_ZeroVector
    MOV dword ptr [ESI],EAX             ; 005a0d2f
    LEA EAX,[ESI + 0x4]                 ; 005a0d31
    MOV EDX,dword ptr [0x03f8755c]      ; 005a0d34 | g_ZeroVector+4
    MOV dword ptr [EAX],EDX             ; 005a0d3a
    MOV EDX,dword ptr [0x03f87560]      ; 005a0d3c | g_ZeroVector+8
    MOV dword ptr [EAX + 0x4],EDX       ; 005a0d42
    MOV EAX,ESI                         ; 005a0d45
    ADD ESP,0x40                        ; 005a0d47
    POP EDI                             ; 005a0d4a
    POP ESI                             ; 005a0d4b
    RET                                 ; 005a0d4c
    PUSH EBX                            ; 005a0d4d
        ;   Label: LAB_005a0d4d
    PUSH EDI                            ; 005a0d4e
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005a0d4f
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a0d54
    FLD float ptr [ESP + 0x58]          ; 005a0d57
    SUB ESP,0x8                         ; 005a0d5b
    FSTP double ptr [ESP]               ; 005a0d5e
    MOV EBX,EAX                         ; 005a0d61
    CALL crt_math.c_floor_FUN_005feb90  ; 005a0d63
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x30],EAX      ; 005a0d68
    MOV dword ptr [ESP + 0x34],EDX      ; 005a0d6c
    FLD double ptr [ESP + 0x30]         ; 005a0d70
    ADD ESP,0x8                         ; 005a0d74
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a0d77
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FLD float ptr [ESP + 0x5c]          ; 005a0d7c
    FXCH                                ; 005a0d80
    FISTP dword ptr [ESP + 0x3c]        ; 005a0d82
    SUB ESP,0x8                         ; 005a0d86
    FSTP double ptr [ESP]               ; 005a0d89
    CALL crt_math.c_ceil_FUN_006001b2   ; 005a0d8c
        ;   XREF to: 006001b2 (UNCONDITIONAL_CALL)  ; double crt_math.c_ceil_FUN_006001b2(double value)
    MOV dword ptr [ESP + 0x30],EAX      ; 005a0d91
    MOV dword ptr [ESP + 0x34],EDX      ; 005a0d95
    FLD double ptr [ESP + 0x30]         ; 005a0d99
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a0d9d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    ADD ESP,0x8                         ; 005a0da2
    XOR EDX,EDX                         ; 005a0da5
    FISTP dword ptr [ESP + 0x38]        ; 005a0da7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005a0dab
    MOV dword ptr [ESP + 0x1c],EDX      ; 005a0daf
    MOV dword ptr [ESP + 0x20],EDX      ; 005a0db3
    MOV dword ptr [ESP + 0x24],EDX      ; 005a0db7
    CMP EAX,dword ptr [ESP + 0x38]      ; 005a0dbb
    JGE 0x005a0e10                      ; 005a0dbf
        ;   XREF to: 005a0e10 (CONDITIONAL_JUMP)  ; LAB_005a0e10
    MOV EDX,EAX                         ; 005a0dc1
    SHL EAX,0x2                         ; 005a0dc3
    SUB EAX,EDX                         ; 005a0dc6
    MOV EDX,dword ptr [ESP + 0x38]      ; 005a0dc8
    LEA ECX,[EDX*0x4 + 0x0]             ; 005a0dcc
    SUB ECX,EDX                         ; 005a0dd3
    SHL EAX,0x2                         ; 005a0dd5
    SHL ECX,0x2                         ; 005a0dd8
    MOV EDX,dword ptr [EBX + 0x29378]   ; 005a0ddb
        ;   Label: LAB_005a0ddb
    FLD float ptr [ESP + 0x1c]          ; 005a0de1
    FADD float ptr [EDX + EAX*0x1]      ; 005a0de5
    FLD float ptr [ESP + 0x20]          ; 005a0de8
    FXCH                                ; 005a0dec
    FSTP float ptr [ESP + 0x1c]         ; 005a0dee
    FADD float ptr [EDX + EAX*0x1 + 0x4] ; 005a0df2
    FLD float ptr [ESP + 0x24]          ; 005a0df6
    FXCH                                ; 005a0dfa
    FSTP float ptr [ESP + 0x20]         ; 005a0dfc
    FADD float ptr [EDX + EAX*0x1 + 0x8] ; 005a0e00
    ADD EAX,0xc                         ; 005a0e04
    FSTP float ptr [ESP + 0x24]         ; 005a0e07
    CMP EAX,ECX                         ; 005a0e0b
    JL 0x005a0ddb                       ; 005a0e0d
        ;   XREF to: 005a0ddb (CONDITIONAL_JUMP)  ; LAB_005a0ddb
    NOP                                 ; 005a0e0f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005a0e10
        ;   Label: LAB_005a0e10
    MOV EDX,EAX                         ; 005a0e14
    MOV dword ptr [ESP + 0x40],EAX      ; 005a0e16
    SHL EAX,0x2                         ; 005a0e1a
    SUB EAX,EDX                         ; 005a0e1d
    FILD dword ptr [ESP + 0x40]         ; 005a0e1f
    LEA EDX,[EAX*0x4 + 0x0]             ; 005a0e23
    FSUBR float ptr [ESP + 0x58]        ; 005a0e2a
    MOV EAX,dword ptr [EBX + 0x29378]   ; 005a0e2e
    FSTP float ptr [ESP + 0x30]         ; 005a0e34
    FLD float ptr [EDX + EAX*0x1]       ; 005a0e38
    FMUL float ptr [ESP + 0x30]         ; 005a0e3b
    FSTP float ptr [ESP + 0x10]         ; 005a0e3f
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 005a0e43
    FMUL float ptr [ESP + 0x30]         ; 005a0e47
    FSTP float ptr [ESP + 0x14]         ; 005a0e4b
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 005a0e4f
    FMUL float ptr [ESP + 0x30]         ; 005a0e53
    FLD float ptr [ESP + 0x20]          ; 005a0e57
    FLD float ptr [ESP + 0x1c]          ; 005a0e5b
    FSUB float ptr [ESP + 0x10]         ; 005a0e5f
    FLD float ptr [ESP + 0x24]          ; 005a0e63
    FXCH                                ; 005a0e67
    FSTP float ptr [ESP + 0x1c]         ; 005a0e69
    FXCH                                ; 005a0e6d
    FSUB float ptr [ESP + 0x14]         ; 005a0e6f
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a0e73
    FSTP float ptr [ESP + 0x20]         ; 005a0e77
    MOV dword ptr [ESP + 0x40],EAX      ; 005a0e7b
    FXCH                                ; 005a0e7f
    FSTP float ptr [ESP + 0x18]         ; 005a0e81
    FILD dword ptr [ESP + 0x40]         ; 005a0e85
    FXCH                                ; 005a0e89
    FSUB float ptr [ESP + 0x18]         ; 005a0e8b
    LEA EDX,[EAX + -0x1]                ; 005a0e8f
    FSTP float ptr [ESP + 0x24]         ; 005a0e92
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a0e96
    FSUB float ptr [ESP + 0x5c]         ; 005a0e9d
    SUB EAX,EDX                         ; 005a0ea1
    MOV EDX,dword ptr [EBX + 0x29378]   ; 005a0ea3
    FSTP float ptr [ESP + 0x34]         ; 005a0ea9
    FLD float ptr [EDX + EAX*0x4]       ; 005a0ead
    FMUL float ptr [ESP + 0x34]         ; 005a0eb0
    FSTP float ptr [ESP + 0x4]          ; 005a0eb4
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 005a0eb8
    FMUL float ptr [ESP + 0x34]         ; 005a0ebc
    FSTP float ptr [ESP + 0x8]          ; 005a0ec0
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 005a0ec4
    FMUL float ptr [ESP + 0x34]         ; 005a0ec8
    FLD float ptr [ESP + 0x20]          ; 005a0ecc
    FLD float ptr [ESP + 0x1c]          ; 005a0ed0
    FSUB float ptr [ESP + 0x4]          ; 005a0ed4
    FLD float ptr [ESP + 0x24]          ; 005a0ed8
    FXCH                                ; 005a0edc
    FST float ptr [ESP + 0x1c]          ; 005a0ede
    FXCH ST2                            ; 005a0ee2
    FSUB float ptr [ESP + 0x8]          ; 005a0ee4
    FXCH ST3                            ; 005a0ee8
    FSTP float ptr [ESP + 0xc]          ; 005a0eea
    FSUB float ptr [ESP + 0xc]          ; 005a0eee
    FXCH ST2                            ; 005a0ef2
    FSTP float ptr [ESP + 0x20]         ; 005a0ef4
    FXCH                                ; 005a0ef8
    FSTP float ptr [ESP + 0x24]         ; 005a0efa
    FMUL float ptr [EDI + 0x508]        ; 005a0efe
    FLD float ptr [ESP + 0x20]          ; 005a0f04
    FXCH                                ; 005a0f08
    FSTP float ptr [ESP + 0x1c]         ; 005a0f0a
    FMUL float ptr [EDI + 0x50c]        ; 005a0f0e
    FLD float ptr [ESP + 0x24]          ; 005a0f14
    FXCH                                ; 005a0f18
    FSTP float ptr [ESP + 0x20]         ; 005a0f1a
    FMUL float ptr [EDI + 0x510]        ; 005a0f1e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a0f24
    FSTP float ptr [ESP + 0x24]         ; 005a0f28
    MOV dword ptr [ESI],EAX             ; 005a0f2c
    LEA EDX,[ESI + 0x4]                 ; 005a0f2e
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a0f31
    MOV dword ptr [EDX],EAX             ; 005a0f35
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a0f37
    MOV dword ptr [EDX + 0x4],EAX       ; 005a0f3b
    POP EBX                             ; 005a0f3e
    MOV EAX,ESI                         ; 005a0f3f
    ADD ESP,0x40                        ; 005a0f41
    POP EDI                             ; 005a0f44
    POP ESI                             ; 005a0f45
    RET                                 ; 005a0f46

