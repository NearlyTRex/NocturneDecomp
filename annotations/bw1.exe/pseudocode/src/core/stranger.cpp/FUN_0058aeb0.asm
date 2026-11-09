; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_FUN_0058aeb0(CStranger *this_ptr,int hand_index)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; undefined        Stack[-0x128]:1  local_128
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x14]:1  local_14
;
; XREF[3]:
;   core_stranger.cpp_FUN_00585b00 at 00586676
;   core_stranger.cpp_FUN_0058e3c0 at 0058e617
;   core_stranger.cpp_FUN_005914a0 at 0059174c
;
; Called Functions:
;   core_stranger.cpp_FUN_0058afe0
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_FUN_005b5930
;   core_xform.cpp_FUN_005b6270
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058aeb0
        ;   Label: core_stranger.cpp_FUN_0058aeb0
    PUSH EBP                            ; 0058aeb1
    SUB ESP,0x120                       ; 0058aeb2
    MOV EBX,dword ptr [ESP + 0x12c]     ; 0058aeb8
    MOV EDX,dword ptr [EBX + 0x20004]   ; 0058aebf
    TEST EDX,EDX                        ; 0058aec5
    JZ 0x0058afd2                       ; 0058aec7
        ;   XREF to: 0058afd2 (CONDITIONAL_JUMP)  ; LAB_0058afd2
    CMP EDX,dword ptr [EBX + 0x25b0]    ; 0058aecd
    JZ 0x0058afd2                       ; 0058aed3
        ;   XREF to: 0058afd2 (CONDITIONAL_JUMP)  ; LAB_0058afd2
    CMP EDX,dword ptr [EBX + 0x2628]    ; 0058aed9
    JZ 0x0058afd2                       ; 0058aedf
        ;   XREF to: 0058afd2 (CONDITIONAL_JUMP)  ; LAB_0058afd2
    PUSH EDI                            ; 0058aee5
    PUSH ESI                            ; 0058aee6
    MOV EBP,dword ptr [ESP + 0x138]     ; 0058aee7
    MOV ESI,0x1                         ; 0058aeee
    TEST EBP,EBP                        ; 0058aef3
    JZ 0x0058aef9                       ; 0058aef5
        ;   XREF to: 0058aef9 (CONDITIONAL_JUMP)  ; LAB_0058aef9
    XOR ESI,ESI                         ; 0058aef7
    PUSH ESI                            ; 0058aef9
        ;   Label: LAB_0058aef9
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0058aefa
    PUSH EAX                            ; 0058af00
    PUSH EBX                            ; 0058af01
    LEA ESI,[ESP + 0x14]                ; 0058af02
    LEA EDI,[ESP + 0x74]                ; 0058af06
    CALL core_stranger.cpp_FUN_0058afe0 ; 0058af0a
        ;   XREF to: 0058afe0 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_0058afe0()
    MOV ECX,0xc                         ; 0058af0f
    LEA ESI,[ESP + 0x14]                ; 0058af14
    ADD ESP,0xc                         ; 0058af18
    MOVSD.REP ES:EDI,ESI                ; 0058af1b
    LEA ESI,[EBX + 0x30]                ; 0058af1d
    PUSH ESI                            ; 0058af20
    LEA ESI,[EBX + 0x20]                ; 0058af21
    PUSH ESI                            ; 0058af24
    LEA ESI,[ESP + 0xa0]                ; 0058af25
    PUSH ESI                            ; 0058af2c
    CALL core_xform.cpp_FUN_005b5760    ; 0058af2d
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0058af32
    LEA ESI,[ESP + 0x98]                ; 0058af35
    PUSH ESI                            ; 0058af3c
    LEA ESI,[ESP + 0x6c]                ; 0058af3d
    PUSH ESI                            ; 0058af41
    LEA ESI,[ESP + 0xd0]                ; 0058af42
    LEA EDI,[ESP + 0x40]                ; 0058af49
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0058af4d
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0058af52
    LEA ESI,[ESP + 0xd0]                ; 0058af57
    ADD ESP,0x8                         ; 0058af5e
    MOVSD.REP ES:EDI,ESI                ; 0058af61
    LEA ESI,[ESP + 0x38]                ; 0058af63
    LEA EDI,[ESP + 0x104]               ; 0058af67
    MOV EBX,dword ptr [EBX + 0x20004]   ; 0058af6e
    PUSH ESI                            ; 0058af74
    LEA ESI,[ESP + 0xfc]                ; 0058af75
    MOV EBP,dword ptr [EBX + 0x154]     ; 0058af7c
    CALL core_xform.cpp_FUN_005b5930    ; 0058af82
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5930()
    LEA ESI,[ESP + 0xfc]                ; 0058af87
    ADD ESP,0x4                         ; 0058af8e
    MOVSD ES:EDI,ESI                    ; 0058af91
    MOVSD ES:EDI,ESI                    ; 0058af92
    MOVSD ES:EDI,ESI                    ; 0058af93
    LEA ESI,[ESP + 0x104]               ; 0058af94
    PUSH ESI                            ; 0058af9b
    LEA ESI,[ESP + 0x3c]                ; 0058af9c
    PUSH ESI                            ; 0058afa0
    LEA ESI,[ESP + 0x124]               ; 0058afa1
    LEA EDI,[ESP + 0x118]               ; 0058afa8
    CALL core_xform.cpp_FUN_005b6270    ; 0058afaf
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    LEA ESI,[ESP + 0x124]               ; 0058afb4
    ADD ESP,0x4                         ; 0058afbb
    MOVSD ES:EDI,ESI                    ; 0058afbe
    MOVSD ES:EDI,ESI                    ; 0058afbf
    MOVSD ES:EDI,ESI                    ; 0058afc0
    LEA ESI,[ESP + 0x114]               ; 0058afc1
    PUSH ESI                            ; 0058afc8
    PUSH EBX                            ; 0058afc9
    CALL dword ptr [EBP + 0x68]         ; 0058afca
    ADD ESP,0xc                         ; 0058afcd
    POP ESI                             ; 0058afd0
    POP EDI                             ; 0058afd1
    ADD ESP,0x120                       ; 0058afd2
        ;   Label: LAB_0058afd2
    POP EBP                             ; 0058afd8
    POP EBX                             ; 0058afd9
    RET                                 ; 0058afda

