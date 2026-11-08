; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047bf80(int param_1,uint param_2)
;
; Local Variables:
; undefined        Stack[-0x40c]:1  local_40c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_0047c050 at 0047c178
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd69
;   TerminatedCString s_CInputString_calcX_strin_005bcd7f
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004b2a80
;   FUN_004e4330
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bf80
        ;   Label: FUN_0047bf80
    PUSH EBP                            ; 0047bf81
    SUB ESP,0x404                       ; 0047bf82
    MOV EAX,dword ptr [ESP + 0x410]     ; 0047bf88
    MOV EBX,dword ptr [ESP + 0x414]     ; 0047bf8f
    TEST EBX,EBX                        ; 0047bf96
    JL 0x0047c012                       ; 0047bf98
        ;   XREF to: 0047c012 (CONDITIONAL_JUMP)  ; LAB_0047c012
    MOV EDX,dword ptr [EAX + 0x130]     ; 0047bf9e
    CMP EBX,EDX                         ; 0047bfa4
    JLE 0x0047bfaa                      ; 0047bfa6
        ;   XREF to: 0047bfaa (CONDITIONAL_JUMP)  ; LAB_0047bfaa
    MOV EBX,EDX                         ; 0047bfa8
    PUSH EDI                            ; 0047bfaa
        ;   Label: LAB_0047bfaa
    CMP dword ptr [EAX + 0x13c],0x0     ; 0047bfab
    JZ 0x0047c016                       ; 0047bfb2
        ;   XREF to: 0047c016 (CONDITIONAL_JUMP)  ; LAB_0047c016
    CMP EBX,0x400                       ; 0047bfb4
    JC 0x0047bfdf                       ; 0047bfba
        ;   XREF to: 0047bfdf (CONDITIONAL_JUMP)  ; LAB_0047bfdf
    MOV EDI,0x5bcd69                    ; 0047bfbc | = "..\\shape\\edittool.cpp"
    MOV EBP,0x211                       ; 0047bfc1
    PUSH 0x5bcd7f                       ; 0047bfc6 | = "CInputString::calcX - string too big ..."
    MOV dword ptr [0x01d71de0],EDI      ; 0047bfcb | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0047bfd1 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0047bfd7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0047bfdc
    PUSH EBX                            ; 0047bfdf
        ;   Label: LAB_0047bfdf
    PUSH 0x2a                           ; 0047bfe0
    LEA EAX,[ESP + 0xc]                 ; 0047bfe2
    PUSH EAX                            ; 0047bfe6
    CALL FUN_005a28f0                   ; 0047bfe7
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0047bfec
    XOR AH,AH                           ; 0047bfef
    MOV byte ptr [ESP + EBX*0x1 + 0x4],AH ; 0047bff1
    LEA EAX,[ESP + 0x4]                 ; 0047bff5
    PUSH EAX                            ; 0047bff9
    MOV EAX,[0x01c5b0e0]                ; 0047bffa | DAT_01c5b0e0
    PUSH EAX                            ; 0047bfff
    CALL FUN_004b2a80                   ; 0047c000
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2a80()
    ADD ESP,0x8                         ; 0047c005
    POP EDI                             ; 0047c008
    ADD ESP,0x404                       ; 0047c009
        ;   Label: LAB_0047c009
    POP EBP                             ; 0047c00f
    POP EBX                             ; 0047c010
    RET                                 ; 0047c011
    XOR EAX,EAX                         ; 0047c012
        ;   Label: LAB_0047c012
    JMP 0x0047c009                      ; 0047c014
        ;   XREF to: 0047c009 (UNCONDITIONAL_JUMP)  ; LAB_0047c009
    PUSH ESI                            ; 0047c016
        ;   Label: LAB_0047c016
    PUSH EAX                            ; 0047c017
    ADD EBX,EAX                         ; 0047c018
    XOR EDX,EDX                         ; 0047c01a
    MOV ESI,dword ptr [0x01c5b0e0]      ; 0047c01c | DAT_01c5b0e0
    MOV DL,byte ptr [EBX]               ; 0047c022
    PUSH ESI                            ; 0047c024
    MOV dword ptr [ESP + 0x410],EDX     ; 0047c025
    MOV byte ptr [EBX],0x0              ; 0047c02c
    CALL FUN_004b2a80                   ; 0047c02f
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2a80()
    ADD ESP,0x8                         ; 0047c034
    MOV DL,byte ptr [ESP + 0x408]       ; 0047c037
    MOV byte ptr [EBX],DL               ; 0047c03e
    POP ESI                             ; 0047c040
    POP EDI                             ; 0047c041
    ADD ESP,0x404                       ; 0047c042
    POP EBP                             ; 0047c048
    POP EBX                             ; 0047c049
    RET                                 ; 0047c04a

