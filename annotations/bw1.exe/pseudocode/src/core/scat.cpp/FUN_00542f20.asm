; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_scat_cpp_FUN_00542f20(int param_1)
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
;   core_scat.cpp_FUN_00540df0 at 00541254
;
; Referenced Globals:
;   undefined4 DAT_01e7e04c
;
; Called Functions:
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_FUN_005b5930
;   core_xform.cpp_FUN_005b6270
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542f20
        ;   Label: core_scat.cpp_FUN_00542f20
    PUSH ESI                            ; 00542f21
    PUSH EDI                            ; 00542f22
    PUSH EBP                            ; 00542f23
    MOV EBP,ESP                         ; 00542f24
    SUB ESP,0x178                       ; 00542f26
    SUB EBP,0x7e                        ; 00542f2c
    MOV EBX,dword ptr [EBP + 0x92]      ; 00542f2f
    MOV EDX,dword ptr [EBX + 0x1ffc0]   ; 00542f35
    TEST EDX,EDX                        ; 00542f3b
    JZ 0x00542f48                       ; 00542f3d
        ;   XREF to: 00542f48 (CONDITIONAL_JUMP)  ; LAB_00542f48
    CMP dword ptr [EDX + 0x2e0],0x8     ; 00542f3f
    JNZ 0x00542f50                      ; 00542f46
        ;   XREF to: 00542f50 (CONDITIONAL_JUMP)  ; LAB_00542f50
    LEA ESP,[EBP + 0x7e]                ; 00542f48
        ;   Label: LAB_00542f48
    POP EBP                             ; 00542f4b
    POP EDI                             ; 00542f4c
    POP ESI                             ; 00542f4d
    POP EBX                             ; 00542f4e
    RET                                 ; 00542f4f
    MOV EDI,0x3fc90fdb                  ; 00542f50
        ;   Label: LAB_00542f50
    LEA EAX,[EBP + 0x26]                ; 00542f55
    MOV EDX,0x3ec817db                  ; 00542f58
    XOR ESI,ESI                         ; 00542f5d
    MOV ECX,0xbdd340d5                  ; 00542f5f
    MOV dword ptr [EBP + 0x3e],ESI      ; 00542f64
    MOV dword ptr [EBP + 0x46],EDI      ; 00542f67
    MOV dword ptr [EBP + 0x42],EDI      ; 00542f6a
    PUSH EAX                            ; 00542f6d
    LEA EDI,[EBP + 0x26]                ; 00542f6e
    LEA ESI,[EBP + 0x3e]                ; 00542f71
    LEA EAX,[EBP + 0x6e]                ; 00542f74
    MOV dword ptr [EBP + 0x6e],EDX      ; 00542f77
    PUSH EAX                            ; 00542f7a
    MOVSD ES:EDI,ESI                    ; 00542f7b
    MOVSD ES:EDI,ESI                    ; 00542f7c
    MOVSD ES:EDI,ESI                    ; 00542f7d
    LEA EAX,[EBP + 0xffffff36]          ; 00542f7e
    MOV ESI,0x3ddfa765                  ; 00542f84
    PUSH EAX                            ; 00542f89
    MOV dword ptr [EBP + 0x72],ECX      ; 00542f8a
    MOV dword ptr [EBP + 0x76],ESI      ; 00542f8d
    CALL core_xform.cpp_FUN_005b5760    ; 00542f90
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x01e7e04c]      ; 00542f95 | DAT_01e7e04c
    LEA EAX,[ESI*0x4 + 0x0]             ; 00542f9b
    SUB EAX,ESI                         ; 00542fa2
    SHL EAX,0x4                         ; 00542fa4
    LEA ESI,[EBX + 0xfd8]               ; 00542fa7
    ADD ESP,0xc                         ; 00542fad
    ADD EAX,ESI                         ; 00542fb0
    PUSH EAX                            ; 00542fb2
    LEA EAX,[EBP + 0xffffff36]          ; 00542fb3
    PUSH EAX                            ; 00542fb9
    LEA ESI,[EBP + -0x6a]               ; 00542fba
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00542fbd
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    ADD ESP,0x8                         ; 00542fc2
    LEA EAX,[EBX + 0x30]                ; 00542fc5
    LEA EDI,[EBP + -0xa]                ; 00542fc8
    PUSH EAX                            ; 00542fcb
    LEA EAX,[EBX + 0x20]                ; 00542fcc
    MOV ECX,0xc                         ; 00542fcf
    PUSH EAX                            ; 00542fd4
    LEA EAX,[EBP + 0xffffff66]          ; 00542fd5
    LEA ESI,[EBP + -0x6a]               ; 00542fdb
    PUSH EAX                            ; 00542fde
    MOVSD.REP ES:EDI,ESI                ; 00542fdf
    CALL core_xform.cpp_FUN_005b5760    ; 00542fe1
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00542fe6
    LEA EAX,[EBP + 0xffffff66]          ; 00542fe9
    PUSH EAX                            ; 00542fef
    LEA EAX,[EBP + -0xa]                ; 00542ff0
    PUSH EAX                            ; 00542ff3
    LEA ESI,[EBP + 0xffffff06]          ; 00542ff4
    LEA EDI,[EBP + -0x3a]               ; 00542ffa
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00542ffd
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00543002
    LEA ESI,[EBP + 0xffffff06]          ; 00543007
    MOVSD.REP ES:EDI,ESI                ; 0054300d
    MOV EBX,dword ptr [EBX + 0x1ffc0]   ; 0054300f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00543015
    ADD ESP,0x8                         ; 0054301b
    MOV dword ptr [EBP + 0x7a],EAX      ; 0054301e
    LEA EAX,[EBP + -0x3a]               ; 00543021
    PUSH EAX                            ; 00543024
    LEA ESI,[EBP + 0x56]                ; 00543025
    LEA EDI,[EBP + 0x4a]                ; 00543028
    CALL core_xform.cpp_FUN_005b5930    ; 0054302b
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5930()
    ADD ESP,0x4                         ; 00543030
    LEA EAX,[EBP + 0x4a]                ; 00543033
    LEA ESI,[EBP + 0x56]                ; 00543036
    PUSH EAX                            ; 00543039
    LEA EAX,[EBP + -0x3a]               ; 0054303a
    MOVSD ES:EDI,ESI                    ; 0054303d
    MOVSD ES:EDI,ESI                    ; 0054303e
    MOVSD ES:EDI,ESI                    ; 0054303f
    PUSH EAX                            ; 00543040
    LEA ESI,[EBP + 0x62]                ; 00543041
    CALL core_xform.cpp_FUN_005b6270    ; 00543044
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    ADD ESP,0x4                         ; 00543049
    LEA EAX,[EBP + 0x32]                ; 0054304c
    LEA EDI,[EBP + 0x32]                ; 0054304f
    PUSH EAX                            ; 00543052
    LEA ESI,[EBP + 0x62]                ; 00543053
    MOV EAX,dword ptr [EBP + 0x7a]      ; 00543056
    PUSH EBX                            ; 00543059
    MOVSD ES:EDI,ESI                    ; 0054305a
    MOVSD ES:EDI,ESI                    ; 0054305b
    MOVSD ES:EDI,ESI                    ; 0054305c
    CALL dword ptr [EAX + 0x68]         ; 0054305d
    ADD ESP,0xc                         ; 00543060
    LEA ESP,[EBP + 0x7e]                ; 00543063
    POP EBP                             ; 00543066
    POP EDI                             ; 00543067
    POP ESI                             ; 00543068
    POP EBX                             ; 00543069
    RET                                 ; 0054306a

