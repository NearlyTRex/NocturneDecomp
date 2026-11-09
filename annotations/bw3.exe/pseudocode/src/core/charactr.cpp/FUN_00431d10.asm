; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00431d10(CCharacter *this_ptr,float delta_time)
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
; XREF[1]:
;   core_charactr.cpp_FUN_00433350 at 00433384
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_FUN_00583b10
;   core_xform.cpp_FUN_00584450
;   core_xform.cpp_FUN_00584560
;   core_xform.cpp_lerpMatrix3x4_FUN_005854a0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431d10
        ;   Label: core_charactr.cpp_FUN_00431d10
    PUSH ESI                            ; 00431d11
    PUSH EDI                            ; 00431d12
    PUSH EBP                            ; 00431d13
    MOV EBP,ESP                         ; 00431d14
    SUB ESP,0x2b4                       ; 00431d16
    AND ESP,0xfffffff8                  ; 00431d1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00431d1f
    ADD EAX,0x30                        ; 00431d22
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00431d25
    MOV EAX,dword ptr [EBP + 0x14]      ; 00431d2c
    ADD EAX,0x20                        ; 00431d2f
    MOV dword ptr [ESP + 0x2a0],EAX     ; 00431d32
    MOV EAX,dword ptr [EBP + 0x14]      ; 00431d39
    ADD EAX,0xfd8                       ; 00431d3c
    MOV dword ptr [ESP + 0x2a8],EAX     ; 00431d41
    MOV EAX,dword ptr [EBP + 0x14]      ; 00431d48
    XOR EDX,EDX                         ; 00431d4b
    ADD EAX,0x25a8                      ; 00431d4d
    MOV dword ptr [ESP + 0x2ac],EDX     ; 00431d52
    MOV dword ptr [ESP + 0x2b0],EAX     ; 00431d59
    MOV EBX,dword ptr [ESP + 0x2b0]     ; 00431d60
        ;   Label: LAB_00431d60
    CMP dword ptr [EBX + 0x8],0x0       ; 00431d67
    JNZ 0x00431d99                      ; 00431d6b
        ;   XREF to: 00431d99 (CONDITIONAL_JUMP)  ; LAB_00431d99
    MOV EBX,dword ptr [ESP + 0x2ac]     ; 00431d6d
        ;   Label: LAB_00431d6d
    MOV ECX,dword ptr [ESP + 0x2b0]     ; 00431d74
    INC EBX                             ; 00431d7b
    ADD ECX,0x78                        ; 00431d7c
    MOV dword ptr [ESP + 0x2ac],EBX     ; 00431d7f
    MOV dword ptr [ESP + 0x2b0],ECX     ; 00431d86
    CMP EBX,0x2                         ; 00431d8d
    JL 0x00431d60                       ; 00431d90
        ;   XREF to: 00431d60 (CONDITIONAL_JUMP)  ; LAB_00431d60
    MOV ESP,EBP                         ; 00431d92
    POP EBP                             ; 00431d94
    POP EDI                             ; 00431d95
    POP ESI                             ; 00431d96
    POP EBX                             ; 00431d97
    RET                                 ; 00431d98
    CMP dword ptr [EBX + 0x44],0x0      ; 00431d99
        ;   Label: LAB_00431d99
    JZ 0x00431f06                       ; 00431d9d
        ;   XREF to: 00431f06 (CONDITIONAL_JUMP)  ; LAB_00431f06
    IMUL EAX,dword ptr [EBX],0x30       ; 00431da3
    ADD EAX,dword ptr [ESP + 0x2a8]     ; 00431da6
    PUSH EAX                            ; 00431dad
    LEA EAX,[EBX + 0x48]                ; 00431dae
    PUSH EAX                            ; 00431db1
    LEA ESI,[ESP + 0x188]               ; 00431db2
    LEA EDI,[ESP + 0x1b8]               ; 00431db9
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00431dc0
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 00431dc5
    LEA ESI,[ESP + 0x188]               ; 00431dca
    ADD ESP,0x8                         ; 00431dd1
        ;   Label: LAB_00431dd1
    MOVSD.REP ES:EDI,ESI                ; 00431dd4
    FLD float ptr [EBX + 0x40]          ; 00431dd6
    FLD1                                ; 00431dd9
    FCOMPP                              ; 00431ddb
    FNSTSW AX                           ; 00431ddd
    SAHF                                ; 00431ddf
    JBE 0x00431e02                      ; 00431de0
        ;   XREF to: 00431e02 (CONDITIONAL_JUMP)  ; LAB_00431e02
    FLD float ptr [EBX + 0x3c]          ; 00431de2
    FMUL float ptr [EBP + 0x18]         ; 00431de5
    FADD float ptr [EBX + 0x40]         ; 00431de8
    FST float ptr [EBX + 0x40]          ; 00431deb
    FLD1                                ; 00431dee
    FCOMPP                              ; 00431df0
    FNSTSW AX                           ; 00431df2
    SAHF                                ; 00431df4
    JNC 0x00431f40                      ; 00431df5
        ;   XREF to: 00431f40 (CONDITIONAL_JUMP)  ; LAB_00431f40
    MOV dword ptr [EBX + 0x40],0x3f800000 ; 00431dfb
    MOV EDI,dword ptr [ESP + 0x2a4]     ; 00431e02
        ;   Label: LAB_00431e02
    PUSH EDI                            ; 00431e09
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 00431e0a
    PUSH EAX                            ; 00431e11
    LEA EAX,[ESP + 0x1e8]               ; 00431e12
    PUSH EAX                            ; 00431e19
    CALL core_xform.cpp_FUN_00583940    ; 00431e1a
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 00431e1f
    LEA EAX,[ESP + 0x1e0]               ; 00431e22
    PUSH EAX                            ; 00431e29
    LEA EAX,[ESP + 0x1b4]               ; 00431e2a
    PUSH EAX                            ; 00431e31
    LEA ESI,[ESP + 0x218]               ; 00431e32
    LEA EDI,[ESP + 0x128]               ; 00431e39
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00431e40
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 00431e45
    LEA ESI,[ESP + 0x218]               ; 00431e4a
    ADD ESP,0x8                         ; 00431e51
    LEA EAX,[ESP + 0x120]               ; 00431e54
    MOVSD.REP ES:EDI,ESI                ; 00431e5b
    PUSH EAX                            ; 00431e5d
    LEA ESI,[ESP + 0x28c]               ; 00431e5e
    LEA EDI,[ESP + 0x274]               ; 00431e65
    CALL core_xform.cpp_FUN_00584450    ; 00431e6c
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584450()
    LEA ESI,[ESP + 0x28c]               ; 00431e71
    ADD ESP,0x4                         ; 00431e78
    MOVSD ES:EDI,ESI                    ; 00431e7b
    MOVSD ES:EDI,ESI                    ; 00431e7c
    MOVSD ES:EDI,ESI                    ; 00431e7d
    MOV EDX,dword ptr [EBX + 0x8]       ; 00431e7e
    MOV EAX,dword ptr [ESP + 0x270]     ; 00431e81
    MOV dword ptr [EDX + 0x20],EAX      ; 00431e88
    MOV EAX,dword ptr [ESP + 0x274]     ; 00431e8b
    MOV dword ptr [EDX + 0x24],EAX      ; 00431e92
    MOV EAX,dword ptr [ESP + 0x278]     ; 00431e95
    MOV dword ptr [EDX + 0x28],EAX      ; 00431e9c
    LEA EAX,[ESP + 0x120]               ; 00431e9f
    PUSH EAX                            ; 00431ea6
    LEA ESI,[ESP + 0x298]               ; 00431ea7
    LEA EDI,[ESP + 0x280]               ; 00431eae
    CALL core_xform.cpp_FUN_00583b10    ; 00431eb5
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583b10()
    LEA ESI,[ESP + 0x298]               ; 00431eba
    ADD ESP,0x4                         ; 00431ec1
    MOVSD ES:EDI,ESI                    ; 00431ec4
    MOVSD ES:EDI,ESI                    ; 00431ec5
    MOVSD ES:EDI,ESI                    ; 00431ec6
    MOV EDX,dword ptr [EBX + 0x8]       ; 00431ec7
    LEA EAX,[ESP + 0x27c]               ; 00431eca
    ADD EDX,0x30                        ; 00431ed1
    CMP EDX,EAX                         ; 00431ed4
    JZ 0x00431ef5                       ; 00431ed6
        ;   XREF to: 00431ef5 (CONDITIONAL_JUMP)  ; LAB_00431ef5
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00431ed8
    MOV dword ptr [EDX],EAX             ; 00431edf
    MOV EAX,dword ptr [ESP + 0x280]     ; 00431ee1
    MOV dword ptr [EDX + 0x4],EAX       ; 00431ee8
    MOV EAX,dword ptr [ESP + 0x284]     ; 00431eeb
    MOV dword ptr [EDX + 0x8],EAX       ; 00431ef2
    MOV EDX,dword ptr [EBX + 0x8]       ; 00431ef5
        ;   Label: LAB_00431ef5
    PUSH EDX                            ; 00431ef8
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 00431ef9
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00431efe
    JMP 0x00431d6d                      ; 00431f01
        ;   XREF to: 00431d6d (UNCONDITIONAL_JUMP)  ; LAB_00431d6d
    MOV EDI,dword ptr [ESP + 0x2ac]     ; 00431f06
        ;   Label: LAB_00431f06
    MOV EAX,dword ptr [EBP + 0x14]      ; 00431f0d
    PUSH EDI                            ; 00431f10
    MOV EDX,dword ptr [EBP + 0x14]      ; 00431f11
    MOV EAX,dword ptr [EAX + 0x154]     ; 00431f14
    PUSH EDX                            ; 00431f1a
    LEA ESI,[ESP + 0x158]               ; 00431f1b
    LEA EDI,[ESP + 0x1b8]               ; 00431f22
    CALL dword ptr [EAX + 0x12c]        ; 00431f29
    MOV ECX,0xc                         ; 00431f2f
    LEA ESI,[ESP + 0x158]               ; 00431f34
    JMP 0x00431dd1                      ; 00431f3b
        ;   XREF to: 00431dd1 (UNCONDITIONAL_JUMP)  ; LAB_00431dd1
    IMUL EAX,dword ptr [EBX],0x30       ; 00431f40
        ;   Label: LAB_00431f40
    ADD EAX,dword ptr [ESP + 0x2a8]     ; 00431f43
    PUSH EAX                            ; 00431f4a
    LEA ESI,[ESP + 0xf4]                ; 00431f4b
    LEA EDI,[ESP + 0x64]                ; 00431f52
    CALL core_xform.cpp_FUN_00584560    ; 00431f56
        ;   XREF to: 00584560 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584560()
    MOV ECX,0xc                         ; 00431f5b
    ADD ESP,0x4                         ; 00431f60
    LEA EAX,[ESP + 0x60]                ; 00431f63
    LEA ESI,[ESP + 0xf0]                ; 00431f67
    PUSH EAX                            ; 00431f6e
    LEA EAX,[ESP + 0x1b4]               ; 00431f6f
    MOVSD.REP ES:EDI,ESI                ; 00431f76
    PUSH EAX                            ; 00431f78
    LEA ESI,[ESP + 0x8]                 ; 00431f79
    LEA EDI,[ESP + 0x38]                ; 00431f7d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00431f81
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 00431f86
    LEA ESI,[ESP + 0x8]                 ; 00431f8b
    ADD ESP,0x8                         ; 00431f8f
    MOVSD.REP ES:EDI,ESI                ; 00431f92
    LEA EAX,[ESP + 0x30]                ; 00431f94
    PUSH dword ptr [EBX + 0x40]         ; 00431f98
    PUSH EAX                            ; 00431f9b
    LEA EAX,[EBX + 0xc]                 ; 00431f9c
    PUSH EAX                            ; 00431f9f
    LEA ESI,[ESP + 0x24c]               ; 00431fa0
    LEA EDI,[ESP + 0x9c]                ; 00431fa7
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005854a0 ; 00431fae
        ;   XREF to: 005854a0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_005854a0()
    MOV ECX,0xc                         ; 00431fb3
    LEA ESI,[ESP + 0x24c]               ; 00431fb8
    ADD ESP,0xc                         ; 00431fbf
    MOVSD.REP ES:EDI,ESI                ; 00431fc2
    IMUL EAX,dword ptr [EBX],0x30       ; 00431fc4
    ADD EAX,dword ptr [ESP + 0x2a8]     ; 00431fc7
    PUSH EAX                            ; 00431fce
    LEA EAX,[ESP + 0x94]                ; 00431fcf
    PUSH EAX                            ; 00431fd6
    LEA ESI,[ESP + 0xc8]                ; 00431fd7
    LEA EDI,[ESP + 0x1b8]               ; 00431fde
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00431fe5
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 00431fea
    LEA ESI,[ESP + 0xc8]                ; 00431fef
    ADD ESP,0x8                         ; 00431ff6
    MOVSD.REP ES:EDI,ESI                ; 00431ff9
    JMP 0x00431e02                      ; 00431ffb
        ;   XREF to: 00431e02 (UNCONDITIONAL_JUMP)  ; LAB_00431e02

