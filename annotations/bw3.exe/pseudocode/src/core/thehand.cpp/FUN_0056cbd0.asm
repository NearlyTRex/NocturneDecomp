; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_thehand_cpp_FUN_0056cbd0(int param_1)
;
;
; XREF[2]:
;   core_thehand.cpp_FUN_0056c140 at 0056c287
;   core_thehand.cpp_FUN_0056ca00 at 0056ca8a
;
; Referenced Globals:
;   undefined4 DAT_02cfd798
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0056cbd0
        ;   Label: core_thehand.cpp_FUN_0056cbd0
    SUB ESP,0x30                        ; 0056cbd1
    MOV EDX,ESI                         ; 0056cbd4
    MOV ECX,dword ptr [0x02cfd798]      ; 0056cbd6 | DAT_02cfd798
    LEA EAX,[ECX*0x4 + 0x0]             ; 0056cbdc
    SUB EAX,ECX                         ; 0056cbe3
    MOV ECX,dword ptr [ESP + 0x38]      ; 0056cbe5
    SHL EAX,0x4                         ; 0056cbe9
    ADD EAX,ECX                         ; 0056cbec
    MOV EDI,ESP                         ; 0056cbee
    MOV ECX,0xc                         ; 0056cbf0
    LEA ESI,[EAX + 0xfd8]               ; 0056cbf5
    MOVSD.REP ES:EDI,ESI                ; 0056cbfb
    MOV ECX,0xc                         ; 0056cbfd
    MOV ESI,ESP                         ; 0056cc02
    MOV EDI,EDX                         ; 0056cc04
    MOVSD.REP ES:EDI,ESI                ; 0056cc06
    MOV EAX,EDX                         ; 0056cc08
    ADD ESP,0x30                        ; 0056cc0a
    POP EDI                             ; 0056cc0d
    RET                                 ; 0056cc0e

