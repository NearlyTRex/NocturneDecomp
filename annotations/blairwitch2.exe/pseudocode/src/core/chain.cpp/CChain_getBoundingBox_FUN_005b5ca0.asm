; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_chain_cpp_CChain_getBoundingBox_FUN_005b5ca0(CChain *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_actor.cpp_FUN_00408de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b5ca0
        ;   Label: core_chain.cpp_CChain_getBoundingBox_FUN_005b5ca0
    PUSH EDI                            ; 005b5ca1
    PUSH EBP                            ; 005b5ca2
    SUB ESP,0x60                        ; 005b5ca3
    MOV EBX,dword ptr [ESP + 0x70]      ; 005b5ca6
    MOV EBP,ESI                         ; 005b5caa
    MOV EDX,0x461c3c00                  ; 005b5cac
    MOV EDI,0xc61c3c00                  ; 005b5cb1
    MOV dword ptr [ESP + 0x40],EDX      ; 005b5cb6
    MOV dword ptr [ESP + 0x44],EDX      ; 005b5cba
    MOV dword ptr [ESP + 0x30],EDI      ; 005b5cbe
    MOV dword ptr [ESP + 0x34],EDI      ; 005b5cc2
    MOV dword ptr [ESP + 0x38],EDI      ; 005b5cc6
    MOV dword ptr [ESP + 0x3c],EDX      ; 005b5cca
    MOV ECX,dword ptr [EBX + 0x158]     ; 005b5cce
    XOR EDI,EDI                         ; 005b5cd4
    TEST ECX,ECX                        ; 005b5cd6
    JLE 0x005b5d62                      ; 005b5cd8
        ;   XREF to: 005b5d62 (CONDITIONAL_JUMP)  ; LAB_005b5d62
    LEA ESI,[EBX + 0x28c]               ; 005b5cde
    FLD float ptr [ESI]                 ; 005b5ce4
        ;   Label: LAB_005b5ce4
    MOV EDX,ESI                         ; 005b5ce6
    FCOMP float ptr [ESP + 0x3c]        ; 005b5ce8
    FNSTSW AX                           ; 005b5cec
    SAHF                                ; 005b5cee
    JNC 0x005b5cf7                      ; 005b5cef
        ;   XREF to: 005b5cf7 (CONDITIONAL_JUMP)  ; LAB_005b5cf7
    MOV EAX,dword ptr [ESI]             ; 005b5cf1
    MOV dword ptr [ESP + 0x3c],EAX      ; 005b5cf3
    FLD float ptr [EDX + 0x4]           ; 005b5cf7
        ;   Label: LAB_005b5cf7
    FCOMP float ptr [ESP + 0x40]        ; 005b5cfa
    FNSTSW AX                           ; 005b5cfe
    SAHF                                ; 005b5d00
    JNC 0x005b5d0a                      ; 005b5d01
        ;   XREF to: 005b5d0a (CONDITIONAL_JUMP)  ; LAB_005b5d0a
    MOV EAX,dword ptr [EDX + 0x4]       ; 005b5d03
    MOV dword ptr [ESP + 0x40],EAX      ; 005b5d06
    FLD float ptr [EDX + 0x8]           ; 005b5d0a
        ;   Label: LAB_005b5d0a
    FCOMP float ptr [ESP + 0x44]        ; 005b5d0d
    FNSTSW AX                           ; 005b5d11
    SAHF                                ; 005b5d13
    JNC 0x005b5d1d                      ; 005b5d14
        ;   XREF to: 005b5d1d (CONDITIONAL_JUMP)  ; LAB_005b5d1d
    MOV EAX,dword ptr [EDX + 0x8]       ; 005b5d16
    MOV dword ptr [ESP + 0x44],EAX      ; 005b5d19
    FLD float ptr [EDX]                 ; 005b5d1d
        ;   Label: LAB_005b5d1d
    FCOMP float ptr [ESP + 0x30]        ; 005b5d1f
    FNSTSW AX                           ; 005b5d23
    SAHF                                ; 005b5d25
    JBE 0x005b5d2e                      ; 005b5d26
        ;   XREF to: 005b5d2e (CONDITIONAL_JUMP)  ; LAB_005b5d2e
    MOV EAX,dword ptr [EDX]             ; 005b5d28
    MOV dword ptr [ESP + 0x30],EAX      ; 005b5d2a
    FLD float ptr [EDX + 0x4]           ; 005b5d2e
        ;   Label: LAB_005b5d2e
    FCOMP float ptr [ESP + 0x34]        ; 005b5d31
    FNSTSW AX                           ; 005b5d35
    SAHF                                ; 005b5d37
    JBE 0x005b5d41                      ; 005b5d38
        ;   XREF to: 005b5d41 (CONDITIONAL_JUMP)  ; LAB_005b5d41
    MOV EAX,dword ptr [EDX + 0x4]       ; 005b5d3a
    MOV dword ptr [ESP + 0x34],EAX      ; 005b5d3d
    FLD float ptr [EDX + 0x8]           ; 005b5d41
        ;   Label: LAB_005b5d41
    FCOMP float ptr [ESP + 0x38]        ; 005b5d44
    FNSTSW AX                           ; 005b5d48
    SAHF                                ; 005b5d4a
    JBE 0x005b5d54                      ; 005b5d4b
        ;   XREF to: 005b5d54 (CONDITIONAL_JUMP)  ; LAB_005b5d54
    MOV EAX,dword ptr [EDX + 0x8]       ; 005b5d4d
    MOV dword ptr [ESP + 0x38],EAX      ; 005b5d50
    INC EDI                             ; 005b5d54
        ;   Label: LAB_005b5d54
    MOV EAX,dword ptr [EBX + 0x158]     ; 005b5d55
    ADD ESI,0x24                        ; 005b5d5b
    CMP EDI,EAX                         ; 005b5d5e
    JL 0x005b5ce4                       ; 005b5d60
        ;   XREF to: 005b5ce4 (CONDITIONAL_JUMP)  ; LAB_005b5ce4
    LEA EAX,[ESP + 0x3c]                ; 005b5d62
        ;   Label: LAB_005b5d62
    PUSH EAX                            ; 005b5d66
    PUSH EBX                            ; 005b5d67
    LEA ESI,[ESP + 0x50]                ; 005b5d68
    LEA EDI,[ESP + 0x5c]                ; 005b5d6c
    CALL core_actor.cpp_FUN_00408de0    ; 005b5d70
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x50]                ; 005b5d75
    LEA EDX,[ESP + 0x5c]                ; 005b5d79
    ADD ESP,0x8                         ; 005b5d7d
    MOV EAX,ESP                         ; 005b5d80
    MOVSD ES:EDI,ESI                    ; 005b5d82
    MOVSD ES:EDI,ESI                    ; 005b5d83
    MOVSD ES:EDI,ESI                    ; 005b5d84
    CMP EAX,EDX                         ; 005b5d85
    JZ 0x005b5da0                       ; 005b5d87
        ;   XREF to: 005b5da0 (CONDITIONAL_JUMP)  ; LAB_005b5da0
    MOV EAX,dword ptr [ESP + 0x54]      ; 005b5d89
    MOV dword ptr [ESP],EAX             ; 005b5d8d
    MOV EAX,dword ptr [ESP + 0x58]      ; 005b5d90
    MOV dword ptr [ESP + 0x4],EAX       ; 005b5d94
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005b5d98
    MOV dword ptr [ESP + 0x8],EAX       ; 005b5d9c
    LEA EAX,[ESP + 0x30]                ; 005b5da0
        ;   Label: LAB_005b5da0
    PUSH EAX                            ; 005b5da4
    PUSH EBX                            ; 005b5da5
    LEA ESI,[ESP + 0x2c]                ; 005b5da6
    LEA EDI,[ESP + 0x20]                ; 005b5daa
    CALL core_actor.cpp_FUN_00408de0    ; 005b5dae
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x2c]                ; 005b5db3
    LEA EAX,[ESP + 0x20]                ; 005b5db7
    ADD ESP,0x8                         ; 005b5dbb
    LEA EDX,[ESP + 0xc]                 ; 005b5dbe
    MOVSD ES:EDI,ESI                    ; 005b5dc2
    MOVSD ES:EDI,ESI                    ; 005b5dc3
    MOVSD ES:EDI,ESI                    ; 005b5dc4
    CMP EDX,EAX                         ; 005b5dc5
    JNZ 0x005b5ddd                      ; 005b5dc7
        ;   XREF to: 005b5ddd (CONDITIONAL_JUMP)  ; LAB_005b5ddd
    MOV ECX,0x6                         ; 005b5dc9
    MOV ESI,ESP                         ; 005b5dce
    MOV EDI,EBP                         ; 005b5dd0
    MOVSD.REP ES:EDI,ESI                ; 005b5dd2
    MOV EAX,EBP                         ; 005b5dd4
    ADD ESP,0x60                        ; 005b5dd6
    POP EBP                             ; 005b5dd9
    POP EDI                             ; 005b5dda
    POP EBX                             ; 005b5ddb
    RET                                 ; 005b5ddc
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b5ddd
        ;   Label: LAB_005b5ddd
    MOV dword ptr [ESP + 0xc],EAX       ; 005b5de1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005b5de5
    MOV dword ptr [ESP + 0x10],EAX      ; 005b5de9
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b5ded
    MOV dword ptr [ESP + 0x14],EAX      ; 005b5df1
    MOV ECX,0x6                         ; 005b5df5
    MOV ESI,ESP                         ; 005b5dfa
    MOV EDI,EBP                         ; 005b5dfc
    MOVSD.REP ES:EDI,ESI                ; 005b5dfe
    MOV EAX,EBP                         ; 005b5e00
    ADD ESP,0x60                        ; 005b5e02
    POP EBP                             ; 005b5e05
    POP EDI                             ; 005b5e06
    POP EBX                             ; 005b5e07
    RET                                 ; 005b5e08

