; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00477ac0(int param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[7]:
;   core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_004785c0 at 00478625
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_004784a0 at 00478504
;   core_particle.cpp_FUN_00509f30 at 0050a05c
;   core_path.cpp_CPathMap_findPathToDestination_FUN_0050baa0 at 0050bacc
;   core_path.cpp_FUN_0050b1d0 at 0050b28b
;   core_path.cpp_FUN_0050cd60 at 0050cda6
;   core_path.cpp_FUN_0050d050 at 0050d06d
;
; Called Functions:
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477ac0
        ;   Label: core_dtrace.cpp_FUN_00477ac0
    PUSH EDI                            ; 00477ac1
    SUB ESP,0x14                        ; 00477ac2
    MOV EDI,dword ptr [ESP + 0x24]      ; 00477ac5
    MOV EBX,ESI                         ; 00477ac9
    MOV ESI,dword ptr [ESP + 0x20]      ; 00477acb
    FLD float ptr [EDI]                 ; 00477acf
    FSUB float ptr [ESI + 0x10]         ; 00477ad1
    FDIV float ptr [ESI + 0x34]         ; 00477ad4
    SUB ESP,0x8                         ; 00477ad7
    FSTP double ptr [ESP]               ; 00477ada
    CALL crt_math.c_floor_FUN_005a3600  ; 00477add
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    FLD float ptr [EDI + 0x4]           ; 00477ae2
    FSUB float ptr [ESI + 0x14]         ; 00477ae5
    FDIV float ptr [ESI + 0x38]         ; 00477ae8
    MOV dword ptr [ESP + 0x14],EAX      ; 00477aeb
    MOV dword ptr [ESP + 0x18],EDX      ; 00477aef
    FLD double ptr [ESP + 0x14]         ; 00477af3
    ADD ESP,0x8                         ; 00477af7
    CALL crt_math.c_round_FUN_005a3120  ; 00477afa
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP]               ; 00477aff
    SUB ESP,0x8                         ; 00477b02
    FSTP double ptr [ESP]               ; 00477b05
    CALL crt_math.c_floor_FUN_005a3600  ; 00477b08
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    FLD float ptr [EDI + 0x8]           ; 00477b0d
    FSUB float ptr [ESI + 0x18]         ; 00477b10
    FDIV float ptr [ESI + 0x3c]         ; 00477b13
    MOV dword ptr [ESP + 0x14],EAX      ; 00477b16
    MOV dword ptr [ESP + 0x18],EDX      ; 00477b1a
    FLD double ptr [ESP + 0x14]         ; 00477b1e
    ADD ESP,0x8                         ; 00477b22
    CALL crt_math.c_round_FUN_005a3120  ; 00477b25
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x4]         ; 00477b2a
    SUB ESP,0x8                         ; 00477b2e
    FSTP double ptr [ESP]               ; 00477b31
    MOV EDI,EBX                         ; 00477b34
    CALL crt_math.c_floor_FUN_005a3600  ; 00477b36
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 00477b3b
    MOV dword ptr [ESP + 0x18],EDX      ; 00477b3f
    LEA ESI,[ESP + 0x8]                 ; 00477b43
    FLD double ptr [ESP + 0x14]         ; 00477b47
    ADD ESP,0x8                         ; 00477b4b
    CALL crt_math.c_round_FUN_005a3120  ; 00477b4e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x8]         ; 00477b53
    MOVSD ES:EDI,ESI                    ; 00477b57
    MOVSD ES:EDI,ESI                    ; 00477b58
    MOVSD ES:EDI,ESI                    ; 00477b59
    MOV EAX,EBX                         ; 00477b5a
    ADD ESP,0x14                        ; 00477b5c
    POP EDI                             ; 00477b5f
    POP EBX                             ; 00477b60
    RET                                 ; 00477b61

