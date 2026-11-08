; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f19e0(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_core_icepick_cpp_005e53cf
;   TerminatedCString s_CIcePick_getCarryObjToBo_005e53e3
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005b5200
;   FUN_005b5760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f19e0
        ;   Label: FUN_004f19e0
    PUSH EDI                            ; 004f19e1
    PUSH EBP                            ; 004f19e2
    SUB ESP,0x9c                        ; 004f19e3
    MOV EBX,ESI                         ; 004f19e9
    MOV ESI,dword ptr [ESP + 0xb0]      ; 004f19eb
    LEA EAX,[ESI*0x8 + 0x0]             ; 004f19f2
    MOV EDX,EAX                         ; 004f19f9
    SHL EAX,0x4                         ; 004f19fb
    SUB EAX,EDX                         ; 004f19fe
    ADD EAX,dword ptr [ESP + 0xac]      ; 004f1a00
    MOV EBP,dword ptr [EAX + 0x25a8]    ; 004f1a07
    CMP ESI,0x1                         ; 004f1a0d
    JNZ 0x004f1b21                      ; 004f1a10
        ;   XREF to: 004f1b21 (CONDITIONAL_JUMP)  ; LAB_004f1b21
    MOV EAX,0xbe6a7efa                  ; 004f1a16
    MOV EDX,0xbca3d70a                  ; 004f1a1b
    MOV EDI,0x3ee66666                  ; 004f1a20
    MOV dword ptr [ESP + 0x7c],EAX      ; 004f1a25
    MOV dword ptr [ESP + 0x80],EDX      ; 004f1a29
    LEA EAX,[ESP + 0x78]                ; 004f1a30
    LEA EDX,[ESP + 0x6c]                ; 004f1a34
    MOV dword ptr [ESP + 0x78],EDI      ; 004f1a38
    CMP EDX,EAX                         ; 004f1a3c
    JNZ 0x004f1b06                      ; 004f1a3e
        ;   XREF to: 004f1b06 (CONDITIONAL_JUMP)  ; LAB_004f1b06
    MOV EAX,0xbec7ae14                  ; 004f1a44
        ;   Label: LAB_004f1a44
    MOV EDX,0x3fb76c8b                  ; 004f1a49
    MOV ECX,0x3f96872b                  ; 004f1a4e
    LEA EDI,[ESP + 0x60]                ; 004f1a53
    LEA ESI,[ESP + 0x90]                ; 004f1a57
    MOV dword ptr [ESP + 0x90],EAX      ; 004f1a5e
    MOV dword ptr [ESP + 0x98],EDX      ; 004f1a65
    MOV dword ptr [ESP + 0x94],ECX      ; 004f1a6c
    LEA EAX,[ESP + 0x60]                ; 004f1a73
    LEA EDX,[ESP + 0x84]                ; 004f1a77
    MOVSD ES:EDI,ESI                    ; 004f1a7e
    MOVSD ES:EDI,ESI                    ; 004f1a7f
    MOVSD ES:EDI,ESI                    ; 004f1a80
    CMP EDX,EAX                         ; 004f1a81
    JZ 0x004f1aa6                       ; 004f1a83
        ;   XREF to: 004f1aa6 (CONDITIONAL_JUMP)  ; LAB_004f1aa6
    MOV EAX,dword ptr [ESP + 0x60]      ; 004f1a85
    MOV dword ptr [ESP + 0x84],EAX      ; 004f1a89
    MOV EAX,dword ptr [ESP + 0x64]      ; 004f1a90
    MOV dword ptr [ESP + 0x88],EAX      ; 004f1a94
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f1a9b
    MOV dword ptr [ESP + 0x8c],EAX      ; 004f1a9f
    LEA EAX,[ESP + 0x84]                ; 004f1aa6
        ;   Label: LAB_004f1aa6
    PUSH EAX                            ; 004f1aad
    LEA EAX,[ESP + 0x70]                ; 004f1aae
    PUSH EAX                            ; 004f1ab2
    LEA EAX,[ESP + 0x38]                ; 004f1ab3
    PUSH EAX                            ; 004f1ab7
    CALL FUN_005b5760                   ; 004f1ab8
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5760()
    LEA EAX,[EBP*0x4 + 0x0]             ; 004f1abd
    ADD ESP,0xc                         ; 004f1ac4
    SUB EAX,EBP                         ; 004f1ac7
    MOV EDX,dword ptr [ESP + 0xac]      ; 004f1ac9
    SHL EAX,0x4                         ; 004f1ad0
    ADD EDX,0xfd8                       ; 004f1ad3
    ADD EAX,EDX                         ; 004f1ad9
    PUSH EAX                            ; 004f1adb
    LEA EAX,[ESP + 0x34]                ; 004f1adc
    PUSH EAX                            ; 004f1ae0
    LEA ESI,[ESP + 0x8]                 ; 004f1ae1
    MOV EDI,EBX                         ; 004f1ae5
    CALL FUN_005b5200                   ; 004f1ae7
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 004f1aec
    LEA ESI,[ESP + 0x8]                 ; 004f1af1
    ADD ESP,0x8                         ; 004f1af5
    MOVSD.REP ES:EDI,ESI                ; 004f1af8
    MOV EAX,EBX                         ; 004f1afa
    ADD ESP,0x9c                        ; 004f1afc
    POP EBP                             ; 004f1b02
    POP EDI                             ; 004f1b03
    POP EBX                             ; 004f1b04
    RET                                 ; 004f1b05
    MOV ESI,0xbe6a7efa                  ; 004f1b06
        ;   Label: LAB_004f1b06
    MOV dword ptr [ESP + 0x6c],EDI      ; 004f1b0b
    MOV EDI,0xbca3d70a                  ; 004f1b0f
    MOV dword ptr [ESP + 0x70],ESI      ; 004f1b14
    MOV dword ptr [ESP + 0x74],EDI      ; 004f1b18
    JMP 0x004f1a44                      ; 004f1b1c
        ;   XREF to: 004f1a44 (UNCONDITIONAL_JUMP)  ; LAB_004f1a44
    MOV ECX,0x5e53cf                    ; 004f1b21 | = "..\\core\\icepick.cpp"
        ;   Label: LAB_004f1b21
    MOV ESI,0x289                       ; 004f1b26
    PUSH 0x5e53e3                       ; 004f1b2b | = "CIcePick::getCarryObjToBodyXForm - wr..."
    MOV dword ptr [0x01d1d400],ECX      ; 004f1b30 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004f1b36 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004f1b3c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004f1b41
    JMP 0x004f1aa6                      ; 004f1b44
        ;   XREF to: 004f1aa6 (UNCONDITIONAL_JUMP)  ; LAB_004f1aa6

