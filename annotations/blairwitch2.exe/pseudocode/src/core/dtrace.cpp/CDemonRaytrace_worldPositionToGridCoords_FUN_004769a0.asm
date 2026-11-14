; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004769a0(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_grid_coords)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_00477550 at 00477569
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_00477430 at 00477449
;
; Called Functions:
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004769a0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004769a0
    PUSH EDI                            ; 004769a1
    SUB ESP,0x14                        ; 004769a2
    MOV EDI,dword ptr [ESP + 0x24]      ; 004769a5
    MOV EBX,ESI                         ; 004769a9
    MOV ESI,dword ptr [ESP + 0x20]      ; 004769ab
    FLD float ptr [EDI]                 ; 004769af
    FSUB float ptr [ESI + 0x10]         ; 004769b1
    FDIV float ptr [ESI + 0x28]         ; 004769b4
    SUB ESP,0x8                         ; 004769b7
    FSTP double ptr [ESP]               ; 004769ba
    CALL crt_math.c_floor_FUN_005b84d0  ; 004769bd
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    FLD float ptr [EDI + 0x4]           ; 004769c2
    FSUB float ptr [ESI + 0x14]         ; 004769c5
    FDIV float ptr [ESI + 0x2c]         ; 004769c8
    MOV dword ptr [ESP + 0x14],EAX      ; 004769cb
    MOV dword ptr [ESP + 0x18],EDX      ; 004769cf
    FLD double ptr [ESP + 0x14]         ; 004769d3
    ADD ESP,0x8                         ; 004769d7
    CALL crt_math.c_round_FUN_005b7ff0  ; 004769da
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 004769df
    SUB ESP,0x8                         ; 004769e2
    FSTP double ptr [ESP]               ; 004769e5
    CALL crt_math.c_floor_FUN_005b84d0  ; 004769e8
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    FLD float ptr [EDI + 0x8]           ; 004769ed
    FSUB float ptr [ESI + 0x18]         ; 004769f0
    FDIV float ptr [ESI + 0x30]         ; 004769f3
    MOV dword ptr [ESP + 0x14],EAX      ; 004769f6
    MOV dword ptr [ESP + 0x18],EDX      ; 004769fa
    FLD double ptr [ESP + 0x14]         ; 004769fe
    ADD ESP,0x8                         ; 00476a02
    CALL crt_math.c_round_FUN_005b7ff0  ; 00476a05
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x4]         ; 00476a0a
    SUB ESP,0x8                         ; 00476a0e
    FSTP double ptr [ESP]               ; 00476a11
    MOV EDI,EBX                         ; 00476a14
    CALL crt_math.c_floor_FUN_005b84d0  ; 00476a16
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 00476a1b
    MOV dword ptr [ESP + 0x18],EDX      ; 00476a1f
    LEA ESI,[ESP + 0x8]                 ; 00476a23
    FLD double ptr [ESP + 0x14]         ; 00476a27
    ADD ESP,0x8                         ; 00476a2b
    CALL crt_math.c_round_FUN_005b7ff0  ; 00476a2e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 00476a33
    MOVSD ES:EDI,ESI                    ; 00476a37
    MOVSD ES:EDI,ESI                    ; 00476a38
    MOVSD ES:EDI,ESI                    ; 00476a39
    MOV EAX,EBX                         ; 00476a3a
    ADD ESP,0x14                        ; 00476a3c
    POP EDI                             ; 00476a3f
    POP EBX                             ; 00476a40
    RET                                 ; 00476a41

