; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_00439090(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439090
        ;   Label: cockpit_ckptutil.c_FUN_00439090
    PUSH ESI                            ; 00439091
    PUSH EDI                            ; 00439092
    PUSH EBP                            ; 00439093
    SUB ESP,0x104                       ; 00439094
    CMP dword ptr [ESP + 0x118],0x0     ; 0043909a
    JZ 0x004391bd                       ; 004390a2
        ;   XREF to: 004391bd (CONDITIONAL_JUMP)  ; LAB_004391bd
    MOV ECX,0xfb                        ; 004390a8
    MOV EBX,dword ptr [ESP + 0x120]     ; 004390ad
    XOR EDI,EDI                         ; 004390b4
    MOV dword ptr [ESP + 0x100],ECX     ; 004390b6
    TEST EBX,EBX                        ; 004390bd
    JLE 0x004391bd                      ; 004390bf
        ;   XREF to: 004391bd (CONDITIONAL_JUMP)  ; LAB_004391bd
    MOV EBP,dword ptr [ESP + 0x124]     ; 004390c5
    IMUL EBP,dword ptr [ESP + 0x128]    ; 004390cc
    MOV ESI,dword ptr [ESP + 0x11c]     ; 004390d4
    DEC EBP                             ; 004390db
    MOV AX,word ptr [ESI + 0x2]         ; 004390dc
        ;   Label: LAB_004390dc
    MOV EBX,dword ptr [ESP + 0x124]     ; 004390e0
    MOVSX EDX,AX                        ; 004390e7
    IMUL EDX,EBX                        ; 004390ea
    MOV AX,word ptr [ESI]               ; 004390ed
    MOVSX EBX,AX                        ; 004390f0
    ADD EBX,EDX                         ; 004390f3
    TEST EBX,EBX                        ; 004390f5
    JL 0x004390fd                       ; 004390f7
        ;   XREF to: 004390fd (CONDITIONAL_JUMP)  ; LAB_004390fd
    CMP EBX,EBP                         ; 004390f9
    JLE 0x00439130                      ; 004390fb
        ;   XREF to: 00439130 (CONDITIONAL_JUMP)  ; LAB_00439130
    PUSH EDI                            ; 004390fd
        ;   Label: LAB_004390fd
    PUSH 0x5d635d                       ; 004390fe
    LEA EAX,[ESP + 0x8]                 ; 00439103
    PUSH EAX                            ; 00439107
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00439108
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x5d6378                    ; 0043910d
    ADD ESP,0xc                         ; 00439112
    MOV [0x01d1d400],EAX                ; 00439115 | DAT_01d1d400
    MOV EAX,ESP                         ; 0043911a
    MOV EDX,0x54a                       ; 0043911c
    PUSH EAX                            ; 00439121
    MOV dword ptr [0x01d1d404],EDX      ; 00439122 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00439128
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043912d
    ADD EBX,dword ptr [ESP + 0x118]     ; 00439130
        ;   Label: LAB_00439130
    MOV AL,byte ptr [ESP + 0x100]       ; 00439137
    MOV byte ptr [EBX],AL               ; 0043913e
    MOV AX,word ptr [ESI + 0x6]         ; 00439140
    ADD EAX,EAX                         ; 00439144
    SAR AX,0x1                          ; 00439146
    MOV EDX,dword ptr [ESP + 0x124]     ; 00439149
    CWDE                                ; 00439150
    IMUL EDX,EAX                        ; 00439151
    MOV AX,word ptr [ESI + 0x4]         ; 00439154
    MOVSX EBX,AX                        ; 00439158
    ADD EBX,EDX                         ; 0043915b
    TEST EBX,EBX                        ; 0043915d
    JL 0x00439165                       ; 0043915f
        ;   XREF to: 00439165 (CONDITIONAL_JUMP)  ; LAB_00439165
    CMP EBX,EBP                         ; 00439161
    JLE 0x00439198                      ; 00439163
        ;   XREF to: 00439198 (CONDITIONAL_JUMP)  ; LAB_00439198
    PUSH EDI                            ; 00439165
        ;   Label: LAB_00439165
    PUSH 0x5d638e                       ; 00439166
    LEA EAX,[ESP + 0x8]                 ; 0043916b
    PUSH EAX                            ; 0043916f
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00439170
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x5d63a9                    ; 00439175
    ADD ESP,0xc                         ; 0043917a
    MOV [0x01d1d400],EAX                ; 0043917d | DAT_01d1d400
    MOV EAX,ESP                         ; 00439182
    MOV EDX,0x553                       ; 00439184
    PUSH EAX                            ; 00439189
    MOV dword ptr [0x01d1d404],EDX      ; 0043918a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00439190
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00439195
    MOV EAX,dword ptr [ESP + 0x118]     ; 00439198
        ;   Label: LAB_00439198
    MOV EDX,dword ptr [ESP + 0x120]     ; 0043919f
    ADD ESI,0x8                         ; 004391a6
    ADD EBX,EAX                         ; 004391a9
    MOV AL,byte ptr [ESP + 0x100]       ; 004391ab
    INC EDI                             ; 004391b2
    MOV byte ptr [EBX],AL               ; 004391b3
    CMP EDI,EDX                         ; 004391b5
    JL 0x004390dc                       ; 004391b7
        ;   XREF to: 004390dc (CONDITIONAL_JUMP)  ; LAB_004390dc
    ADD ESP,0x104                       ; 004391bd
        ;   Label: LAB_004391bd
    POP EBP                             ; 004391c3
    POP EDI                             ; 004391c4
    POP ESI                             ; 004391c5
    POP EBX                             ; 004391c6
    RET                                 ; 004391c7

