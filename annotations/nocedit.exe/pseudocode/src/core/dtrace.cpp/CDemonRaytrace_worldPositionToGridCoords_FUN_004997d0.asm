; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_grid_coords)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; CVector3i *      Stack[0xc]:4   output_grid_coords
; Local Variables:
; int[1016]        Stack[-0x1004]:4064  aiStackY_1004
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; double           Stack[-0x10]:8  local_10
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0049a280 at 0049a299
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160 at 0049a179
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004997d0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
    PUSH EDI                            ; 004997d1
    SUB ESP,0x14                        ; 004997d2
    MOV EDI,dword ptr [ESP + 0x24]      ; 004997d5
    MOV EBX,ESI                         ; 004997d9
    MOV ESI,dword ptr [ESP + 0x20]      ; 004997db
    FLD float ptr [EDI]                 ; 004997df
    FSUB float ptr [ESI + 0x10]         ; 004997e1
    FDIV float ptr [ESI + 0x28]         ; 004997e4
    SUB ESP,0x8                         ; 004997e7
    FSTP double ptr [ESP]               ; 004997ea
    CALL crt_math.c_floor_FUN_005feb90  ; 004997ed
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    FLD float ptr [EDI + 0x4]           ; 004997f2
    FSUB float ptr [ESI + 0x14]         ; 004997f5
    FDIV float ptr [ESI + 0x2c]         ; 004997f8
    MOV dword ptr [ESP + 0x14],EAX      ; 004997fb
    MOV dword ptr [ESP + 0x18],EDX      ; 004997ff
    FLD double ptr [ESP + 0x14]         ; 00499803
    ADD ESP,0x8                         ; 00499807
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049980a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 0049980f
    SUB ESP,0x8                         ; 00499812
    FSTP double ptr [ESP]               ; 00499815
    CALL crt_math.c_floor_FUN_005feb90  ; 00499818
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    FLD float ptr [EDI + 0x8]           ; 0049981d
    FSUB float ptr [ESI + 0x18]         ; 00499820
    FDIV float ptr [ESI + 0x30]         ; 00499823
    MOV dword ptr [ESP + 0x14],EAX      ; 00499826
    MOV dword ptr [ESP + 0x18],EDX      ; 0049982a
    FLD double ptr [ESP + 0x14]         ; 0049982e
    ADD ESP,0x8                         ; 00499832
    CALL crt_math.c_round_FUN_005fe6b0  ; 00499835
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x4]         ; 0049983a
    SUB ESP,0x8                         ; 0049983e
    FSTP double ptr [ESP]               ; 00499841
    MOV EDI,EBX                         ; 00499844
    CALL crt_math.c_floor_FUN_005feb90  ; 00499846
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 0049984b
    MOV dword ptr [ESP + 0x18],EDX      ; 0049984f
    LEA ESI,[ESP + 0x8]                 ; 00499853
    FLD double ptr [ESP + 0x14]         ; 00499857
    ADD ESP,0x8                         ; 0049985b
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049985e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 00499863
    MOVSD ES:EDI,ESI                    ; 00499867
    MOVSD ES:EDI,ESI                    ; 00499868
    MOVSD ES:EDI,ESI                    ; 00499869
    MOV EAX,EBX                         ; 0049986a
    ADD ESP,0x14                        ; 0049986c
    POP EDI                             ; 0049986f
    POP EBX                             ; 00499870
    RET                                 ; 00499871

