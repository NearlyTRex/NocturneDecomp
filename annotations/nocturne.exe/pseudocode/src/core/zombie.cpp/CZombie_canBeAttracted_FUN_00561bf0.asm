; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_zombie_cpp_CZombie_canBeAttracted_FUN_00561bf0(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   float FLOAT_00598916 = 0.5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561bf0
        ;   Label: core_zombie.cpp_CZombie_canBeAttracted_FUN_00561bf0
    PUSH ESI                            ; 00561bf1
    PUSH EDI                            ; 00561bf2
    SUB ESP,0x40                        ; 00561bf3
    MOV ESI,dword ptr [ESP + 0x50]      ; 00561bf6
    MOV EDI,dword ptr [ESP + 0x54]      ; 00561bfa
    PUSH 0x3                            ; 00561bfe
    LEA EBX,[ESI + 0x150]               ; 00561c00
    PUSH EBX                            ; 00561c06
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00561c07
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0x44],EAX      ; 00561c0c
    FLD float ptr [ESP + 0x44]          ; 00561c10
    FLDZ                                ; 00561c14
    ADD ESP,0x8                         ; 00561c16
    FCOMPP                              ; 00561c19
    FNSTSW AX                           ; 00561c1b
    SAHF                                ; 00561c1d
    JC 0x00561c29                       ; 00561c1e
        ;   XREF to: 00561c29 (CONDITIONAL_JUMP)  ; LAB_00561c29
    XOR EAX,EAX                         ; 00561c20
    ADD ESP,0x40                        ; 00561c22
    POP EDI                             ; 00561c25
    POP ESI                             ; 00561c26
    POP EBX                             ; 00561c27
    RET                                 ; 00561c28
    MOV EDX,dword ptr [ESI + 0xbdb8]    ; 00561c29
        ;   Label: LAB_00561c29
    PUSH EDX                            ; 00561c2f
    LEA EAX,[ESP + 0x1c]                ; 00561c30
    PUSH EAX                            ; 00561c34
    PUSH EBX                            ; 00561c35
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00561c36
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 00561c3b
    MOV ECX,dword ptr [ESI + 0xbdbc]    ; 00561c3e
    PUSH ECX                            ; 00561c44
    LEA EAX,[ESP + 0x4]                 ; 00561c45
    PUSH EAX                            ; 00561c49
    PUSH EBX                            ; 00561c4a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00561c4b
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 00561c50
    FLD float ptr [ESP + 0x1c]          ; 00561c53
    FLD float ptr [ESP + 0x18]          ; 00561c57
    FADD float ptr [ESP]                ; 00561c5b
    FXCH                                ; 00561c5e
    FADD float ptr [ESP + 0x4]          ; 00561c60
    FXCH                                ; 00561c64
    FST float ptr [ESP + 0x30]          ; 00561c66
    FLD float ptr [0x00598916]          ; 00561c6a | FLOAT_00598916
    FXCH                                ; 00561c70
    FMUL ST1                            ; 00561c72
    FXCH ST2                            ; 00561c74
    FST float ptr [ESP + 0x34]          ; 00561c76
    FMUL ST1                            ; 00561c7a
    LEA EAX,[ESP + 0x24]                ; 00561c7c
    FLD float ptr [ESP + 0x20]          ; 00561c80
    PUSH EAX                            ; 00561c84
    FADD float ptr [ESP + 0xc]          ; 00561c85
    LEA EAX,[ESP + 0x10]                ; 00561c89
    FST float ptr [ESP + 0x3c]          ; 00561c8d
    PUSH EAX                            ; 00561c91
    FMULP ST2                           ; 00561c92
    PUSH ESI                            ; 00561c94
    FXCH ST2                            ; 00561c95
    FSTP float ptr [ESP + 0x30]         ; 00561c97
    FXCH                                ; 00561c9b
    FSTP float ptr [ESP + 0x34]         ; 00561c9d
    FSTP float ptr [ESP + 0x38]         ; 00561ca1
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00561ca5
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00561caa
    CMP EDI,EAX                         ; 00561cad
    JZ 0x00561cc1                       ; 00561caf
        ;   XREF to: 00561cc1 (CONDITIONAL_JUMP)  ; LAB_00561cc1
    MOV EDX,dword ptr [EAX]             ; 00561cb1
    MOV dword ptr [EDI],EDX             ; 00561cb3
    MOV EDX,dword ptr [EAX + 0x4]       ; 00561cb5
    MOV dword ptr [EDI + 0x4],EDX       ; 00561cb8
    MOV EDX,dword ptr [EAX + 0x8]       ; 00561cbb
    MOV dword ptr [EDI + 0x8],EDX       ; 00561cbe
    MOV EAX,0x1                         ; 00561cc1
        ;   Label: LAB_00561cc1
    ADD ESP,0x40                        ; 00561cc6
    POP EDI                             ; 00561cc9
    POP ESI                             ; 00561cca
    POP EBX                             ; 00561ccb
    RET                                 ; 00561ccc

