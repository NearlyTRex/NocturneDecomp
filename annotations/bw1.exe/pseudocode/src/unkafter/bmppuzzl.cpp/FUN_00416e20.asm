; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_bmppuzzl_cpp_FUN_00416e20(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_REC_DIAL_WAV_005d3fe0
;   TerminatedCString s_REC_DIAL_WAV_005d3fee
;   undefined4 DAT_007c397c
;   undefined4 DAT_01c4353c
;
; Called Functions:
;   sound_sndmain.cpp_startSfx_FUN_00572d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416e20
        ;   Label: unkafter_bmppuzzl.cpp_FUN_00416e20
    PUSH ESI                            ; 00416e21
    PUSH EDI                            ; 00416e22
    MOV EBX,dword ptr [ESP + 0x10]      ; 00416e23
    MOV ESI,dword ptr [ESP + 0x14]      ; 00416e27
    LEA EAX,[ESI*0x4 + 0x0]             ; 00416e2b
    LEA EDX,[ESI + EAX*0x1]             ; 00416e32
    LEA ECX,[EDX + 0xc]                 ; 00416e35
    MOV EDI,dword ptr [EBX + 0x20]      ; 00416e38
    MOV EAX,ECX                         ; 00416e3b
    ADD EDX,0x11                        ; 00416e3d
    CMP ECX,EDI                         ; 00416e40
    JZ 0x00416e4e                       ; 00416e42
        ;   XREF to: 00416e4e (CONDITIONAL_JUMP)  ; LAB_00416e4e
    INC EAX                             ; 00416e44
        ;   Label: LAB_00416e44
    CMP EAX,EDX                         ; 00416e45
    JGE 0x00416ea0                      ; 00416e47
        ;   XREF to: 00416ea0 (CONDITIONAL_JUMP)  ; LAB_00416ea0
    CMP EAX,dword ptr [EBX + 0x20]      ; 00416e49
    JNZ 0x00416e44                      ; 00416e4c
        ;   XREF to: 00416e44 (CONDITIONAL_JUMP)  ; LAB_00416e44
    MOV EDX,dword ptr [0x01c4353c]      ; 00416e4e | DAT_01c4353c
        ;   Label: LAB_00416e4e
    LEA EAX,[ESI*0x4 + 0x0]             ; 00416e54
    MOV ECX,dword ptr [0x007c397c]      ; 00416e5b | DAT_007c397c
    ADD EAX,EBX                         ; 00416e61
    CMP EDX,ECX                         ; 00416e63
    JLE 0x00416ebd                      ; 00416e65
        ;   XREF to: 00416ebd (CONDITIONAL_JUMP)  ; LAB_00416ebd
    MOV EDX,dword ptr [EAX + 0x38]      ; 00416e67
    INC EDX                             ; 00416e6a
    MOV dword ptr [EAX + 0x38],EDX      ; 00416e6b
    CMP EDX,0x4                         ; 00416e6e
    JLE 0x00416ea4                      ; 00416e71
        ;   XREF to: 00416ea4 (CONDITIONAL_JUMP)  ; LAB_00416ea4
    MOV dword ptr [EAX + 0x38],0x4      ; 00416e73
    MOV EAX,[0x01c4353c]                ; 00416e7a | DAT_01c4353c
        ;   Label: LAB_00416e7a
    MOV [0x007c397c],EAX                ; 00416e7f | DAT_007c397c
    LEA EAX,[ESI*0x4 + 0x0]             ; 00416e84
    ADD EAX,EBX                         ; 00416e8b
    MOV EDI,dword ptr [EAX + 0x38]      ; 00416e8d
    CMP EDI,0x4                         ; 00416e90
    JGE 0x00416eea                      ; 00416e93
        ;   XREF to: 00416eea (CONDITIONAL_JUMP)  ; LAB_00416eea
    TEST EDI,EDI                        ; 00416e95
    JLE 0x00416eea                      ; 00416e97
        ;   XREF to: 00416eea (CONDITIONAL_JUMP)  ; LAB_00416eea
    MOV dword ptr [EBX + 0x18],0x1      ; 00416e99
    POP EDI                             ; 00416ea0
        ;   Label: LAB_00416ea0
    POP ESI                             ; 00416ea1
    POP EBX                             ; 00416ea2
    RET                                 ; 00416ea3
    PUSH 0x5d3fe0                       ; 00416ea4 | = "REC-DIAL?.WAV"
        ;   Label: LAB_00416ea4
    MOV dword ptr [EBX + 0x34],0x64     ; 00416ea9
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 00416eb0
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 00416eb5
    MOV dword ptr [EBX + 0x50],EAX      ; 00416eb8
    JMP 0x00416e7a                      ; 00416ebb
        ;   XREF to: 00416e7a (UNCONDITIONAL_JUMP)  ; LAB_00416e7a
    MOV EDI,dword ptr [EAX + 0x38]      ; 00416ebd
        ;   Label: LAB_00416ebd
    DEC EDI                             ; 00416ec0
    MOV dword ptr [EAX + 0x38],EDI      ; 00416ec1
    TEST EDI,EDI                        ; 00416ec4
    JGE 0x00416ed1                      ; 00416ec6
        ;   XREF to: 00416ed1 (CONDITIONAL_JUMP)  ; LAB_00416ed1
    MOV dword ptr [EAX + 0x38],0x0      ; 00416ec8
    JMP 0x00416e7a                      ; 00416ecf
        ;   XREF to: 00416e7a (UNCONDITIONAL_JUMP)  ; LAB_00416e7a
    PUSH 0x5d3fee                       ; 00416ed1 | = "REC-DIAL?.WAV"
        ;   Label: LAB_00416ed1
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 00416ed6
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    MOV dword ptr [EBX + 0x34],0x64     ; 00416edb
    ADD ESP,0x4                         ; 00416ee2
    MOV dword ptr [EBX + 0x50],EAX      ; 00416ee5
    JMP 0x00416e7a                      ; 00416ee8
        ;   XREF to: 00416e7a (UNCONDITIONAL_JUMP)  ; LAB_00416e7a
    CMP dword ptr [EBX + ESI*0x4 + 0x38],0x4 ; 00416eea
        ;   Label: LAB_00416eea
    JNZ 0x00416efc                      ; 00416eef
        ;   XREF to: 00416efc (CONDITIONAL_JUMP)  ; LAB_00416efc
    MOV dword ptr [EBX + 0x18],0x2      ; 00416ef1
    POP EDI                             ; 00416ef8
    POP ESI                             ; 00416ef9
    POP EBX                             ; 00416efa
    RET                                 ; 00416efb
    MOV dword ptr [EBX + 0x18],0x3      ; 00416efc
        ;   Label: LAB_00416efc
    POP EDI                             ; 00416f03
    POP ESI                             ; 00416f04
    POP EBX                             ; 00416f05
    RET                                 ; 00416f06

