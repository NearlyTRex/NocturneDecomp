; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_thehand_cpp_FUN_00599be0(int param_1)
;
;
; XREF[2]:
;   core_thehand.cpp_FUN_00599150 at 00599290
;   core_thehand.cpp_FUN_00599a10 at 00599a9a
;
; Referenced Globals:
;   undefined4 DAT_02c8ad48
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00599be0
        ;   Label: core_thehand.cpp_FUN_00599be0
    SUB ESP,0x30                        ; 00599be1
    MOV EDX,ESI                         ; 00599be4
    MOV ECX,dword ptr [0x02c8ad48]      ; 00599be6 | DAT_02c8ad48
    LEA EAX,[ECX*0x4 + 0x0]             ; 00599bec
    SUB EAX,ECX                         ; 00599bf3
    MOV ECX,dword ptr [ESP + 0x38]      ; 00599bf5
    SHL EAX,0x4                         ; 00599bf9
    ADD EAX,ECX                         ; 00599bfc
    MOV EDI,ESP                         ; 00599bfe
    MOV ECX,0xc                         ; 00599c00
    LEA ESI,[EAX + 0xfd8]               ; 00599c05
    MOVSD.REP ES:EDI,ESI                ; 00599c0b
    MOV ECX,0xc                         ; 00599c0d
    MOV ESI,ESP                         ; 00599c12
    MOV EDI,EDX                         ; 00599c14
    MOVSD.REP ES:EDI,ESI                ; 00599c16
    MOV EAX,EDX                         ; 00599c18
    ADD ESP,0x30                        ; 00599c1a
    POP EDI                             ; 00599c1d
    RET                                 ; 00599c1e

