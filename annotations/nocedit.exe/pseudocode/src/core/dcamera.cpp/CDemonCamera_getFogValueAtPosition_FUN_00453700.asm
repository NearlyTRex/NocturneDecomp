; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700(CDemonCamera * this_ptr, CVector3i * world_position)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_position
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   double g_CameraFogIntensityFixedPointScale8 = 256
;   float g_WorldToFloat = 0.00390625
;   SFogGrid g_CameraFogGrid
;
; Called Functions:
;   core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453700
        ;   Label: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700
    PUSH ESI                            ; 00453701
    PUSH EBP                            ; 00453702
    SUB ESP,0x1c                        ; 00453703
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00453706
    MOV ECX,dword ptr [ESP + 0x30]      ; 0045370a
    MOV EAX,dword ptr [ECX]             ; 0045370e
    MOV EBX,dword ptr [EDX + 0x16c]     ; 00453710
    SUB EAX,EBX                         ; 00453716
    MOV dword ptr [ESP + 0xc],EAX       ; 00453718
    MOV EAX,dword ptr [ECX + 0x4]       ; 0045371c
    MOV ESI,dword ptr [EDX + 0x170]     ; 0045371f
    SUB EAX,ESI                         ; 00453725
    MOV dword ptr [ESP + 0x10],EAX      ; 00453727
    MOV EAX,dword ptr [ECX + 0x8]       ; 0045372b
    SUB EAX,dword ptr [EDX + 0x174]     ; 0045372e
    MOV EBX,ESP                         ; 00453734
    MOV dword ptr [ESP + 0x14],EAX      ; 00453736
    LEA EAX,[ESP + 0xc]                 ; 0045373a
    FILD dword ptr [EAX]                ; 0045373e
    FMUL float ptr [0x0065c644]         ; 00453740 | float g_WorldToFloat
    FSTP float ptr [EBX]                ; 00453746
    FILD dword ptr [EAX + 0x4]          ; 00453748
    FMUL float ptr [0x0065c644]         ; 0045374b | float g_WorldToFloat
    FSTP float ptr [EBX + 0x4]          ; 00453751
    FILD dword ptr [EAX + 0x8]          ; 00453754
    FMUL float ptr [0x0065c644]         ; 00453757 | float g_WorldToFloat
    FSTP float ptr [EBX + 0x8]          ; 0045375d
    FLD float ptr [ESP + 0x4]           ; 00453760
    FMUL ST0                            ; 00453764
    FLD float ptr [ESP]                 ; 00453766
    FMUL ST0                            ; 00453769
    FADDP                               ; 0045376b
    FLD float ptr [ESP + 0x8]           ; 0045376d
    FMUL ST0                            ; 00453771
    FADDP                               ; 00453773
    FSQRT                               ; 00453775
    FMUL double ptr [0x0061a452]        ; 00453777 | double g_CameraFogIntensityFixedPointScale8
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045377d | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x18]        ; 00453782
    MOV EBP,dword ptr [ESP + 0x18]      ; 00453786
    PUSH EBP                            ; 0045378a
    PUSH ECX                            ; 0045378b
    ADD EDX,0x16c                       ; 0045378c
    PUSH EDX                            ; 00453792
    PUSH 0x1519384                      ; 00453793 | SFogGrid g_CameraFogGrid
    CALL core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0 ; 00453798 | uint core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0(SFogGrid * fog_ptr, CVector3i * start_pos, CVector3i * end_pos, int ray_length)
        ;   XREF to: 0044bdd0 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 0045379d
    SHL EAX,0x4                         ; 0045379f
    ADD EAX,EDX                         ; 004537a2
    MOV EDX,EAX                         ; 004537a4
    SHL EAX,0x4                         ; 004537a6
    SUB EAX,EDX                         ; 004537a9
    SHR EAX,0xe                         ; 004537ab
    ADD ESP,0x10                        ; 004537ae
    CMP EAX,0xff                        ; 004537b1
    JBE 0x004537c4                      ; 004537b6 | LAB_004537c4
        ;   XREF to: 004537c4 (CONDITIONAL_JUMP)
    MOV EAX,0xffff                      ; 004537b8
    ADD ESP,0x1c                        ; 004537bd
    POP EBP                             ; 004537c0
    POP ESI                             ; 004537c1
    POP EBX                             ; 004537c2
    RET                                 ; 004537c3
    SHL EAX,0x8                         ; 004537c4
        ;   Label: LAB_004537c4
    ADD ESP,0x1c                        ; 004537c7
    POP EBP                             ; 004537ca
    POP ESI                             ; 004537cb
    POP EBX                             ; 004537cc
    RET                                 ; 004537cd

