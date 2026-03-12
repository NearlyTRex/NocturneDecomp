; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170(CDemonRaytrace *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; Local Variables:
; float            Stack[-0x2c]:4  local_2c
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_005724e0 at 005724ed
;
; Referenced Globals:
;   float g_VoxelSizeReciprocal = 0.125
;   uchar[8] g_VoxelYBitMasks
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499170
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
    PUSH ESI                            ; 00499171
    PUSH EDI                            ; 00499172
    PUSH EBP                            ; 00499173
    SUB ESP,0x20                        ; 00499174
    MOV EBX,dword ptr [ESP + 0x34]      ; 00499177
    MOV EDX,dword ptr [ESP + 0x38]      ; 0049917b
    FLD float ptr [EDX]                 ; 0049917f
    FSUB float ptr [EBX + 0x10]         ; 00499181
    FDIV float ptr [EBX + 0x28]         ; 00499184
    FLD float ptr [EDX + 0x4]           ; 00499187
    FSUB float ptr [EBX + 0x14]         ; 0049918a
    FDIV float ptr [EBX + 0x2c]         ; 0049918d
    FLD float ptr [EDX + 0x8]           ; 00499190
    FSUB float ptr [EBX + 0x18]         ; 00499193
    FDIV float ptr [EBX + 0x30]         ; 00499196
    FXCH ST2                            ; 00499199
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049919b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc]         ; 004991a0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004991a4
    MOV dword ptr [ESP + 0x1c],EAX      ; 004991a8
    FILD dword ptr [ESP + 0x1c]         ; 004991ac
    FMUL float ptr [EBX + 0x28]         ; 004991b0
    FADD float ptr [EBX + 0x10]         ; 004991b3
    FSUBR float ptr [EDX]               ; 004991b6
    FLD float ptr [0x00622d4e]          ; 004991b8 | g_VoxelSizeReciprocal
    FLD float ptr [EBX + 0x28]          ; 004991be
    FMUL ST1                            ; 004991c1
    FDIVP ST2,ST0                       ; 004991c3
    FXCH ST2                            ; 004991c5
    CALL crt_math.c_round_FUN_005fe6b0  ; 004991c7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x14]        ; 004991cc
    MOV EAX,dword ptr [ESP + 0x14]      ; 004991d0
    MOV dword ptr [ESP + 0x1c],EAX      ; 004991d4
    FILD dword ptr [ESP + 0x1c]         ; 004991d8
    FMUL float ptr [EBX + 0x2c]         ; 004991dc
    FADD float ptr [EBX + 0x14]         ; 004991df
    FSUBR float ptr [EDX + 0x4]         ; 004991e2
    FLD float ptr [EBX + 0x2c]          ; 004991e5
    FMUL ST3                            ; 004991e8
    FDIVP                               ; 004991ea
    FXCH ST3                            ; 004991ec
    CALL crt_math.c_round_FUN_005fe6b0  ; 004991ee
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 004991f3
    MOV EAX,dword ptr [ESP + 0x8]       ; 004991f7
    MOV dword ptr [ESP + 0x1c],EAX      ; 004991fb
    FILD dword ptr [ESP + 0x1c]         ; 004991ff
    FMUL float ptr [EBX + 0x30]         ; 00499203
    FADD float ptr [EBX + 0x18]         ; 00499206
    FSUBR float ptr [EDX + 0x8]         ; 00499209
    FLD float ptr [EBX + 0x30]          ; 0049920c
    FMULP ST3                           ; 0049920f
    FDIVRP ST2,ST0                      ; 00499211
    CALL crt_math.c_round_FUN_005fe6b0  ; 00499213
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x10]        ; 00499218
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049921c
    FXCH                                ; 00499220
    CALL crt_math.c_round_FUN_005fe6b0  ; 00499222
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x18]        ; 00499227
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049922b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 00499230
    TEST EDX,EDX                        ; 00499233
    JL 0x004992d3                       ; 00499235
        ;   XREF to: 004992d3 (CONDITIONAL_JUMP)  ; LAB_004992d3
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049923b
    TEST ECX,ECX                        ; 0049923f
    JL 0x004992d3                       ; 00499241
        ;   XREF to: 004992d3 (CONDITIONAL_JUMP)  ; LAB_004992d3
    MOV ESI,dword ptr [ESP]             ; 00499247
    TEST ESI,ESI                        ; 0049924a
    JL 0x004992d3                       ; 0049924c
        ;   XREF to: 004992d3 (CONDITIONAL_JUMP)  ; LAB_004992d3
    CMP EDX,0x8                         ; 00499252
    JGE 0x004992d3                      ; 00499255
        ;   XREF to: 004992d3 (CONDITIONAL_JUMP)  ; LAB_004992d3
    CMP ECX,0x8                         ; 0049925b
    JGE 0x004992d3                      ; 0049925e
        ;   XREF to: 004992d3 (CONDITIONAL_JUMP)  ; LAB_004992d3
    CMP ESI,0x8                         ; 00499264
    JGE 0x004992d3                      ; 00499267
        ;   XREF to: 004992d3 (CONDITIONAL_JUMP)  ; LAB_004992d3
    SHL ESI,0x3                         ; 00499269
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049926c
        ;   Label: LAB_0049926c
    PUSH EAX                            ; 00499270
    MOV EDX,dword ptr [ESP + 0x18]      ; 00499271
    PUSH EDX                            ; 00499275
    MOV ECX,dword ptr [ESP + 0x14]      ; 00499276
    PUSH ECX                            ; 0049927a
    PUSH EBX                            ; 0049927b
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0 ; 0049927c
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 00499281
    TEST EAX,EAX                        ; 00499284
    JZ 0x004992e7                       ; 00499286
        ;   XREF to: 004992e7 (CONDITIONAL_JUMP)  ; LAB_004992e7
    MOV EDI,dword ptr [EAX]             ; 00499288
    TEST EDI,EDI                        ; 0049928a
    JZ 0x004992b2                       ; 0049928c
        ;   XREF to: 004992b2 (CONDITIONAL_JUMP)  ; LAB_004992b2
    MOV EDX,dword ptr [ESP + 0x18]      ; 0049928e
    MOV EAX,EDI                         ; 00499292
    ADD EDX,ESI                         ; 00499294
    MOV DL,byte ptr [EDX + EAX*0x1]     ; 00499296
    MOV EAX,dword ptr [ESP + 0x10]      ; 00499299
    AND EDX,0xff                        ; 0049929d
    MOV AL,byte ptr [EAX + 0x6789f8]    ; 004992a3 | g_VoxelYBitMasks
    AND EAX,0xff                        ; 004992a9
    TEST EDX,EAX                        ; 004992ae
    JNZ 0x004992f1                      ; 004992b0
        ;   XREF to: 004992f1 (CONDITIONAL_JUMP)  ; LAB_004992f1
    MOV EBP,dword ptr [ESP + 0x18]      ; 004992b2
        ;   Label: LAB_004992b2
    DEC EBP                             ; 004992b6
    MOV dword ptr [ESP + 0x18],EBP      ; 004992b7
    TEST EBP,EBP                        ; 004992bb
    JGE 0x0049926c                      ; 004992bd
        ;   XREF to: 0049926c (CONDITIONAL_JUMP)  ; LAB_0049926c
    MOV ECX,dword ptr [ESP + 0x14]      ; 004992bf
    MOV EDX,0x7                         ; 004992c3
    DEC ECX                             ; 004992c8
    MOV dword ptr [ESP + 0x18],EDX      ; 004992c9
    MOV dword ptr [ESP + 0x14],ECX      ; 004992cd
    JMP 0x0049926c                      ; 004992d1
        ;   XREF to: 0049926c (UNCONDITIONAL_JUMP)  ; LAB_0049926c
    MOV dword ptr [ESP + 0x4],0xc479c000 ; 004992d3
        ;   Label: LAB_004992d3
    MOV EAX,dword ptr [ESP + 0x4]       ; 004992db
        ;   Label: LAB_004992db
    ADD ESP,0x20                        ; 004992df
    POP EBP                             ; 004992e2
    POP EDI                             ; 004992e3
    POP ESI                             ; 004992e4
    POP EBX                             ; 004992e5
    RET                                 ; 004992e6
    MOV dword ptr [ESP + 0x4],0xc479f99a ; 004992e7
        ;   Label: LAB_004992e7
    JMP 0x004992db                      ; 004992ef
        ;   XREF to: 004992db (UNCONDITIONAL_JUMP)  ; LAB_004992db
    MOV EAX,dword ptr [ESP + 0x14]      ; 004992f1
        ;   Label: LAB_004992f1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004992f5
    FILD dword ptr [ESP + 0x1c]         ; 004992f9
    FMUL float ptr [EBX + 0x2c]         ; 004992fd
    MOV EAX,dword ptr [ESP + 0x18]      ; 00499300
    FADD float ptr [EBX + 0x14]         ; 00499304
    MOV dword ptr [ESP + 0x1c],EAX      ; 00499307
    FILD dword ptr [ESP + 0x1c]         ; 0049930b
    FMUL float ptr [EBX + 0x2c]         ; 0049930f
    FMUL float ptr [0x00622d4e]         ; 00499312 | g_VoxelSizeReciprocal
    FADDP                               ; 00499318
    FSTP float ptr [ESP + 0x4]          ; 0049931a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049931e
    ADD ESP,0x20                        ; 00499322
    POP EBP                             ; 00499325
    POP EDI                             ; 00499326
    POP ESI                             ; 00499327
    POP EBX                             ; 00499328
    RET                                 ; 00499329

