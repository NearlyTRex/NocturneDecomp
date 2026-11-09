; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_trigger_cpp_FUN_005783f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005783f0
        ;   Label: core_trigger.cpp_FUN_005783f0
    PUSH ESI                            ; 005783f1
    PUSH EDI                            ; 005783f2
    SUB ESP,0x4c                        ; 005783f3
    MOV EBX,dword ptr [ESP + 0x5c]      ; 005783f6
    CMP dword ptr [EBX + 0x2d0],0x3     ; 005783fa
    JZ 0x00578416                       ; 00578401
        ;   XREF to: 00578416 (CONDITIONAL_JUMP)  ; LAB_00578416
    MOV dword ptr [ESP + 0x48],0xbf800000 ; 00578403
        ;   Label: LAB_00578403
    MOV EAX,dword ptr [ESP + 0x48]      ; 0057840b
    ADD ESP,0x4c                        ; 0057840f
    POP EDI                             ; 00578412
    POP ESI                             ; 00578413
    POP EBX                             ; 00578414
    RET                                 ; 00578415
    MOV ECX,dword ptr [ESP + 0x64]      ; 00578416
        ;   Label: LAB_00578416
    PUSH ECX                            ; 0057841a
    PUSH EBX                            ; 0057841b
    LEA ESI,[ESP + 0x38]                ; 0057841c
    LEA EDI,[ESP + 0x44]                ; 00578420
    CALL core_actor.cpp_FUN_00408de0    ; 00578424
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x38]                ; 00578429
    ADD ESP,0x8                         ; 0057842d
    MOVSD ES:EDI,ESI                    ; 00578430
    MOVSD ES:EDI,ESI                    ; 00578431
    MOVSD ES:EDI,ESI                    ; 00578432
    PUSH EBX                            ; 00578433
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00578434
    LEA ESI,[ESP + 0x1c]                ; 0057843a
    LEA EDI,[ESP + 0x4]                 ; 0057843e
    CALL dword ptr [EAX + 0x24]         ; 00578442
    MOV ECX,0x6                         ; 00578445
    LEA ESI,[ESP + 0x1c]                ; 0057844a
    ADD ESP,0x4                         ; 0057844e
    MOVSD.REP ES:EDI,ESI                ; 00578451
    FLD float ptr [ESP]                 ; 00578453
    FCOMP float ptr [ESP + 0x3c]        ; 00578456
    FNSTSW AX                           ; 0057845a
    SAHF                                ; 0057845c
    JA 0x00578403                       ; 0057845d
        ;   XREF to: 00578403 (CONDITIONAL_JUMP)  ; LAB_00578403
    FLD float ptr [ESP + 0x4]           ; 0057845f
    FCOMP float ptr [ESP + 0x40]        ; 00578463
    FNSTSW AX                           ; 00578467
    SAHF                                ; 00578469
    JA 0x00578403                       ; 0057846a
        ;   XREF to: 00578403 (CONDITIONAL_JUMP)  ; LAB_00578403
    FLD float ptr [ESP + 0x8]           ; 0057846c
    FCOMP float ptr [ESP + 0x44]        ; 00578470
    FNSTSW AX                           ; 00578474
    SAHF                                ; 00578476
    JA 0x00578403                       ; 00578477
        ;   XREF to: 00578403 (CONDITIONAL_JUMP)  ; LAB_00578403
    FLD float ptr [ESP + 0xc]           ; 00578479
    FCOMP float ptr [ESP + 0x3c]        ; 0057847d
    FNSTSW AX                           ; 00578481
    SAHF                                ; 00578483
    JC 0x00578403                       ; 00578484
        ;   XREF to: 00578403 (CONDITIONAL_JUMP)  ; LAB_00578403
    FLD float ptr [ESP + 0x10]          ; 0057848a
    FCOMP float ptr [ESP + 0x40]        ; 0057848e
    FNSTSW AX                           ; 00578492
    SAHF                                ; 00578494
    JC 0x00578403                       ; 00578495
        ;   XREF to: 00578403 (CONDITIONAL_JUMP)  ; LAB_00578403
    FLD float ptr [ESP + 0x14]          ; 0057849b
    FCOMP float ptr [ESP + 0x44]        ; 0057849f
    FNSTSW AX                           ; 005784a3
    SAHF                                ; 005784a5
    JC 0x00578403                       ; 005784a6
        ;   XREF to: 00578403 (CONDITIONAL_JUMP)  ; LAB_00578403
    MOV EAX,dword ptr [EBX + 0x458]     ; 005784ac
    XOR ESI,ESI                         ; 005784b2
    MOV EBX,dword ptr [ESP + 0x68]      ; 005784b4
    MOV dword ptr [ESP + 0x48],ESI      ; 005784b8
    MOV dword ptr [EBX],EAX             ; 005784bc
    MOV EAX,dword ptr [ESP + 0x48]      ; 005784be
    ADD ESP,0x4c                        ; 005784c2
    POP EDI                             ; 005784c5
    POP ESI                             ; 005784c6
    POP EBX                             ; 005784c7
    RET                                 ; 005784c8

