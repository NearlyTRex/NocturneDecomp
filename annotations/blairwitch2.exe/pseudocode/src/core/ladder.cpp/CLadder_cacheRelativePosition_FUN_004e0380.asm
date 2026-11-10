; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_cacheRelativePosition_FUN_004e0380(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xfc]:1  local_fc
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xd0]:4  local_d0
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_ladder.cpp_CLadder_archive_FUN_004e0190 at 004e01db
;
; Called Functions:
;   core_xform.cpp_FUN_00591ad0
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_matrixToEulerAngles_FUN_00591de0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0380
        ;   Label: core_ladder.cpp_CLadder_cacheRelativePosition_FUN_004e0380
    PUSH ESI                            ; 004e0381
    PUSH EDI                            ; 004e0382
    SUB ESP,0xf0                        ; 004e0383
    MOV EBX,dword ptr [ESP + 0x100]     ; 004e0389
    CMP dword ptr [EBX + 0x43c],0x0     ; 004e0390
    JNZ 0x004e03a3                      ; 004e0397
        ;   XREF to: 004e03a3 (CONDITIONAL_JUMP)  ; LAB_004e03a3
    ADD ESP,0xf0                        ; 004e0399
        ;   Label: LAB_004e0399
    POP EDI                             ; 004e039f
    POP ESI                             ; 004e03a0
    POP EBX                             ; 004e03a1
    RET                                 ; 004e03a2
    LEA EAX,[EBX + 0x30]                ; 004e03a3
        ;   Label: LAB_004e03a3
    PUSH EAX                            ; 004e03a6
    LEA EAX,[EBX + 0x20]                ; 004e03a7
    PUSH EAX                            ; 004e03aa
    LEA EAX,[ESP + 0x38]                ; 004e03ab
    PUSH EAX                            ; 004e03af
    CALL core_xform.cpp_FUN_00591c10    ; 004e03b0
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    MOV EAX,dword ptr [EBX + 0x43c]     ; 004e03b5
    ADD ESP,0xc                         ; 004e03bb
    LEA EDX,[EAX + 0x30]                ; 004e03be
    PUSH EDX                            ; 004e03c1
    ADD EAX,0x20                        ; 004e03c2
    PUSH EAX                            ; 004e03c5
    LEA EAX,[ESP + 0x68]                ; 004e03c6
    PUSH EAX                            ; 004e03ca
    CALL core_xform.cpp_FUN_00591ad0    ; 004e03cb
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00591ad0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004e03d0
    LEA EAX,[ESP + 0x60]                ; 004e03d3
    PUSH EAX                            ; 004e03d7
    LEA EAX,[ESP + 0x34]                ; 004e03d8
    PUSH EAX                            ; 004e03dc
    LEA ESI,[ESP + 0x98]                ; 004e03dd
    LEA EDI,[ESP + 0x8]                 ; 004e03e4
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004e03e8
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004e03ed
    LEA ESI,[ESP + 0x98]                ; 004e03f2
    ADD ESP,0x8                         ; 004e03f9
    MOVSD.REP ES:EDI,ESI                ; 004e03fc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e03fe
    LEA EDX,[EBX + 0x440]               ; 004e0402
    MOV dword ptr [ESP + 0xd8],EAX      ; 004e0408
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e040f
    LEA EDI,[ESP + 0xcc]                ; 004e0413
    MOV dword ptr [ESP + 0xdc],EAX      ; 004e041a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e0421
    LEA ESI,[ESP + 0xd8]                ; 004e0425
    MOV dword ptr [ESP + 0xe0],EAX      ; 004e042c
    LEA EAX,[ESP + 0xcc]                ; 004e0433
    MOVSD ES:EDI,ESI                    ; 004e043a
    MOVSD ES:EDI,ESI                    ; 004e043b
    MOVSD ES:EDI,ESI                    ; 004e043c
    CMP EDX,EAX                         ; 004e043d
    JZ 0x004e045e                       ; 004e043f
        ;   XREF to: 004e045e (CONDITIONAL_JUMP)  ; LAB_004e045e
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004e0441
    MOV dword ptr [EDX],EAX             ; 004e0448
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004e044a
    MOV dword ptr [EDX + 0x4],EAX       ; 004e0451
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004e0454
    MOV dword ptr [EDX + 0x8],EAX       ; 004e045b
    MOV EAX,ESP                         ; 004e045e
        ;   Label: LAB_004e045e
    LEA ESI,[ESP + 0xc0]                ; 004e0460
    PUSH EAX                            ; 004e0467
    LEA EDI,[ESP + 0xe8]                ; 004e0468
    ADD EBX,0x44c                       ; 004e046f
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00591de0 ; 004e0475
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00591de0()
    LEA ESI,[ESP + 0xc4]                ; 004e047a
    ADD ESP,0x4                         ; 004e0481
    LEA EAX,[ESP + 0xe4]                ; 004e0484
    MOVSD ES:EDI,ESI                    ; 004e048b
    MOVSD ES:EDI,ESI                    ; 004e048c
    MOVSD ES:EDI,ESI                    ; 004e048d
    CMP EBX,EAX                         ; 004e048e
    JZ 0x004e0399                       ; 004e0490
        ;   XREF to: 004e0399 (CONDITIONAL_JUMP)  ; LAB_004e0399
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004e0496
    MOV dword ptr [EBX],EAX             ; 004e049d
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004e049f
    MOV dword ptr [EBX + 0x4],EAX       ; 004e04a6
    MOV EAX,dword ptr [ESP + 0xec]      ; 004e04a9
    MOV dword ptr [EBX + 0x8],EAX       ; 004e04b0
    ADD ESP,0xf0                        ; 004e04b3
    POP EDI                             ; 004e04b9
    POP ESI                             ; 004e04ba
    POP EBX                             ; 004e04bb
    RET                                 ; 004e04bc

