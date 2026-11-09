; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00476a50(int param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[7]:
;   core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_00477550 at 004775b5
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_00477430 at 00477494
;   core_particle.cpp_FUN_00510ef0 at 0051101c
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00512a70 at 00512a9c
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_005121a0 at 0051225b
;   core_path.cpp_FUN_00513d30 at 00513d76
;   core_path.cpp_renderPathMapsAtPosition_FUN_00514020 at 0051403d
;
; Called Functions:
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476a50
        ;   Label: core_dtrace.cpp_FUN_00476a50
    PUSH EDI                            ; 00476a51
    SUB ESP,0x14                        ; 00476a52
    MOV EDI,dword ptr [ESP + 0x24]      ; 00476a55
    MOV EBX,ESI                         ; 00476a59
    MOV ESI,dword ptr [ESP + 0x20]      ; 00476a5b
    FLD float ptr [EDI]                 ; 00476a5f
    FSUB float ptr [ESI + 0x10]         ; 00476a61
    FDIV float ptr [ESI + 0x34]         ; 00476a64
    SUB ESP,0x8                         ; 00476a67
    FSTP double ptr [ESP]               ; 00476a6a
    CALL crt_math.c_floor_FUN_005b84d0  ; 00476a6d
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    FLD float ptr [EDI + 0x4]           ; 00476a72
    FSUB float ptr [ESI + 0x14]         ; 00476a75
    FDIV float ptr [ESI + 0x38]         ; 00476a78
    MOV dword ptr [ESP + 0x14],EAX      ; 00476a7b
    MOV dword ptr [ESP + 0x18],EDX      ; 00476a7f
    FLD double ptr [ESP + 0x14]         ; 00476a83
    ADD ESP,0x8                         ; 00476a87
    CALL crt_math.c_round_FUN_005b7ff0  ; 00476a8a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 00476a8f
    SUB ESP,0x8                         ; 00476a92
    FSTP double ptr [ESP]               ; 00476a95
    CALL crt_math.c_floor_FUN_005b84d0  ; 00476a98
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    FLD float ptr [EDI + 0x8]           ; 00476a9d
    FSUB float ptr [ESI + 0x18]         ; 00476aa0
    FDIV float ptr [ESI + 0x3c]         ; 00476aa3
    MOV dword ptr [ESP + 0x14],EAX      ; 00476aa6
    MOV dword ptr [ESP + 0x18],EDX      ; 00476aaa
    FLD double ptr [ESP + 0x14]         ; 00476aae
    ADD ESP,0x8                         ; 00476ab2
    CALL crt_math.c_round_FUN_005b7ff0  ; 00476ab5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x4]         ; 00476aba
    SUB ESP,0x8                         ; 00476abe
    FSTP double ptr [ESP]               ; 00476ac1
    MOV EDI,EBX                         ; 00476ac4
    CALL crt_math.c_floor_FUN_005b84d0  ; 00476ac6
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 00476acb
    MOV dword ptr [ESP + 0x18],EDX      ; 00476acf
    LEA ESI,[ESP + 0x8]                 ; 00476ad3
    FLD double ptr [ESP + 0x14]         ; 00476ad7
    ADD ESP,0x8                         ; 00476adb
    CALL crt_math.c_round_FUN_005b7ff0  ; 00476ade
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 00476ae3
    MOVSD ES:EDI,ESI                    ; 00476ae7
    MOVSD ES:EDI,ESI                    ; 00476ae8
    MOVSD ES:EDI,ESI                    ; 00476ae9
    MOV EAX,EBX                         ; 00476aea
    ADD ESP,0x14                        ; 00476aec
    POP EDI                             ; 00476aef
    POP EBX                             ; 00476af0
    RET                                 ; 00476af1

