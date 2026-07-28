; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650(int param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0046c100 at 0046c119
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0046bfe0 at 0046bff9
;
; Called Functions:
;   crt_math.c_floor_FUN_005648c0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b650
        ;   Label: core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650
    PUSH EDI                            ; 0046b651
    SUB ESP,0x14                        ; 0046b652
    MOV EDI,dword ptr [ESP + 0x24]      ; 0046b655
    MOV EBX,ESI                         ; 0046b659
    MOV ESI,dword ptr [ESP + 0x20]      ; 0046b65b
    FLD float ptr [EDI]                 ; 0046b65f
    FSUB float ptr [ESI + 0x10]         ; 0046b661
    FDIV float ptr [ESI + 0x28]         ; 0046b664
    SUB ESP,0x8                         ; 0046b667
    FSTP double ptr [ESP]               ; 0046b66a
    CALL crt_math.c_floor_FUN_005648c0  ; 0046b66d
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    FLD float ptr [EDI + 0x4]           ; 0046b672
    FSUB float ptr [ESI + 0x14]         ; 0046b675
    FDIV float ptr [ESI + 0x2c]         ; 0046b678
    MOV dword ptr [ESP + 0x14],EAX      ; 0046b67b
    MOV dword ptr [ESP + 0x18],EDX      ; 0046b67f
    FLD double ptr [ESP + 0x14]         ; 0046b683
    ADD ESP,0x8                         ; 0046b687
    CALL crt_math.c_round_FUN_00563a30  ; 0046b68a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP]               ; 0046b68f
    SUB ESP,0x8                         ; 0046b692
    FSTP double ptr [ESP]               ; 0046b695
    CALL crt_math.c_floor_FUN_005648c0  ; 0046b698
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    FLD float ptr [EDI + 0x8]           ; 0046b69d
    FSUB float ptr [ESI + 0x18]         ; 0046b6a0
    FDIV float ptr [ESI + 0x30]         ; 0046b6a3
    MOV dword ptr [ESP + 0x14],EAX      ; 0046b6a6
    MOV dword ptr [ESP + 0x18],EDX      ; 0046b6aa
    FLD double ptr [ESP + 0x14]         ; 0046b6ae
    ADD ESP,0x8                         ; 0046b6b2
    CALL crt_math.c_round_FUN_00563a30  ; 0046b6b5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x4]         ; 0046b6ba
    SUB ESP,0x8                         ; 0046b6be
    FSTP double ptr [ESP]               ; 0046b6c1
    MOV EDI,EBX                         ; 0046b6c4
    CALL crt_math.c_floor_FUN_005648c0  ; 0046b6c6
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x14],EAX      ; 0046b6cb
    MOV dword ptr [ESP + 0x18],EDX      ; 0046b6cf
    LEA ESI,[ESP + 0x8]                 ; 0046b6d3
    FLD double ptr [ESP + 0x14]         ; 0046b6d7
    ADD ESP,0x8                         ; 0046b6db
    CALL crt_math.c_round_FUN_00563a30  ; 0046b6de
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x8]         ; 0046b6e3
    MOVSD ES:EDI,ESI                    ; 0046b6e7
    MOVSD ES:EDI,ESI                    ; 0046b6e8
    MOVSD ES:EDI,ESI                    ; 0046b6e9
    MOV EAX,EBX                         ; 0046b6ea
    ADD ESP,0x14                        ; 0046b6ec
    POP EDI                             ; 0046b6ef
    POP EBX                             ; 0046b6f0
    RET                                 ; 0046b6f1

