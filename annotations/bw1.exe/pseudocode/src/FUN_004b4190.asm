; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b4190(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf624
;
; Called Functions:
;   FUN_00532250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4190
        ;   Label: FUN_004b4190
    SUB ESP,0x1c                        ; 004b4191
    MOV EBX,dword ptr [ESP + 0x24]      ; 004b4194
    FLD float ptr [EBX + 0x24]          ; 004b4198
    FLDZ                                ; 004b419b
    FCOMPP                              ; 004b419d
    FNSTSW AX                           ; 004b419f
    SAHF                                ; 004b41a1
    JC 0x004b41a9                       ; 004b41a2
        ;   XREF to: 004b41a9 (CONDITIONAL_JUMP)  ; LAB_004b41a9
    ADD ESP,0x1c                        ; 004b41a4
    POP EBX                             ; 004b41a7
    RET                                 ; 004b41a8
    PUSH EDI                            ; 004b41a9
        ;   Label: LAB_004b41a9
    PUSH ESI                            ; 004b41aa
    PUSH EBX                            ; 004b41ab
    CALL FUN_00532250                   ; 004b41ac
        ;   XREF to: 00532250 (UNCONDITIONAL_CALL)  ; undefined FUN_00532250()
    MOV EAX,[0x0061d95c]                ; 004b41b1 | DAT_0061d95c
    ADD ESP,0x4                         ; 004b41b6
    MOV EAX,dword ptr [EAX + 0x294]     ; 004b41b9 | DAT_01ccf624
    MOV dword ptr [ESP + 0x20],EAX      ; 004b41bf
    LEA EAX,[EBX + 0x4c]                ; 004b41c3
    FLD float ptr [EAX]                 ; 004b41c6
    FMUL float ptr [ESP + 0x20]         ; 004b41c8
    FLD float ptr [EAX + 0x4]           ; 004b41cc
    FMUL float ptr [ESP + 0x20]         ; 004b41cf
    FLD float ptr [EAX + 0x8]           ; 004b41d3
    FMUL float ptr [ESP + 0x20]         ; 004b41d6
    LEA EDI,[ESP + 0x14]                ; 004b41da
    LEA ESI,[ESP + 0x8]                 ; 004b41de
    LEA EAX,[EBX + 0x40]                ; 004b41e2
    FXCH ST2                            ; 004b41e5
    FSTP float ptr [ESP + 0x8]          ; 004b41e7
    FSTP float ptr [ESP + 0xc]          ; 004b41eb
    FSTP float ptr [ESP + 0x10]         ; 004b41ef
    MOVSD ES:EDI,ESI                    ; 004b41f3
    MOVSD ES:EDI,ESI                    ; 004b41f4
    MOVSD ES:EDI,ESI                    ; 004b41f5
    FLD float ptr [EAX]                 ; 004b41f6
    FLD float ptr [EAX + 0x4]           ; 004b41f8
    FLD float ptr [EAX + 0x8]           ; 004b41fb
    FXCH ST2                            ; 004b41fe
    FADD float ptr [ESP + 0x14]         ; 004b4200
    FXCH                                ; 004b4204
    FADD float ptr [ESP + 0x18]         ; 004b4206
    FXCH ST2                            ; 004b420a
    FADD float ptr [ESP + 0x1c]         ; 004b420c
    FXCH                                ; 004b4210
    FSTP float ptr [EAX]                ; 004b4212
    FXCH                                ; 004b4214
    FSTP float ptr [EAX + 0x4]          ; 004b4216
    FSTP float ptr [EAX + 0x8]          ; 004b4219
    POP ESI                             ; 004b421c
    POP EDI                             ; 004b421d
    ADD ESP,0x1c                        ; 004b421e
    POP EBX                             ; 004b4221
    RET                                 ; 004b4222

