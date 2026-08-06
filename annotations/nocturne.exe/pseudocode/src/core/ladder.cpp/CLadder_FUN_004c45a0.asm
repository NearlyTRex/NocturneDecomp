; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_FUN_004c45a0(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_ladder.cpp_CLadder_process_FUN_004c4360 at 004c4365
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c45a0
        ;   Label: core_ladder.cpp_CLadder_FUN_004c45a0
    SUB ESP,0xd8                        ; 004c45a1
    MOV EBX,dword ptr [ESP + 0xe0]      ; 004c45a7
    CMP dword ptr [EBX + 0x2d8],0x0     ; 004c45ae
    JNZ 0x004c45bf                      ; 004c45b5
        ;   XREF to: 004c45bf (CONDITIONAL_JUMP)  ; LAB_004c45bf
    ADD ESP,0xd8                        ; 004c45b7
    POP EBX                             ; 004c45bd
    RET                                 ; 004c45be
    PUSH EDI                            ; 004c45bf
        ;   Label: LAB_004c45bf
    PUSH ESI                            ; 004c45c0
    LEA EAX,[EBX + 0x2e8]               ; 004c45c1
    PUSH EAX                            ; 004c45c7
    LEA EAX,[EBX + 0x2dc]               ; 004c45c8
    PUSH EAX                            ; 004c45ce
    LEA EAX,[ESP + 0x10]                ; 004c45cf
    PUSH EAX                            ; 004c45d3
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004c45d4
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 004c45d9
    ADD ESP,0xc                         ; 004c45df
    LEA EDX,[EAX + 0x30]                ; 004c45e2
    PUSH EDX                            ; 004c45e5
    ADD EAX,0x20                        ; 004c45e6
    PUSH EAX                            ; 004c45e9
    LEA EAX,[ESP + 0x40]                ; 004c45ea
    PUSH EAX                            ; 004c45ee
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004c45ef
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004c45f4
    LEA EAX,[ESP + 0x38]                ; 004c45f7
    PUSH EAX                            ; 004c45fb
    LEA EAX,[ESP + 0xc]                 ; 004c45fc
    PUSH EAX                            ; 004c4600
    LEA ESI,[ESP + 0xa0]                ; 004c4601
    LEA EDI,[ESP + 0x70]                ; 004c4608
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004c460c
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004c4611
    LEA ESI,[ESP + 0xa0]                ; 004c4616
    ADD ESP,0x8                         ; 004c461d
    MOVSD.REP ES:EDI,ESI                ; 004c4620
    MOV EAX,dword ptr [ESP + 0x74]      ; 004c4622
    MOV dword ptr [ESP + 0xc8],EAX      ; 004c4626
    MOV EAX,dword ptr [ESP + 0x84]      ; 004c462d
    MOV dword ptr [ESP + 0xcc],EAX      ; 004c4634
    MOV EAX,dword ptr [ESP + 0x94]      ; 004c463b
    LEA EDX,[EBX + 0x20]                ; 004c4642
    MOV dword ptr [ESP + 0xd0],EAX      ; 004c4645
    MOV EAX,dword ptr [ESP + 0x74]      ; 004c464c
    MOV dword ptr [EDX],EAX             ; 004c4650
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004c4652
    MOV dword ptr [EDX + 0x4],EAX       ; 004c4659
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004c465c
    MOV dword ptr [EDX + 0x8],EAX       ; 004c4663
    LEA EAX,[ESP + 0xd4]                ; 004c4666
    PUSH EAX                            ; 004c466d
    LEA EAX,[ESP + 0x6c]                ; 004c466e
    PUSH EAX                            ; 004c4672
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 004c4673
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    LEA EDX,[EBX + 0x30]                ; 004c4678
    ADD ESP,0x8                         ; 004c467b
    CMP EDX,EAX                         ; 004c467e
    JZ 0x004c4692                       ; 004c4680
        ;   XREF to: 004c4692 (CONDITIONAL_JUMP)  ; LAB_004c4692
    MOV ECX,dword ptr [EAX]             ; 004c4682
    MOV dword ptr [EDX],ECX             ; 004c4684
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c4686
    MOV dword ptr [EDX + 0x4],ECX       ; 004c4689
    MOV ECX,dword ptr [EAX + 0x8]       ; 004c468c
    MOV dword ptr [EDX + 0x8],ECX       ; 004c468f
    PUSH EBX                            ; 004c4692
        ;   Label: LAB_004c4692
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 004c4693
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c4698
    POP ESI                             ; 004c469b
    POP EDI                             ; 004c469c
    ADD ESP,0xd8                        ; 004c469d
    POP EBX                             ; 004c46a3
    RET                                 ; 004c46a4

