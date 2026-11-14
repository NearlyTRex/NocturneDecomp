; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_FUN_00587180(int param_1)
;
;
; Called Functions:
;   core_dirmat.cpp_FUN_004495a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587180
        ;   Label: core_wateract.cpp_FUN_00587180
    PUSH ESI                            ; 00587181
    PUSH EDI                            ; 00587182
    PUSH EBP                            ; 00587183
    SUB ESP,0x40                        ; 00587184
    MOV EAX,dword ptr [ESP + 0x54]      ; 00587187
    XOR EDX,EDX                         ; 0058718b
    MOV ECX,dword ptr [EAX + 0x3f4]     ; 0058718d
    MOV dword ptr [ESP + 0x38],EDX      ; 00587193
    TEST ECX,ECX                        ; 00587197
    JLE 0x00587251                      ; 00587199
        ;   XREF to: 00587251 (CONDITIONAL_JUMP)  ; LAB_00587251
    ADD EAX,0x3f8                       ; 0058719f
    MOV dword ptr [ESP + 0x34],EAX      ; 005871a4
    MOV EAX,dword ptr [ESP + 0x54]      ; 005871a8
    ADD EAX,0x20                        ; 005871ac
    MOV dword ptr [ESP + 0x3c],EAX      ; 005871af
    MOV EAX,dword ptr [ESP + 0x54]      ; 005871b3
    MOV EBX,dword ptr [ESP + 0x54]      ; 005871b7
    ADD EAX,0x3c                        ; 005871bb
    ADD EBX,0x404                       ; 005871be
    MOV dword ptr [ESP + 0x30],EAX      ; 005871c4
    FLD float ptr [EBX]                 ; 005871c8
        ;   Label: LAB_005871c8
    FLD float ptr [EBX + 0x4]           ; 005871ca
    FLD float ptr [EBX + 0x8]           ; 005871cd
    MOV EBP,dword ptr [ESP + 0x38]      ; 005871d0
    MOV EAX,dword ptr [ESP + 0x34]      ; 005871d4
    SHL EBP,0x5                         ; 005871d8
    LEA EDI,[ESP + 0xc]                 ; 005871db
    ADD EBP,EAX                         ; 005871df
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005871e1
    LEA ESI,[ESP + 0x24]                ; 005871e5
    MOV EDX,dword ptr [ESP + 0x30]      ; 005871e9
    FXCH ST2                            ; 005871ed
    FSUB float ptr [EAX]                ; 005871ef
    FXCH                                ; 005871f1
    FSUB float ptr [EAX + 0x4]          ; 005871f3
    FXCH ST2                            ; 005871f6
    FSUB float ptr [EAX + 0x8]          ; 005871f8
    FXCH                                ; 005871fb
    FSTP float ptr [ESP + 0x24]         ; 005871fd
    FXCH                                ; 00587201
    FSTP float ptr [ESP + 0x28]         ; 00587203
    LEA EAX,[ESP + 0xc]                 ; 00587207
    FSTP float ptr [ESP + 0x2c]         ; 0058720b
    PUSH EAX                            ; 0058720f
    MOVSD ES:EDI,ESI                    ; 00587210
    MOVSD ES:EDI,ESI                    ; 00587211
    MOVSD ES:EDI,ESI                    ; 00587212
    PUSH EDX                            ; 00587213
    LEA ESI,[ESP + 0x20]                ; 00587214
    LEA EDI,[ESP + 0x8]                 ; 00587218
    CALL core_dirmat.cpp_FUN_004495a0   ; 0058721c
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x20]                ; 00587221
    ADD ESP,0x8                         ; 00587225
    MOV EAX,ESP                         ; 00587228
    MOVSD ES:EDI,ESI                    ; 0058722a
    MOVSD ES:EDI,ESI                    ; 0058722b
    MOVSD ES:EDI,ESI                    ; 0058722c
    CMP EBP,EAX                         ; 0058722d
    JNZ 0x00587259                      ; 0058722f
        ;   XREF to: 00587259 (CONDITIONAL_JUMP)  ; LAB_00587259
    MOV ESI,dword ptr [ESP + 0x38]      ; 00587231
        ;   Label: LAB_00587231
    INC ESI                             ; 00587235
    MOV dword ptr [ESP + 0x38],ESI      ; 00587236
    MOV EAX,ESI                         ; 0058723a
    MOV ESI,dword ptr [ESP + 0x54]      ; 0058723c
    MOV EDI,dword ptr [ESI + 0x3f4]     ; 00587240
    ADD EBX,0x20                        ; 00587246
    CMP EAX,EDI                         ; 00587249
    JL 0x005871c8                       ; 0058724b
        ;   XREF to: 005871c8 (CONDITIONAL_JUMP)  ; LAB_005871c8
    ADD ESP,0x40                        ; 00587251
        ;   Label: LAB_00587251
    POP EBP                             ; 00587254
    POP EDI                             ; 00587255
    POP ESI                             ; 00587256
    POP EBX                             ; 00587257
    RET                                 ; 00587258
    MOV EAX,dword ptr [ESP]             ; 00587259
        ;   Label: LAB_00587259
    MOV dword ptr [EBP],EAX             ; 0058725c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058725f
    MOV dword ptr [EBP + 0x4],EAX       ; 00587263
    MOV EAX,dword ptr [ESP + 0x8]       ; 00587266
    MOV dword ptr [EBP + 0x8],EAX       ; 0058726a
    JMP 0x00587231                      ; 0058726d
        ;   XREF to: 00587231 (UNCONDITIONAL_JUMP)  ; LAB_00587231

