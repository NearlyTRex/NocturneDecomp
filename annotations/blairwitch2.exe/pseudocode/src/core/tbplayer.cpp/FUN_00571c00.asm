; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tbplayer_cpp_FUN_00571c00(int param_1,int param_2)
;
;
; Called Functions:
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571c00
        ;   Label: core_tbplayer.cpp_FUN_00571c00
    PUSH EDI                            ; 00571c01
    PUSH EBP                            ; 00571c02
    SUB ESP,0x9c                        ; 00571c03
    MOV EBX,ESI                         ; 00571c09
    MOV ESI,dword ptr [ESP + 0xb0]      ; 00571c0b
    LEA EAX,[ESI*0x8 + 0x0]             ; 00571c12
    MOV EDX,EAX                         ; 00571c19
    SHL EAX,0x4                         ; 00571c1b
    SUB EAX,EDX                         ; 00571c1e
    ADD EAX,dword ptr [ESP + 0xac]      ; 00571c20
    MOV EBP,dword ptr [EAX + 0x2618]    ; 00571c27
    TEST ESI,ESI                        ; 00571c2d
    JNZ 0x00571ccd                      ; 00571c2f
        ;   XREF to: 00571ccd (CONDITIONAL_JUMP)  ; LAB_00571ccd
    MOV ESI,0xbfeed917                  ; 00571c35
    MOV EDI,0xc08374bc                  ; 00571c3a
    MOV ECX,0x4006a7f0                  ; 00571c3f
    LEA EDX,[ESP + 0x78]                ; 00571c44
    LEA EAX,[ESP + 0x84]                ; 00571c48
    MOV dword ptr [ESP + 0x7c],ESI      ; 00571c4f
    MOV dword ptr [ESP + 0x80],EDI      ; 00571c53
    MOV dword ptr [ESP + 0x78],ECX      ; 00571c5a
    CMP EAX,EDX                         ; 00571c5e
    JZ 0x00571c77                       ; 00571c60
        ;   XREF to: 00571c77 (CONDITIONAL_JUMP)  ; LAB_00571c77
    MOV dword ptr [ESP + 0x88],ESI      ; 00571c62
    MOV dword ptr [ESP + 0x8c],EDI      ; 00571c69
    MOV dword ptr [ESP + 0x84],ECX      ; 00571c70
    MOV EDI,0x3dced917                  ; 00571c77
        ;   Label: LAB_00571c77
    MOV ESI,0x3faf7cee                  ; 00571c7c
    MOV EAX,0xbef8d4fe                  ; 00571c81
    LEA EDX,[ESP + 0x6c]                ; 00571c86
    MOV dword ptr [ESP + 0x98],EDI      ; 00571c8a
    MOV dword ptr [ESP + 0x90],ESI      ; 00571c91
    LEA EDI,[ESP + 0x60]                ; 00571c98
    LEA ESI,[ESP + 0x90]                ; 00571c9c
    MOV dword ptr [ESP + 0x94],EAX      ; 00571ca3
    LEA EAX,[ESP + 0x60]                ; 00571caa
    MOVSD ES:EDI,ESI                    ; 00571cae
    MOVSD ES:EDI,ESI                    ; 00571caf
    MOVSD ES:EDI,ESI                    ; 00571cb0
    CMP EDX,EAX                         ; 00571cb1
    JZ 0x00571ccd                       ; 00571cb3
        ;   XREF to: 00571ccd (CONDITIONAL_JUMP)  ; LAB_00571ccd
    MOV EAX,dword ptr [ESP + 0x60]      ; 00571cb5
    MOV dword ptr [ESP + 0x6c],EAX      ; 00571cb9
    MOV EAX,dword ptr [ESP + 0x64]      ; 00571cbd
    MOV dword ptr [ESP + 0x70],EAX      ; 00571cc1
    MOV EAX,dword ptr [ESP + 0x68]      ; 00571cc5
    MOV dword ptr [ESP + 0x74],EAX      ; 00571cc9
    LEA EAX,[ESP + 0x6c]                ; 00571ccd
        ;   Label: LAB_00571ccd
    PUSH EAX                            ; 00571cd1
    LEA EAX,[ESP + 0x88]                ; 00571cd2
    PUSH EAX                            ; 00571cd9
    LEA EAX,[ESP + 0x38]                ; 00571cda
    PUSH EAX                            ; 00571cde
    CALL core_xform.cpp_FUN_00591c10    ; 00571cdf
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    LEA EAX,[EBP*0x4 + 0x0]             ; 00571ce4
    ADD ESP,0xc                         ; 00571ceb
    SUB EAX,EBP                         ; 00571cee
    MOV EDX,dword ptr [ESP + 0xac]      ; 00571cf0
    SHL EAX,0x4                         ; 00571cf7
    ADD EDX,0x1134                      ; 00571cfa
    ADD EAX,EDX                         ; 00571d00
    PUSH EAX                            ; 00571d02
    LEA EAX,[ESP + 0x34]                ; 00571d03
    PUSH EAX                            ; 00571d07
    LEA ESI,[ESP + 0x8]                 ; 00571d08
    MOV EDI,EBX                         ; 00571d0c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00571d0e
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00571d13
    LEA ESI,[ESP + 0x8]                 ; 00571d18
    ADD ESP,0x8                         ; 00571d1c
    MOVSD.REP ES:EDI,ESI                ; 00571d1f
    MOV EAX,EBX                         ; 00571d21
    ADD ESP,0x9c                        ; 00571d23
    POP EBP                             ; 00571d29
    POP EDI                             ; 00571d2a
    POP EBX                             ; 00571d2b
    RET                                 ; 00571d2c

