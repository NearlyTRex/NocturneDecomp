; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_tentacle_cpp_CTentacle_attractActorToward_FUN_00595d40(CTentacle *this_ptr,CDemonActor *actor,CVector3f *target_local_point)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CVector3f *      Stack[0xc]:4   target_local_point
;
; Called Functions:
;   core_charactr.cpp_FUN_00433d50
;   core_tentacle.cpp_FUN_00595f10
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_FUN_005b6270
;   core_xform.cpp_lerpMatrix3x4_FUN_005b72c0
;   core_xform.cpp_matrixToEulerAngles_FUN_005b5930
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595d40
        ;   Label: core_tentacle.cpp_CTentacle_attractActorToward_FUN_00595d40
    SUB ESP,0x1e0                       ; 00595d41
    MOV EBX,dword ptr [ESP + 0x1e8]     ; 00595d47
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00595d4e
    CMP EAX,dword ptr [EBX + 0xc1e8]    ; 00595d55
    JZ 0x00595d67                       ; 00595d5b
        ;   XREF to: 00595d67 (CONDITIONAL_JUMP)  ; LAB_00595d67
    XOR EAX,EAX                         ; 00595d5d
    ADD ESP,0x1e0                       ; 00595d5f
    POP EBX                             ; 00595d65
    RET                                 ; 00595d66
    PUSH EDI                            ; 00595d67
        ;   Label: LAB_00595d67
    PUSH ESI                            ; 00595d68
    LEA EAX,[EBX + 0xc2a8]              ; 00595d69
    PUSH dword ptr [EBX + 0xc274]       ; 00595d6f
    PUSH EAX                            ; 00595d75
    LEA EAX,[EBX + 0xc278]              ; 00595d76
    PUSH EAX                            ; 00595d7c
    LEA ESI,[ESP + 0x134]               ; 00595d7d
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005b72c0 ; 00595d84
        ;   XREF to: 005b72c0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_005b72c0()
    ADD ESP,0xc                         ; 00595d89
    LEA EAX,[EBX + 0x30]                ; 00595d8c
    LEA EDI,[ESP + 0x68]                ; 00595d8f
    PUSH EAX                            ; 00595d93
    LEA EAX,[EBX + 0x20]                ; 00595d94
    MOV ECX,0xc                         ; 00595d97
    PUSH EAX                            ; 00595d9c
    LEA EAX,[ESP + 0xa0]                ; 00595d9d
    LEA ESI,[ESP + 0x130]               ; 00595da4
    PUSH EAX                            ; 00595dab
    MOVSD.REP ES:EDI,ESI                ; 00595dac
    CALL core_xform.cpp_FUN_005b5760    ; 00595dae
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00595db3
    LEA EAX,[ESP + 0x98]                ; 00595db6
    PUSH EAX                            ; 00595dbd
    PUSH EBX                            ; 00595dbe
    LEA ESI,[ESP + 0x40]                ; 00595dbf
    LEA EDI,[ESP + 0x100]               ; 00595dc3
    CALL core_tentacle.cpp_FUN_00595f10 ; 00595dca
        ;   XREF to: 00595f10 (UNCONDITIONAL_CALL)  ; undefined core_tentacle.cpp_FUN_00595f10()
    MOV ECX,0xc                         ; 00595dcf
    ADD ESP,0x4                         ; 00595dd4
    LEA EAX,[ESP + 0xfc]                ; 00595dd7
    LEA ESI,[ESP + 0x3c]                ; 00595dde
    PUSH EAX                            ; 00595de2
    LEA EAX,[ESP + 0x70]                ; 00595de3
    MOVSD.REP ES:EDI,ESI                ; 00595de7
    PUSH EAX                            ; 00595de9
    LEA ESI,[ESP + 0x194]               ; 00595dea
    LEA EDI,[ESP + 0x14]                ; 00595df1
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00595df5
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00595dfa
    LEA ESI,[ESP + 0x194]               ; 00595dff
    ADD ESP,0x8                         ; 00595e06
    LEA EAX,[ESP + 0xc]                 ; 00595e09
    MOVSD.REP ES:EDI,ESI                ; 00595e0d
    PUSH EAX                            ; 00595e0f
    LEA ESI,[ESP + 0x160]               ; 00595e10
    LEA EDI,[ESP + 0xd0]                ; 00595e17
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00595e1e
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00595e23
    LEA ESI,[ESP + 0x160]               ; 00595e28
    ADD ESP,0x8                         ; 00595e2f
    LEA EAX,[ESP + 0xc8]                ; 00595e32
    MOVSD.REP ES:EDI,ESI                ; 00595e39
    PUSH EAX                            ; 00595e3b
    LEA ESI,[ESP + 0x1e0]               ; 00595e3c
    LEA EDI,[ESP + 0x1c8]               ; 00595e43
    CALL core_xform.cpp_FUN_005b6270    ; 00595e4a
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    LEA ESI,[ESP + 0x1e0]               ; 00595e4f
    ADD ESP,0x4                         ; 00595e56
    MOVSD ES:EDI,ESI                    ; 00595e59
    MOVSD ES:EDI,ESI                    ; 00595e5a
    MOVSD ES:EDI,ESI                    ; 00595e5b
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00595e5c
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00595e62
    MOV dword ptr [EDX + 0x20],EAX      ; 00595e69
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 00595e6c
    MOV dword ptr [EDX + 0x24],EAX      ; 00595e73
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00595e76
    MOV dword ptr [EDX + 0x28],EAX      ; 00595e7d
    LEA EAX,[ESP + 0xc8]                ; 00595e80
    PUSH EAX                            ; 00595e87
    LEA ESI,[ESP + 0x1d4]               ; 00595e88
    LEA EDI,[ESP + 0x1bc]               ; 00595e8f
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 00595e96
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    LEA ESI,[ESP + 0x1d4]               ; 00595e9b
    ADD ESP,0x4                         ; 00595ea2
    LEA EAX,[ESP + 0x1b8]               ; 00595ea5
    MOVSD ES:EDI,ESI                    ; 00595eac
    MOVSD ES:EDI,ESI                    ; 00595ead
    MOVSD ES:EDI,ESI                    ; 00595eae
    PUSH EAX                            ; 00595eaf
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 00595eb0
    PUSH ECX                            ; 00595eb6
    CALL core_charactr.cpp_FUN_00433d50 ; 00595eb7
        ;   XREF to: 00433d50 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433d50()
    MOV EAX,0x1                         ; 00595ebc
    ADD ESP,0x8                         ; 00595ec1
    POP ESI                             ; 00595ec4
    POP EDI                             ; 00595ec5
    ADD ESP,0x1e0                       ; 00595ec6
    POP EBX                             ; 00595ecc
    RET                                 ; 00595ecd

