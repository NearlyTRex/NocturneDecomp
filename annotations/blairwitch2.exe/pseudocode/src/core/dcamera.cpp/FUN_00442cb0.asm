; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dcamera_cpp_FUN_00442cb0(int param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ce73e
;   undefined4 DAT_005f4dd4
;
; Called Functions:
;   core_dcamera.cpp_sampleFogAlongRay_FUN_0043b1a0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442cb0
        ;   Label: core_dcamera.cpp_FUN_00442cb0
    PUSH ESI                            ; 00442cb1
    PUSH EBP                            ; 00442cb2
    MOV EBP,ESP                         ; 00442cb3
    SUB ESP,0x1c                        ; 00442cb5
    AND ESP,0xfffffff8                  ; 00442cb8
    MOV EDX,dword ptr [EBP + 0x10]      ; 00442cbb
    MOV ECX,dword ptr [EBP + 0x14]      ; 00442cbe
    MOV EAX,dword ptr [ECX]             ; 00442cc1
    MOV EBX,dword ptr [EDX + 0x16c]     ; 00442cc3
    SUB EAX,EBX                         ; 00442cc9
    MOV dword ptr [ESP],EAX             ; 00442ccb
    MOV EAX,dword ptr [ECX + 0x4]       ; 00442cce
    MOV ESI,dword ptr [EDX + 0x170]     ; 00442cd1
    SUB EAX,ESI                         ; 00442cd7
    MOV dword ptr [ESP + 0x4],EAX       ; 00442cd9
    MOV EAX,dword ptr [ECX + 0x8]       ; 00442cdd
    SUB EAX,dword ptr [EDX + 0x174]     ; 00442ce0
    LEA EBX,[ESP + 0xc]                 ; 00442ce6
    MOV dword ptr [ESP + 0x8],EAX       ; 00442cea
    MOV EAX,ESP                         ; 00442cee
    FILD dword ptr [EAX]                ; 00442cf0
    FMUL float ptr [0x005f4dd4]         ; 00442cf2 | DAT_005f4dd4
    FSTP float ptr [EBX]                ; 00442cf8
    FILD dword ptr [EAX + 0x4]          ; 00442cfa
    FMUL float ptr [0x005f4dd4]         ; 00442cfd | DAT_005f4dd4
    FSTP float ptr [EBX + 0x4]          ; 00442d03
    FILD dword ptr [EAX + 0x8]          ; 00442d06
    FMUL float ptr [0x005f4dd4]         ; 00442d09 | DAT_005f4dd4
    FSTP float ptr [EBX + 0x8]          ; 00442d0f
    FLD float ptr [ESP + 0x10]          ; 00442d12
    FMUL ST0                            ; 00442d16
    FLD float ptr [ESP + 0xc]           ; 00442d18
    FMUL ST0                            ; 00442d1c
    FADDP                               ; 00442d1e
    FLD float ptr [ESP + 0x14]          ; 00442d20
    FMUL ST0                            ; 00442d24
    FADDP                               ; 00442d26
    FSQRT                               ; 00442d28
    FMUL double ptr [0x005ce73e]        ; 00442d2a | DAT_005ce73e
    CALL crt_math.c_round_FUN_005b7ff0  ; 00442d30
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x18]        ; 00442d35
    MOV EAX,dword ptr [ESP + 0x18]      ; 00442d39
    PUSH EAX                            ; 00442d3d
    PUSH ECX                            ; 00442d3e
    ADD EDX,0x16c                       ; 00442d3f
    PUSH EDX                            ; 00442d45
    PUSH 0x146592c                      ; 00442d46
    CALL core_dcamera.cpp_sampleFogAlongRay_FUN_0043b1a0 ; 00442d4b
        ;   XREF to: 0043b1a0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_sampleFogAlongRay_FUN_0043b1a0()
    MOV EDX,EAX                         ; 00442d50
    SHL EAX,0x4                         ; 00442d52
    ADD EAX,EDX                         ; 00442d55
    MOV EDX,EAX                         ; 00442d57
    SHL EAX,0x4                         ; 00442d59
    SUB EAX,EDX                         ; 00442d5c
    SHR EAX,0xe                         ; 00442d5e
    ADD ESP,0x10                        ; 00442d61
    CMP EAX,0xff                        ; 00442d64
    JBE 0x00442d76                      ; 00442d69
        ;   XREF to: 00442d76 (CONDITIONAL_JUMP)  ; LAB_00442d76
    MOV EAX,0xffff                      ; 00442d6b
    MOV ESP,EBP                         ; 00442d70
    POP EBP                             ; 00442d72
    POP ESI                             ; 00442d73
    POP EBX                             ; 00442d74
    RET                                 ; 00442d75
    SHL EAX,0x8                         ; 00442d76
        ;   Label: LAB_00442d76
    MOV ESP,EBP                         ; 00442d79
    POP EBP                             ; 00442d7b
    POP ESI                             ; 00442d7c
    POP EBX                             ; 00442d7d
    RET                                 ; 00442d7e

