; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_updatePositionFromMaster_FUN_00502a70(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x4f      Stack[-0xdc]:48  local_dc
; CMatrix3x4f      Stack[-0xac]:48  local_ac
; CMatrix3x3f      Stack[-0x7c]:36  local_7c
; float            Stack[-0x50]:4  local_50
; CMatrix3x4f      Stack[-0x4c]:48  local_4c
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
; CVector3f        Stack[-0x10]:12  local_10
;
; XREF[1]:
;   core_ladder.cpp_CLadder_process_FUN_00502610 at 00502615
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502a70
        ;   Label: core_ladder.cpp_CLadder_updatePositionFromMaster_FUN_00502a70
    SUB ESP,0xd8                        ; 00502a71
    MOV EBX,dword ptr [ESP + 0xe0]      ; 00502a77
    CMP dword ptr [EBX + 0x2e0],0x0     ; 00502a7e
    JNZ 0x00502a8f                      ; 00502a85
        ;   XREF to: 00502a8f (CONDITIONAL_JUMP)  ; LAB_00502a8f
    ADD ESP,0xd8                        ; 00502a87
    POP EBX                             ; 00502a8d
    RET                                 ; 00502a8e
    PUSH EDI                            ; 00502a8f
        ;   Label: LAB_00502a8f
    PUSH ESI                            ; 00502a90
    LEA EAX,[EBX + 0x2f0]               ; 00502a91
    PUSH EAX                            ; 00502a97
    LEA EAX,[EBX + 0x2e4]               ; 00502a98
    PUSH EAX                            ; 00502a9e
    LEA EAX,[ESP + 0x10]                ; 00502a9f
    PUSH EAX                            ; 00502aa3
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 00502aa4
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 00502aa9
    ADD ESP,0xc                         ; 00502aaf
    LEA EDX,[EAX + 0x30]                ; 00502ab2
    PUSH EDX                            ; 00502ab5
    ADD EAX,0x20                        ; 00502ab6
    PUSH EAX                            ; 00502ab9
    LEA EAX,[ESP + 0x40]                ; 00502aba
    PUSH EAX                            ; 00502abe
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 00502abf
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00502ac4
    LEA EAX,[ESP + 0x38]                ; 00502ac7
    PUSH EAX                            ; 00502acb
    LEA EAX,[ESP + 0xc]                 ; 00502acc
    PUSH EAX                            ; 00502ad0
    LEA ESI,[ESP + 0xa0]                ; 00502ad1
    LEA EDI,[ESP + 0x70]                ; 00502ad8
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 00502adc
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00502ae1
    LEA ESI,[ESP + 0xa0]                ; 00502ae6
    ADD ESP,0x8                         ; 00502aed
    MOVSD.REP ES:EDI,ESI                ; 00502af0
    MOV EAX,dword ptr [ESP + 0x74]      ; 00502af2
    MOV dword ptr [ESP + 0xc8],EAX      ; 00502af6
    MOV EAX,dword ptr [ESP + 0x84]      ; 00502afd
    MOV dword ptr [ESP + 0xcc],EAX      ; 00502b04
    MOV EAX,dword ptr [ESP + 0x94]      ; 00502b0b
    LEA EDX,[EBX + 0x20]                ; 00502b12
    MOV dword ptr [ESP + 0xd0],EAX      ; 00502b15
    MOV EAX,dword ptr [ESP + 0x74]      ; 00502b1c
    MOV dword ptr [EDX],EAX             ; 00502b20
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00502b22
    MOV dword ptr [EDX + 0x4],EAX       ; 00502b29
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00502b2c
    MOV dword ptr [EDX + 0x8],EAX       ; 00502b33
    LEA EAX,[ESP + 0xd4]                ; 00502b36
    PUSH EAX                            ; 00502b3d
    LEA EAX,[ESP + 0x6c]                ; 00502b3e
    PUSH EAX                            ; 00502b42
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 00502b43
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    LEA EDX,[EBX + 0x30]                ; 00502b48
    ADD ESP,0x8                         ; 00502b4b
    CMP EDX,EAX                         ; 00502b4e
    JZ 0x00502b62                       ; 00502b50
        ;   XREF to: 00502b62 (CONDITIONAL_JUMP)  ; LAB_00502b62
    MOV ECX,dword ptr [EAX]             ; 00502b52
    MOV dword ptr [EDX],ECX             ; 00502b54
    MOV ECX,dword ptr [EAX + 0x4]       ; 00502b56
    MOV dword ptr [EDX + 0x4],ECX       ; 00502b59
    MOV ECX,dword ptr [EAX + 0x8]       ; 00502b5c
    MOV dword ptr [EDX + 0x8],ECX       ; 00502b5f
    PUSH EBX                            ; 00502b62
        ;   Label: LAB_00502b62
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 00502b63
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00502b68
    POP ESI                             ; 00502b6b
    POP EDI                             ; 00502b6c
    ADD ESP,0xd8                        ; 00502b6d
    POP EBX                             ; 00502b73
    RET                                 ; 00502b74

