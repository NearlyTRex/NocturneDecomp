; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00428e30(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x2c8]:1  local_2c8
; undefined        Stack[-0x298]:1  local_298
; undefined        Stack[-0x268]:1  local_268
; undefined        Stack[-0x238]:1  local_238
; undefined        Stack[-0x208]:1  local_208
; undefined        Stack[-0x1d8]:1  local_1d8
; undefined        Stack[-0x1a8]:1  local_1a8
; undefined        Stack[-0x178]:1  local_178
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0x118]:1  local_118
; undefined        Stack[-0xe8]:1  local_e8
; undefined        Stack[-0xb8]:1  local_b8
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   core_charactr.cpp_FUN_00429e90 at 00429ec4
;   core_gabriela.cpp_FUN_004b0210 at 004b022f
;   core_mobster.cpp_FUN_004fde80 at 004fdec9
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_FUN_00591de0
;   core_xform.cpp_FUN_00592720
;   core_xform.cpp_FUN_00592830
;   core_xform.cpp_FUN_00593770
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428e30
        ;   Label: core_charactr.cpp_FUN_00428e30
    PUSH ESI                            ; 00428e31
    PUSH EDI                            ; 00428e32
    PUSH EBP                            ; 00428e33
    MOV EBP,ESP                         ; 00428e34
    SUB ESP,0x2b4                       ; 00428e36
    AND ESP,0xfffffff8                  ; 00428e3c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00428e3f
    ADD EAX,0x30                        ; 00428e42
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00428e45
    MOV EAX,dword ptr [EBP + 0x14]      ; 00428e4c
    ADD EAX,0x20                        ; 00428e4f
    MOV dword ptr [ESP + 0x2a0],EAX     ; 00428e52
    MOV EAX,dword ptr [EBP + 0x14]      ; 00428e59
    ADD EAX,0x1134                      ; 00428e5c
    MOV dword ptr [ESP + 0x2a8],EAX     ; 00428e61
    MOV EAX,dword ptr [EBP + 0x14]      ; 00428e68
    XOR EDX,EDX                         ; 00428e6b
    ADD EAX,0x2618                      ; 00428e6d
    MOV dword ptr [ESP + 0x2ac],EDX     ; 00428e72
    MOV dword ptr [ESP + 0x2b0],EAX     ; 00428e79
    MOV EBX,dword ptr [ESP + 0x2b0]     ; 00428e80
        ;   Label: LAB_00428e80
    CMP dword ptr [EBX + 0x8],0x0       ; 00428e87
    JNZ 0x00428eb9                      ; 00428e8b
        ;   XREF to: 00428eb9 (CONDITIONAL_JUMP)  ; LAB_00428eb9
    MOV EBX,dword ptr [ESP + 0x2ac]     ; 00428e8d
        ;   Label: LAB_00428e8d
    MOV ECX,dword ptr [ESP + 0x2b0]     ; 00428e94
    INC EBX                             ; 00428e9b
    ADD ECX,0x78                        ; 00428e9c
    MOV dword ptr [ESP + 0x2ac],EBX     ; 00428e9f
    MOV dword ptr [ESP + 0x2b0],ECX     ; 00428ea6
    CMP EBX,0x2                         ; 00428ead
    JL 0x00428e80                       ; 00428eb0
        ;   XREF to: 00428e80 (CONDITIONAL_JUMP)  ; LAB_00428e80
    MOV ESP,EBP                         ; 00428eb2
    POP EBP                             ; 00428eb4
    POP EDI                             ; 00428eb5
    POP ESI                             ; 00428eb6
    POP EBX                             ; 00428eb7
    RET                                 ; 00428eb8
    CMP dword ptr [EBX + 0x44],0x0      ; 00428eb9
        ;   Label: LAB_00428eb9
    JZ 0x00429026                       ; 00428ebd
        ;   XREF to: 00429026 (CONDITIONAL_JUMP)  ; LAB_00429026
    IMUL EAX,dword ptr [EBX],0x30       ; 00428ec3
    ADD EAX,dword ptr [ESP + 0x2a8]     ; 00428ec6
    PUSH EAX                            ; 00428ecd
    LEA EAX,[EBX + 0x48]                ; 00428ece
    PUSH EAX                            ; 00428ed1
    LEA ESI,[ESP + 0x188]               ; 00428ed2
    LEA EDI,[ESP + 0x1b8]               ; 00428ed9
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00428ee0
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00428ee5
    LEA ESI,[ESP + 0x188]               ; 00428eea
    ADD ESP,0x8                         ; 00428ef1
        ;   Label: LAB_00428ef1
    MOVSD.REP ES:EDI,ESI                ; 00428ef4
    FLD float ptr [EBX + 0x40]          ; 00428ef6
    FLD1                                ; 00428ef9
    FCOMPP                              ; 00428efb
    FNSTSW AX                           ; 00428efd
    SAHF                                ; 00428eff
    JBE 0x00428f22                      ; 00428f00
        ;   XREF to: 00428f22 (CONDITIONAL_JUMP)  ; LAB_00428f22
    FLD float ptr [EBX + 0x3c]          ; 00428f02
    FMUL float ptr [EBP + 0x18]         ; 00428f05
    FADD float ptr [EBX + 0x40]         ; 00428f08
    FST float ptr [EBX + 0x40]          ; 00428f0b
    FLD1                                ; 00428f0e
    FCOMPP                              ; 00428f10
    FNSTSW AX                           ; 00428f12
    SAHF                                ; 00428f14
    JNC 0x00429060                      ; 00428f15
        ;   XREF to: 00429060 (CONDITIONAL_JUMP)  ; LAB_00429060
    MOV dword ptr [EBX + 0x40],0x3f800000 ; 00428f1b
    MOV EDI,dword ptr [ESP + 0x2a4]     ; 00428f22
        ;   Label: LAB_00428f22
    PUSH EDI                            ; 00428f29
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 00428f2a
    PUSH EAX                            ; 00428f31
    LEA EAX,[ESP + 0x1e8]               ; 00428f32
    PUSH EAX                            ; 00428f39
    CALL core_xform.cpp_FUN_00591c10    ; 00428f3a
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 00428f3f
    LEA EAX,[ESP + 0x1e0]               ; 00428f42
    PUSH EAX                            ; 00428f49
    LEA EAX,[ESP + 0x1b4]               ; 00428f4a
    PUSH EAX                            ; 00428f51
    LEA ESI,[ESP + 0x218]               ; 00428f52
    LEA EDI,[ESP + 0x128]               ; 00428f59
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00428f60
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00428f65
    LEA ESI,[ESP + 0x218]               ; 00428f6a
    ADD ESP,0x8                         ; 00428f71
    LEA EAX,[ESP + 0x120]               ; 00428f74
    MOVSD.REP ES:EDI,ESI                ; 00428f7b
    PUSH EAX                            ; 00428f7d
    LEA ESI,[ESP + 0x28c]               ; 00428f7e
    LEA EDI,[ESP + 0x274]               ; 00428f85
    CALL core_xform.cpp_FUN_00592720    ; 00428f8c
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    LEA ESI,[ESP + 0x28c]               ; 00428f91
    ADD ESP,0x4                         ; 00428f98
    MOVSD ES:EDI,ESI                    ; 00428f9b
    MOVSD ES:EDI,ESI                    ; 00428f9c
    MOVSD ES:EDI,ESI                    ; 00428f9d
    MOV EDX,dword ptr [EBX + 0x8]       ; 00428f9e
    MOV EAX,dword ptr [ESP + 0x270]     ; 00428fa1
    MOV dword ptr [EDX + 0x20],EAX      ; 00428fa8
    MOV EAX,dword ptr [ESP + 0x274]     ; 00428fab
    MOV dword ptr [EDX + 0x24],EAX      ; 00428fb2
    MOV EAX,dword ptr [ESP + 0x278]     ; 00428fb5
    MOV dword ptr [EDX + 0x28],EAX      ; 00428fbc
    LEA EAX,[ESP + 0x120]               ; 00428fbf
    PUSH EAX                            ; 00428fc6
    LEA ESI,[ESP + 0x298]               ; 00428fc7
    LEA EDI,[ESP + 0x280]               ; 00428fce
    CALL core_xform.cpp_FUN_00591de0    ; 00428fd5
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591de0()
    LEA ESI,[ESP + 0x298]               ; 00428fda
    ADD ESP,0x4                         ; 00428fe1
    MOVSD ES:EDI,ESI                    ; 00428fe4
    MOVSD ES:EDI,ESI                    ; 00428fe5
    MOVSD ES:EDI,ESI                    ; 00428fe6
    MOV EDX,dword ptr [EBX + 0x8]       ; 00428fe7
    LEA EAX,[ESP + 0x27c]               ; 00428fea
    ADD EDX,0x30                        ; 00428ff1
    CMP EDX,EAX                         ; 00428ff4
    JZ 0x00429015                       ; 00428ff6
        ;   XREF to: 00429015 (CONDITIONAL_JUMP)  ; LAB_00429015
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00428ff8
    MOV dword ptr [EDX],EAX             ; 00428fff
    MOV EAX,dword ptr [ESP + 0x280]     ; 00429001
    MOV dword ptr [EDX + 0x4],EAX       ; 00429008
    MOV EAX,dword ptr [ESP + 0x284]     ; 0042900b
    MOV dword ptr [EDX + 0x8],EAX       ; 00429012
    MOV EDX,dword ptr [EBX + 0x8]       ; 00429015
        ;   Label: LAB_00429015
    PUSH EDX                            ; 00429018
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 00429019
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042901e
    JMP 0x00428e8d                      ; 00429021
        ;   XREF to: 00428e8d (UNCONDITIONAL_JUMP)  ; LAB_00428e8d
    MOV EDI,dword ptr [ESP + 0x2ac]     ; 00429026
        ;   Label: LAB_00429026
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042902d
    PUSH EDI                            ; 00429030
    MOV EDX,dword ptr [EBP + 0x14]      ; 00429031
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00429034
    PUSH EDX                            ; 0042903a
    LEA ESI,[ESP + 0x158]               ; 0042903b
    LEA EDI,[ESP + 0x1b8]               ; 00429042
    CALL dword ptr [EAX + 0x134]        ; 00429049
    MOV ECX,0xc                         ; 0042904f
    LEA ESI,[ESP + 0x158]               ; 00429054
    JMP 0x00428ef1                      ; 0042905b
        ;   XREF to: 00428ef1 (UNCONDITIONAL_JUMP)  ; LAB_00428ef1
    IMUL EAX,dword ptr [EBX],0x30       ; 00429060
        ;   Label: LAB_00429060
    ADD EAX,dword ptr [ESP + 0x2a8]     ; 00429063
    PUSH EAX                            ; 0042906a
    LEA ESI,[ESP + 0xf4]                ; 0042906b
    LEA EDI,[ESP + 0x64]                ; 00429072
    CALL core_xform.cpp_FUN_00592830    ; 00429076
        ;   XREF to: 00592830 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592830()
    MOV ECX,0xc                         ; 0042907b
    ADD ESP,0x4                         ; 00429080
    LEA EAX,[ESP + 0x60]                ; 00429083
    LEA ESI,[ESP + 0xf0]                ; 00429087
    PUSH EAX                            ; 0042908e
    LEA EAX,[ESP + 0x1b4]               ; 0042908f
    MOVSD.REP ES:EDI,ESI                ; 00429096
    PUSH EAX                            ; 00429098
    LEA ESI,[ESP + 0x8]                 ; 00429099
    LEA EDI,[ESP + 0x38]                ; 0042909d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004290a1
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004290a6
    LEA ESI,[ESP + 0x8]                 ; 004290ab
    ADD ESP,0x8                         ; 004290af
    MOVSD.REP ES:EDI,ESI                ; 004290b2
    LEA EAX,[ESP + 0x30]                ; 004290b4
    PUSH dword ptr [EBX + 0x40]         ; 004290b8
    PUSH EAX                            ; 004290bb
    LEA EAX,[EBX + 0xc]                 ; 004290bc
    PUSH EAX                            ; 004290bf
    LEA ESI,[ESP + 0x24c]               ; 004290c0
    LEA EDI,[ESP + 0x9c]                ; 004290c7
    CALL core_xform.cpp_FUN_00593770    ; 004290ce
        ;   XREF to: 00593770 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00593770()
    MOV ECX,0xc                         ; 004290d3
    LEA ESI,[ESP + 0x24c]               ; 004290d8
    ADD ESP,0xc                         ; 004290df
    MOVSD.REP ES:EDI,ESI                ; 004290e2
    IMUL EAX,dword ptr [EBX],0x30       ; 004290e4
    ADD EAX,dword ptr [ESP + 0x2a8]     ; 004290e7
    PUSH EAX                            ; 004290ee
    LEA EAX,[ESP + 0x94]                ; 004290ef
    PUSH EAX                            ; 004290f6
    LEA ESI,[ESP + 0xc8]                ; 004290f7
    LEA EDI,[ESP + 0x1b8]               ; 004290fe
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00429105
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 0042910a
    LEA ESI,[ESP + 0xc8]                ; 0042910f
    ADD ESP,0x8                         ; 00429116
    MOVSD.REP ES:EDI,ESI                ; 00429119
    JMP 0x00428f22                      ; 0042911b
        ;   XREF to: 00428f22 (UNCONDITIONAL_JUMP)  ; LAB_00428f22

