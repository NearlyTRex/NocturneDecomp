; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_set_cpp_FUN_00533190(int param_1,float *param_2)
;
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_sound.cpp_FUN_005594c0 at 005595e2
;
; Called Functions:
;   core_dirmat.cpp_FUN_004495a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533190
        ;   Label: core_set.cpp_FUN_00533190
    PUSH ESI                            ; 00533191
    PUSH EDI                            ; 00533192
    PUSH EBP                            ; 00533193
    MOV EBP,ESP                         ; 00533194
    SUB ESP,0x3c                        ; 00533196
    AND ESP,0xfffffff8                  ; 00533199
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053319c
    XOR EDX,EDX                         ; 0053319f
    MOV ECX,dword ptr [EBX + 0x15aed0]  ; 005331a1
    MOV dword ptr [ESP + 0x34],EDX      ; 005331a7
    TEST ECX,ECX                        ; 005331ab
    JLE 0x0053326b                      ; 005331ad
        ;   XREF to: 0053326b (CONDITIONAL_JUMP)  ; LAB_0053326b
    ADD EBX,0x15aed4                    ; 005331b3
    MOV dword ptr [ESP + 0x38],EBX      ; 005331b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005331bd
    ADD EBX,0x15aeec                    ; 005331c0
    MOV dword ptr [ESP + 0x30],EBX      ; 005331c6
    IMUL EBX,dword ptr [ESP + 0x34],0x44 ; 005331ca
        ;   Label: LAB_005331ca
    MOV ESI,dword ptr [EBP + 0x18]      ; 005331cf
    MOV EDX,dword ptr [ESP + 0x38]      ; 005331d2
    LEA EDI,[ESP + 0x18]                ; 005331d6
    FLD float ptr [ESI + 0x4]           ; 005331da
    FLD float ptr [ESI + 0x8]           ; 005331dd
    ADD EBX,EDX                         ; 005331e0
    FLD float ptr [ESI]                 ; 005331e2
    LEA ESI,[ESP + 0xc]                 ; 005331e4
    FSUB float ptr [EBX]                ; 005331e8
    FXCH ST2                            ; 005331ea
    FSUB float ptr [EBX + 0x4]          ; 005331ec
    FXCH                                ; 005331ef
    FSUB float ptr [EBX + 0x8]          ; 005331f1
    FXCH ST2                            ; 005331f4
    FSTP float ptr [ESP + 0xc]          ; 005331f6
    FSTP float ptr [ESP + 0x10]         ; 005331fa
    FSTP float ptr [ESP + 0x14]         ; 005331fe
    MOVSD ES:EDI,ESI                    ; 00533202
    MOVSD ES:EDI,ESI                    ; 00533203
    MOVSD ES:EDI,ESI                    ; 00533204
    LEA ESI,[ESP + 0x18]                ; 00533205
    PUSH ESI                            ; 00533209
    MOV ECX,dword ptr [ESP + 0x34]      ; 0053320a
    PUSH ECX                            ; 0053320e
    LEA ESI,[ESP + 0x8]                 ; 0053320f
    LEA EDI,[ESP + 0x2c]                ; 00533213
    CALL core_dirmat.cpp_FUN_004495a0   ; 00533217
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x8]                 ; 0053321c
    ADD ESP,0x8                         ; 00533220
    MOVSD ES:EDI,ESI                    ; 00533223
    MOVSD ES:EDI,ESI                    ; 00533224
    MOVSD ES:EDI,ESI                    ; 00533225
    FLD float ptr [EBX + 0xc]           ; 00533226
    FLD float ptr [ESP + 0x24]          ; 00533229
    FABS                                ; 0053322d
    FCOMPP                              ; 0053322f
    FNSTSW AX                           ; 00533231
    SAHF                                ; 00533233
    JA 0x00533246                       ; 00533234
        ;   XREF to: 00533246 (CONDITIONAL_JUMP)  ; LAB_00533246
    FLD float ptr [ESP + 0x28]          ; 00533236
    FABS                                ; 0053323a
    FLD float ptr [EBX + 0x10]          ; 0053323c
    FCOMPP                              ; 0053323f
    FNSTSW AX                           ; 00533241
    SAHF                                ; 00533243
    JNC 0x0053327d                      ; 00533244
        ;   XREF to: 0053327d (CONDITIONAL_JUMP)  ; LAB_0053327d
    MOV EBX,dword ptr [ESP + 0x30]      ; 00533246
        ;   Label: LAB_00533246
    MOV ESI,dword ptr [ESP + 0x34]      ; 0053324a
    ADD EBX,0x44                        ; 0053324e
    INC ESI                             ; 00533251
    MOV dword ptr [ESP + 0x30],EBX      ; 00533252
    MOV dword ptr [ESP + 0x34],ESI      ; 00533256
    MOV EBX,ESI                         ; 0053325a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053325c
    CMP EBX,dword ptr [ESI + 0x15aed0]  ; 0053325f
    JL 0x005331ca                       ; 00533265
        ;   XREF to: 005331ca (CONDITIONAL_JUMP)  ; LAB_005331ca
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053326b
        ;   Label: LAB_0053326b
    MOV ESI,dword ptr [ESI + 0x15aecc]  ; 0053326e
    MOV EAX,ESI                         ; 00533274
    MOV ESP,EBP                         ; 00533276
    POP EBP                             ; 00533278
    POP EDI                             ; 00533279
    POP ESI                             ; 0053327a
    POP EBX                             ; 0053327b
    RET                                 ; 0053327c
    FLD float ptr [ESP + 0x2c]          ; 0053327d
        ;   Label: LAB_0053327d
    FABS                                ; 00533281
    FLD float ptr [EBX + 0x14]          ; 00533283
    FCOMPP                              ; 00533286
    FNSTSW AX                           ; 00533288
    SAHF                                ; 0053328a
    JC 0x00533246                       ; 0053328b
        ;   XREF to: 00533246 (CONDITIONAL_JUMP)  ; LAB_00533246
    MOV ESI,dword ptr [EBX + 0x40]      ; 0053328d
    MOV EAX,ESI                         ; 00533290
    MOV ESP,EBP                         ; 00533292
    POP EBP                             ; 00533294
    POP EDI                             ; 00533295
    POP ESI                             ; 00533296
    POP EBX                             ; 00533297
    RET                                 ; 00533298

