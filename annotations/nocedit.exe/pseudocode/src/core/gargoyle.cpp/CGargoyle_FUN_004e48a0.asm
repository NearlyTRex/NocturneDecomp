; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gargoyle.cpp_CGargoyle_FUN_004e48a0()
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 at 004e4df6
;
; Referenced Globals:
;   double DOUBLE_0062d92f = -0.314159265350000
;   double DOUBLE_0062d937 = 0.314159265350000
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e48a0
        ;   Label: core_gargoyle.cpp_CGargoyle_FUN_004e48a0
    PUSH EBP                            ; 004e48a1
    MOV EBP,ESP                         ; 004e48a2
    SUB ESP,0x30                        ; 004e48a4
    AND ESP,0xfffffff8                  ; 004e48a7
    MOV EBX,dword ptr [EBP + 0xc]       ; 004e48aa
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 004e48ad
    MOV dword ptr [EBX + 0xbf10],0x0    ; 004e48b3
    TEST EDX,EDX                        ; 004e48bd
    JZ 0x004e4950                       ; 004e48bf
        ;   XREF to: 004e4950 (CONDITIONAL_JUMP)  ; LAB_004e4950
    MOV EAX,EDX                         ; 004e48c5
    LEA EDX,[EBX + 0x20]                ; 004e48c7
    FLD float ptr [EDX]                 ; 004e48ca
    FSUB float ptr [EAX + 0x20]         ; 004e48cc
    FSTP float ptr [ESP + 0x14]         ; 004e48cf
    FLD float ptr [EDX + 0x4]           ; 004e48d3
    FSUB float ptr [EAX + 0x24]         ; 004e48d6
    FST float ptr [ESP + 0x18]          ; 004e48d9
    FMUL float ptr [ESP + 0x18]         ; 004e48dd
    FLD float ptr [ESP + 0x14]          ; 004e48e1
    FMUL ST0                            ; 004e48e5
    FLD float ptr [EDX + 0x8]           ; 004e48e7
    FSUB float ptr [EAX + 0x28]         ; 004e48ea
    FXCH                                ; 004e48ed
    FADDP ST2,ST0                       ; 004e48ef
    FST float ptr [ESP + 0x1c]          ; 004e48f1
    FMUL float ptr [ESP + 0x1c]         ; 004e48f5
    FADDP                               ; 004e48f9
    FSQRT                               ; 004e48fb
    FCOMP float ptr [EBX + 0xbe34]      ; 004e48fd
    FNSTSW AX                           ; 004e4903
    SAHF                                ; 004e4905
    JBE 0x004e496b                      ; 004e4906
        ;   XREF to: 004e496b (CONDITIONAL_JUMP)  ; LAB_004e496b
    MOV ECX,dword ptr [EBX + 0xbef8]    ; 004e4908
    TEST ECX,ECX                        ; 004e490e
    JZ 0x004e4950                       ; 004e4910
        ;   XREF to: 004e4950 (CONDITIONAL_JUMP)  ; LAB_004e4950
    MOV EAX,ECX                         ; 004e4912
    FLD float ptr [EAX + 0x20]          ; 004e4914
    FSUB float ptr [EDX]                ; 004e4917
    FSTP float ptr [ESP + 0x8]          ; 004e4919
    FLD float ptr [EAX + 0x24]          ; 004e491d
    FSUB float ptr [EDX + 0x4]          ; 004e4920
    FST float ptr [ESP + 0xc]           ; 004e4923
    FMUL float ptr [ESP + 0xc]          ; 004e4927
    FLD float ptr [ESP + 0x8]           ; 004e492b
    FMUL ST0                            ; 004e492f
    FLD float ptr [EAX + 0x28]          ; 004e4931
    FSUB float ptr [EDX + 0x8]          ; 004e4934
    FXCH                                ; 004e4937
    FADDP ST2,ST0                       ; 004e4939
    FST float ptr [ESP + 0x10]          ; 004e493b
    FMUL float ptr [ESP + 0x10]         ; 004e493f
    FADDP                               ; 004e4943
    FSQRT                               ; 004e4945
    FLD1                                ; 004e4947
    FCOMPP                              ; 004e4949
    FNSTSW AX                           ; 004e494b
    SAHF                                ; 004e494d
    JBE 0x004e4957                      ; 004e494e
        ;   XREF to: 004e4957 (CONDITIONAL_JUMP)  ; LAB_004e4957
    XOR EAX,EAX                         ; 004e4950
        ;   Label: LAB_004e4950
    MOV ESP,EBP                         ; 004e4952
    POP EBP                             ; 004e4954
    POP EBX                             ; 004e4955
    RET                                 ; 004e4956
    MOV EAX,0x1                         ; 004e4957
        ;   Label: LAB_004e4957
    MOV dword ptr [EBX + 0xbf10],0x1    ; 004e495c
    MOV ESP,EBP                         ; 004e4966
    POP EBP                             ; 004e4968
    POP EBX                             ; 004e4969
    RET                                 ; 004e496a
    LEA EAX,[ESP + 0x14]                ; 004e496b
        ;   Label: LAB_004e496b
    PUSH EAX                            ; 004e496f
    LEA EAX,[ESP + 0x24]                ; 004e4970
    PUSH EAX                            ; 004e4974
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004e4975
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,EAX                         ; 004e497a
    LEA EAX,[ESP + 0x1c]                ; 004e497c
    ADD ESP,0x8                         ; 004e4980
    CMP EAX,EDX                         ; 004e4983
    JZ 0x004e499b                       ; 004e4985
        ;   XREF to: 004e499b (CONDITIONAL_JUMP)  ; LAB_004e499b
    MOV EAX,dword ptr [EDX]             ; 004e4987
    MOV dword ptr [ESP + 0x14],EAX      ; 004e4989
    MOV EAX,dword ptr [EDX + 0x4]       ; 004e498d
    MOV dword ptr [ESP + 0x18],EAX      ; 004e4990
    MOV EAX,dword ptr [EDX + 0x8]       ; 004e4994
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e4997
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e499b
        ;   Label: LAB_004e499b
    FLD float ptr [EAX + 0x34]          ; 004e49a1
    FSUB float ptr [ESP + 0x18]         ; 004e49a4
    SUB ESP,0x4                         ; 004e49a8
    FSTP float ptr [ESP]                ; 004e49ab
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004e49ae
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x30],EAX      ; 004e49b3
    FLD float ptr [ESP + 0x30]          ; 004e49b7
    ADD ESP,0x4                         ; 004e49bb
    FST double ptr [ESP]                ; 004e49be
    FCOMP double ptr [0x0062d92f]       ; 004e49c1 | DOUBLE_0062d92f
    FNSTSW AX                           ; 004e49c7
    SAHF                                ; 004e49c9
    JC 0x004e49de                       ; 004e49ca
        ;   XREF to: 004e49de (CONDITIONAL_JUMP)  ; LAB_004e49de
    FLD double ptr [ESP]                ; 004e49cc
    FCOMP double ptr [0x0062d937]       ; 004e49cf | DOUBLE_0062d937
    FNSTSW AX                           ; 004e49d5
    SAHF                                ; 004e49d7
    JBE 0x004e4950                      ; 004e49d8
        ;   XREF to: 004e4950 (CONDITIONAL_JUMP)  ; LAB_004e4950
    MOV EAX,0x1                         ; 004e49de
        ;   Label: LAB_004e49de
    MOV ESP,EBP                         ; 004e49e3
    POP EBP                             ; 004e49e5
    POP EBX                             ; 004e49e6
    RET                                 ; 004e49e7

