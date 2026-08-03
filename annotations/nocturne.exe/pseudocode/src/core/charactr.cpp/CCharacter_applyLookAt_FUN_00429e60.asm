; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00429e60(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_charactr.cpp_FUN_0042a150 at 0042a15f
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_0057a316
;   TerminatedCString s_CCharacter_applyLookAt_n_0057a32b
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_xform.cpp_multiplyQuaternion_FUN_0055d130
;   core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0
;   core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0
;   core_xform.cpp_slerpQuaternion_FUN_0055d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429e60
        ;   Label: core_charactr.cpp_CCharacter_applyLookAt_FUN_00429e60
    SUB ESP,0x70                        ; 00429e61
    MOV EBX,dword ptr [ESP + 0x78]      ; 00429e64
    FLD float ptr [EBX + 0x25d8]        ; 00429e68
    FLDZ                                ; 00429e6e
    FCOMPP                              ; 00429e70
    FNSTSW AX                           ; 00429e72
    SAHF                                ; 00429e74
    JNC 0x00429f2b                      ; 00429e75
        ;   XREF to: 00429f2b (CONDITIONAL_JUMP)  ; LAB_00429f2b
    PUSH EDI                            ; 00429e7b
    PUSH ESI                            ; 00429e7c
    CMP dword ptr [EBX + 0x25dc],0x0    ; 00429e7d
    JL 0x00429f30                       ; 00429e84
        ;   XREF to: 00429f30 (CONDITIONAL_JUMP)  ; LAB_00429f30
    PUSH dword ptr [EBX + 0x25d4]       ; 00429e8a
        ;   Label: LAB_00429e8a
    LEA ESI,[ESP + 0x5c]                ; 00429e90
    LEA EDI,[ESP + 0x3c]                ; 00429e94
    CALL core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0 ; 00429e98
        ;   XREF to: 0055d4a0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x5c]                ; 00429e9d
    ADD ESP,0x4                         ; 00429ea1
    MOVSD ES:EDI,ESI                    ; 00429ea4
    MOVSD ES:EDI,ESI                    ; 00429ea5
    MOVSD ES:EDI,ESI                    ; 00429ea6
    MOVSD ES:EDI,ESI                    ; 00429ea7
    LEA ESI,[ESP + 0x38]                ; 00429ea8
    PUSH ESI                            ; 00429eac
    PUSH dword ptr [EBX + 0x25d0]       ; 00429ead
    LEA ESI,[ESP + 0x70]                ; 00429eb3
    LEA EDI,[ESP + 0x30]                ; 00429eb7
    CALL core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0 ; 00429ebb
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0()
    LEA ESI,[ESP + 0x70]                ; 00429ec0
    ADD ESP,0x4                         ; 00429ec4
    MOVSD ES:EDI,ESI                    ; 00429ec7
    MOVSD ES:EDI,ESI                    ; 00429ec8
    MOVSD ES:EDI,ESI                    ; 00429ec9
    MOVSD ES:EDI,ESI                    ; 00429eca
    LEA ESI,[ESP + 0x2c]                ; 00429ecb
    PUSH ESI                            ; 00429ecf
    LEA ESI,[ESP + 0x10]                ; 00429ed0
    LEA EDI,[ESP + 0x20]                ; 00429ed4
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 00429ed8
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    LEA ESI,[ESP + 0x10]                ; 00429edd
    ADD ESP,0x8                         ; 00429ee1
    MOVSD ES:EDI,ESI                    ; 00429ee4
    MOVSD ES:EDI,ESI                    ; 00429ee5
    MOVSD ES:EDI,ESI                    ; 00429ee6
    MOVSD ES:EDI,ESI                    ; 00429ee7
    LEA ESI,[ESP + 0x18]                ; 00429ee8
    PUSH dword ptr [EBX + 0x25d8]       ; 00429eec
    PUSH ESI                            ; 00429ef2
    MOV ESI,dword ptr [EBX + 0x25dc]    ; 00429ef3
    LEA EAX,[EBX + 0x800]               ; 00429ef9
    SHL ESI,0x4                         ; 00429eff
    ADD ESI,EAX                         ; 00429f02
    PUSH ESI                            ; 00429f04
    LEA ESI,[ESP + 0x54]                ; 00429f05
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 00429f09
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    MOV ESI,dword ptr [EBX + 0x25dc]    ; 00429f0e
    SHL ESI,0x4                         ; 00429f14
    LEA EDI,[ESI + EBX*0x1 + 0x800]     ; 00429f17
    LEA ESI,[ESP + 0x54]                ; 00429f1e
    ADD ESP,0xc                         ; 00429f22
    MOVSD ES:EDI,ESI                    ; 00429f25
    MOVSD ES:EDI,ESI                    ; 00429f26
    MOVSD ES:EDI,ESI                    ; 00429f27
    MOVSD ES:EDI,ESI                    ; 00429f28
    POP ESI                             ; 00429f29
    POP EDI                             ; 00429f2a
    ADD ESP,0x70                        ; 00429f2b
        ;   Label: LAB_00429f2b
    POP EBX                             ; 00429f2e
    RET                                 ; 00429f2f
    PUSH EBX                            ; 00429f30
        ;   Label: LAB_00429f30
    MOV ECX,0x57a316                    ; 00429f31 | = "..\\core\\charactr.cpp"
    MOV ESI,0xdf9                       ; 00429f36
    PUSH 0x57a32b                       ; 00429f3b | = "CCharacter::applyLookAt - never set l..."
    MOV dword ptr [0x01cc4800],ECX      ; 00429f40 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00429f46 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00429f4c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 00429f51
    JMP 0x00429e8a                      ; 00429f54
        ;   XREF to: 00429e8a (UNCONDITIONAL_JUMP)  ; LAB_00429e8a

