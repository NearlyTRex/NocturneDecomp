; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00427bc0(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x1c8]:1  local_1c8
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00425da0 at 00427150
;
; Referenced Globals:
;   undefined4 s_s_can_t_pick_up_s_sombod_005b7ce6+1
;   TerminatedCString s_s_can_t_pick_up_s_giving_005b7d19
;   TerminatedCString s_s_beginning_to_pickup_s_005b7d39
;   TerminatedCString s_core_carved_cpp_005b7d54
;   TerminatedCString s_Invalid_demon_townsfolk_005b7d67
;   TerminatedCString s_CBodyPart_005b7d8d
;   TerminatedCString s_s_is_going_to_try_to_pic_005b7d97
;   undefined4 DAT_005b7dbf
;   undefined4 DAT_005b7dc7
;   undefined4 DAT_005b7dcf
;   undefined4 DAT_005b7dd7
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_00603b28
;   undefined4 DAT_007f7ea4
;   undefined4 DAT_01d71de0
;   ... and 6 more
;
; Called Functions:
;   FUN_00408b80
;   FUN_0040c790
;   FUN_0040ce40
;   FUN_0040cea0
;   FUN_00416bd0
;   FUN_00416c50
;   FUN_004257e0
;   FUN_00428520
;   FUN_004285c0
;   FUN_00429090
;   FUN_0042b9e0
;   FUN_00441ff0
;   FUN_004e4330
;   FUN_004fc0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427bc0
        ;   Label: FUN_00427bc0
    PUSH ESI                            ; 00427bc1
    PUSH EDI                            ; 00427bc2
    PUSH EBP                            ; 00427bc3
    MOV EBP,ESP                         ; 00427bc4
    SUB ESP,0x224                       ; 00427bc6
    AND ESP,0xfffffff8                  ; 00427bcc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427bcf
    CMP dword ptr [EAX + 0xd0b4],0x0    ; 00427bd2
    JL 0x00427c3d                       ; 00427bd9
        ;   XREF to: 00427c3d (CONDITIONAL_JUMP)  ; LAB_00427c3d
    FLD float ptr [EAX + 0xd05c]        ; 00427bdb
    FSUB float ptr [EBP + 0x18]         ; 00427be1
    FST float ptr [EAX + 0xd05c]        ; 00427be4
    FLDZ                                ; 00427bea
    FCOMPP                              ; 00427bec
    FNSTSW AX                           ; 00427bee
    SAHF                                ; 00427bf0
    JC 0x00427c46                       ; 00427bf1
        ;   XREF to: 00427c46 (CONDITIONAL_JUMP)  ; LAB_00427c46
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427bf3
        ;   Label: LAB_00427bf3
    MOV EBX,dword ptr [EAX + 0x25b0]    ; 00427bf6
    TEST EBX,EBX                        ; 00427bfc
    JNZ 0x00427c3d                      ; 00427bfe
        ;   XREF to: 00427c3d (CONDITIONAL_JUMP)  ; LAB_00427c3d
    MOV ESI,dword ptr [EAX + 0x2628]    ; 00427c00
    TEST ESI,ESI                        ; 00427c06
    JNZ 0x00427c3d                      ; 00427c08
        ;   XREF to: 00427c3d (CONDITIONAL_JUMP)  ; LAB_00427c3d
    FLD float ptr [EAX + 0xd060]        ; 00427c0a
    FLDZ                                ; 00427c10
    FCOMPP                              ; 00427c12
    FNSTSW AX                           ; 00427c14
    SAHF                                ; 00427c16
    JNC 0x00427c84                      ; 00427c17
        ;   XREF to: 00427c84 (CONDITIONAL_JUMP)  ; LAB_00427c84
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427c19
    FLD float ptr [EAX + 0xd060]        ; 00427c1c
    FSUB float ptr [EBP + 0x18]         ; 00427c22
    FST float ptr [EAX + 0xd060]        ; 00427c25
    FLDZ                                ; 00427c2b
    FCOMPP                              ; 00427c2d
    FNSTSW AX                           ; 00427c2f
    SAHF                                ; 00427c31
    JBE 0x00427c3d                      ; 00427c32
        ;   XREF to: 00427c3d (CONDITIONAL_JUMP)  ; LAB_00427c3d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427c34
    MOV dword ptr [EAX + 0xd060],EBX    ; 00427c37
    XOR EAX,EAX                         ; 00427c3d
        ;   Label: LAB_00427c3d
    MOV ESP,EBP                         ; 00427c3f
    POP EBP                             ; 00427c41
    POP EDI                             ; 00427c42
    POP ESI                             ; 00427c43
    POP EBX                             ; 00427c44
    RET                                 ; 00427c45
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427c46
        ;   Label: LAB_00427c46
    MOV ECX,dword ptr [EAX + 0xd058]    ; 00427c49
    PUSH 0x41200000                     ; 00427c4f
    INC ECX                             ; 00427c54
    PUSH 0x40a00000                     ; 00427c55
    MOV dword ptr [EAX + 0xd058],ECX    ; 00427c5a
    CALL FUN_0040ce40                   ; 00427c60
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x228],EAX     ; 00427c65
    FLD float ptr [ESP + 0x228]         ; 00427c6c
    ADD ESP,0x8                         ; 00427c73
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427c76
    FSTP float ptr [EAX + 0xd05c]       ; 00427c79
    JMP 0x00427bf3                      ; 00427c7f
        ;   XREF to: 00427bf3 (UNCONDITIONAL_JUMP)  ; LAB_00427bf3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427c84
        ;   Label: LAB_00427c84
    MOV EBX,dword ptr [EBP + 0x14]      ; 00427c87
    MOV EDI,dword ptr [EAX + 0xd064]    ; 00427c8a
    ADD EBX,0x20                        ; 00427c90
    TEST EDI,EDI                        ; 00427c93
    JNZ 0x00427d2b                      ; 00427c95
        ;   XREF to: 00427d2b (CONDITIONAL_JUMP)  ; LAB_00427d2b
    LEA EAX,[ESP + 0x70]                ; 00427c9b
    MOV dword ptr [ESP + 0x208],ESI     ; 00427c9f
    MOV dword ptr [ESP + 0x218],ESI     ; 00427ca6
    MOV dword ptr [ESP + 0x20c],EBX     ; 00427cad
    MOV dword ptr [ESP + 0x214],ESI     ; 00427cb4
    ADD EAX,0xc                         ; 00427cbb
    MOV dword ptr [ESP + 0x21c],ESI     ; 00427cbe
    MOV dword ptr [ESP + 0x210],EAX     ; 00427cc5
    MOV EAX,[0x00603b28]                ; 00427ccc | DAT_00603b28
        ;   Label: LAB_00427ccc
    MOV EBX,dword ptr [ESP + 0x218]     ; 00427cd1
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 00427cd8 | DAT_02024a2c
    JGE 0x004284a0                      ; 00427cde
        ;   XREF to: 004284a0 (CONDITIONAL_JUMP)  ; LAB_004284a0
    ADD EAX,dword ptr [ESP + 0x214]     ; 00427ce4
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 00427ceb | DAT_02024a30
    PUSH EBX                            ; 00427cf1
    MOV EAX,dword ptr [EBX + 0x154]     ; 00427cf2
    CALL dword ptr [EAX + 0x94]         ; 00427cf8
    ADD ESP,0x4                         ; 00427cfe
    TEST EAX,EAX                        ; 00427d01
    JZ 0x004282c9                       ; 00427d03
        ;   XREF to: 004282c9 (CONDITIONAL_JUMP)  ; LAB_004282c9
    MOV ECX,dword ptr [ESP + 0x218]     ; 00427d09
        ;   Label: LAB_00427d09
    MOV EDX,dword ptr [ESP + 0x214]     ; 00427d10
    INC ECX                             ; 00427d17
    ADD EDX,0x4                         ; 00427d18
    MOV dword ptr [ESP + 0x218],ECX     ; 00427d1b
    MOV dword ptr [ESP + 0x214],EDX     ; 00427d22
    JMP 0x00427ccc                      ; 00427d29
        ;   XREF to: 00427ccc (UNCONDITIONAL_JUMP)  ; LAB_00427ccc
    PUSH EDI                            ; 00427d2b
        ;   Label: LAB_00427d2b
    MOV ESI,dword ptr [EDI + 0x154]     ; 00427d2c
    CALL dword ptr [ESI + 0x94]         ; 00427d32
    ADD ESP,0x4                         ; 00427d38
    TEST EAX,EAX                        ; 00427d3b
    JNZ 0x0042803e                      ; 00427d3d
        ;   XREF to: 0042803e (CONDITIONAL_JUMP)  ; LAB_0042803e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427d43
    MOV EAX,dword ptr [EAX + 0xd064]    ; 00427d46
    FLD float ptr [EBX]                 ; 00427d4c
    FSUB float ptr [EAX + 0x20]         ; 00427d4e
    FMUL ST0                            ; 00427d51
    FLD float ptr [EBX + 0x8]           ; 00427d53
    FSUB float ptr [EAX + 0x28]         ; 00427d56
    FMUL ST0                            ; 00427d59
    FADDP                               ; 00427d5b
    FSQRT                               ; 00427d5d
    FMUL double ptr [0x005b7dbf]        ; 00427d5f | DAT_005b7dbf
    FSUBR double ptr [0x005b7dc7]       ; 00427d65 | DAT_005b7dc7
    FST float ptr [ESP + 0x4]           ; 00427d6b
    FLD1                                ; 00427d6f
    FCOMPP                              ; 00427d71
    FNSTSW AX                           ; 00427d73
    SAHF                                ; 00427d75
    JBE 0x00427d80                      ; 00427d76
        ;   XREF to: 00427d80 (CONDITIONAL_JUMP)  ; LAB_00427d80
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 00427d78
    FLD float ptr [EBP + 0x18]          ; 00427d80
        ;   Label: LAB_00427d80
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427d83
    FMUL float ptr [ESP + 0x4]          ; 00427d86
    MOV EDI,dword ptr [EAX + 0xd068]    ; 00427d8a
    PUSH EDI                            ; 00427d90
    FADD float ptr [EAX + 0xd060]       ; 00427d91
    PUSH EAX                            ; 00427d97
    FSTP float ptr [EAX + 0xd060]       ; 00427d98
    CALL FUN_00428520                   ; 00427d9e
        ;   XREF to: 00428520 (UNCONDITIONAL_CALL)  ; undefined FUN_00428520()
    ADD ESP,0x8                         ; 00427da3
    MOV ESI,0xffffffff                  ; 00427da6
    MOV dword ptr [ESP + 0x200],EAX     ; 00427dab
    TEST EAX,EAX                        ; 00427db2
    JL 0x00428024                       ; 00427db4
        ;   XREF to: 00428024 (CONDITIONAL_JUMP)  ; LAB_00428024
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427dba
    FLD float ptr [EAX + 0xd060]        ; 00427dbd
    FLDZ                                ; 00427dc3
    FCOMPP                              ; 00427dc5
    FNSTSW AX                           ; 00427dc7
    SAHF                                ; 00427dc9
    JBE 0x00428024                      ; 00427dca
        ;   XREF to: 00428024 (CONDITIONAL_JUMP)  ; LAB_00428024
    MOV EDX,dword ptr [EBP + 0x14]      ; 00427dd0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427dd3
    PUSH EDX                            ; 00427dd6
    MOV EAX,dword ptr [EAX + 0xd064]    ; 00427dd7
    PUSH EAX                            ; 00427ddd
    MOV EBX,dword ptr [EAX + 0x154]     ; 00427dde
    CALL dword ptr [EBX + 0x84]         ; 00427de4
    ADD ESP,0x8                         ; 00427dea
    CMP EAX,0x3                         ; 00427ded
    JNZ 0x00428024                      ; 00427df0
        ;   XREF to: 00428024 (CONDITIONAL_JUMP)  ; LAB_00428024
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427df6
    MOV ECX,dword ptr [EAX + 0xd068]    ; 00427df9
    PUSH ECX                            ; 00427dff
    PUSH EAX                            ; 00427e00
    CALL FUN_004285c0                   ; 00427e01
        ;   XREF to: 004285c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004285c0()
    ADD ESP,0x8                         ; 00427e06
    TEST EAX,EAX                        ; 00427e09
    JZ 0x00428024                       ; 00427e0b
        ;   XREF to: 00428024 (CONDITIONAL_JUMP)  ; LAB_00428024
    MOV ESI,dword ptr [EBP + 0x14]      ; 00427e11
    MOV ESI,dword ptr [ESI + 0xd068]    ; 00427e14
    CMP ESI,0x2                         ; 00427e1a
    JNC 0x004281b0                      ; 00427e1d
        ;   XREF to: 004281b0 (CONDITIONAL_JUMP)  ; LAB_004281b0
    CMP ESI,0x1                         ; 00427e23
    JNZ 0x004281bf                      ; 00427e26
        ;   XREF to: 004281bf (CONDITIONAL_JUMP)  ; LAB_004281bf
    MOV EBX,dword ptr [EBP + 0x14]      ; 00427e2c
        ;   Label: LAB_00427e2c
    MOV EBX,dword ptr [EBX + 0xd064]    ; 00427e2f
    PUSH EBX                            ; 00427e35
    MOV EAX,dword ptr [EBX + 0x154]     ; 00427e36
    LEA ESI,[ESP + 0xbc]                ; 00427e3c
    LEA EDI,[ESP + 0x8c]                ; 00427e43
    CALL dword ptr [EAX + 0x1c]         ; 00427e4a
    MOV ECX,0x6                         ; 00427e4d
    ADD ESP,0x4                         ; 00427e52
    LEA EAX,[ESP + 0x1f8]               ; 00427e55
    LEA ESI,[ESP + 0xb8]                ; 00427e5c
    PUSH EAX                            ; 00427e63
    MOVSD.REP ES:EDI,ESI                ; 00427e64
    LEA EAX,[ESP + 0x98]                ; 00427e66
    MOV EDI,0x3f000000                  ; 00427e6d
    PUSH EAX                            ; 00427e72
    LEA EAX,[ESP + 0x90]                ; 00427e73
    LEA ESI,[ESP + 0x1bc]               ; 00427e7a
    PUSH EAX                            ; 00427e81
    MOV dword ptr [ESP + 0x204],EDI     ; 00427e82
    LEA EDI,[ESP + 0x19c]               ; 00427e89
    CALL FUN_00416c50                   ; 00427e90
        ;   XREF to: 00416c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00416c50()
    LEA ESI,[ESP + 0x1c0]               ; 00427e95
    ADD ESP,0x8                         ; 00427e9c
    LEA EAX,[ESP + 0x194]               ; 00427e9f
    MOVSD ES:EDI,ESI                    ; 00427ea6
    MOVSD ES:EDI,ESI                    ; 00427ea7
    MOVSD ES:EDI,ESI                    ; 00427ea8
    PUSH EAX                            ; 00427ea9
    LEA ESI,[ESP + 0x1ec]               ; 00427eaa
    LEA EDI,[ESP + 0x150]               ; 00427eb1
    CALL FUN_00416bd0                   ; 00427eb8
        ;   XREF to: 00416bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00416bd0()
    LEA ESI,[ESP + 0x1ec]               ; 00427ebd
    ADD ESP,0x8                         ; 00427ec4
    LEA EAX,[ESP + 0x1cc]               ; 00427ec7
    FLD float ptr [ESP + 0x90]          ; 00427ece
    MOVSD ES:EDI,ESI                    ; 00427ed5
    MOVSD ES:EDI,ESI                    ; 00427ed6
    MOVSD ES:EDI,ESI                    ; 00427ed7
    PUSH EAX                            ; 00427ed8
    LEA EDI,[ESP + 0x1d0]               ; 00427ed9
    LEA ESI,[ESP + 0x14c]               ; 00427ee0
    FADD double ptr [0x005b7dcf]        ; 00427ee7 | DAT_005b7dcf
    PUSH EBX                            ; 00427eed
    FSTP float ptr [ESP + 0x158]        ; 00427eee
    MOVSD ES:EDI,ESI                    ; 00427ef5
    MOVSD ES:EDI,ESI                    ; 00427ef6
    MOVSD ES:EDI,ESI                    ; 00427ef7
    LEA EBX,[ESP + 0x1e0]               ; 00427ef8
    LEA ESI,[ESP + 0xfc]                ; 00427eff
    LEA EDI,[ESP + 0x1c8]               ; 00427f06
    CALL FUN_00408b80                   ; 00427f0d
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0xfc]                ; 00427f12
    ADD ESP,0x8                         ; 00427f19
    LEA EAX,[ESP + 0x1c0]               ; 00427f1c
    MOVSD ES:EDI,ESI                    ; 00427f23
    MOVSD ES:EDI,ESI                    ; 00427f24
    MOVSD ES:EDI,ESI                    ; 00427f25
    CMP EBX,EAX                         ; 00427f26
    JZ 0x00427f54                       ; 00427f28
        ;   XREF to: 00427f54 (CONDITIONAL_JUMP)  ; LAB_00427f54
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00427f2a
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00427f31
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00427f38
    MOV dword ptr [ESP + 0x1dc],EAX     ; 00427f3f
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 00427f46
    MOV dword ptr [ESP + 0x1e0],EAX     ; 00427f4d
        ;   Label: LAB_00427f4d
    LEA EDI,[ESP + 0x118]               ; 00427f54
        ;   Label: LAB_00427f54
    MOV ESI,0x2cfd900                   ; 00427f5b
    MOV EAX,dword ptr [ESP + 0x200]     ; 00427f60
    MOVSD ES:EDI,ESI                    ; 00427f67 | DAT_02cfd900
    MOVSD ES:EDI,ESI                    ; 00427f68 | DAT_02cfd904
    MOVSD ES:EDI,ESI                    ; 00427f69 | DAT_02cfd908
    TEST EAX,EAX                        ; 00427f6a
    JNZ 0x00427fb1                      ; 00427f6c
        ;   XREF to: 00427fb1 (CONDITIONAL_JUMP)  ; LAB_00427fb1
    MOV EDX,0xbfc00000                  ; 00427f6e
    LEA EBX,[ESP + 0x118]               ; 00427f73
    MOV dword ptr [ESP + 0x134],EAX     ; 00427f7a
    MOV dword ptr [ESP + 0x138],EAX     ; 00427f81
    LEA EAX,[ESP + 0x130]               ; 00427f88
    MOV dword ptr [ESP + 0x130],EDX     ; 00427f8f
    CMP EBX,EAX                         ; 00427f96
    JZ 0x00427fb1                       ; 00427f98
        ;   XREF to: 00427fb1 (CONDITIONAL_JUMP)  ; LAB_00427fb1
    XOR EDI,EDI                         ; 00427f9a
    MOV dword ptr [ESP + 0x118],EDX     ; 00427f9c
    MOV dword ptr [ESP + 0x11c],EDI     ; 00427fa3
    MOV dword ptr [ESP + 0x120],EDI     ; 00427faa
    CMP dword ptr [ESP + 0x200],0x1     ; 00427fb1
        ;   Label: LAB_00427fb1
    JNZ 0x00428000                      ; 00427fb9
        ;   XREF to: 00428000 (CONDITIONAL_JUMP)  ; LAB_00428000
    MOV ECX,0x3fc00000                  ; 00427fbb
    XOR EBX,EBX                         ; 00427fc0
    LEA EAX,[ESP + 0x118]               ; 00427fc2
    MOV dword ptr [ESP + 0x158],EBX     ; 00427fc9
    MOV dword ptr [ESP + 0x15c],EBX     ; 00427fd0
    LEA EBX,[ESP + 0x154]               ; 00427fd7
    MOV dword ptr [ESP + 0x154],ECX     ; 00427fde
    CMP EAX,EBX                         ; 00427fe5
    JZ 0x00428000                       ; 00427fe7
        ;   XREF to: 00428000 (CONDITIONAL_JUMP)  ; LAB_00428000
    XOR EAX,EAX                         ; 00427fe9
    MOV dword ptr [ESP + 0x118],ECX     ; 00427feb
    MOV dword ptr [ESP + 0x11c],EAX     ; 00427ff2
    MOV dword ptr [ESP + 0x120],EAX     ; 00427ff9
    PUSH 0x0                            ; 00428000
        ;   Label: LAB_00428000
    LEA EAX,[ESP + 0x11c]               ; 00428002
    PUSH 0x0                            ; 00428009
    PUSH EAX                            ; 0042800b
    PUSH 0x0                            ; 0042800c
    LEA EAX,[ESP + 0x1e8]               ; 0042800e
    PUSH EAX                            ; 00428015
    MOV ECX,dword ptr [EBP + 0x14]      ; 00428016
    PUSH ECX                            ; 00428019
    CALL FUN_0042b9e0                   ; 0042801a
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b9e0()
    ADD ESP,0x18                        ; 0042801f
    MOV ESI,EAX                         ; 00428022
    TEST ESI,ESI                        ; 00428024
        ;   Label: LAB_00428024
    JL 0x004281f5                       ; 00428026
        ;   XREF to: 004281f5 (CONDITIONAL_JUMP)  ; LAB_004281f5
    JG 0x0042825f                       ; 0042802c
        ;   XREF to: 0042825f (CONDITIONAL_JUMP)  ; LAB_0042825f
    MOV EAX,0x1                         ; 00428032
    MOV ESP,EBP                         ; 00428037
    POP EBP                             ; 00428039
    POP EDI                             ; 0042803a
    POP ESI                             ; 0042803b
    POP EBX                             ; 0042803c
    RET                                 ; 0042803d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042803e
        ;   Label: LAB_0042803e
    MOV EDX,dword ptr [EAX + 0xd064]    ; 00428041
    PUSH EDX                            ; 00428047
    PUSH EAX                            ; 00428048
    PUSH 0x5b7ce7                       ; 00428049 | s_s_can_t_pick_up_s_sombod_005b7ce6+1
    MOV EBX,dword ptr [0x005f1690]      ; 0042804e | PTR_DAT_005f1690
    PUSH EBX                            ; 00428054 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 00428055
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0x10                        ; 0042805a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042805d
    MOV dword ptr [EAX + 0xd064],0x0    ; 00428060
    PUSH EAX                            ; 0042806a
    MOV dword ptr [EAX + 0xd060],0x0    ; 0042806b
    CALL FUN_00429090                   ; 00428075
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined FUN_00429090()
    ADD ESP,0x4                         ; 0042807a
    XOR EAX,EAX                         ; 0042807d
    MOV ESP,EBP                         ; 0042807f
    POP EBP                             ; 00428081
    POP EDI                             ; 00428082
    POP ESI                             ; 00428083
    POP EBX                             ; 00428084
    RET                                 ; 00428085
    MOV EBX,dword ptr [EBP + 0x14]      ; 00428086
        ;   Label: LAB_00428086
    MOV EBX,dword ptr [EBX + 0xd064]    ; 00428089
    PUSH EBX                            ; 0042808f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00428090
    LEA ESI,[ESP + 0xd4]                ; 00428096
    LEA EDI,[ESP + 0xa4]                ; 0042809d
    CALL dword ptr [EAX + 0x1c]         ; 004280a4
    MOV ECX,0x6                         ; 004280a7
    ADD ESP,0x4                         ; 004280ac
    LEA EAX,[ESP + 0x1f4]               ; 004280af
    LEA ESI,[ESP + 0xd0]                ; 004280b6
    PUSH EAX                            ; 004280bd
    MOVSD.REP ES:EDI,ESI                ; 004280be
    LEA EAX,[ESP + 0xb0]                ; 004280c0
    MOV ESI,0x3f000000                  ; 004280c7
    PUSH EAX                            ; 004280cc
    LEA EAX,[ESP + 0xa8]                ; 004280cd
    MOV dword ptr [ESP + 0x1fc],ESI     ; 004280d4
    PUSH EAX                            ; 004280db
    LEA ESI,[ESP + 0x178]               ; 004280dc
    LEA EDI,[ESP + 0x1b4]               ; 004280e3
    CALL FUN_00416c50                   ; 004280ea
        ;   XREF to: 00416c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00416c50()
    LEA ESI,[ESP + 0x178]               ; 004280ef
    ADD ESP,0x8                         ; 004280f6
    LEA EAX,[ESP + 0x1ac]               ; 004280f9
    MOVSD ES:EDI,ESI                    ; 00428100
    MOVSD ES:EDI,ESI                    ; 00428101
    MOVSD ES:EDI,ESI                    ; 00428102
    PUSH EAX                            ; 00428103
    LEA ESI,[ESP + 0x114]               ; 00428104
    LEA EDI,[ESP + 0x12c]               ; 0042810b
    CALL FUN_00416bd0                   ; 00428112
        ;   XREF to: 00416bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00416bd0()
    LEA ESI,[ESP + 0x114]               ; 00428117
    ADD ESP,0x8                         ; 0042811e
    LEA EAX,[ESP + 0x100]               ; 00428121
    FLD float ptr [ESP + 0xa8]          ; 00428128
    MOVSD ES:EDI,ESI                    ; 0042812f
    MOVSD ES:EDI,ESI                    ; 00428130
    MOVSD ES:EDI,ESI                    ; 00428131
    PUSH EAX                            ; 00428132
    LEA EDI,[ESP + 0x104]               ; 00428133
    LEA ESI,[ESP + 0x128]               ; 0042813a
    FADD double ptr [0x005b7dcf]        ; 00428141 | DAT_005b7dcf
    PUSH EBX                            ; 00428147
    FSTP float ptr [ESP + 0x134]        ; 00428148
    MOVSD ES:EDI,ESI                    ; 0042814f
    MOVSD ES:EDI,ESI                    ; 00428150
    MOVSD ES:EDI,ESI                    ; 00428151
    LEA EBX,[ESP + 0x168]               ; 00428152
    LEA ESI,[ESP + 0x144]               ; 00428159
    LEA EDI,[ESP + 0x168]               ; 00428160
    CALL FUN_00408b80                   ; 00428167
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x144]               ; 0042816c
    ADD ESP,0x8                         ; 00428173
    LEA EAX,[ESP + 0x1d8]               ; 00428176
    MOVSD ES:EDI,ESI                    ; 0042817d
    MOVSD ES:EDI,ESI                    ; 0042817e
    MOVSD ES:EDI,ESI                    ; 0042817f
    CMP EAX,EBX                         ; 00428180
    JZ 0x00427f54                       ; 00428182
        ;   XREF to: 00427f54 (CONDITIONAL_JUMP)  ; LAB_00427f54
    MOV EAX,dword ptr [ESP + 0x160]     ; 00428188
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0042818f
    MOV EAX,dword ptr [ESP + 0x164]     ; 00428196
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0042819d
    MOV EAX,dword ptr [ESP + 0x168]     ; 004281a4
    JMP 0x00427f4d                      ; 004281ab
        ;   XREF to: 00427f4d (UNCONDITIONAL_JUMP)  ; LAB_00427f4d
    JBE 0x00428086                      ; 004281b0
        ;   XREF to: 00428086 (CONDITIONAL_JUMP)  ; LAB_00428086
        ;   Label: LAB_004281b0
    CMP ESI,0x3                         ; 004281b6
    JZ 0x00427e2c                       ; 004281b9
        ;   XREF to: 00427e2c (CONDITIONAL_JUMP)  ; LAB_00427e2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004281bf
        ;   Label: LAB_004281bf
    MOV EBX,dword ptr [EBX + 0xd064]    ; 004281c2
    LEA EAX,[ESP + 0x1d8]               ; 004281c8
    ADD EBX,0x20                        ; 004281cf
    CMP EAX,EBX                         ; 004281d2
    JZ 0x00427f54                       ; 004281d4
        ;   XREF to: 00427f54 (CONDITIONAL_JUMP)  ; LAB_00427f54
    MOV EAX,dword ptr [EBX]             ; 004281da
    MOV dword ptr [ESP + 0x1d8],EAX     ; 004281dc
    MOV EAX,dword ptr [EBX + 0x4]       ; 004281e3
    MOV dword ptr [ESP + 0x1dc],EAX     ; 004281e6
    MOV EAX,dword ptr [EBX + 0x8]       ; 004281ed
    JMP 0x00427f4d                      ; 004281f0
        ;   XREF to: 00427f4d (UNCONDITIONAL_JUMP)  ; LAB_00427f4d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004281f5
        ;   Label: LAB_004281f5
    MOV ECX,dword ptr [EAX + 0xd064]    ; 004281f8
    PUSH ECX                            ; 004281fe
    PUSH EAX                            ; 004281ff
    PUSH 0x5b7d19                       ; 00428200 | = "%s can't pick up %s, giving up\n"
    MOV ESI,dword ptr [0x005f1690]      ; 00428205 | PTR_DAT_005f1690
    PUSH ESI                            ; 0042820b | DAT_007f7ea4
    MOV EBX,EAX                         ; 0042820c
    CALL FUN_00441ff0                   ; 0042820e
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    MOV EAX,EBX                         ; 00428213
    ADD ESP,0x10                        ; 00428215
    MOV dword ptr [EAX + 0xd064],0x0    ; 00428218
    PUSH EAX                            ; 00428222
    MOV dword ptr [EAX + 0xd060],0x41a00000 ; 00428223
    CALL FUN_00429090                   ; 0042822d
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined FUN_00429090()
    ADD ESP,0x4                         ; 00428232
    XOR EAX,EAX                         ; 00428235
    MOV ESP,EBP                         ; 00428237
    POP EBP                             ; 00428239
    POP EDI                             ; 0042823a
    POP ESI                             ; 0042823b
    POP EBX                             ; 0042823c
    RET                                 ; 0042823d
    PUSH 0x1                            ; 0042823e
        ;   Label: LAB_0042823e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00428240
    PUSH 0x19                           ; 00428243
    ADD EAX,0x158                       ; 00428245
    PUSH EAX                            ; 0042824a
    CALL FUN_004fc0d0                   ; 0042824b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 00428250
    MOV EAX,0x1                         ; 00428253
        ;   Label: LAB_00428253
    MOV ESP,EBP                         ; 00428258
    POP EBP                             ; 0042825a
    POP EDI                             ; 0042825b
    POP ESI                             ; 0042825c
    POP EBX                             ; 0042825d
    RET                                 ; 0042825e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042825f
        ;   Label: LAB_0042825f
    MOV EBX,dword ptr [EAX + 0xd064]    ; 00428262
    PUSH EBX                            ; 00428268
    PUSH EAX                            ; 00428269
    PUSH 0x5b7d39                       ; 0042826a | = "%s beginning to pickup %s\n"
    MOV EDI,dword ptr [0x005f1690]      ; 0042826f | PTR_DAT_005f1690
    PUSH EDI                            ; 00428275 | DAT_007f7ea4
    MOV ESI,EAX                         ; 00428276
    CALL FUN_00441ff0                   ; 00428278
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    MOV EAX,ESI                         ; 0042827d
    MOV EAX,dword ptr [EAX + 0xd068]    ; 0042827f
    ADD ESP,0x10                        ; 00428285
    CMP EAX,0x2                         ; 00428288
    JNC 0x00428294                      ; 0042828b
        ;   XREF to: 00428294 (CONDITIONAL_JUMP)  ; LAB_00428294
    CMP EAX,0x1                         ; 0042828d
    JZ 0x0042823e                       ; 00428290
        ;   XREF to: 0042823e (CONDITIONAL_JUMP)  ; LAB_0042823e
    JMP 0x0042829b                      ; 00428292
        ;   XREF to: 0042829b (UNCONDITIONAL_JUMP)  ; LAB_0042829b
    JBE 0x00428253                      ; 00428294
        ;   XREF to: 00428253 (CONDITIONAL_JUMP)  ; LAB_00428253
        ;   Label: LAB_00428294
    CMP EAX,0x3                         ; 00428296
    JZ 0x0042823e                       ; 00428299
        ;   XREF to: 0042823e (CONDITIONAL_JUMP)  ; LAB_0042823e
    MOV EAX,0x5b7d54                    ; 0042829b | = "..\\core\\carved.cpp"
        ;   Label: LAB_0042829b
    MOV EDX,0x4df                       ; 004282a0
    PUSH 0x5b7d67                       ; 004282a5 | = "Invalid demon townsfolk object shape!"
    MOV [0x01d71de0],EAX                ; 004282aa | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004282af | DAT_01d71de4
    CALL FUN_004e4330                   ; 004282b5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004282ba
    MOV EAX,0x1                         ; 004282bd
    MOV ESP,EBP                         ; 004282c2
    POP EBP                             ; 004282c4
    POP EDI                             ; 004282c5
    POP ESI                             ; 004282c6
    POP EBX                             ; 004282c7
    RET                                 ; 004282c8
    MOV ECX,dword ptr [EBP + 0x14]      ; 004282c9
        ;   Label: LAB_004282c9
    PUSH ECX                            ; 004282cc
    MOV EAX,dword ptr [EBX + 0x154]     ; 004282cd
    PUSH EBX                            ; 004282d3
    CALL dword ptr [EAX + 0x84]         ; 004282d4
    ADD ESP,0x8                         ; 004282da
    CMP EAX,0x3                         ; 004282dd
    JNZ 0x00427d09                      ; 004282e0
        ;   XREF to: 00427d09 (CONDITIONAL_JUMP)  ; LAB_00427d09
    PUSH EBX                            ; 004282e6
    MOV EAX,dword ptr [EBX + 0x154]     ; 004282e7
    LEA ESI,[ESP + 0x5c]                ; 004282ed
    LEA EDI,[ESP + 0x74]                ; 004282f1
    CALL dword ptr [EAX + 0x1c]         ; 004282f5
    MOV ECX,0x6                         ; 004282f8
    ADD ESP,0x4                         ; 004282fd
    LEA ESI,[ESP + 0x58]                ; 00428300
    MOV EAX,dword ptr [ESP + 0x210]     ; 00428304
    MOVSD.REP ES:EDI,ESI                ; 0042830b
    FLD float ptr [EAX + 0x4]           ; 0042830d
    FLD float ptr [EAX + 0x8]           ; 00428310
    FLD float ptr [EAX]                 ; 00428313
    LEA EDI,[ESP + 0x184]               ; 00428315
    LEA ESI,[ESP + 0x178]               ; 0042831c
    LEA EAX,[ESP + 0x184]               ; 00428323
    FSUB float ptr [ESP + 0x70]         ; 0042832a
    FXCH ST2                            ; 0042832e
    FSUB float ptr [ESP + 0x74]         ; 00428330
    FXCH                                ; 00428334
    FSUB float ptr [ESP + 0x78]         ; 00428336
    FXCH ST2                            ; 0042833a
    FSTP float ptr [ESP + 0x178]        ; 0042833c
    FSTP float ptr [ESP + 0x17c]        ; 00428343
    FSTP float ptr [ESP + 0x180]        ; 0042834a
    PUSH EAX                            ; 00428351
    MOVSD ES:EDI,ESI                    ; 00428352
    MOVSD ES:EDI,ESI                    ; 00428353
    MOVSD ES:EDI,ESI                    ; 00428354
    CALL FUN_004257e0                   ; 00428355
        ;   XREF to: 004257e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004257e0()
    ADD ESP,0x4                         ; 0042835a
    MOV dword ptr [ESP + 0x204],EAX     ; 0042835d
    TEST EAX,EAX                        ; 00428364
    JZ 0x00427d09                       ; 00428366
        ;   XREF to: 00427d09 (CONDITIONAL_JUMP)  ; LAB_00427d09
    PUSH EAX                            ; 0042836c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042836d
    PUSH ESI                            ; 00428370
    CALL FUN_004285c0                   ; 00428371
        ;   XREF to: 004285c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004285c0()
    ADD ESP,0x8                         ; 00428376
    TEST EAX,EAX                        ; 00428379
    JZ 0x00427d09                       ; 0042837b
        ;   XREF to: 00427d09 (CONDITIONAL_JUMP)  ; LAB_00427d09
    PUSH 0x5b7d8d                       ; 00428381 | = "CBodyPart"
    PUSH EBX                            ; 00428386
    CALL FUN_0040c790                   ; 00428387
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 0042838c
    TEST EAX,EAX                        ; 0042838f
    JZ 0x004283ad                       ; 00428391
        ;   XREF to: 004283ad (CONDITIONAL_JUMP)  ; LAB_004283ad
    MOV EAX,dword ptr [EBP + 0x14]      ; 00428393
    MOV ESI,dword ptr [EBX + 0x6c]      ; 00428396
    MOV EAX,dword ptr [EAX + 0xd058]    ; 00428399
    AND ESI,0x3                         ; 0042839f
    AND EAX,0x3                         ; 004283a2
    CMP ESI,EAX                         ; 004283a5
    JNZ 0x00427d09                      ; 004283a7
        ;   XREF to: 00427d09 (CONDITIONAL_JUMP)  ; LAB_00427d09
    LEA EAX,[EBX + 0x20]                ; 004283ad
        ;   Label: LAB_004283ad
    MOV ESI,dword ptr [ESP + 0x20c]     ; 004283b0
    LEA EDI,[ESP + 0xe8]                ; 004283b7
    FLD float ptr [EAX]                 ; 004283be
    FLD float ptr [EAX + 0x4]           ; 004283c0
    FLD float ptr [EAX + 0x8]           ; 004283c3
    FXCH ST2                            ; 004283c6
    FSUB float ptr [ESI]                ; 004283c8
    FXCH                                ; 004283ca
    FSUB float ptr [ESI + 0x4]          ; 004283cc
    FXCH ST2                            ; 004283cf
    FSUB float ptr [ESI + 0x8]          ; 004283d1
    FXCH                                ; 004283d4
    FSTP float ptr [ESP + 0x19c]        ; 004283d6
    FXCH                                ; 004283dd
    FSTP float ptr [ESP + 0x1a0]        ; 004283df
    LEA ESI,[ESP + 0x19c]               ; 004283e6
    FSTP float ptr [ESP + 0x1a4]        ; 004283ed
    MOVSD ES:EDI,ESI                    ; 004283f4
    MOVSD ES:EDI,ESI                    ; 004283f5
    MOVSD ES:EDI,ESI                    ; 004283f6
    FLD float ptr [ESP + 0xec]          ; 004283f7
    FMUL ST0                            ; 004283fe
    FST float ptr [ESP + 0xec]          ; 00428400
    FMUL float ptr [ESP + 0xec]         ; 00428407
    FST float ptr [ESP + 0xec]          ; 0042840e
    FMUL float ptr [ESP + 0xec]         ; 00428415
    FLD float ptr [ESP + 0xe8]          ; 0042841c
    FMUL ST0                            ; 00428423
    FADDP                               ; 00428425
    FLD float ptr [ESP + 0xf0]          ; 00428427
    FMUL ST0                            ; 0042842e
    FADDP                               ; 00428430
    FSQRT                               ; 00428432
    FST float ptr [ESP]                 ; 00428434
    FCOMP double ptr [0x005b7dc7]       ; 00428437 | DAT_005b7dc7
    FNSTSW AX                           ; 0042843d
    SAHF                                ; 0042843f
    JC 0x00427d09                       ; 00428440
        ;   XREF to: 00427d09 (CONDITIONAL_JUMP)  ; LAB_00427d09
    MOV EAX,dword ptr [EBP + 0x14]      ; 00428446
    FLD float ptr [EAX + 0xd054]        ; 00428449
    FMUL float ptr [0x005b7dd7]         ; 0042844f | DAT_005b7dd7
    FCOMP float ptr [ESP]               ; 00428455
    FNSTSW AX                           ; 00428458
    SAHF                                ; 0042845a
    JC 0x00427d09                       ; 0042845b
        ;   XREF to: 00427d09 (CONDITIONAL_JUMP)  ; LAB_00427d09
    MOV EAX,dword ptr [ESP + 0x21c]     ; 00428461
    MOV dword ptr [ESP + EAX*0x1 + 0x30],EBX ; 00428468
    MOV EBX,dword ptr [ESP + 0x21c]     ; 0042846c
    MOV EAX,dword ptr [ESP + 0x204]     ; 00428473
    MOV dword ptr [ESP + EBX*0x1 + 0x8],EAX ; 0042847a
    MOV EAX,dword ptr [ESP + 0x208]     ; 0042847e
    LEA EDI,[EBX + 0x4]                 ; 00428485
    INC EAX                             ; 00428488
    MOV dword ptr [ESP + 0x21c],EDI     ; 00428489
    MOV dword ptr [ESP + 0x208],EAX     ; 00428490
    CMP EDI,0x28                        ; 00428497
    JL 0x00427d09                       ; 0042849a
        ;   XREF to: 00427d09 (CONDITIONAL_JUMP)  ; LAB_00427d09
    MOV ECX,dword ptr [ESP + 0x208]     ; 004284a0
        ;   Label: LAB_004284a0
    CMP ECX,0x1                         ; 004284a7
    JL 0x00427c3d                       ; 004284aa
        ;   XREF to: 00427c3d (CONDITIONAL_JUMP)  ; LAB_00427c3d
    LEA EAX,[ECX + -0x1]                ; 004284b0
    PUSH EAX                            ; 004284b3
    PUSH 0x0                            ; 004284b4
    CALL FUN_0040cea0                   ; 004284b6
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 004284bb
    MOV ESI,dword ptr [EBP + 0x14]      ; 004284be
    MOV EBX,dword ptr [ESP + EAX*0x4 + 0x30] ; 004284c1
    MOV dword ptr [ESI + 0xd064],EBX    ; 004284c5
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x8] ; 004284cb
    MOV EBX,dword ptr [ESI + 0xd058]    ; 004284cf
    MOV dword ptr [ESI + 0xd060],0xc2200000 ; 004284d5
    INC EBX                             ; 004284df
    MOV dword ptr [ESI + 0xd068],EAX    ; 004284e0
    MOV dword ptr [ESI + 0xd058],EBX    ; 004284e6
    MOV EDI,ESI                         ; 004284ec
    MOV ESI,dword ptr [ESI + 0xd064]    ; 004284ee
    PUSH ESI                            ; 004284f4
    PUSH EDI                            ; 004284f5
    PUSH 0x5b7d97                       ; 004284f6 | = "%s is going to try to pick up %s\n"
    MOV EAX,[0x005f1690]                ; 004284fb | PTR_DAT_005f1690
    PUSH EAX                            ; 00428500 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 00428501
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    MOV EAX,0x1                         ; 00428506
    ADD ESP,0x10                        ; 0042850b
    MOV ESP,EBP                         ; 0042850e
    POP EBP                             ; 00428510
    POP EDI                             ; 00428511
    POP ESI                             ; 00428512
    POP EBX                             ; 00428513
    RET                                 ; 00428514

