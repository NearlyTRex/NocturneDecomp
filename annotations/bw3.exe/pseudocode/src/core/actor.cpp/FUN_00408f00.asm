; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_actor_cpp_FUN_00408f00(int param_1,int param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_actor.cpp_FUN_004091b0 at 004091ef
;   core_setcolid.cpp_FUN_0053bc80 at 0053bfb7
;   core_setcolid.cpp_FUN_0053de10 at 0053e143
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041d840
;   core_box.cpp_FUN_0041d8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408f00
        ;   Label: core_actor.cpp_FUN_00408f00
    PUSH EDI                            ; 00408f01
    PUSH EBP                            ; 00408f02
    SUB ESP,0xac                        ; 00408f03
    MOV EBP,dword ptr [ESP + 0xbc]      ; 00408f09
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00408f10
    MOV EBX,dword ptr [ESP + 0xc4]      ; 00408f17
    MOV dword ptr [ESP + 0xa8],ESI      ; 00408f1e
    CMP EBX,0x2                         ; 00408f25
    JNC 0x004090f1                      ; 00408f28
        ;   XREF to: 004090f1 (CONDITIONAL_JUMP)  ; LAB_004090f1
    CMP EBX,0x1                         ; 00408f2e
    JNZ 0x004090fc                      ; 00408f31
        ;   XREF to: 004090fc (CONDITIONAL_JUMP)  ; LAB_004090fc
    PUSH EBP                            ; 00408f37
        ;   Label: LAB_00408f37
    MOV EAX,dword ptr [EBP + 0x154]     ; 00408f38
    LEA ESI,[ESP + 0x1c]                ; 00408f3e
    LEA EDI,[ESP + 0x34]                ; 00408f42
    CALL dword ptr [EAX + 0x1c]         ; 00408f46
    MOV ECX,0x6                         ; 00408f49
    ADD ESP,0x4                         ; 00408f4e
    LEA ESI,[ESP + 0x18]                ; 00408f51
    LEA EAX,[ESP + 0x30]                ; 00408f55
    PUSH 0x0                            ; 00408f59
    MOVSD.REP ES:EDI,ESI                ; 00408f5b
    PUSH EAX                            ; 00408f5d
    LEA ESI,[ESP + 0x50]                ; 00408f5e
    LEA EDI,[ESP + 0x8c]                ; 00408f62
    CALL core_box.cpp_FUN_0041d8b0      ; 00408f69
        ;   XREF to: 0041d8b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041d8b0()
    LEA ESI,[ESP + 0x50]                ; 00408f6e
    ADD ESP,0x8                         ; 00408f72
    LEA EAX,[ESP + 0x84]                ; 00408f75
    LEA EBX,[ESP + 0x90]                ; 00408f7c
    PUSH EAX                            ; 00408f83
    MOVSD ES:EDI,ESI                    ; 00408f84
    MOVSD ES:EDI,ESI                    ; 00408f85
    MOVSD ES:EDI,ESI                    ; 00408f86
    PUSH EBP                            ; 00408f87
    LEA ESI,[ESP + 0xa4]                ; 00408f88
    LEA EDI,[ESP + 0x98]                ; 00408f8f
    CALL core_actor.cpp_FUN_00408b00    ; 00408f96
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0xa4]                ; 00408f9b
    ADD ESP,0x8                         ; 00408fa2
    MOV EAX,ESP                         ; 00408fa5
    MOVSD ES:EDI,ESI                    ; 00408fa7
    MOVSD ES:EDI,ESI                    ; 00408fa8
    MOVSD ES:EDI,ESI                    ; 00408fa9
    CMP EAX,EBX                         ; 00408faa
    JZ 0x00408fce                       ; 00408fac
        ;   XREF to: 00408fce (CONDITIONAL_JUMP)  ; LAB_00408fce
    MOV EAX,dword ptr [ESP + 0x90]      ; 00408fae
    MOV dword ptr [ESP],EAX             ; 00408fb5
    MOV EAX,dword ptr [ESP + 0x94]      ; 00408fb8
    MOV dword ptr [ESP + 0x4],EAX       ; 00408fbf
    MOV EAX,dword ptr [ESP + 0x98]      ; 00408fc3
    MOV dword ptr [ESP + 0x8],EAX       ; 00408fca
    LEA EAX,[ESP + 0xc]                 ; 00408fce
        ;   Label: LAB_00408fce
    CMP EAX,EBX                         ; 00408fd2
    JNZ 0x0040909f                      ; 00408fd4
        ;   XREF to: 0040909f (CONDITIONAL_JUMP)  ; LAB_0040909f
    MOV EBX,0x1                         ; 00408fda
        ;   Label: LAB_00408fda
    PUSH EBX                            ; 00408fdf
        ;   Label: LAB_00408fdf
    LEA EAX,[ESP + 0x34]                ; 00408fe0
    PUSH EAX                            ; 00408fe4
    LEA ESI,[ESP + 0x74]                ; 00408fe5
    LEA EDI,[ESP + 0x5c]                ; 00408fe9
    CALL core_box.cpp_FUN_0041d8b0      ; 00408fed
        ;   XREF to: 0041d8b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041d8b0()
    ADD ESP,0x8                         ; 00408ff2
    LEA EAX,[ESP + 0x54]                ; 00408ff5
    LEA ESI,[ESP + 0x6c]                ; 00408ff9
    PUSH EAX                            ; 00408ffd
    MOVSD ES:EDI,ESI                    ; 00408ffe
    MOVSD ES:EDI,ESI                    ; 00408fff
    MOVSD ES:EDI,ESI                    ; 00409000
    PUSH EBP                            ; 00409001
    LEA ESI,[ESP + 0x80]                ; 00409002
    LEA EDI,[ESP + 0x68]                ; 00409009
    CALL core_actor.cpp_FUN_00408b00    ; 0040900d
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 00409012
    LEA EAX,[ESP + 0x60]                ; 00409015
    LEA ESI,[ESP + 0x78]                ; 00409019
    PUSH EAX                            ; 0040901d
    LEA EAX,[ESP + 0x4]                 ; 0040901e
    INC EBX                             ; 00409022
    PUSH EAX                            ; 00409023
    MOVSD ES:EDI,ESI                    ; 00409024
    MOVSD ES:EDI,ESI                    ; 00409025
    MOVSD ES:EDI,ESI                    ; 00409026
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041d840 ; 00409027
        ;   XREF to: 0041d840 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041d840(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0040902c
    CMP EBX,0x8                         ; 0040902f
    JL 0x00408fdf                       ; 00409032
        ;   XREF to: 00408fdf (CONDITIONAL_JUMP)  ; LAB_00408fdf
    FLD float ptr [ESP]                 ; 00409034
    FADD float ptr [EBP + 0x20]         ; 00409037
    FLD float ptr [ESP + 0x4]           ; 0040903a
    FXCH                                ; 0040903e
    FSTP float ptr [ESP]                ; 00409040
    FADD float ptr [EBP + 0x24]         ; 00409043
    FLD float ptr [ESP + 0x8]           ; 00409046
    FXCH                                ; 0040904a
    FSTP float ptr [ESP + 0x4]          ; 0040904c
    FADD float ptr [EBP + 0x28]         ; 00409050
    FLD float ptr [ESP + 0xc]           ; 00409053
    FXCH                                ; 00409057
    FSTP float ptr [ESP + 0x8]          ; 00409059
    FADD float ptr [EBP + 0x20]         ; 0040905d
    FLD float ptr [ESP + 0x10]          ; 00409060
    FXCH                                ; 00409064
    FSTP float ptr [ESP + 0xc]          ; 00409066
    FADD float ptr [EBP + 0x24]         ; 0040906a
    FLD float ptr [ESP + 0x14]          ; 0040906d
    FXCH                                ; 00409071
    FSTP float ptr [ESP + 0x10]         ; 00409073
    FADD float ptr [EBP + 0x28]         ; 00409077
    FSTP float ptr [ESP + 0x14]         ; 0040907a
        ;   Label: LAB_0040907a
    MOV ECX,0x6                         ; 0040907e
        ;   Label: LAB_0040907e
    MOV EDI,dword ptr [ESP + 0xa8]      ; 00409083
    MOV ESI,ESP                         ; 0040908a
    MOVSD.REP ES:EDI,ESI                ; 0040908c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0040908e
    ADD ESP,0xac                        ; 00409095
    POP EBP                             ; 0040909b
    POP EDI                             ; 0040909c
    POP EBX                             ; 0040909d
    RET                                 ; 0040909e
    MOV EAX,dword ptr [EBX]             ; 0040909f
        ;   Label: LAB_0040909f
    MOV dword ptr [ESP + 0xc],EAX       ; 004090a1
    MOV EAX,dword ptr [EBX + 0x4]       ; 004090a5
    MOV dword ptr [ESP + 0x10],EAX      ; 004090a8
    MOV EAX,dword ptr [EBX + 0x8]       ; 004090ac
    MOV dword ptr [ESP + 0x14],EAX      ; 004090af
    JMP 0x00408fda                      ; 004090b3
        ;   XREF to: 00408fda (UNCONDITIONAL_JUMP)  ; LAB_00408fda
    FLD float ptr [EBP + 0x20]          ; 004090b8
        ;   Label: LAB_004090b8
    FSUB float ptr [EAX + 0x1c]         ; 004090bb
    FSTP float ptr [ESP]                ; 004090be
    FLD float ptr [EBP + 0x24]          ; 004090c1
    FADD float ptr [EAX + 0x14]         ; 004090c4
    FSTP float ptr [ESP + 0x4]          ; 004090c7
    FLD float ptr [EBP + 0x28]          ; 004090cb
    FSUB float ptr [EAX + 0x1c]         ; 004090ce
    FSTP float ptr [ESP + 0x8]          ; 004090d1
    FLD float ptr [EBP + 0x20]          ; 004090d5
    FADD float ptr [EAX + 0x1c]         ; 004090d8
    FSTP float ptr [ESP + 0xc]          ; 004090db
    FLD float ptr [EBP + 0x24]          ; 004090df
    FADD float ptr [EAX + 0x18]         ; 004090e2
    FSTP float ptr [ESP + 0x10]         ; 004090e5
    FLD float ptr [EBP + 0x28]          ; 004090e9
    FADD float ptr [EAX + 0x1c]         ; 004090ec
    JMP 0x0040907a                      ; 004090ef
        ;   XREF to: 0040907a (UNCONDITIONAL_JUMP)  ; LAB_0040907a
    JBE 0x004090b8                      ; 004090f1
        ;   XREF to: 004090b8 (CONDITIONAL_JUMP)  ; LAB_004090b8
        ;   Label: LAB_004090f1
    CMP EBX,0x3                         ; 004090f3
    JZ 0x00408f37                       ; 004090f6
        ;   XREF to: 00408f37 (CONDITIONAL_JUMP)  ; LAB_00408f37
    MOV EDX,0x4cbebc20                  ; 004090fc
        ;   Label: LAB_004090fc
    MOV EBX,ESP                         ; 00409101
    LEA EAX,[ESP + 0xc]                 ; 00409103
    MOV dword ptr [ESP + 0x4],EDX       ; 00409107
    MOV dword ptr [ESP],EDX             ; 0040910b
    MOV dword ptr [ESP + 0x8],EDX       ; 0040910e
    CMP EAX,EBX                         ; 00409112
    JZ 0x0040907e                       ; 00409114
        ;   XREF to: 0040907e (CONDITIONAL_JUMP)  ; LAB_0040907e
    MOV dword ptr [ESP + 0x10],EDX      ; 0040911a
    MOV dword ptr [ESP + 0x14],EDX      ; 0040911e
    MOV dword ptr [ESP + 0xc],EDX       ; 00409122
    JMP 0x0040907e                      ; 00409126
        ;   XREF to: 0040907e (UNCONDITIONAL_JUMP)  ; LAB_0040907e

