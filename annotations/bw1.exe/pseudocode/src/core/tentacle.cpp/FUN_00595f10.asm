; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tentacle_cpp_FUN_00595f10(int param_1)
;
; Local Variables:
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[2]:
;   core_tentacle.cpp_FUN_005952f0 at 005954a4
;   core_tentacle.cpp_FUN_00595d40 at 00595dca
;
; Referenced Globals:
;   undefined4 DAT_02c83880
;   undefined4 DAT_02c83884
;   undefined4 DAT_02c83888
;   undefined4 DAT_02c8388c
;
; Called Functions:
;   core_xform.cpp_FUN_005b72c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595f10
        ;   Label: core_tentacle.cpp_FUN_00595f10
    PUSH EDI                            ; 00595f11
    PUSH EBP                            ; 00595f12
    SUB ESP,0xf0                        ; 00595f13
    MOV EBX,ESI                         ; 00595f19
    MOV EBP,dword ptr [0x02c83884]      ; 00595f1b | DAT_02c83884
    LEA EAX,[EBP*0x4 + 0x0]             ; 00595f21
    SUB EAX,EBP                         ; 00595f28
    MOV EBP,dword ptr [ESP + 0x100]     ; 00595f2a
    SHL EAX,0x4                         ; 00595f31
    ADD EBP,0xfd8                       ; 00595f34
    PUSH 0x3f000000                     ; 00595f3a
    ADD EAX,EBP                         ; 00595f3f
    MOV ESI,dword ptr [0x02c83880]      ; 00595f41 | DAT_02c83880
    PUSH EAX                            ; 00595f47
    LEA EAX,[ESI*0x4 + 0x0]             ; 00595f48
    SUB EAX,ESI                         ; 00595f4f
    SHL EAX,0x4                         ; 00595f51
    ADD EAX,EBP                         ; 00595f54
    PUSH EAX                            ; 00595f56
    LEA ESI,[ESP + 0x9c]                ; 00595f57
    LEA EDI,[ESP + 0x3c]                ; 00595f5e
    CALL core_xform.cpp_FUN_005b72c0    ; 00595f62
        ;   XREF to: 005b72c0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b72c0()
    MOV ECX,0xc                         ; 00595f67
    LEA ESI,[ESP + 0x9c]                ; 00595f6c
    ADD ESP,0xc                         ; 00595f73
    MOVSD.REP ES:EDI,ESI                ; 00595f76
    MOV ESI,dword ptr [0x02c8388c]      ; 00595f78 | DAT_02c8388c
    LEA EAX,[ESI*0x4 + 0x0]             ; 00595f7e
    SUB EAX,ESI                         ; 00595f85
    SHL EAX,0x4                         ; 00595f87
    PUSH 0x3f000000                     ; 00595f8a
    ADD EAX,EBP                         ; 00595f8f
    MOV ESI,dword ptr [0x02c83888]      ; 00595f91 | DAT_02c83888
    PUSH EAX                            ; 00595f97
    LEA EAX,[ESI*0x4 + 0x0]             ; 00595f98
    SUB EAX,ESI                         ; 00595f9f
    SHL EAX,0x4                         ; 00595fa1
    ADD EAX,EBP                         ; 00595fa4
    PUSH EAX                            ; 00595fa6
    LEA ESI,[ESP + 0xc]                 ; 00595fa7
    LEA EDI,[ESP + 0x6c]                ; 00595fab
    CALL core_xform.cpp_FUN_005b72c0    ; 00595faf
        ;   XREF to: 005b72c0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b72c0()
    ADD ESP,0xc                         ; 00595fb4
    MOV ECX,0xc                         ; 00595fb7
    LEA EAX,[ESP + 0x60]                ; 00595fbc
    PUSH 0x3f000000                     ; 00595fc0
    LEA ESI,[ESP + 0x4]                 ; 00595fc5
    PUSH EAX                            ; 00595fc9
    LEA EAX,[ESP + 0x38]                ; 00595fca
    MOVSD.REP ES:EDI,ESI                ; 00595fce
    PUSH EAX                            ; 00595fd0
    LEA ESI,[ESP + 0xcc]                ; 00595fd1
    MOV EDI,EBX                         ; 00595fd8
    CALL core_xform.cpp_FUN_005b72c0    ; 00595fda
        ;   XREF to: 005b72c0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b72c0()
    MOV ECX,0xc                         ; 00595fdf
    LEA ESI,[ESP + 0xcc]                ; 00595fe4
    ADD ESP,0xc                         ; 00595feb
    MOVSD.REP ES:EDI,ESI                ; 00595fee
    MOV EAX,EBX                         ; 00595ff0
    ADD ESP,0xf0                        ; 00595ff2
    POP EBP                             ; 00595ff8
    POP EDI                             ; 00595ff9
    POP EBX                             ; 00595ffa
    RET                                 ; 00595ffb

