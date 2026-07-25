; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_normalizeAngleToPi_FUN_0040df00(float param_1)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[58]:
;   FUN_00424780 at 00424787
;   FUN_00439f50 at 0043a069
;   FUN_00495a20 at 004962e5
;   FUN_004b32d0 at 004b33f2
;   FUN_004b6d80 at 004b7442
;   FUN_004b9fe0 at 004ba124
;   FUN_004baba0 at 004badce
;   FUN_004c4970 at 004c4f0f
;   FUN_004d4f30 at 004d5173
;   FUN_004da790 at 004db21f
;   ... and 48 more
;
; Referenced Globals:
;   double DOUBLE_00578069 = -3.14159265350000
;   double DOUBLE_00578071 = 3.14159265350000
;   double DOUBLE_00578079 = 0.159154943096444
;   double DOUBLE_00578081 = -6.28318530700000
;   double DOUBLE_00578089 = -0.159154943096444
;   double DOUBLE_00578091 = 6.28318530700000
;
; Called Functions:
;   crt_math.c_floor_FUN_005648c0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0040df00
        ;   Label: core_actor.cpp_normalizeAngleToPi_FUN_0040df00
    MOV EBP,ESP                         ; 0040df01
    SUB ESP,0x14                        ; 0040df03
    AND ESP,0xfffffff8                  ; 0040df06
    FLD float ptr [EBP + 0x8]           ; 0040df09
    FST double ptr [ESP]                ; 0040df0c
    FCOMP double ptr [0x00578069]       ; 0040df0f | DOUBLE_00578069
    FNSTSW AX                           ; 0040df15
    SAHF                                ; 0040df17
    JC 0x0040df37                       ; 0040df18
        ;   XREF to: 0040df37 (CONDITIONAL_JUMP)  ; LAB_0040df37
    FLD double ptr [ESP]                ; 0040df1a
    FCOMP double ptr [0x00578071]       ; 0040df1d | DOUBLE_00578071
    FNSTSW AX                           ; 0040df23
    SAHF                                ; 0040df25
    JA 0x0040df73                       ; 0040df26
        ;   XREF to: 0040df73 (CONDITIONAL_JUMP)  ; LAB_0040df73
    MOV EAX,dword ptr [EBP + 0x8]       ; 0040df28
    MOV dword ptr [ESP + 0x10],EAX      ; 0040df2b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040df2f
        ;   Label: LAB_0040df2f
    MOV ESP,EBP                         ; 0040df33
    POP EBP                             ; 0040df35
    RET                                 ; 0040df36
    FLD double ptr [ESP]                ; 0040df37
        ;   Label: LAB_0040df37
    FADD double ptr [0x00578071]        ; 0040df3a | DOUBLE_00578071
    FMUL double ptr [0x00578089]        ; 0040df40 | DOUBLE_00578089
    SUB ESP,0x8                         ; 0040df46
    FSTP double ptr [ESP]               ; 0040df49
    CALL crt_math.c_floor_FUN_005648c0  ; 0040df4c
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x10],EAX      ; 0040df51
    MOV dword ptr [ESP + 0x14],EDX      ; 0040df55
    FLD double ptr [ESP + 0x10]         ; 0040df59
    FLD1                                ; 0040df5d
    FADDP                               ; 0040df5f
    FMUL double ptr [0x00578091]        ; 0040df61 | DOUBLE_00578091
    ADD ESP,0x8                         ; 0040df67
    FADD double ptr [ESP]               ; 0040df6a
    FSTP float ptr [ESP + 0x10]         ; 0040df6d
    JMP 0x0040df2f                      ; 0040df71
        ;   XREF to: 0040df2f (UNCONDITIONAL_JUMP)  ; LAB_0040df2f
    FLD double ptr [ESP]                ; 0040df73
        ;   Label: LAB_0040df73
    FADD double ptr [0x00578069]        ; 0040df76 | DOUBLE_00578069
    FMUL double ptr [0x00578079]        ; 0040df7c | DOUBLE_00578079
    SUB ESP,0x8                         ; 0040df82
    FSTP double ptr [ESP]               ; 0040df85
    CALL crt_math.c_floor_FUN_005648c0  ; 0040df88
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x10],EAX      ; 0040df8d
    MOV dword ptr [ESP + 0x14],EDX      ; 0040df91
    FLD double ptr [ESP + 0x10]         ; 0040df95
    FLD1                                ; 0040df99
    FADDP                               ; 0040df9b
    FMUL double ptr [0x00578081]        ; 0040df9d | DOUBLE_00578081
    ADD ESP,0x8                         ; 0040dfa3
    FADD double ptr [ESP]               ; 0040dfa6
    FSTP float ptr [ESP + 0x10]         ; 0040dfa9
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040dfad
    MOV ESP,EBP                         ; 0040dfb1
    POP EBP                             ; 0040dfb3
    RET                                 ; 0040dfb4

