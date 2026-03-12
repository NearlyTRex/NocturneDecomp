; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; Local Variables:
; int[1016]        Stack[-0x1004]:4064  aiStackY_1004
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; double           Stack[-0x10]:8  local_10
;
; XREF[7]:
;   core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0049a280 at 0049a2e5
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160 at 0049a1c4
;   core_particle.cpp_CParticle_process_FUN_00545760 at 0054581e
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 at 0054734c
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60 at 00546b0e
;   core_path.cpp_getOrCreatePathMap_FUN_00548390 at 005483d0
;   core_path.cpp_renderPathMapsAtPosition_FUN_00548680 at 0054869d
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499880
        ;   Label: core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
    PUSH EDI                            ; 00499881
    SUB ESP,0x14                        ; 00499882
    MOV EDI,dword ptr [ESP + 0x24]      ; 00499885
    MOV EBX,ESI                         ; 00499889
    MOV ESI,dword ptr [ESP + 0x20]      ; 0049988b
    FLD float ptr [EDI]                 ; 0049988f
    FSUB float ptr [ESI + 0x10]         ; 00499891
    FDIV float ptr [ESI + 0x34]         ; 00499894
    SUB ESP,0x8                         ; 00499897
    FSTP double ptr [ESP]               ; 0049989a
    CALL crt_math.c_floor_FUN_005feb90  ; 0049989d
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    FLD float ptr [EDI + 0x4]           ; 004998a2
    FSUB float ptr [ESI + 0x14]         ; 004998a5
    FDIV float ptr [ESI + 0x38]         ; 004998a8
    MOV dword ptr [ESP + 0x14],EAX      ; 004998ab
    MOV dword ptr [ESP + 0x18],EDX      ; 004998af
    FLD double ptr [ESP + 0x14]         ; 004998b3
    ADD ESP,0x8                         ; 004998b7
    CALL crt_math.c_round_FUN_005fe6b0  ; 004998ba
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 004998bf
    SUB ESP,0x8                         ; 004998c2
    FSTP double ptr [ESP]               ; 004998c5
    CALL crt_math.c_floor_FUN_005feb90  ; 004998c8
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    FLD float ptr [EDI + 0x8]           ; 004998cd
    FSUB float ptr [ESI + 0x18]         ; 004998d0
    FDIV float ptr [ESI + 0x3c]         ; 004998d3
    MOV dword ptr [ESP + 0x14],EAX      ; 004998d6
    MOV dword ptr [ESP + 0x18],EDX      ; 004998da
    FLD double ptr [ESP + 0x14]         ; 004998de
    ADD ESP,0x8                         ; 004998e2
    CALL crt_math.c_round_FUN_005fe6b0  ; 004998e5
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x4]         ; 004998ea
    SUB ESP,0x8                         ; 004998ee
    FSTP double ptr [ESP]               ; 004998f1
    MOV EDI,EBX                         ; 004998f4
    CALL crt_math.c_floor_FUN_005feb90  ; 004998f6
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 004998fb
    MOV dword ptr [ESP + 0x18],EDX      ; 004998ff
    LEA ESI,[ESP + 0x8]                 ; 00499903
    FLD double ptr [ESP + 0x14]         ; 00499907
    ADD ESP,0x8                         ; 0049990b
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049990e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 00499913
    MOVSD ES:EDI,ESI                    ; 00499917
    MOVSD ES:EDI,ESI                    ; 00499918
    MOVSD ES:EDI,ESI                    ; 00499919
    MOV EAX,EBX                         ; 0049991a
    ADD ESP,0x14                        ; 0049991c
    POP EDI                             ; 0049991f
    POP EBX                             ; 00499920
    RET                                 ; 00499921

