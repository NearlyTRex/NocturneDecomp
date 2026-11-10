; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_scat_cpp_FUN_00520df0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x188]:1  local_188
; undefined        Stack[-0x158]:1  local_158
; undefined        Stack[-0x128]:1  local_128
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_scat.cpp_CScat_process_FUN_0051ecc0 at 0051f124
;
; Referenced Globals:
;   undefined4 DAT_01e620a0
;
; Called Functions:
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_FUN_00592720
;   core_xform.cpp_matrixToEulerAngles_FUN_00591de0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520df0
        ;   Label: core_scat.cpp_FUN_00520df0
    PUSH ESI                            ; 00520df1
    PUSH EDI                            ; 00520df2
    PUSH EBP                            ; 00520df3
    MOV EBP,ESP                         ; 00520df4
    SUB ESP,0x178                       ; 00520df6
    SUB EBP,0x7e                        ; 00520dfc
    MOV EBX,dword ptr [EBP + 0x92]      ; 00520dff
    MOV EDX,dword ptr [EBX + 0x25654]   ; 00520e05
    TEST EDX,EDX                        ; 00520e0b
    JZ 0x00520e18                       ; 00520e0d
        ;   XREF to: 00520e18 (CONDITIONAL_JUMP)  ; LAB_00520e18
    CMP dword ptr [EDX + 0x43c],0x9     ; 00520e0f
    JNZ 0x00520e20                      ; 00520e16
        ;   XREF to: 00520e20 (CONDITIONAL_JUMP)  ; LAB_00520e20
    LEA ESP,[EBP + 0x7e]                ; 00520e18
        ;   Label: LAB_00520e18
    POP EBP                             ; 00520e1b
    POP EDI                             ; 00520e1c
    POP ESI                             ; 00520e1d
    POP EBX                             ; 00520e1e
    RET                                 ; 00520e1f
    MOV EDI,0x3fc90fdb                  ; 00520e20
        ;   Label: LAB_00520e20
    LEA EAX,[EBP + 0x26]                ; 00520e25
    MOV EDX,0x3ec817db                  ; 00520e28
    XOR ESI,ESI                         ; 00520e2d
    MOV ECX,0xbdd340d5                  ; 00520e2f
    MOV dword ptr [EBP + 0x3e],ESI      ; 00520e34
    MOV dword ptr [EBP + 0x46],EDI      ; 00520e37
    MOV dword ptr [EBP + 0x42],EDI      ; 00520e3a
    PUSH EAX                            ; 00520e3d
    LEA EDI,[EBP + 0x26]                ; 00520e3e
    LEA ESI,[EBP + 0x3e]                ; 00520e41
    LEA EAX,[EBP + 0x6e]                ; 00520e44
    MOV dword ptr [EBP + 0x6e],EDX      ; 00520e47
    PUSH EAX                            ; 00520e4a
    MOVSD ES:EDI,ESI                    ; 00520e4b
    MOVSD ES:EDI,ESI                    ; 00520e4c
    MOVSD ES:EDI,ESI                    ; 00520e4d
    LEA EAX,[EBP + 0xffffff36]          ; 00520e4e
    MOV ESI,0x3ddfa765                  ; 00520e54
    PUSH EAX                            ; 00520e59
    MOV dword ptr [EBP + 0x72],ECX      ; 00520e5a
    MOV dword ptr [EBP + 0x76],ESI      ; 00520e5d
    CALL core_xform.cpp_FUN_00591c10    ; 00520e60
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    MOV ESI,dword ptr [0x01e620a0]      ; 00520e65 | DAT_01e620a0
    LEA EAX,[ESI*0x4 + 0x0]             ; 00520e6b
    SUB EAX,ESI                         ; 00520e72
    SHL EAX,0x4                         ; 00520e74
    LEA ESI,[EBX + 0x1134]              ; 00520e77
    ADD ESP,0xc                         ; 00520e7d
    ADD EAX,ESI                         ; 00520e80
    PUSH EAX                            ; 00520e82
    LEA EAX,[EBP + 0xffffff36]          ; 00520e83
    PUSH EAX                            ; 00520e89
    LEA ESI,[EBP + -0x6a]               ; 00520e8a
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00520e8d
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    ADD ESP,0x8                         ; 00520e92
    LEA EAX,[EBX + 0x30]                ; 00520e95
    LEA EDI,[EBP + -0xa]                ; 00520e98
    PUSH EAX                            ; 00520e9b
    LEA EAX,[EBX + 0x20]                ; 00520e9c
    MOV ECX,0xc                         ; 00520e9f
    PUSH EAX                            ; 00520ea4
    LEA EAX,[EBP + 0xffffff66]          ; 00520ea5
    LEA ESI,[EBP + -0x6a]               ; 00520eab
    PUSH EAX                            ; 00520eae
    MOVSD.REP ES:EDI,ESI                ; 00520eaf
    CALL core_xform.cpp_FUN_00591c10    ; 00520eb1
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 00520eb6
    LEA EAX,[EBP + 0xffffff66]          ; 00520eb9
    PUSH EAX                            ; 00520ebf
    LEA EAX,[EBP + -0xa]                ; 00520ec0
    PUSH EAX                            ; 00520ec3
    LEA ESI,[EBP + 0xffffff06]          ; 00520ec4
    LEA EDI,[EBP + -0x3a]               ; 00520eca
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00520ecd
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00520ed2
    LEA ESI,[EBP + 0xffffff06]          ; 00520ed7
    MOVSD.REP ES:EDI,ESI                ; 00520edd
    MOV EBX,dword ptr [EBX + 0x25654]   ; 00520edf
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00520ee5
    ADD ESP,0x8                         ; 00520eeb
    MOV dword ptr [EBP + 0x7a],EAX      ; 00520eee
    LEA EAX,[EBP + -0x3a]               ; 00520ef1
    PUSH EAX                            ; 00520ef4
    LEA ESI,[EBP + 0x56]                ; 00520ef5
    LEA EDI,[EBP + 0x4a]                ; 00520ef8
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00591de0 ; 00520efb
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00591de0()
    ADD ESP,0x4                         ; 00520f00
    LEA EAX,[EBP + 0x4a]                ; 00520f03
    LEA ESI,[EBP + 0x56]                ; 00520f06
    PUSH EAX                            ; 00520f09
    LEA EAX,[EBP + -0x3a]               ; 00520f0a
    MOVSD ES:EDI,ESI                    ; 00520f0d
    MOVSD ES:EDI,ESI                    ; 00520f0e
    MOVSD ES:EDI,ESI                    ; 00520f0f
    PUSH EAX                            ; 00520f10
    LEA ESI,[EBP + 0x62]                ; 00520f11
    CALL core_xform.cpp_FUN_00592720    ; 00520f14
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    ADD ESP,0x4                         ; 00520f19
    LEA EAX,[EBP + 0x32]                ; 00520f1c
    LEA EDI,[EBP + 0x32]                ; 00520f1f
    PUSH EAX                            ; 00520f22
    LEA ESI,[EBP + 0x62]                ; 00520f23
    MOV EAX,dword ptr [EBP + 0x7a]      ; 00520f26
    PUSH EBX                            ; 00520f29
    MOVSD ES:EDI,ESI                    ; 00520f2a
    MOVSD ES:EDI,ESI                    ; 00520f2b
    MOVSD ES:EDI,ESI                    ; 00520f2c
    CALL dword ptr [EAX + 0x70]         ; 00520f2d
    ADD ESP,0xc                         ; 00520f30
    LEA ESP,[EBP + 0x7e]                ; 00520f33
    POP EBP                             ; 00520f36
    POP EDI                             ; 00520f37
    POP ESI                             ; 00520f38
    POP EBX                             ; 00520f39
    RET                                 ; 00520f3a

