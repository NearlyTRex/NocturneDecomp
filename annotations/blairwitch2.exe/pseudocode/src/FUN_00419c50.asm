; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00419c50(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005cc2c9+1
;   TerminatedCString s_modelName_005cc2d0
;   TerminatedCString s_guardDistance_005cc2da
;   TerminatedCString s_motion_state_005cc2e8
;   TerminatedCString s_deathEvent_005cc2f5
;   TerminatedCString s_recombineTime_005cc300
;   TerminatedCString s_blownUp_005cc30e
;   TerminatedCString s_param_005cc316
;   TerminatedCString s_boxCount_005cc31c
;   TerminatedCString s_partStatus_005cc325
;   TerminatedCString s_boxListPos_005cc330
;   TerminatedCString s_boxListOrient_005cc33b
;   TerminatedCString s_boxListDestOrient_005cc349
;   TerminatedCString s_boxListStartOrient_005cc35b
;   TerminatedCString s_sourcePos_005cc36e
;   ... and 3 more
;
; Called Functions:
;   FUN_0040b4b0
;   FUN_0040b690
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040b9e0
;   FUN_0040bae0
;   FUN_0040bb60
;   FUN_0040bc50
;   FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419c50
        ;   Label: FUN_00419c50
    PUSH ESI                            ; 00419c51
    PUSH EDI                            ; 00419c52
    PUSH EBP                            ; 00419c53
    SUB ESP,0xc                         ; 00419c54
    MOV EDX,dword ptr [ESP + 0x20]      ; 00419c57
    PUSH EDX                            ; 00419c5b
    CALL FUN_00487ec0                   ; 00419c5c
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487ec0()
    ADD ESP,0x4                         ; 00419c61
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419c64
    PUSH 0x5cc2ca                       ; 00419c68 | s_speed_005cc2c9+1
    ADD EAX,0x10a60                     ; 00419c6d
    PUSH EAX                            ; 00419c72
    CALL FUN_0040b8e0                   ; 00419c73
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00419c78
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419c7b
    PUSH 0x5cc2d0                       ; 00419c7f | = "modelName"
    ADD EAX,0x2b4                       ; 00419c84
    PUSH EAX                            ; 00419c89
    CALL FUN_0040bae0                   ; 00419c8a
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bae0()
    MOV ECX,dword ptr [0x00609924]      ; 00419c8f | DAT_00609924
    ADD ESP,0x8                         ; 00419c95
    CMP ECX,0x4                         ; 00419c98
    JL 0x00419e58                       ; 00419c9b
        ;   XREF to: 00419e58 (CONDITIONAL_JUMP)  ; LAB_00419e58
    MOV EBX,dword ptr [ESP + 0x20]      ; 00419ca1
        ;   Label: LAB_00419ca1
    PUSH 0x5cc2e8                       ; 00419ca5 | = "motion state"
    ADD EBX,0x2b4                       ; 00419caa
    PUSH EBX                            ; 00419cb0
    CALL FUN_0040bb60                   ; 00419cb1
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bb60()
    MOV ESI,dword ptr [0x00609924]      ; 00419cb6 | DAT_00609924
    ADD ESP,0x8                         ; 00419cbc
    CMP ESI,0x2                         ; 00419cbf
    JL 0x00419e40                       ; 00419cc2
        ;   XREF to: 00419e40 (CONDITIONAL_JUMP)  ; LAB_00419e40
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419cc8
    PUSH 0x5cc2f5                       ; 00419ccc | = "deathEvent"
    ADD EAX,0x10b0c                     ; 00419cd1
    PUSH EAX                            ; 00419cd6
    CALL FUN_0040b730                   ; 00419cd7
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00419cdc
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419cdf
    PUSH 0x5cc300                       ; 00419ce3 | = "recombineTime"
    ADD EAX,0x10b70                     ; 00419ce8
    PUSH EAX                            ; 00419ced
    CALL FUN_0040b8e0                   ; 00419cee
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00419cf3
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419cf6
    PUSH 0x5cc30e                       ; 00419cfa | = "blownUp"
    ADD EAX,0x11118                     ; 00419cff
    PUSH EAX                            ; 00419d04
    CALL FUN_0040b960                   ; 00419d05
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00419d0a
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419d0d
    PUSH 0x5cc316                       ; 00419d11 | = "param"
    ADD EAX,0x1111c                     ; 00419d16
    PUSH EAX                            ; 00419d1b
    CALL FUN_0040b8e0                   ; 00419d1c
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00419d21
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419d24
    PUSH 0x5cc31c                       ; 00419d28 | = "boxCount"
    ADD EAX,0x10b74                     ; 00419d2d
    PUSH EAX                            ; 00419d32
    CALL FUN_0040b960                   ; 00419d33
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00419d38
    PUSH 0x5cc325                       ; 00419d3b | = "partStatus"
    PUSH EBX                            ; 00419d40
    CALL FUN_0040bc50                   ; 00419d41
        ;   XREF to: 0040bc50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bc50()
    ADD ESP,0x8                         ; 00419d46
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419d49
    MOV EDI,dword ptr [EAX + 0x10b74]   ; 00419d4d
    XOR EBX,EBX                         ; 00419d53
    TEST EDI,EDI                        ; 00419d55
    JLE 0x00419e40                      ; 00419d57
        ;   XREF to: 00419e40 (CONDITIONAL_JUMP)  ; LAB_00419e40
    MOV ESI,dword ptr [ESP + 0x20]      ; 00419d5d
    ADD EAX,0x10b78                     ; 00419d61
    MOV EDI,dword ptr [ESP + 0x20]      ; 00419d66
    MOV dword ptr [ESP],EAX             ; 00419d6a
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419d6d
    MOV EBP,dword ptr [ESP + 0x20]      ; 00419d71
    ADD EAX,0x10bbc                     ; 00419d75
    ADD ESI,0x10bb0                     ; 00419d7a
    MOV dword ptr [ESP + 0x8],EAX       ; 00419d80
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419d84
    ADD EDI,0x10b90                     ; 00419d88
    ADD EAX,0x10ba0                     ; 00419d8e
    ADD EBP,0x10b84                     ; 00419d93
    MOV dword ptr [ESP + 0x4],EAX       ; 00419d99
    IMUL EAX,EBX,0x48                   ; 00419d9d
        ;   Label: LAB_00419d9d
    MOV EDX,dword ptr [ESP]             ; 00419da0
    PUSH 0x5cc330                       ; 00419da3 | = "boxListPos"
    ADD EAX,EDX                         ; 00419da8
    PUSH EAX                            ; 00419daa
    CALL FUN_0040b4b0                   ; 00419dab
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    ADD ESP,0x8                         ; 00419db0
    PUSH 0x5cc33b                       ; 00419db3 | = "boxListOrient"
    PUSH EBP                            ; 00419db8
    CALL FUN_0040b4b0                   ; 00419db9
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    ADD ESP,0x8                         ; 00419dbe
    PUSH 0x5cc349                       ; 00419dc1 | = "boxListDestOrient"
    PUSH EDI                            ; 00419dc6
    CALL FUN_0040b690                   ; 00419dc7
        ;   XREF to: 0040b690 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b690()
    ADD ESP,0x8                         ; 00419dcc
    PUSH 0x5cc35b                       ; 00419dcf | = "boxListStartOrient"
    MOV ECX,dword ptr [ESP + 0x8]       ; 00419dd4
    PUSH ECX                            ; 00419dd8
    CALL FUN_0040b690                   ; 00419dd9
        ;   XREF to: 0040b690 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b690()
    ADD ESP,0x8                         ; 00419dde
    PUSH 0x5cc36e                       ; 00419de1 | = "sourcePos"
    PUSH ESI                            ; 00419de6
    CALL FUN_0040b4b0                   ; 00419de7
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    ADD ESP,0x8                         ; 00419dec
    PUSH 0x5cc378                       ; 00419def | = "boxListPart"
    MOV EAX,dword ptr [ESP + 0xc]       ; 00419df4
    INC EBX                             ; 00419df8
    PUSH EAX                            ; 00419df9
    ADD EBP,0x48                        ; 00419dfa
    ADD EDI,0x48                        ; 00419dfd
    CALL FUN_0040b9e0                   ; 00419e00
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 00419e05
    ADD ESI,0x48                        ; 00419e08
    MOV EDX,dword ptr [ESP + 0x8]       ; 00419e0b
    MOV ECX,dword ptr [ESP + 0x4]       ; 00419e0f
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419e13
    ADD EDX,0x48                        ; 00419e17
    ADD ECX,0x48                        ; 00419e1a
    MOV dword ptr [ESP + 0x8],EDX       ; 00419e1d
    MOV EDX,dword ptr [EAX + 0x10b74]   ; 00419e21
    MOV dword ptr [ESP + 0x4],ECX       ; 00419e27
    CMP EBX,EDX                         ; 00419e2b
    JL 0x00419d9d                       ; 00419e2d
        ;   XREF to: 00419d9d (CONDITIONAL_JUMP)  ; LAB_00419d9d
    LEA EAX,[EAX]                       ; 00419e33
    LEA EDX,[EDX]                       ; 00419e39
    NOP                                 ; 00419e3f
    MOV ECX,dword ptr [0x00609924]      ; 00419e40 | DAT_00609924
        ;   Label: LAB_00419e40
    CMP ECX,0x3                         ; 00419e46
    JL 0x00419e50                       ; 00419e49
        ;   XREF to: 00419e50 (CONDITIONAL_JUMP)  ; LAB_00419e50
    CMP ECX,0x5                         ; 00419e4b
    JL 0x00419e74                       ; 00419e4e
        ;   XREF to: 00419e74 (CONDITIONAL_JUMP)  ; LAB_00419e74
    ADD ESP,0xc                         ; 00419e50
        ;   Label: LAB_00419e50
    POP EBP                             ; 00419e53
    POP EDI                             ; 00419e54
    POP ESI                             ; 00419e55
    POP EBX                             ; 00419e56
    RET                                 ; 00419e57
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419e58
        ;   Label: LAB_00419e58
    PUSH 0x5cc2da                       ; 00419e5c | = "guardDistance"
    ADD EAX,0x10a70                     ; 00419e61
    PUSH EAX                            ; 00419e66
    CALL FUN_0040b8e0                   ; 00419e67
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00419e6c
    JMP 0x00419ca1                      ; 00419e6f
        ;   XREF to: 00419ca1 (UNCONDITIONAL_JUMP)  ; LAB_00419ca1
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419e74
        ;   Label: LAB_00419e74
    PUSH 0x5cc384                       ; 00419e78 | = "victimHeight"
    ADD EAX,0x10aec                     ; 00419e7d
    PUSH EAX                            ; 00419e82
    CALL FUN_0040b8e0                   ; 00419e83
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00419e88
    ADD ESP,0xc                         ; 00419e8b
    POP EBP                             ; 00419e8e
    POP EDI                             ; 00419e8f
    POP ESI                             ; 00419e90
    POP EBX                             ; 00419e91
    RET                                 ; 00419e92

