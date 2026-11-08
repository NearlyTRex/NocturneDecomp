; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00408ec0(int param_1,int param_2,uint param_3)
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
;   FUN_00409170 at 004091af
;   FUN_005562c0 at 005565f7
;   FUN_00558450 at 00558783
;
; Called Functions:
;   FUN_00408ac0
;   FUN_00420500
;   FUN_00420570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408ec0
        ;   Label: FUN_00408ec0
    PUSH EDI                            ; 00408ec1
    PUSH EBP                            ; 00408ec2
    SUB ESP,0xac                        ; 00408ec3
    MOV EBP,dword ptr [ESP + 0xbc]      ; 00408ec9
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00408ed0
    MOV EBX,dword ptr [ESP + 0xc4]      ; 00408ed7
    MOV dword ptr [ESP + 0xa8],ESI      ; 00408ede
    CMP EBX,0x2                         ; 00408ee5
    JNC 0x004090b1                      ; 00408ee8
        ;   XREF to: 004090b1 (CONDITIONAL_JUMP)  ; LAB_004090b1
    CMP EBX,0x1                         ; 00408eee
    JNZ 0x004090bc                      ; 00408ef1
        ;   XREF to: 004090bc (CONDITIONAL_JUMP)  ; LAB_004090bc
    PUSH EBP                            ; 00408ef7
        ;   Label: LAB_00408ef7
    MOV EAX,dword ptr [EBP + 0x154]     ; 00408ef8
    LEA ESI,[ESP + 0x1c]                ; 00408efe
    LEA EDI,[ESP + 0x34]                ; 00408f02
    CALL dword ptr [EAX + 0x1c]         ; 00408f06
    MOV ECX,0x6                         ; 00408f09
    ADD ESP,0x4                         ; 00408f0e
    LEA ESI,[ESP + 0x18]                ; 00408f11
    LEA EAX,[ESP + 0x30]                ; 00408f15
    PUSH 0x0                            ; 00408f19
    MOVSD.REP ES:EDI,ESI                ; 00408f1b
    PUSH EAX                            ; 00408f1d
    LEA ESI,[ESP + 0x50]                ; 00408f1e
    LEA EDI,[ESP + 0x8c]                ; 00408f22
    CALL FUN_00420570                   ; 00408f29
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; undefined FUN_00420570()
    LEA ESI,[ESP + 0x50]                ; 00408f2e
    ADD ESP,0x8                         ; 00408f32
    LEA EAX,[ESP + 0x84]                ; 00408f35
    LEA EBX,[ESP + 0x90]                ; 00408f3c
    PUSH EAX                            ; 00408f43
    MOVSD ES:EDI,ESI                    ; 00408f44
    MOVSD ES:EDI,ESI                    ; 00408f45
    MOVSD ES:EDI,ESI                    ; 00408f46
    PUSH EBP                            ; 00408f47
    LEA ESI,[ESP + 0xa4]                ; 00408f48
    LEA EDI,[ESP + 0x98]                ; 00408f4f
    CALL FUN_00408ac0                   ; 00408f56
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[ESP + 0xa4]                ; 00408f5b
    ADD ESP,0x8                         ; 00408f62
    MOV EAX,ESP                         ; 00408f65
    MOVSD ES:EDI,ESI                    ; 00408f67
    MOVSD ES:EDI,ESI                    ; 00408f68
    MOVSD ES:EDI,ESI                    ; 00408f69
    CMP EAX,EBX                         ; 00408f6a
    JZ 0x00408f8e                       ; 00408f6c
        ;   XREF to: 00408f8e (CONDITIONAL_JUMP)  ; LAB_00408f8e
    MOV EAX,dword ptr [ESP + 0x90]      ; 00408f6e
    MOV dword ptr [ESP],EAX             ; 00408f75
    MOV EAX,dword ptr [ESP + 0x94]      ; 00408f78
    MOV dword ptr [ESP + 0x4],EAX       ; 00408f7f
    MOV EAX,dword ptr [ESP + 0x98]      ; 00408f83
    MOV dword ptr [ESP + 0x8],EAX       ; 00408f8a
    LEA EAX,[ESP + 0xc]                 ; 00408f8e
        ;   Label: LAB_00408f8e
    CMP EAX,EBX                         ; 00408f92
    JNZ 0x0040905f                      ; 00408f94
        ;   XREF to: 0040905f (CONDITIONAL_JUMP)  ; LAB_0040905f
    MOV EBX,0x1                         ; 00408f9a
        ;   Label: LAB_00408f9a
    PUSH EBX                            ; 00408f9f
        ;   Label: LAB_00408f9f
    LEA EAX,[ESP + 0x34]                ; 00408fa0
    PUSH EAX                            ; 00408fa4
    LEA ESI,[ESP + 0x74]                ; 00408fa5
    LEA EDI,[ESP + 0x5c]                ; 00408fa9
    CALL FUN_00420570                   ; 00408fad
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; undefined FUN_00420570()
    ADD ESP,0x8                         ; 00408fb2
    LEA EAX,[ESP + 0x54]                ; 00408fb5
    LEA ESI,[ESP + 0x6c]                ; 00408fb9
    PUSH EAX                            ; 00408fbd
    MOVSD ES:EDI,ESI                    ; 00408fbe
    MOVSD ES:EDI,ESI                    ; 00408fbf
    MOVSD ES:EDI,ESI                    ; 00408fc0
    PUSH EBP                            ; 00408fc1
    LEA ESI,[ESP + 0x80]                ; 00408fc2
    LEA EDI,[ESP + 0x68]                ; 00408fc9
    CALL FUN_00408ac0                   ; 00408fcd
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    ADD ESP,0x8                         ; 00408fd2
    LEA EAX,[ESP + 0x60]                ; 00408fd5
    LEA ESI,[ESP + 0x78]                ; 00408fd9
    PUSH EAX                            ; 00408fdd
    LEA EAX,[ESP + 0x4]                 ; 00408fde
    INC EBX                             ; 00408fe2
    PUSH EAX                            ; 00408fe3
    MOVSD ES:EDI,ESI                    ; 00408fe4
    MOVSD ES:EDI,ESI                    ; 00408fe5
    MOVSD ES:EDI,ESI                    ; 00408fe6
    CALL FUN_00420500                   ; 00408fe7
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; undefined FUN_00420500()
    ADD ESP,0x8                         ; 00408fec
    CMP EBX,0x8                         ; 00408fef
    JL 0x00408f9f                       ; 00408ff2
        ;   XREF to: 00408f9f (CONDITIONAL_JUMP)  ; LAB_00408f9f
    FLD float ptr [ESP]                 ; 00408ff4
    FADD float ptr [EBP + 0x20]         ; 00408ff7
    FLD float ptr [ESP + 0x4]           ; 00408ffa
    FXCH                                ; 00408ffe
    FSTP float ptr [ESP]                ; 00409000
    FADD float ptr [EBP + 0x24]         ; 00409003
    FLD float ptr [ESP + 0x8]           ; 00409006
    FXCH                                ; 0040900a
    FSTP float ptr [ESP + 0x4]          ; 0040900c
    FADD float ptr [EBP + 0x28]         ; 00409010
    FLD float ptr [ESP + 0xc]           ; 00409013
    FXCH                                ; 00409017
    FSTP float ptr [ESP + 0x8]          ; 00409019
    FADD float ptr [EBP + 0x20]         ; 0040901d
    FLD float ptr [ESP + 0x10]          ; 00409020
    FXCH                                ; 00409024
    FSTP float ptr [ESP + 0xc]          ; 00409026
    FADD float ptr [EBP + 0x24]         ; 0040902a
    FLD float ptr [ESP + 0x14]          ; 0040902d
    FXCH                                ; 00409031
    FSTP float ptr [ESP + 0x10]         ; 00409033
    FADD float ptr [EBP + 0x28]         ; 00409037
    FSTP float ptr [ESP + 0x14]         ; 0040903a
        ;   Label: LAB_0040903a
    MOV ECX,0x6                         ; 0040903e
        ;   Label: LAB_0040903e
    MOV EDI,dword ptr [ESP + 0xa8]      ; 00409043
    MOV ESI,ESP                         ; 0040904a
    MOVSD.REP ES:EDI,ESI                ; 0040904c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0040904e
    ADD ESP,0xac                        ; 00409055
    POP EBP                             ; 0040905b
    POP EDI                             ; 0040905c
    POP EBX                             ; 0040905d
    RET                                 ; 0040905e
    MOV EAX,dword ptr [EBX]             ; 0040905f
        ;   Label: LAB_0040905f
    MOV dword ptr [ESP + 0xc],EAX       ; 00409061
    MOV EAX,dword ptr [EBX + 0x4]       ; 00409065
    MOV dword ptr [ESP + 0x10],EAX      ; 00409068
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040906c
    MOV dword ptr [ESP + 0x14],EAX      ; 0040906f
    JMP 0x00408f9a                      ; 00409073
        ;   XREF to: 00408f9a (UNCONDITIONAL_JUMP)  ; LAB_00408f9a
    FLD float ptr [EBP + 0x20]          ; 00409078
        ;   Label: LAB_00409078
    FSUB float ptr [EAX + 0x1c]         ; 0040907b
    FSTP float ptr [ESP]                ; 0040907e
    FLD float ptr [EBP + 0x24]          ; 00409081
    FADD float ptr [EAX + 0x14]         ; 00409084
    FSTP float ptr [ESP + 0x4]          ; 00409087
    FLD float ptr [EBP + 0x28]          ; 0040908b
    FSUB float ptr [EAX + 0x1c]         ; 0040908e
    FSTP float ptr [ESP + 0x8]          ; 00409091
    FLD float ptr [EBP + 0x20]          ; 00409095
    FADD float ptr [EAX + 0x1c]         ; 00409098
    FSTP float ptr [ESP + 0xc]          ; 0040909b
    FLD float ptr [EBP + 0x24]          ; 0040909f
    FADD float ptr [EAX + 0x18]         ; 004090a2
    FSTP float ptr [ESP + 0x10]         ; 004090a5
    FLD float ptr [EBP + 0x28]          ; 004090a9
    FADD float ptr [EAX + 0x1c]         ; 004090ac
    JMP 0x0040903a                      ; 004090af
        ;   XREF to: 0040903a (UNCONDITIONAL_JUMP)  ; LAB_0040903a
    JBE 0x00409078                      ; 004090b1
        ;   XREF to: 00409078 (CONDITIONAL_JUMP)  ; LAB_00409078
        ;   Label: LAB_004090b1
    CMP EBX,0x3                         ; 004090b3
    JZ 0x00408ef7                       ; 004090b6
        ;   XREF to: 00408ef7 (CONDITIONAL_JUMP)  ; LAB_00408ef7
    MOV EDX,0x4cbebc20                  ; 004090bc
        ;   Label: LAB_004090bc
    MOV EBX,ESP                         ; 004090c1
    LEA EAX,[ESP + 0xc]                 ; 004090c3
    MOV dword ptr [ESP + 0x4],EDX       ; 004090c7
    MOV dword ptr [ESP],EDX             ; 004090cb
    MOV dword ptr [ESP + 0x8],EDX       ; 004090ce
    CMP EAX,EBX                         ; 004090d2
    JZ 0x0040903e                       ; 004090d4
        ;   XREF to: 0040903e (CONDITIONAL_JUMP)  ; LAB_0040903e
    MOV dword ptr [ESP + 0x10],EDX      ; 004090da
    MOV dword ptr [ESP + 0x14],EDX      ; 004090de
    MOV dword ptr [ESP + 0xc],EDX       ; 004090e2
    JMP 0x0040903e                      ; 004090e6
        ;   XREF to: 0040903e (UNCONDITIONAL_JUMP)  ; LAB_0040903e

