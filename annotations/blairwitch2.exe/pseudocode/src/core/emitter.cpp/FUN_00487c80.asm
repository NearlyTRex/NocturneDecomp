; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_emitter_cpp_FUN_00487c80(int param_1)
;
; Local Variables:
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x40]:1  local_40
;
; XREF[1]:
;   core_emitter.cpp_CEmitter_process_FUN_00486cb0 at 004872ca
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487c80
        ;   Label: core_emitter.cpp_FUN_00487c80
    PUSH EDI                            ; 00487c81
    PUSH EBP                            ; 00487c82
    SUB ESP,0x4c                        ; 00487c83
    MOV EBP,dword ptr [ESP + 0x5c]      ; 00487c86
    MOV EBX,ESI                         ; 00487c8a
    PUSH EBP                            ; 00487c8c
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 00487c8d
    LEA ESI,[ESP + 0x1c]                ; 00487c93
    LEA EDI,[ESP + 0x4]                 ; 00487c97
    CALL dword ptr [EAX + 0x24]         ; 00487c9b
    MOV ECX,0x6                         ; 00487c9e
    LEA ESI,[ESP + 0x1c]                ; 00487ca3
    ADD ESP,0x4                         ; 00487ca7
    MOVSD.REP ES:EDI,ESI                ; 00487caa
    PUSH dword ptr [ESP + 0xc]          ; 00487cac
    PUSH dword ptr [ESP + 0x4]          ; 00487cb0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00487cb4
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x50],EAX      ; 00487cb9
    FLD float ptr [ESP + 0x50]          ; 00487cbd
    ADD ESP,0x8                         ; 00487cc1
    PUSH dword ptr [ESP + 0x10]         ; 00487cc4
    PUSH dword ptr [ESP + 0x8]          ; 00487cc8
    FSTP float ptr [ESP + 0x38]         ; 00487ccc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00487cd0
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x50],EAX      ; 00487cd5
    FLD float ptr [ESP + 0x50]          ; 00487cd9
    ADD ESP,0x8                         ; 00487cdd
    PUSH dword ptr [ESP + 0x14]         ; 00487ce0
    PUSH dword ptr [ESP + 0xc]          ; 00487ce4
    FSTP float ptr [ESP + 0x3c]         ; 00487ce8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00487cec
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x50],EAX      ; 00487cf1
    FLD float ptr [ESP + 0x50]          ; 00487cf5
    ADD ESP,0x8                         ; 00487cf9
    LEA ESI,[ESP + 0x30]                ; 00487cfc
    PUSH ESI                            ; 00487d00
    MOV EDI,EBX                         ; 00487d01
    LEA ESI,[ESP + 0x40]                ; 00487d03
    PUSH EBP                            ; 00487d07
    FSTP float ptr [ESP + 0x40]         ; 00487d08
    CALL core_actor.cpp_FUN_00408d70    ; 00487d0c
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x44]                ; 00487d11
    ADD ESP,0x8                         ; 00487d15
    MOVSD ES:EDI,ESI                    ; 00487d18
    MOVSD ES:EDI,ESI                    ; 00487d19
    MOVSD ES:EDI,ESI                    ; 00487d1a
    MOV EAX,EBX                         ; 00487d1b
    ADD ESP,0x4c                        ; 00487d1d
    POP EBP                             ; 00487d20
    POP EDI                             ; 00487d21
    POP EBX                             ; 00487d22
    RET                                 ; 00487d23

