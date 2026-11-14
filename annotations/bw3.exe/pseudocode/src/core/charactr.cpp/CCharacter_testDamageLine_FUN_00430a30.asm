; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_00430a30(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start
; CVector3f *      Stack[0xc]:4   end
; SDamageInfo *    Stack[0x10]:4   damage_info
; CVector3f *      Stack[0x14]:4   out_hit
;
; Referenced Globals:
;   undefined4 DAT_005b83b6
;   undefined4 DAT_005b83be
;   undefined4 DAT_005b83c2
;   CGore* g_CGorePtr = 01d22e44
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430a30
        ;   Label: core_charactr.cpp_CCharacter_testDamageLine_FUN_00430a30
    PUSH ESI                            ; 00430a31
    PUSH EDI                            ; 00430a32
    PUSH EBP                            ; 00430a33
    MOV EBP,ESP                         ; 00430a34
    SUB ESP,0xe4                        ; 00430a36
    AND ESP,0xfffffff8                  ; 00430a3c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00430a3f
    CMP dword ptr [EBX + 0x27b0],0x0    ; 00430a42
    JZ 0x00430a54                       ; 00430a49
        ;   XREF to: 00430a54 (CONDITIONAL_JUMP)  ; LAB_00430a54
    XOR EAX,EAX                         ; 00430a4b
    MOV ESP,EBP                         ; 00430a4d
    POP EBP                             ; 00430a4f
    POP EDI                             ; 00430a50
    POP ESI                             ; 00430a51
    POP EBX                             ; 00430a52
    RET                                 ; 00430a53
    MOV ECX,dword ptr [EBP + 0x18]      ; 00430a54
        ;   Label: LAB_00430a54
    PUSH ECX                            ; 00430a57
    PUSH EBX                            ; 00430a58
    LEA ESI,[ESP + 0x88]                ; 00430a59
    LEA EDI,[ESP + 0x40]                ; 00430a60
    CALL core_actor.cpp_FUN_00408bf0    ; 00430a64
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x88]                ; 00430a69
    ADD ESP,0x8                         ; 00430a70
    MOVSD ES:EDI,ESI                    ; 00430a73
    MOVSD ES:EDI,ESI                    ; 00430a74
    MOVSD ES:EDI,ESI                    ; 00430a75
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00430a76
    PUSH ESI                            ; 00430a79
    PUSH EBX                            ; 00430a7a
    LEA ESI,[ESP + 0x7c]                ; 00430a7b
    CALL core_actor.cpp_FUN_00408bf0    ; 00430a7f
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    ADD ESP,0x8                         ; 00430a84
    LEA EDX,[ESP + 0x8c]                ; 00430a87
    LEA EDI,[ESP + 0x50]                ; 00430a8e
    PUSH EDX                            ; 00430a92
    LEA EDX,[ESP + 0x54]                ; 00430a93
    LEA ESI,[ESP + 0x78]                ; 00430a97
    PUSH EDX                            ; 00430a9b
    LEA EDX,[ESP + 0x40]                ; 00430a9c
    MOVSD ES:EDI,ESI                    ; 00430aa0
    MOVSD ES:EDI,ESI                    ; 00430aa1
    MOVSD ES:EDI,ESI                    ; 00430aa2
    PUSH EDX                            ; 00430aa3
    MOV EAX,dword ptr [EBX + 0x154]     ; 00430aa4
    PUSH EBX                            ; 00430aaa
    CALL dword ptr [EAX + 0xb0]         ; 00430aab
    ADD ESP,0x10                        ; 00430ab1
    TEST EAX,EAX                        ; 00430ab4
    JZ 0x00430cdd                       ; 00430ab6
        ;   XREF to: 00430cdd (CONDITIONAL_JUMP)  ; LAB_00430cdd
    CMP dword ptr [EBP + 0x24],0x0      ; 00430abc
    JNZ 0x00430cf0                      ; 00430ac0
        ;   XREF to: 00430cf0 (CONDITIONAL_JUMP)  ; LAB_00430cf0
    MOV EAX,dword ptr [EBP + 0x20]      ; 00430ac6
        ;   Label: LAB_00430ac6
    FLDZ                                ; 00430ac9
    FLD float ptr [EAX + 0x4]           ; 00430acb
    FSTP double ptr [ESP]               ; 00430ace
    FCOMP double ptr [ESP]              ; 00430ad1
    FNSTSW AX                           ; 00430ad4
    SAHF                                ; 00430ad6
    JNC 0x00430c25                      ; 00430ad7
        ;   XREF to: 00430c25 (CONDITIONAL_JUMP)  ; LAB_00430c25
    FLD double ptr [ESP]                ; 00430add
    FMUL double ptr [0x005b83b6]        ; 00430ae0 | DAT_005b83b6
    CALL crt_math.c_round_FUN_005a3120  ; 00430ae6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0xd4]        ; 00430aeb
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00430af2
    INC EAX                             ; 00430af9
    MOV dword ptr [ESP + 0xdc],EAX      ; 00430afa
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00430b01
    FLD float ptr [EAX]                 ; 00430b04
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430b06
    FSUB float ptr [EAX]                ; 00430b09
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00430b0b
    FLD float ptr [EAX + 0x4]           ; 00430b0e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430b11
    FSUB float ptr [EAX + 0x4]          ; 00430b14
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00430b17
    LEA EDI,[ESP + 0x20]                ; 00430b1a
    LEA ESI,[ESP + 0x44]                ; 00430b1e
    FLD float ptr [EAX + 0x8]           ; 00430b22
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430b25
    FXCH ST2                            ; 00430b28
    FSTP float ptr [ESP + 0x44]         ; 00430b2a
    FXCH                                ; 00430b2e
    FSUB float ptr [EAX + 0x8]          ; 00430b30
    FXCH                                ; 00430b33
    FSTP float ptr [ESP + 0x48]         ; 00430b35
    FSTP float ptr [ESP + 0x4c]         ; 00430b39
    MOVSD ES:EDI,ESI                    ; 00430b3d
    MOVSD ES:EDI,ESI                    ; 00430b3e
    MOVSD ES:EDI,ESI                    ; 00430b3f
    FLD float ptr [ESP + 0x24]          ; 00430b40
    FMUL ST0                            ; 00430b44
    FLD float ptr [ESP + 0x20]          ; 00430b46
    FMUL ST0                            ; 00430b4a
    FADDP                               ; 00430b4c
    FLD float ptr [ESP + 0x28]          ; 00430b4e
    FMUL ST0                            ; 00430b52
    FADDP                               ; 00430b54
    FSQRT                               ; 00430b56
    FLDZ                                ; 00430b58
    FXCH                                ; 00430b5a
    FSTP float ptr [ESP + 0xe0]         ; 00430b5c
    FCOMP float ptr [ESP + 0xe0]        ; 00430b63
    FNSTSW AX                           ; 00430b6a
    SAHF                                ; 00430b6c
    JNC 0x00430d4d                      ; 00430b6d
        ;   XREF to: 00430d4d (CONDITIONAL_JUMP)  ; LAB_00430d4d
    FLD1                                ; 00430b73
    FLD float ptr [ESP + 0x20]          ; 00430b75
    FXCH                                ; 00430b79
    FDIV float ptr [ESP + 0xe0]         ; 00430b7b
    FXCH                                ; 00430b82
    FMUL ST1                            ; 00430b84
    FLD float ptr [ESP + 0x24]          ; 00430b86
    FMUL ST2                            ; 00430b8a
    FLD float ptr [ESP + 0x28]          ; 00430b8c
    FMULP ST3                           ; 00430b90
    FXCH                                ; 00430b92
    FSTP float ptr [ESP + 0x20]         ; 00430b94
    FSTP float ptr [ESP + 0x24]         ; 00430b98
    FSTP float ptr [ESP + 0x28]         ; 00430b9c
    FLD float ptr [0x005b83be]          ; 00430ba0 | DAT_005b83be
        ;   Label: LAB_00430ba0
    FLD float ptr [ESP + 0x20]          ; 00430ba6
    FMUL ST1                            ; 00430baa
    FLD float ptr [ESP + 0x24]          ; 00430bac
    FMUL ST2                            ; 00430bb0
    FLD float ptr [ESP + 0x28]          ; 00430bb2
    FMULP ST3                           ; 00430bb6
    LEA EDI,[ESP + 0xc8]                ; 00430bb8
    LEA EAX,[ESP + 0x8c]                ; 00430bbf
    LEA ESI,[ESP + 0x8]                 ; 00430bc6
    PUSH EAX                            ; 00430bca
    FXCH                                ; 00430bcb
    FSTP float ptr [ESP + 0xc]          ; 00430bcd
    FSTP float ptr [ESP + 0x10]         ; 00430bd1
    FSTP float ptr [ESP + 0x14]         ; 00430bd5
    MOVSD ES:EDI,ESI                    ; 00430bd9
    MOVSD ES:EDI,ESI                    ; 00430bda
    MOVSD ES:EDI,ESI                    ; 00430bdb
    PUSH EBX                            ; 00430bdc
    LEA ESI,[ESP + 0x64]                ; 00430bdd
    LEA EDI,[ESP + 0xc4]                ; 00430be1
    CALL core_actor.cpp_FUN_00408b80    ; 00430be8
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x64]                ; 00430bed
    ADD ESP,0x8                         ; 00430bf1
    MOVSD ES:EDI,ESI                    ; 00430bf4
    MOVSD ES:EDI,ESI                    ; 00430bf5
    MOVSD ES:EDI,ESI                    ; 00430bf6
    MOV EAX,dword ptr [EBX + 0x27a0]    ; 00430bf7
    PUSH EAX                            ; 00430bfd
    MOV EDX,dword ptr [ESP + 0xe0]      ; 00430bfe
    PUSH EDX                            ; 00430c05
    LEA EAX,[ESP + 0xd0]                ; 00430c06
    PUSH EAX                            ; 00430c0d
    LEA EAX,[ESP + 0xc8]                ; 00430c0e
    PUSH EAX                            ; 00430c15
    MOV ECX,dword ptr [0x005fed24]      ; 00430c16 | g_CGorePtr
    PUSH ECX                            ; 00430c1c
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 00430c1d
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00430c22
    FLD float ptr [ESP + 0x38]          ; 00430c25
        ;   Label: LAB_00430c25
    FLD float ptr [ESP + 0x3c]          ; 00430c29
    FLD float ptr [ESP + 0x40]          ; 00430c2d
    LEA EDI,[ESP + 0xb0]                ; 00430c31
    LEA ESI,[ESP + 0x2c]                ; 00430c38
    FXCH ST2                            ; 00430c3c
    FADD float ptr [ESP + 0x50]         ; 00430c3e
    FXCH                                ; 00430c42
    FADD float ptr [ESP + 0x54]         ; 00430c44
    FXCH ST2                            ; 00430c48
    FADD float ptr [ESP + 0x58]         ; 00430c4a
    FXCH                                ; 00430c4e
    FSTP float ptr [ESP + 0x2c]         ; 00430c50
    FXCH                                ; 00430c54
    FSTP float ptr [ESP + 0x30]         ; 00430c56
    FSTP float ptr [ESP + 0x34]         ; 00430c5a
    MOVSD ES:EDI,ESI                    ; 00430c5e
    MOVSD ES:EDI,ESI                    ; 00430c5f
    MOVSD ES:EDI,ESI                    ; 00430c60
    FLD float ptr [0x005b83c2]          ; 00430c61 | DAT_005b83c2
    FLD float ptr [ESP + 0xb0]          ; 00430c67
    FMUL ST1                            ; 00430c6e
    FLD float ptr [ESP + 0xb4]          ; 00430c70
    FMUL ST2                            ; 00430c77
    FLD float ptr [ESP + 0xb8]          ; 00430c79
    FMULP ST3                           ; 00430c80
    MOV EDX,dword ptr [EBP + 0x20]      ; 00430c82
    LEA EAX,[ESP + 0x68]                ; 00430c85
    ADD EDX,0x1c                        ; 00430c89
    LEA EDI,[ESP + 0x68]                ; 00430c8c
    LEA ESI,[ESP + 0x14]                ; 00430c90
    FXCH                                ; 00430c94
    FSTP float ptr [ESP + 0x14]         ; 00430c96
    FSTP float ptr [ESP + 0x18]         ; 00430c9a
    FSTP float ptr [ESP + 0x1c]         ; 00430c9e
    MOVSD ES:EDI,ESI                    ; 00430ca2
    MOVSD ES:EDI,ESI                    ; 00430ca3
    MOVSD ES:EDI,ESI                    ; 00430ca4
    CMP EDX,EAX                         ; 00430ca5
    JZ 0x00430cbd                       ; 00430ca7
        ;   XREF to: 00430cbd (CONDITIONAL_JUMP)  ; LAB_00430cbd
    MOV EAX,dword ptr [ESP + 0x68]      ; 00430ca9
    MOV dword ptr [EDX],EAX             ; 00430cad
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00430caf
    MOV dword ptr [EDX + 0x4],EAX       ; 00430cb3
    MOV EAX,dword ptr [ESP + 0x70]      ; 00430cb6
    MOV dword ptr [EDX + 0x8],EAX       ; 00430cba
    MOV ESI,dword ptr [EBP + 0x20]      ; 00430cbd
        ;   Label: LAB_00430cbd
    PUSH ESI                            ; 00430cc0
    MOV EAX,dword ptr [EBX + 0x154]     ; 00430cc1
    PUSH EBX                            ; 00430cc7
    CALL dword ptr [EAX + 0x108]        ; 00430cc8
    MOV EAX,0x1                         ; 00430cce
    ADD ESP,0x8                         ; 00430cd3
    MOV ESP,EBP                         ; 00430cd6
    POP EBP                             ; 00430cd8
    POP EDI                             ; 00430cd9
    POP ESI                             ; 00430cda
    POP EBX                             ; 00430cdb
    RET                                 ; 00430cdc
    MOV EAX,dword ptr [EBP + 0x20]      ; 00430cdd
        ;   Label: LAB_00430cdd
    MOV dword ptr [EAX + 0x4],0x0       ; 00430ce0
    XOR EAX,EAX                         ; 00430ce7
    MOV ESP,EBP                         ; 00430ce9
    POP EBP                             ; 00430ceb
    POP EDI                             ; 00430cec
    POP ESI                             ; 00430ced
    POP EBX                             ; 00430cee
    RET                                 ; 00430cef
    LEA EAX,[ESP + 0x8c]                ; 00430cf0
        ;   Label: LAB_00430cf0
    PUSH EAX                            ; 00430cf7
    PUSH EBX                            ; 00430cf8
    LEA ESI,[ESP + 0xa0]                ; 00430cf9
    LEA EDI,[ESP + 0xac]                ; 00430d00
    CALL core_actor.cpp_FUN_00408b80    ; 00430d07
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0xa0]                ; 00430d0c
    ADD ESP,0x8                         ; 00430d13
    LEA EAX,[ESP + 0xa4]                ; 00430d16
    MOV EDX,dword ptr [EBP + 0x24]      ; 00430d1d
    MOVSD ES:EDI,ESI                    ; 00430d20
    MOVSD ES:EDI,ESI                    ; 00430d21
    MOVSD ES:EDI,ESI                    ; 00430d22
    CMP EAX,EDX                         ; 00430d23
    JZ 0x00430ac6                       ; 00430d25
        ;   XREF to: 00430ac6 (CONDITIONAL_JUMP)  ; LAB_00430ac6
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00430d2b
    MOV dword ptr [EDX],EAX             ; 00430d32
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00430d34
    MOV dword ptr [EDX + 0x4],EAX       ; 00430d3b
    MOV EAX,dword ptr [ESP + 0xac]      ; 00430d3e
    MOV dword ptr [EDX + 0x8],EAX       ; 00430d45
    JMP 0x00430ac6                      ; 00430d48
        ;   XREF to: 00430ac6 (UNCONDITIONAL_JUMP)  ; LAB_00430ac6
    XOR ECX,ECX                         ; 00430d4d
        ;   Label: LAB_00430d4d
    MOV dword ptr [ESP + 0x24],ECX      ; 00430d4f
    MOV dword ptr [ESP + 0x20],ECX      ; 00430d53
    MOV dword ptr [ESP + 0x28],ECX      ; 00430d57
    JMP 0x00430ba0                      ; 00430d5b
        ;   XREF to: 00430ba0 (UNCONDITIONAL_JUMP)  ; LAB_00430ba0

