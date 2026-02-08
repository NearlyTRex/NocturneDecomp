; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_tentacle_cpp_CTentacle_FUN_005db9d0(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1cc]:1  local_1cc
; undefined1       Stack[-0x19c]:1  local_19c
; undefined1       Stack[-0x16c]:1  local_16c
; undefined1       Stack[-0x13c]:1  local_13c
; undefined1       Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0xac]:1  local_ac
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x4c]:1  local_4c
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042ded0
;   core_tentacle.cpp_CTentacle_FUN_005dbb70
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_getTranslation_FUN_005f6110
;   core_xform.cpp_lerpMatrix3x4_FUN_005f7140
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005db9d0
        ;   Label: core_tentacle.cpp_CTentacle_FUN_005db9d0
    SUB ESP,0x1c8                       ; 005db9d1
    MOV EBX,dword ptr [ESP + 0x1d0]     ; 005db9d7
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 005db9de
    CMP EAX,dword ptr [EBX + 0xbe3c]    ; 005db9e5
    JZ 0x005db9f7                       ; 005db9eb
        ;   XREF to: 005db9f7 (CONDITIONAL_JUMP)  ; LAB_005db9f7
    XOR EAX,EAX                         ; 005db9ed
    ADD ESP,0x1c8                       ; 005db9ef
    POP EBX                             ; 005db9f5
    RET                                 ; 005db9f6
    PUSH EDI                            ; 005db9f7
        ;   Label: LAB_005db9f7
    PUSH ESI                            ; 005db9f8
    LEA EAX,[EBX + 0xbefc]              ; 005db9f9
    PUSH dword ptr [EBX + 0xbec8]       ; 005db9ff
    PUSH EAX                            ; 005dba05
    LEA EAX,[EBX + 0xbecc]              ; 005dba06
    PUSH EAX                            ; 005dba0c
    LEA ESI,[ESP + 0x14]                ; 005dba0d
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 005dba11
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    ADD ESP,0xc                         ; 005dba16
    LEA EAX,[EBX + 0x30]                ; 005dba19
    LEA EDI,[ESP + 0x68]                ; 005dba1c
    PUSH EAX                            ; 005dba20
    LEA EAX,[EBX + 0x20]                ; 005dba21
    MOV ECX,0xc                         ; 005dba24
    PUSH EAX                            ; 005dba29
    LEA EAX,[ESP + 0xa0]                ; 005dba2a
    LEA ESI,[ESP + 0x10]                ; 005dba31
    PUSH EAX                            ; 005dba35
    MOVSD.REP ES:EDI,ESI                ; 005dba36
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005dba38
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005dba3d
    LEA EAX,[ESP + 0x98]                ; 005dba40
    PUSH EAX                            ; 005dba47
    PUSH EBX                            ; 005dba48
    LEA ESI,[ESP + 0x190]               ; 005dba49
    LEA EDI,[ESP + 0x100]               ; 005dba50
    CALL core_tentacle.cpp_CTentacle_FUN_005dbb70 ; 005dba57
        ;   XREF to: 005dbb70 (UNCONDITIONAL_CALL)  ; void core_tentacle.cpp_CTentacle_FUN_005dbb70(CTentacle * this_ptr)
    MOV ECX,0xc                         ; 005dba5c
    ADD ESP,0x4                         ; 005dba61
    LEA EAX,[ESP + 0xfc]                ; 005dba64
    LEA ESI,[ESP + 0x18c]               ; 005dba6b
    PUSH EAX                            ; 005dba72
    LEA EAX,[ESP + 0x70]                ; 005dba73
    MOVSD.REP ES:EDI,ESI                ; 005dba77
    PUSH EAX                            ; 005dba79
    LEA ESI,[ESP + 0x164]               ; 005dba7a
    LEA EDI,[ESP + 0x44]                ; 005dba81
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005dba85
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005dba8a
    LEA ESI,[ESP + 0x164]               ; 005dba8f
    ADD ESP,0x8                         ; 005dba96
    LEA EAX,[ESP + 0x3c]                ; 005dba99
    MOVSD.REP ES:EDI,ESI                ; 005dba9d
    PUSH EAX                            ; 005dba9f
    LEA ESI,[ESP + 0x130]               ; 005dbaa0
    LEA EDI,[ESP + 0xd0]                ; 005dbaa7
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005dbaae
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 005dbab3
    LEA EAX,[ESP + 0x1c4]               ; 005dbab6
    MOV ECX,0xc                         ; 005dbabd
    PUSH EAX                            ; 005dbac2
    LEA EAX,[ESP + 0xcc]                ; 005dbac3
    LEA ESI,[ESP + 0x12c]               ; 005dbaca
    PUSH EAX                            ; 005dbad1
    MOVSD.REP ES:EDI,ESI                ; 005dbad2
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 005dbad4
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005dbad9
    FLD float ptr [EAX]                 ; 005dbadf
    ADD ESP,0x8                         ; 005dbae1
    FSTP float ptr [EDX + 0x20]         ; 005dbae4
    MOV ECX,dword ptr [EAX + 0x4]       ; 005dbae7
    MOV dword ptr [EDX + 0x24],ECX      ; 005dbaea
    FLD float ptr [EAX + 0x8]           ; 005dbaed
    LEA EAX,[ESP + 0x1b8]               ; 005dbaf0
    PUSH EAX                            ; 005dbaf7
    LEA EAX,[ESP + 0xcc]                ; 005dbaf8
    PUSH EAX                            ; 005dbaff
    FSTP float ptr [EDX + 0x28]         ; 005dbb00
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 005dbb03
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 005dbb08
    PUSH EAX                            ; 005dbb0b
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005dbb0c
    PUSH ECX                            ; 005dbb12
    CALL core_charactr.cpp_CCharacter_FUN_0042ded0 ; 005dbb13
        ;   XREF to: 0042ded0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042ded0(CCharacter * this_ptr)
    MOV EAX,0x1                         ; 005dbb18
    ADD ESP,0x8                         ; 005dbb1d
    POP ESI                             ; 005dbb20
    POP EDI                             ; 005dbb21
    ADD ESP,0x1c8                       ; 005dbb22
    POP EBX                             ; 005dbb28
    RET                                 ; 005dbb29

