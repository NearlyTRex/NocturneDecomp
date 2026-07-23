; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00538440(int param_1,float *param_2)
;
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_00535900 at 00535acd
;
; Referenced Globals:
;   float FLOAT_0059580f = 0.5
;   undefined4 DAT_02dc9f84
;   undefined4 DAT_02dc9f88
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538440
        ;   Label: FUN_00538440
    PUSH ESI                            ; 00538441
    PUSH EDI                            ; 00538442
    SUB ESP,0x24                        ; 00538443
    MOV ESI,dword ptr [ESP + 0x38]      ; 00538446
    MOV EDX,dword ptr [0x02dc9f88]      ; 0053844a | DAT_02dc9f88
    PUSH EDX                            ; 00538450
    LEA EAX,[ESP + 0x4]                 ; 00538451
    MOV EDI,dword ptr [ESP + 0x38]      ; 00538455
    PUSH EAX                            ; 00538459
    ADD EDI,0x150                       ; 0053845a
    PUSH EDI                            ; 00538460
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 00538461
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 00538466
    MOV ECX,dword ptr [0x02dc9f84]      ; 00538469 | DAT_02dc9f84
    PUSH ECX                            ; 0053846f
    MOV EBX,EAX                         ; 00538470
    LEA EAX,[ESP + 0x1c]                ; 00538472
    PUSH EAX                            ; 00538476
    PUSH EDI                            ; 00538477
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 00538478
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    FLD float ptr [EAX]                 ; 0053847d
    FADD float ptr [EBX]                ; 0053847f
    ADD ESP,0xc                         ; 00538481
    FSTP float ptr [ESP + 0xc]          ; 00538484
    FLD float ptr [EAX + 0x4]           ; 00538488
    FADD float ptr [EBX + 0x4]          ; 0053848b
    FLD float ptr [ESP + 0xc]           ; 0053848e
    FXCH                                ; 00538492
    FSTP float ptr [ESP + 0x10]         ; 00538494
    FLD float ptr [EAX + 0x8]           ; 00538498
    FADD float ptr [EBX + 0x8]          ; 0053849b
    FXCH                                ; 0053849e
    FLD float ptr [0x0059580f]          ; 005384a0 | FLOAT_0059580f
    FXCH                                ; 005384a6
    FMUL ST1                            ; 005384a8
    FXCH ST2                            ; 005384aa
    FSTP float ptr [ESP + 0x14]         ; 005384ac
    FXCH                                ; 005384b0
    FSTP float ptr [ESI]                ; 005384b2
    FLD float ptr [ESP + 0x10]          ; 005384b4
    FMUL ST1                            ; 005384b8
    FSTP float ptr [ESI + 0x4]          ; 005384ba
    FMUL float ptr [ESP + 0x14]         ; 005384bd
    MOV EAX,ESI                         ; 005384c1
    FSTP float ptr [ESI + 0x8]          ; 005384c3
    ADD ESP,0x24                        ; 005384c6
    POP EDI                             ; 005384c9
    POP ESI                             ; 005384ca
    POP EBX                             ; 005384cb
    RET                                 ; 005384cc

