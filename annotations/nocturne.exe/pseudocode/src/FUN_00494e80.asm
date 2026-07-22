; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00494e80(int param_1)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
;
; Referenced Globals:
;   float FLOAT_00581d2c = -2000
;   double DOUBLE_00581d30 = 3
;   float FLOAT_00581d38 = 0.005000000
;   double DOUBLE_00581d40 = 200
;   float FLOAT_00581d48 = 100
;   float FLOAT_00581d4c = 200
;   float FLOAT_00581d50 = 99
;   float FLOAT_00581d54 = -1800
;   undefined4 DAT_005baf90
;   undefined4 DAT_01cc9454
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   core_frankgen.cpp_findLeader_FUN_00495240
;   crt_math.c_floor_FUN_005648c0
;   FUN_004950a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494e80
        ;   Label: FUN_00494e80
    PUSH ESI                            ; 00494e81
    PUSH EDI                            ; 00494e82
    PUSH EBP                            ; 00494e83
    MOV EBP,ESP                         ; 00494e84
    SUB ESP,0x24                        ; 00494e86
    AND ESP,0xfffffff8                  ; 00494e89
    MOV EBX,dword ptr [EBP + 0x14]      ; 00494e8c
    MOV EAX,[0x005baf90]                ; 00494e8f | DAT_005baf90
    CMP dword ptr [EAX + 0x4],0x0       ; 00494e94 | DAT_01cc9454
    JZ 0x00494eb4                       ; 00494e98
        ;   XREF to: 00494eb4 (CONDITIONAL_JUMP)  ; LAB_00494eb4
    CALL core_frankgen.cpp_findLeader_FUN_00495240 ; 00494e9a
        ;   XREF to: 00495240 (UNCONDITIONAL_CALL)  ; undefined core_frankgen.cpp_findLeader_FUN_00495240()
    FLD float ptr [EAX + 0x154]         ; 00494e9f
    PUSH EBX                            ; 00494ea5
    FSTP float ptr [EBX + 0x154]        ; 00494ea6
    CALL FUN_004950a0                   ; 00494eac
        ;   XREF to: 004950a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004950a0()
    ADD ESP,0x4                         ; 00494eb1
    PUSH EBX                            ; 00494eb4
        ;   Label: LAB_00494eb4
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00494eb5
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 00494eba
    PUSH 0x0                            ; 00494ebd
    LEA ESI,[ESP + 0x8]                 ; 00494ebf
    PUSH ESI                            ; 00494ec3
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00494ec4
    PUSH EBX                            ; 00494eca
    CALL dword ptr [EAX + 0x14]         ; 00494ecb
    ADD ESP,0x8                         ; 00494ece
    PUSH EAX                            ; 00494ed1
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00494ed2
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 00494ed7
    MOV ESI,EAX                         ; 00494eda
    TEST EAX,EAX                        ; 00494edc
    JNZ 0x00494ef2                      ; 00494ede
        ;   XREF to: 00494ef2 (CONDITIONAL_JUMP)  ; LAB_00494ef2
    PUSH EBX                            ; 00494ee0
        ;   Label: LAB_00494ee0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00494ee1
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 00494ee6
    MOV EAX,ESI                         ; 00494ee9
    MOV ESP,EBP                         ; 00494eeb
    POP EBP                             ; 00494eed
    POP EDI                             ; 00494eee
    POP ESI                             ; 00494eef
    POP EBX                             ; 00494ef0
    RET                                 ; 00494ef1
    PUSH -0x1                           ; 00494ef2
        ;   Label: LAB_00494ef2
    LEA EAX,[EBX + 0x17c]               ; 00494ef4
    PUSH dword ptr [EBX + 0x178]        ; 00494efa
    PUSH EAX                            ; 00494f00
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00494f01
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    LEA EAX,[EBX + 0x37c]               ; 00494f06
    MOV DL,byte ptr [EAX]               ; 00494f0c
    ADD ESP,0xc                         ; 00494f0e
    TEST DL,DL                          ; 00494f11
    JZ 0x00494ee0                       ; 00494f13
        ;   XREF to: 00494ee0 (CONDITIONAL_JUMP)  ; LAB_00494ee0
    MOV ECX,dword ptr [EBX + 0x154]     ; 00494f15
    CMP ECX,0x4400c000                  ; 00494f1b
    JL 0x00494f57                       ; 00494f21
        ;   XREF to: 00494f57 (CONDITIONAL_JUMP)  ; LAB_00494f57
    CMP ECX,0x44e10000                  ; 00494f23
    JGE 0x00494f60                      ; 00494f29
        ;   XREF to: 00494f60 (CONDITIONAL_JUMP)  ; LAB_00494f60
    XOR EDI,EDI                         ; 00494f2b
    MOV dword ptr [ESP],EDI             ; 00494f2d
    PUSH -0x1                           ; 00494f30
        ;   Label: LAB_00494f30
    LEA EAX,[EBX + 0x304]               ; 00494f32
    PUSH dword ptr [ESP + 0x4]          ; 00494f38
    PUSH EAX                            ; 00494f3c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00494f3d
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 00494f42
    PUSH EBX                            ; 00494f45
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00494f46
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 00494f4b
    MOV EAX,ESI                         ; 00494f4e
    MOV ESP,EBP                         ; 00494f50
    POP EBP                             ; 00494f52
    POP EDI                             ; 00494f53
    POP ESI                             ; 00494f54
    POP EBX                             ; 00494f55
    RET                                 ; 00494f56
    MOV dword ptr [ESP],0x43490000      ; 00494f57
        ;   Label: LAB_00494f57
    JMP 0x00494f30                      ; 00494f5e
        ;   XREF to: 00494f30 (UNCONDITIONAL_JUMP)  ; LAB_00494f30
    CMP ECX,0x44ed8000                  ; 00494f60
        ;   Label: LAB_00494f60
    JGE 0x00494f79                      ; 00494f66
        ;   XREF to: 00494f79 (CONDITIONAL_JUMP)  ; LAB_00494f79
    FLD float ptr [EBX + 0x154]         ; 00494f68
    FADD float ptr [0x00581d54]         ; 00494f6e | FLOAT_00581d54
    FSTP float ptr [ESP]                ; 00494f74
    JMP 0x00494f30                      ; 00494f77
        ;   XREF to: 00494f30 (UNCONDITIONAL_JUMP)  ; LAB_00494f30
    CMP ECX,0x44fa0000                  ; 00494f79
        ;   Label: LAB_00494f79
    JGE 0x00494f8a                      ; 00494f7f
        ;   XREF to: 00494f8a (CONDITIONAL_JUMP)  ; LAB_00494f8a
    MOV dword ptr [ESP],0x42c80000      ; 00494f81
    JMP 0x00494f30                      ; 00494f88
        ;   XREF to: 00494f30 (UNCONDITIONAL_JUMP)  ; LAB_00494f30
    FLD float ptr [EBX + 0x154]         ; 00494f8a
        ;   Label: LAB_00494f8a
    FADD float ptr [0x00581d2c]         ; 00494f90 | FLOAT_00581d2c
    FLD ST0                             ; 00494f96
    FMUL double ptr [0x00581d30]        ; 00494f98 | DOUBLE_00581d30
    FSTP ST1                            ; 00494f9e
    FST float ptr [ESP]                 ; 00494fa0
    FMUL float ptr [0x00581d38]         ; 00494fa3 | FLOAT_00581d38
    SUB ESP,0x8                         ; 00494fa9
    FSTP double ptr [ESP]               ; 00494fac
    CALL crt_math.c_floor_FUN_005648c0  ; 00494faf
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x24],EAX      ; 00494fb4
    MOV dword ptr [ESP + 0x28],EDX      ; 00494fb8
    FLD double ptr [ESP + 0x24]         ; 00494fbc
    FMUL double ptr [0x00581d40]        ; 00494fc0 | DOUBLE_00581d40
    ADD ESP,0x8                         ; 00494fc6
    FSUBR float ptr [ESP]               ; 00494fc9
    FST float ptr [ESP]                 ; 00494fcc
    FCOMP float ptr [0x00581d48]        ; 00494fcf | FLOAT_00581d48
    FNSTSW AX                           ; 00494fd5
    SAHF                                ; 00494fd7
    JBE 0x00494fe6                      ; 00494fd8
        ;   XREF to: 00494fe6 (CONDITIONAL_JUMP)  ; LAB_00494fe6
    FLD float ptr [0x00581d4c]          ; 00494fda | FLOAT_00581d4c
    FSUB float ptr [ESP]                ; 00494fe0
    FSTP float ptr [ESP]                ; 00494fe3
    FLD float ptr [ESP]                 ; 00494fe6
        ;   Label: LAB_00494fe6
    FADD float ptr [0x00581d50]         ; 00494fe9 | FLOAT_00581d50
    FSTP float ptr [ESP]                ; 00494fef
    JMP 0x00494f30                      ; 00494ff2
        ;   XREF to: 00494f30 (UNCONDITIONAL_JUMP)  ; LAB_00494f30

