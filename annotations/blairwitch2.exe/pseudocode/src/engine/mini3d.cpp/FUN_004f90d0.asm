; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f90d0(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[11]:
;   engine_mini3d.cpp_FUN_004f8fe0 at 004f8fec
;   engine_mini3d.cpp_FUN_004f9390 at 004f93a0
;   engine_mini3d.cpp_FUN_004f93b0 at 004f93c4
;   shape_edittool.cpp_FUN_0047a770 at 0047a80e
;   shape_edittool.cpp_FUN_0047a890 at 0047a8ba
;   shape_edittool.cpp_FUN_0047afb0 at 0047b130
;   shape_edittool.cpp_FUN_0047dc40 at 0047de69
;   shape_edittool.cpp_FUN_0047e870 at 0047ea28
;   shape_edittool.cpp_FUN_004831d0 at 0048357c
;   shape_edittool.cpp_FUN_00483ea0 at 00484025
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005ddff8
;   undefined4 DAT_005ddffc
;   undefined4 DAT_006180f0
;   undefined4 DAT_00618100
;   undefined4 DAT_01d09858
;   undefined4 DAT_01d0986c
;   undefined4 DAT_01d09870
;   undefined4 DAT_01d09874
;   undefined4 DAT_01d09878
;   undefined4 DAT_01d0d2e4
;   undefined4 DAT_01d12114
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_mini3d.cpp_FUN_004f3380
;   engine_mini3d.cpp_FUN_004f40a0
;   engine_mini3d.cpp_FUN_004f93d0
;
; *****************************************************************************

section .text

    SUB ESP,0x14                        ; 004f90d0
        ;   Label: engine_mini3d.cpp_FUN_004f90d0
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f90d3
    MOV dword ptr [ESP + 0x10],EAX      ; 004f90d7
    FILD dword ptr [ESP + 0x10]         ; 004f90db
    FCOMP float ptr [0x01d0986c]        ; 004f90df | DAT_01d0986c
    FNSTSW AX                           ; 004f90e5
    SAHF                                ; 004f90e7
    JC 0x004f9178                       ; 004f90e8
        ;   XREF to: 004f9178 (CONDITIONAL_JUMP)  ; LAB_004f9178
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f90ee
        ;   Label: LAB_004f90ee
    MOV dword ptr [ESP + 0x10],EAX      ; 004f90f2
    FILD dword ptr [ESP + 0x10]         ; 004f90f6
    FCOMP float ptr [0x01d09874]        ; 004f90fa | DAT_01d09874
    FNSTSW AX                           ; 004f9100
    SAHF                                ; 004f9102
    JBE 0x004f9114                      ; 004f9103
        ;   XREF to: 004f9114 (CONDITIONAL_JUMP)  ; LAB_004f9114
    FLD float ptr [0x01d09874]          ; 004f9105 | DAT_01d09874
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f910b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x20]        ; 004f9110
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f9114
        ;   Label: LAB_004f9114
    CMP EAX,dword ptr [ESP + 0x20]      ; 004f9118
    JG 0x004f9174                       ; 004f911c
        ;   XREF to: 004f9174 (CONDITIONAL_JUMP)  ; LAB_004f9174
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f911e
    MOV dword ptr [ESP + 0x10],EAX      ; 004f9122
    FILD dword ptr [ESP + 0x10]         ; 004f9126
    FCOMP float ptr [0x01d09870]        ; 004f912a | DAT_01d09870
    FNSTSW AX                           ; 004f9130
    SAHF                                ; 004f9132
    JNC 0x004f9144                      ; 004f9133
        ;   XREF to: 004f9144 (CONDITIONAL_JUMP)  ; LAB_004f9144
    FLD float ptr [0x01d09870]          ; 004f9135 | DAT_01d09870
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f913b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1c]        ; 004f9140
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f9144
        ;   Label: LAB_004f9144
    MOV dword ptr [ESP + 0x10],EAX      ; 004f9148
    FILD dword ptr [ESP + 0x10]         ; 004f914c
    FCOMP float ptr [0x01d09878]        ; 004f9150 | DAT_01d09878
    FNSTSW AX                           ; 004f9156
    SAHF                                ; 004f9158
    JBE 0x004f916a                      ; 004f9159
        ;   XREF to: 004f916a (CONDITIONAL_JUMP)  ; LAB_004f916a
    FLD float ptr [0x01d09878]          ; 004f915b | DAT_01d09878
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f9161
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x24]        ; 004f9166
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f916a
        ;   Label: LAB_004f916a
    CMP EAX,dword ptr [ESP + 0x24]      ; 004f916e
    JLE 0x004f918c                      ; 004f9172
        ;   XREF to: 004f918c (CONDITIONAL_JUMP)  ; LAB_004f918c
    ADD ESP,0x14                        ; 004f9174
        ;   Label: LAB_004f9174
    RET                                 ; 004f9177
    FLD float ptr [0x01d0986c]          ; 004f9178 | DAT_01d0986c
        ;   Label: LAB_004f9178
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f917e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x18]        ; 004f9183
    JMP 0x004f90ee                      ; 004f9187
        ;   XREF to: 004f90ee (UNCONDITIONAL_JUMP)  ; LAB_004f90ee
    PUSH EDI                            ; 004f918c
        ;   Label: LAB_004f918c
    PUSH ESI                            ; 004f918d
    PUSH EBX                            ; 004f918e
    CALL engine_mini3d.cpp_FUN_004f93d0 ; 004f918f
        ;   XREF to: 004f93d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f93d0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f9194
    FLD1                                ; 004f9198
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f919a
    MOV dword ptr [ESP + 0x18],EAX      ; 004f919e
    FDIV float ptr [ESP + 0x18]         ; 004f91a2
    MOV EBX,dword ptr [0x01d12114]      ; 004f91a6 | DAT_01d12114
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f91ac
    MOV dword ptr [EBX + 0x14],0x0      ; 004f91b0
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f91b7
    MOV dword ptr [EBX + 0x18],0x3f000000 ; 004f91bb
    FLD float ptr [0x005ddff8]          ; 004f91c2 | DAT_005ddff8
    FILD dword ptr [ESP + 0x1c]         ; 004f91c8
    FADD ST0,ST1                        ; 004f91cc
    MOV dword ptr [EBX + 0x1c],0x3f000000 ; 004f91ce
    FSTP float ptr [ESP + 0xc]          ; 004f91d5
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f91d9
    MOV dword ptr [EBX],EAX             ; 004f91dd
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f91df
    MOV dword ptr [EBX + 0x34],0x0      ; 004f91e3
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f91ea
    MOV dword ptr [EBX + 0x38],0x3f000000 ; 004f91ee
    FILD dword ptr [ESP + 0x1c]         ; 004f91f5
    FADDP                               ; 004f91f9
    MOV dword ptr [EBX + 0x3c],0x3f000000 ; 004f91fb
    FSTP float ptr [ESP + 0x10]         ; 004f9202
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f9206
    MOV dword ptr [EBX + 0x4],EAX       ; 004f920a
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f920d
    MOV dword ptr [EBX + 0x8],EAX       ; 004f9211
    FSTP float ptr [ESP + 0x14]         ; 004f9214
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f9218
    MOV dword ptr [EBX + 0xc],EAX       ; 004f921c
    MOV EAX,[0x01d0d2e4]                ; 004f921f | DAT_01d0d2e4
    MOV dword ptr [EBX + 0x10],EAX      ; 004f9224
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004f9227
    MOV dword ptr [EBX + 0x54],0x0      ; 004f922b
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f9232
    MOV dword ptr [EBX + 0x58],0x3f000000 ; 004f9236
    FLD float ptr [0x005ddffc]          ; 004f923d | DAT_005ddffc
    FILD dword ptr [ESP + 0x1c]         ; 004f9243
    FADD ST0,ST1                        ; 004f9247
    MOV dword ptr [EBX + 0x5c],0x3f000000 ; 004f9249
    FSTP float ptr [ESP + 0x1c]         ; 004f9250
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f9254
    MOV dword ptr [EBX + 0x20],EAX      ; 004f9258
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f925b
    MOV dword ptr [EBX + 0x24],EAX      ; 004f925f
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f9262
    MOV dword ptr [EBX + 0x28],EAX      ; 004f9266
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f9269
    MOV dword ptr [EBX + 0x2c],EAX      ; 004f926d
    MOV EAX,[0x01d0d2e4]                ; 004f9270 | DAT_01d0d2e4
    MOV dword ptr [EBX + 0x30],EAX      ; 004f9275
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f9278
    MOV dword ptr [EBX + 0x40],EAX      ; 004f927c
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f927f
    MOV dword ptr [EBX + 0x74],0x0      ; 004f9283
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f928a
    MOV dword ptr [EBX + 0x78],0x3f000000 ; 004f928e
    FILD dword ptr [ESP + 0x1c]         ; 004f9295
    FADDP                               ; 004f9299
    MOV dword ptr [EBX + 0x7c],0x3f000000 ; 004f929b
    FSTP float ptr [ESP + 0x10]         ; 004f92a2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f92a6
    MOV dword ptr [EBX + 0x44],EAX      ; 004f92aa
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f92ad
    MOV dword ptr [EBX + 0x48],EAX      ; 004f92b1
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f92b4
    MOV dword ptr [EBX + 0x4c],EAX      ; 004f92b8
    MOV EAX,[0x01d0d2e4]                ; 004f92bb | DAT_01d0d2e4
    MOV dword ptr [EBX + 0x50],EAX      ; 004f92c0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f92c3
    MOV dword ptr [EBX + 0x60],EAX      ; 004f92c7
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f92ca
    MOV dword ptr [EBX + 0x64],EAX      ; 004f92ce
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f92d1
    MOV dword ptr [EBX + 0x68],EAX      ; 004f92d5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f92d8
    MOV dword ptr [EBX + 0x6c],EAX      ; 004f92dc
    MOV EAX,[0x01d0d2e4]                ; 004f92df | DAT_01d0d2e4
    PUSH 0x618100                       ; 004f92e4 | DAT_00618100
    MOV dword ptr [EBX + 0x70],EAX      ; 004f92e9
    CALL engine_mini3d.cpp_FUN_004f3380 ; 004f92ec
        ;   XREF to: 004f3380 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3380()
    ADD ESP,0x4                         ; 004f92f1
    PUSH 0x2                            ; 004f92f4
    PUSH 0x6180f0                       ; 004f92f6 | DAT_006180f0
    PUSH 0x4                            ; 004f92fb
    XOR EDI,EDI                         ; 004f92fd
    PUSH EBX                            ; 004f92ff
    MOV ESI,dword ptr [0x01d09858]      ; 004f9300 | DAT_01d09858
    MOV dword ptr [0x01d09858],EDI      ; 004f9306 | DAT_01d09858
    CALL engine_mini3d.cpp_FUN_004f40a0 ; 004f930c
        ;   XREF to: 004f40a0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f40a0()
    ADD ESP,0x10                        ; 004f9311
    MOV dword ptr [0x01d09858],ESI      ; 004f9314 | DAT_01d09858
    POP EBX                             ; 004f931a
    POP ESI                             ; 004f931b
    POP EDI                             ; 004f931c
    ADD ESP,0x14                        ; 004f931d
    RET                                 ; 004f9320

