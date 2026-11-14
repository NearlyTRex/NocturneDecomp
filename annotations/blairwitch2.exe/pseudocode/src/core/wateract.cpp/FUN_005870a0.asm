; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_FUN_005870a0(int param_1)
;
;
; XREF[1]:
;   core_wateract.cpp_CWaterActor_setup_FUN_00586af0 at 00586dc1
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005870a0
        ;   Label: core_wateract.cpp_FUN_005870a0
    PUSH ESI                            ; 005870a1
    PUSH EDI                            ; 005870a2
    PUSH EBP                            ; 005870a3
    SUB ESP,0x3c                        ; 005870a4
    MOV EAX,dword ptr [ESP + 0x50]      ; 005870a7
    MOV EDX,dword ptr [EAX + 0x3f4]     ; 005870ab
    XOR EBP,EBP                         ; 005870b1
    TEST EDX,EDX                        ; 005870b3
    JLE 0x0058715f                      ; 005870b5
        ;   XREF to: 0058715f (CONDITIONAL_JUMP)  ; LAB_0058715f
    ADD EAX,0x3f8                       ; 005870bb
    MOV dword ptr [ESP + 0x38],EAX      ; 005870c0
    MOV EAX,dword ptr [ESP + 0x50]      ; 005870c4
    ADD EAX,0x3c                        ; 005870c8
    MOV dword ptr [ESP + 0x30],EAX      ; 005870cb
    MOV EAX,dword ptr [ESP + 0x50]      ; 005870cf
    MOV EBX,dword ptr [ESP + 0x50]      ; 005870d3
    ADD EAX,0x20                        ; 005870d7
    ADD EBX,0x404                       ; 005870da
    MOV dword ptr [ESP + 0x34],EAX      ; 005870e0
    MOV EAX,EBP                         ; 005870e4
        ;   Label: LAB_005870e4
    MOV ESI,dword ptr [ESP + 0x38]      ; 005870e6
    SHL EAX,0x5                         ; 005870ea
    ADD EAX,ESI                         ; 005870ed
    PUSH EAX                            ; 005870ef
    MOV EDI,dword ptr [ESP + 0x34]      ; 005870f0
    PUSH EDI                            ; 005870f4
    LEA ESI,[ESP + 0x8]                 ; 005870f5
    CALL core_dirmat.cpp_FUN_00449530   ; 005870f9
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA EDI,[ESP + 0x2c]                ; 005870fe
    LEA ESI,[ESP + 0x8]                 ; 00587102
    ADD ESP,0x8                         ; 00587106
    MOVSD ES:EDI,ESI                    ; 00587109
    MOVSD ES:EDI,ESI                    ; 0058710a
    MOVSD ES:EDI,ESI                    ; 0058710b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0058710c
    FLD float ptr [ESP + 0x24]          ; 00587110
    FLD float ptr [ESP + 0x28]          ; 00587114
    FLD float ptr [ESP + 0x2c]          ; 00587118
    LEA EDI,[ESP + 0xc]                 ; 0058711c
    LEA ESI,[ESP + 0x18]                ; 00587120
    FXCH ST2                            ; 00587124
    FADD float ptr [EAX]                ; 00587126
    FXCH                                ; 00587128
    FADD float ptr [EAX + 0x4]          ; 0058712a
    FXCH ST2                            ; 0058712d
    FADD float ptr [EAX + 0x8]          ; 0058712f
    FXCH                                ; 00587132
    FSTP float ptr [ESP + 0x18]         ; 00587134
    FXCH                                ; 00587138
    FSTP float ptr [ESP + 0x1c]         ; 0058713a
    FSTP float ptr [ESP + 0x20]         ; 0058713e
    LEA EAX,[ESP + 0xc]                 ; 00587142
    MOVSD ES:EDI,ESI                    ; 00587146
    MOVSD ES:EDI,ESI                    ; 00587147
    MOVSD ES:EDI,ESI                    ; 00587148
    CMP EBX,EAX                         ; 00587149
    JNZ 0x00587167                      ; 0058714b
        ;   XREF to: 00587167 (CONDITIONAL_JUMP)  ; LAB_00587167
    MOV EAX,dword ptr [ESP + 0x50]      ; 0058714d
        ;   Label: LAB_0058714d
    INC EBP                             ; 00587151
    MOV ECX,dword ptr [EAX + 0x3f4]     ; 00587152
    ADD EBX,0x20                        ; 00587158
    CMP EBP,ECX                         ; 0058715b
    JL 0x005870e4                       ; 0058715d
        ;   XREF to: 005870e4 (CONDITIONAL_JUMP)  ; LAB_005870e4
    ADD ESP,0x3c                        ; 0058715f
        ;   Label: LAB_0058715f
    POP EBP                             ; 00587162
    POP EDI                             ; 00587163
    POP ESI                             ; 00587164
    POP EBX                             ; 00587165
    RET                                 ; 00587166
    MOV EAX,dword ptr [ESP + 0xc]       ; 00587167
        ;   Label: LAB_00587167
    MOV dword ptr [EBX],EAX             ; 0058716b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058716d
    MOV dword ptr [EBX + 0x4],EAX       ; 00587171
    MOV EAX,dword ptr [ESP + 0x14]      ; 00587174
    MOV dword ptr [EBX + 0x8],EAX       ; 00587178
    JMP 0x0058714d                      ; 0058717b
        ;   XREF to: 0058714d (UNCONDITIONAL_JUMP)  ; LAB_0058714d

