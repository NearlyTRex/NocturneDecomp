; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_curtain_cpp_FUN_0044aa10(int param_1)
;
;
; XREF[1]:
;   core_curtain.cpp_FUN_0044a380 at 0044a982
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044aa10
        ;   Label: core_curtain.cpp_FUN_0044aa10
    PUSH ESI                            ; 0044aa11
    PUSH EDI                            ; 0044aa12
    PUSH EBP                            ; 0044aa13
    SUB ESP,0x40                        ; 0044aa14
    MOV EAX,dword ptr [ESP + 0x54]      ; 0044aa17
    MOV EDX,dword ptr [EAX + 0x204]     ; 0044aa1b
    XOR EBP,EBP                         ; 0044aa21
    TEST EDX,EDX                        ; 0044aa23
    JLE 0x0044aaf4                      ; 0044aa25
        ;   XREF to: 0044aaf4 (CONDITIONAL_JUMP)  ; LAB_0044aaf4
    ADD EAX,0x208                       ; 0044aa2b
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044aa30
    MOV EAX,dword ptr [ESP + 0x54]      ; 0044aa34
    ADD EAX,0x3c                        ; 0044aa38
    MOV dword ptr [ESP + 0x30],EAX      ; 0044aa3b
    MOV EAX,dword ptr [ESP + 0x54]      ; 0044aa3f
    MOV EBX,dword ptr [ESP + 0x54]      ; 0044aa43
    ADD EAX,0x20                        ; 0044aa47
    ADD EBX,0x228                       ; 0044aa4a
    MOV dword ptr [ESP + 0x34],EAX      ; 0044aa50
    IMUL EAX,EBP,0x74                   ; 0044aa54
        ;   Label: LAB_0044aa54
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0044aa57
    ADD EDX,EAX                         ; 0044aa5b
    PUSH EDX                            ; 0044aa5d
    MOV EDI,dword ptr [ESP + 0x34]      ; 0044aa5e
    PUSH EDI                            ; 0044aa62
    LEA ESI,[ESP + 0x20]                ; 0044aa63
    MOV dword ptr [ESP + 0x40],EDX      ; 0044aa67
    CALL core_dirmat.cpp_FUN_0045f690   ; 0044aa6b
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA EDI,[ESP + 0x14]                ; 0044aa70
    LEA ESI,[ESP + 0x20]                ; 0044aa74
    ADD ESP,0x8                         ; 0044aa78
    MOVSD ES:EDI,ESI                    ; 0044aa7b
    MOVSD ES:EDI,ESI                    ; 0044aa7c
    MOVSD ES:EDI,ESI                    ; 0044aa7d
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044aa7e
    FLD float ptr [ESP + 0xc]           ; 0044aa82
    FLD float ptr [ESP + 0x10]          ; 0044aa86
    FLD float ptr [ESP + 0x14]          ; 0044aa8a
    LEA EDI,[ESP + 0x24]                ; 0044aa8e
    MOV ESI,ESP                         ; 0044aa92
    FXCH ST2                            ; 0044aa94
    FADD float ptr [EAX]                ; 0044aa96
    FXCH                                ; 0044aa98
    FADD float ptr [EAX + 0x4]          ; 0044aa9a
    FXCH ST2                            ; 0044aa9d
    FADD float ptr [EAX + 0x8]          ; 0044aa9f
    FXCH                                ; 0044aaa2
    FSTP float ptr [ESP]                ; 0044aaa4
    FXCH                                ; 0044aaa7
    FSTP float ptr [ESP + 0x4]          ; 0044aaa9
    FSTP float ptr [ESP + 0x8]          ; 0044aaad
    LEA EAX,[ESP + 0x24]                ; 0044aab1
    MOVSD ES:EDI,ESI                    ; 0044aab5
    MOVSD ES:EDI,ESI                    ; 0044aab6
    MOVSD ES:EDI,ESI                    ; 0044aab7
    CMP EBX,EAX                         ; 0044aab8
    JNZ 0x0044aafc                      ; 0044aaba
        ;   XREF to: 0044aafc (CONDITIONAL_JUMP)  ; LAB_0044aafc
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044aabc
        ;   Label: LAB_0044aabc
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044aac0
    ADD EDX,0x20                        ; 0044aac4
    ADD EAX,0x38                        ; 0044aac7
    CMP EAX,EDX                         ; 0044aaca
    JZ 0x0044aade                       ; 0044aacc
        ;   XREF to: 0044aade (CONDITIONAL_JUMP)  ; LAB_0044aade
    MOV ECX,dword ptr [EDX]             ; 0044aace
    MOV dword ptr [EAX],ECX             ; 0044aad0
    MOV ECX,dword ptr [EDX + 0x4]       ; 0044aad2
    MOV dword ptr [EAX + 0x4],ECX       ; 0044aad5
    MOV ECX,dword ptr [EDX + 0x8]       ; 0044aad8
    MOV dword ptr [EAX + 0x8],ECX       ; 0044aadb
    MOV EAX,dword ptr [ESP + 0x54]      ; 0044aade
        ;   Label: LAB_0044aade
    INC EBP                             ; 0044aae2
    MOV ECX,dword ptr [EAX + 0x204]     ; 0044aae3
    ADD EBX,0x74                        ; 0044aae9
    CMP EBP,ECX                         ; 0044aaec
    JL 0x0044aa54                       ; 0044aaee
        ;   XREF to: 0044aa54 (CONDITIONAL_JUMP)  ; LAB_0044aa54
    ADD ESP,0x40                        ; 0044aaf4
        ;   Label: LAB_0044aaf4
    POP EBP                             ; 0044aaf7
    POP EDI                             ; 0044aaf8
    POP ESI                             ; 0044aaf9
    POP EBX                             ; 0044aafa
    RET                                 ; 0044aafb
    MOV EAX,dword ptr [ESP + 0x24]      ; 0044aafc
        ;   Label: LAB_0044aafc
    MOV dword ptr [EBX],EAX             ; 0044ab00
    MOV EAX,dword ptr [ESP + 0x28]      ; 0044ab02
    MOV dword ptr [EBX + 0x4],EAX       ; 0044ab06
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044ab09
    MOV dword ptr [EBX + 0x8],EAX       ; 0044ab0d
    JMP 0x0044aabc                      ; 0044ab10
        ;   XREF to: 0044aabc (UNCONDITIONAL_JUMP)  ; LAB_0044aabc

