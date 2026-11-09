; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042ffe0(int param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   core_charactr.cpp_FUN_00430d60 at 00430de6
;
; Referenced Globals:
;   undefined4 DAT_005b839a
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_charactr.cpp_FUN_004300e0
;   core_fire.cpp_FUN_004a36e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ffe0
        ;   Label: core_charactr.cpp_FUN_0042ffe0
    PUSH ESI                            ; 0042ffe1
    PUSH EDI                            ; 0042ffe2
    SUB ESP,0x78                        ; 0042ffe3
    MOV EBX,dword ptr [ESP + 0x88]      ; 0042ffe6
    PUSH EBX                            ; 0042ffed
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042ffee
    LEA ESI,[ESP + 0x4]                 ; 0042fff4
    LEA EDI,[ESP + 0x1c]                ; 0042fff8
    CALL dword ptr [EAX + 0x1c]         ; 0042fffc
    MOV ECX,0x6                         ; 0042ffff
    LEA ESI,[ESP + 0x4]                 ; 00430004
    ADD ESP,0x4                         ; 00430008
    MOVSD.REP ES:EDI,ESI                ; 0043000b
    LEA EAX,[ESP + 0x18]                ; 0043000d
    FLD float ptr [ESP + 0x18]          ; 00430011
    FLD float ptr [ESP + 0x1c]          ; 00430015
    FLD float ptr [ESP + 0x20]          ; 00430019
    LEA EDI,[ESP + 0x6c]                ; 0043001d
    LEA ESI,[ESP + 0x54]                ; 00430021
    FXCH ST2                            ; 00430025
    FADD float ptr [EAX + 0xc]          ; 00430027
    FXCH                                ; 0043002a
    FADD float ptr [EAX + 0x10]         ; 0043002c
    FXCH ST2                            ; 0043002f
    FADD float ptr [EAX + 0x14]         ; 00430031
    FXCH                                ; 00430034
    FSTP float ptr [ESP + 0x54]         ; 00430036
    FXCH                                ; 0043003a
    FSTP float ptr [ESP + 0x58]         ; 0043003c
    FSTP float ptr [ESP + 0x5c]         ; 00430040
    MOVSD ES:EDI,ESI                    ; 00430044
    MOVSD ES:EDI,ESI                    ; 00430045
    MOVSD ES:EDI,ESI                    ; 00430046
    FLD float ptr [0x005b839a]          ; 00430047 | DAT_005b839a
    FLD float ptr [ESP + 0x6c]          ; 0043004d
    FMUL ST1                            ; 00430051
    FLD float ptr [ESP + 0x70]          ; 00430053
    FMUL ST2                            ; 00430057
    LEA EAX,[ESP + 0x30]                ; 00430059
    FLD float ptr [ESP + 0x74]          ; 0043005d
    FMULP ST3                           ; 00430061
    PUSH EAX                            ; 00430063
    LEA EDI,[ESP + 0x34]                ; 00430064
    LEA ESI,[ESP + 0x64]                ; 00430068
    FXCH                                ; 0043006c
    FSTP float ptr [ESP + 0x64]         ; 0043006e
    FSTP float ptr [ESP + 0x68]         ; 00430072
    FSTP float ptr [ESP + 0x6c]         ; 00430076
    MOVSD ES:EDI,ESI                    ; 0043007a
    MOVSD ES:EDI,ESI                    ; 0043007b
    MOVSD ES:EDI,ESI                    ; 0043007c
    PUSH EBX                            ; 0043007d
    LEA ESI,[ESP + 0x50]                ; 0043007e
    CALL core_actor.cpp_FUN_00408b80    ; 00430082
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00430087
    PUSH 0x0                            ; 0043008a
    PUSH 0x40800000                     ; 0043008c
    PUSH 0x44bb8000                     ; 00430091
    LEA EAX,[ESP + 0x48]                ; 00430096
    PUSH 0x40000000                     ; 0043009a
    LEA EDI,[ESP + 0x4c]                ; 0043009f
    PUSH EAX                            ; 004300a3
    MOV EDX,dword ptr [0x005fc5a0]      ; 004300a4 | DAT_005fc5a0
    LEA ESI,[ESP + 0x5c]                ; 004300aa
    PUSH EDX                            ; 004300ae
    MOVSD ES:EDI,ESI                    ; 004300af
    MOVSD ES:EDI,ESI                    ; 004300b0
    MOVSD ES:EDI,ESI                    ; 004300b1
    CALL core_fire.cpp_FUN_004a36e0     ; 004300b2
        ;   XREF to: 004a36e0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a36e0()
    ADD ESP,0x18                        ; 004300b7
    PUSH 0x1                            ; 004300ba
    MOV ECX,dword ptr [ESP + 0x90]      ; 004300bc
    PUSH dword ptr [ESP + 0x94]         ; 004300c3
    PUSH ECX                            ; 004300ca
    PUSH EBX                            ; 004300cb
    CALL core_charactr.cpp_FUN_004300e0 ; 004300cc
        ;   XREF to: 004300e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004300e0()
    ADD ESP,0x10                        ; 004300d1
    ADD ESP,0x78                        ; 004300d4
    POP EDI                             ; 004300d7
    POP ESI                             ; 004300d8
    POP EBX                             ; 004300d9
    RET                                 ; 004300da

