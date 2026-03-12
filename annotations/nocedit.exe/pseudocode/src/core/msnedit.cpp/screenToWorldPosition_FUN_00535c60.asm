; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_msnedit_cpp_screenToWorldPosition_FUN_00535c60(CVector3f *out_world_pos,int screen_x,int screen_y)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   out_world_pos
; int              Stack[0x8]:4   screen_x
; int              Stack[0xc]:4   screen_y
; Local Variables:
; int[1015]        Stack[-0x1044]:4060  aiStackY_1044
; CVector3i[3]     Stack[-0x5c]:36  local_5c
; CVector3i        Stack[-0x38]:12  local_38
; CVector3f        Stack[-0x2c]:12  local_2c
; CVector3i        Stack[-0x20]:12  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_msnedit.cpp_CDemonMission_importActorsFrom_FUN_0053b9f0 at 0053baf8
;   core_msnedit.cpp_CDemonMission_moveActorToScreenPos_FUN_0053c970 at 0053c9c8
;
; Referenced Globals:
;   float FLOAT_0063b2ec = 10000
;   float FLOAT_00661c30 = 0.00390625
;   CDemonCamera g_CDemonCameraInstance
;   undefined4 DAT_032758e8
;   undefined4 g_CDemonCameraInstance.base.position+4
;   undefined4 g_CDemonCameraInstance.base.position+8
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535c60
        ;   Label: core_msnedit.cpp_screenToWorldPosition_FUN_00535c60
    PUSH ESI                            ; 00535c61
    PUSH EDI                            ; 00535c62
    PUSH EBP                            ; 00535c63
    SUB ESP,0x4c                        ; 00535c64
    MOV EBP,dword ptr [ESP + 0x60]      ; 00535c67
    MOV EDX,dword ptr [ESP + 0x68]      ; 00535c6b
    PUSH EDX                            ; 00535c6f
    MOV ECX,dword ptr [ESP + 0x68]      ; 00535c70
    PUSH ECX                            ; 00535c74
    PUSH 0x32758e4                      ; 00535c75 | g_CDemonCameraInstance
    LEA ESI,[ESP + 0xc]                 ; 00535c7a
    LEA EDI,[ESP + 0x30]                ; 00535c7e
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 00535c82
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0xc]                 ; 00535c87
    ADD ESP,0xc                         ; 00535c8b
    LEA EAX,[ESP + 0x24]                ; 00535c8e
    MOV EBX,EBP                         ; 00535c92
    PUSH EAX                            ; 00535c94
    MOVSD ES:EDI,ESI                    ; 00535c95
    MOVSD ES:EDI,ESI                    ; 00535c96
    MOVSD ES:EDI,ESI                    ; 00535c97
    PUSH 0x32758e4                      ; 00535c98 | g_CDemonCameraInstance
    LEA ESI,[ESP + 0x44]                ; 00535c9d
    LEA EDI,[ESP + 0x2c]                ; 00535ca1
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370 ; 00535ca5
        ;   XREF to: 0044d370 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x44]                ; 00535caa
    ADD ESP,0x8                         ; 00535cae
    LEA EAX,[ESP + 0x24]                ; 00535cb1
    MOVSD ES:EDI,ESI                    ; 00535cb5
    MOVSD ES:EDI,ESI                    ; 00535cb6
    MOVSD ES:EDI,ESI                    ; 00535cb7
    FILD dword ptr [EAX]                ; 00535cb8
    FMUL float ptr [0x00661c30]         ; 00535cba | FLOAT_00661c30
    FSTP float ptr [EBX]                ; 00535cc0
    FILD dword ptr [EAX + 0x4]          ; 00535cc2
    FMUL float ptr [0x00661c30]         ; 00535cc5 | FLOAT_00661c30
    FSTP float ptr [EBX + 0x4]          ; 00535ccb
    FILD dword ptr [EAX + 0x8]          ; 00535cce
    FMUL float ptr [0x00661c30]         ; 00535cd1 | FLOAT_00661c30
    FSTP float ptr [EBX + 0x8]          ; 00535cd7
    FLD float ptr [EBP + 0x4]           ; 00535cda
    FMUL ST0                            ; 00535cdd
    FLD float ptr [EBP]                 ; 00535cdf
    FMUL ST0                            ; 00535ce2
    FADDP                               ; 00535ce4
    FLD float ptr [EBP + 0x8]           ; 00535ce6
    FMUL ST0                            ; 00535ce9
    FADDP                               ; 00535ceb
    FSQRT                               ; 00535ced
    FCOMP float ptr [0x0063b2ec]        ; 00535cef | FLOAT_0063b2ec
    FNSTSW AX                           ; 00535cf5
    SAHF                                ; 00535cf7
    JBE 0x00535dc0                      ; 00535cf8
        ;   XREF to: 00535dc0 (CONDITIONAL_JUMP)  ; LAB_00535dc0
    MOV EAX,[0x032758e8]                ; 00535cfe | DAT_032758e8
    MOV dword ptr [ESP + 0xc],EAX       ; 00535d03
    MOV EAX,0x32758e8                   ; 00535d07 | DAT_032758e8
    MOV EAX,dword ptr [EAX + 0x4]       ; 00535d0c | g_CDemonCameraInstance.base.position+4
    MOV dword ptr [ESP + 0x10],EAX      ; 00535d0f
    MOV EAX,0x32758e8                   ; 00535d13 | DAT_032758e8
    MOV EAX,dword ptr [EAX + 0x8]       ; 00535d18 | g_CDemonCameraInstance.base.position+8
    MOV dword ptr [ESP + 0x14],EAX      ; 00535d1b
    FLD float ptr [EBP]                 ; 00535d1f
    FSUB float ptr [ESP + 0xc]          ; 00535d22
    FSTP float ptr [ESP + 0x18]         ; 00535d26
    FLD float ptr [EBP + 0x4]           ; 00535d2a
    FSUB float ptr [ESP + 0x10]         ; 00535d2d
    FST float ptr [ESP + 0x1c]          ; 00535d31
    FMUL float ptr [ESP + 0x1c]         ; 00535d35
    FLD float ptr [ESP + 0x18]          ; 00535d39
    FMUL ST0                            ; 00535d3d
    FLD float ptr [EBP + 0x8]           ; 00535d3f
    FSUB float ptr [ESP + 0x14]         ; 00535d42
    FXCH                                ; 00535d46
    FADDP ST2,ST0                       ; 00535d48
    FST float ptr [ESP + 0x20]          ; 00535d4a
    FMUL float ptr [ESP + 0x20]         ; 00535d4e
    FADDP                               ; 00535d52
    FSQRT                               ; 00535d54
    FDIVR float ptr [0x0063b2ec]        ; 00535d56 | FLOAT_0063b2ec
    FLD float ptr [ESP + 0x18]          ; 00535d5c
    FXCH                                ; 00535d60
    FSTP float ptr [ESP + 0x48]         ; 00535d62
    FMUL float ptr [ESP + 0x48]         ; 00535d66
    FLD float ptr [ESP + 0x1c]          ; 00535d6a
    FMUL float ptr [ESP + 0x48]         ; 00535d6e
    FLD float ptr [ESP + 0x20]          ; 00535d72
    FMUL float ptr [ESP + 0x48]         ; 00535d76
    FLD float ptr [ESP + 0xc]           ; 00535d7a
    FLD float ptr [ESP + 0x10]          ; 00535d7e
    FLD float ptr [ESP + 0x14]          ; 00535d82
    LEA EAX,[ESP + 0x30]                ; 00535d86
    FXCH ST5                            ; 00535d8a
    FSTP float ptr [ESP + 0x18]         ; 00535d8c
    FXCH ST3                            ; 00535d90
    FSTP float ptr [ESP + 0x1c]         ; 00535d92
    FXCH                                ; 00535d96
    FSTP float ptr [ESP + 0x20]         ; 00535d98
    FADD float ptr [ESP + 0x18]         ; 00535d9c
    FXCH                                ; 00535da0
    FADD float ptr [ESP + 0x1c]         ; 00535da2
    FXCH ST2                            ; 00535da6
    FADD float ptr [ESP + 0x20]         ; 00535da8
    FXCH                                ; 00535dac
    FSTP float ptr [ESP + 0x30]         ; 00535dae
    FXCH                                ; 00535db2
    FSTP float ptr [ESP + 0x34]         ; 00535db4
    FSTP float ptr [ESP + 0x38]         ; 00535db8
    CMP EBP,EAX                         ; 00535dbc
    JNZ 0x00535dca                      ; 00535dbe
        ;   XREF to: 00535dca (CONDITIONAL_JUMP)  ; LAB_00535dca
    MOV EAX,EBP                         ; 00535dc0
        ;   Label: LAB_00535dc0
    ADD ESP,0x4c                        ; 00535dc2
    POP EBP                             ; 00535dc5
    POP EDI                             ; 00535dc6
    POP ESI                             ; 00535dc7
    POP EBX                             ; 00535dc8
    RET                                 ; 00535dc9
    MOV EAX,dword ptr [ESP + 0x30]      ; 00535dca
        ;   Label: LAB_00535dca
    MOV dword ptr [EBP],EAX             ; 00535dce
    MOV EAX,dword ptr [ESP + 0x34]      ; 00535dd1
    MOV dword ptr [EBP + 0x4],EAX       ; 00535dd5
    MOV EAX,dword ptr [ESP + 0x38]      ; 00535dd8
    MOV dword ptr [EBP + 0x8],EAX       ; 00535ddc
    MOV EAX,EBP                         ; 00535ddf
    ADD ESP,0x4c                        ; 00535de1
    POP EBP                             ; 00535de4
    POP EDI                             ; 00535de5
    POP ESI                             ; 00535de6
    POP EBX                             ; 00535de7
    RET                                 ; 00535de8

