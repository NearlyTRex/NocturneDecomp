; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_set_cpp_FUN_00554440(int param_1,float *param_2)
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
;   core_sound.cpp_playSfxInternal_FUN_0057bef0 at 0057c012
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554440
        ;   Label: core_set.cpp_FUN_00554440
    PUSH ESI                            ; 00554441
    PUSH EDI                            ; 00554442
    PUSH EBP                            ; 00554443
    MOV EBP,ESP                         ; 00554444
    SUB ESP,0x3c                        ; 00554446
    AND ESP,0xfffffff8                  ; 00554449
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055444c
    XOR EDX,EDX                         ; 0055444f
    MOV ECX,dword ptr [EBX + 0x15aed4]  ; 00554451
    MOV dword ptr [ESP + 0x34],EDX      ; 00554457
    TEST ECX,ECX                        ; 0055445b
    JLE 0x0055451b                      ; 0055445d
        ;   XREF to: 0055451b (CONDITIONAL_JUMP)  ; LAB_0055451b
    ADD EBX,0x15aed8                    ; 00554463
    MOV dword ptr [ESP + 0x38],EBX      ; 00554469
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055446d
    ADD EBX,0x15aef0                    ; 00554470
    MOV dword ptr [ESP + 0x30],EBX      ; 00554476
    IMUL EBX,dword ptr [ESP + 0x34],0x44 ; 0055447a
        ;   Label: LAB_0055447a
    MOV ESI,dword ptr [EBP + 0x18]      ; 0055447f
    MOV EDX,dword ptr [ESP + 0x38]      ; 00554482
    LEA EDI,[ESP + 0x18]                ; 00554486
    FLD float ptr [ESI + 0x4]           ; 0055448a
    FLD float ptr [ESI + 0x8]           ; 0055448d
    ADD EBX,EDX                         ; 00554490
    FLD float ptr [ESI]                 ; 00554492
    LEA ESI,[ESP + 0xc]                 ; 00554494
    FSUB float ptr [EBX]                ; 00554498
    FXCH ST2                            ; 0055449a
    FSUB float ptr [EBX + 0x4]          ; 0055449c
    FXCH                                ; 0055449f
    FSUB float ptr [EBX + 0x8]          ; 005544a1
    FXCH ST2                            ; 005544a4
    FSTP float ptr [ESP + 0xc]          ; 005544a6
    FSTP float ptr [ESP + 0x10]         ; 005544aa
    FSTP float ptr [ESP + 0x14]         ; 005544ae
    MOVSD ES:EDI,ESI                    ; 005544b2
    MOVSD ES:EDI,ESI                    ; 005544b3
    MOVSD ES:EDI,ESI                    ; 005544b4
    LEA ESI,[ESP + 0x18]                ; 005544b5
    PUSH ESI                            ; 005544b9
    MOV ECX,dword ptr [ESP + 0x34]      ; 005544ba
    PUSH ECX                            ; 005544be
    LEA ESI,[ESP + 0x8]                 ; 005544bf
    LEA EDI,[ESP + 0x2c]                ; 005544c3
    CALL core_dirmat.cpp_FUN_0045f700   ; 005544c7
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x8]                 ; 005544cc
    ADD ESP,0x8                         ; 005544d0
    MOVSD ES:EDI,ESI                    ; 005544d3
    MOVSD ES:EDI,ESI                    ; 005544d4
    MOVSD ES:EDI,ESI                    ; 005544d5
    FLD float ptr [EBX + 0xc]           ; 005544d6
    FLD float ptr [ESP + 0x24]          ; 005544d9
    FABS                                ; 005544dd
    FCOMPP                              ; 005544df
    FNSTSW AX                           ; 005544e1
    SAHF                                ; 005544e3
    JA 0x005544f6                       ; 005544e4
        ;   XREF to: 005544f6 (CONDITIONAL_JUMP)  ; LAB_005544f6
    FLD float ptr [ESP + 0x28]          ; 005544e6
    FABS                                ; 005544ea
    FLD float ptr [EBX + 0x10]          ; 005544ec
    FCOMPP                              ; 005544ef
    FNSTSW AX                           ; 005544f1
    SAHF                                ; 005544f3
    JNC 0x0055452d                      ; 005544f4
        ;   XREF to: 0055452d (CONDITIONAL_JUMP)  ; LAB_0055452d
    MOV EBX,dword ptr [ESP + 0x30]      ; 005544f6
        ;   Label: LAB_005544f6
    MOV ESI,dword ptr [ESP + 0x34]      ; 005544fa
    ADD EBX,0x44                        ; 005544fe
    INC ESI                             ; 00554501
    MOV dword ptr [ESP + 0x30],EBX      ; 00554502
    MOV dword ptr [ESP + 0x34],ESI      ; 00554506
    MOV EBX,ESI                         ; 0055450a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0055450c
    CMP EBX,dword ptr [ESI + 0x15aed4]  ; 0055450f
    JL 0x0055447a                       ; 00554515
        ;   XREF to: 0055447a (CONDITIONAL_JUMP)  ; LAB_0055447a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0055451b
        ;   Label: LAB_0055451b
    MOV ESI,dword ptr [ESI + 0x15aed0]  ; 0055451e
    MOV EAX,ESI                         ; 00554524
    MOV ESP,EBP                         ; 00554526
    POP EBP                             ; 00554528
    POP EDI                             ; 00554529
    POP ESI                             ; 0055452a
    POP EBX                             ; 0055452b
    RET                                 ; 0055452c
    FLD float ptr [ESP + 0x2c]          ; 0055452d
        ;   Label: LAB_0055452d
    FABS                                ; 00554531
    FLD float ptr [EBX + 0x14]          ; 00554533
    FCOMPP                              ; 00554536
    FNSTSW AX                           ; 00554538
    SAHF                                ; 0055453a
    JC 0x005544f6                       ; 0055453b
        ;   XREF to: 005544f6 (CONDITIONAL_JUMP)  ; LAB_005544f6
    MOV ESI,dword ptr [EBX + 0x40]      ; 0055453d
    MOV EAX,ESI                         ; 00554540
    MOV ESP,EBP                         ; 00554542
    POP EBP                             ; 00554544
    POP EDI                             ; 00554545
    POP ESI                             ; 00554546
    POP EBX                             ; 00554547
    RET                                 ; 00554548

