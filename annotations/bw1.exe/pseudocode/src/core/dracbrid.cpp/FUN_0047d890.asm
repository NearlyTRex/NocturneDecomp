; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dracbrid_cpp_FUN_0047d890(float param_1,float param_2,float param_3)
;
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047d890
        ;   Label: core_dracbrid.cpp_FUN_0047d890
    PUSH EDI                            ; 0047d891
    SUB ESP,0x10                        ; 0047d892
    MOV EBX,ESI                         ; 0047d895
    PUSH 0x40a00000                     ; 0047d897
    PUSH 0xc0a00000                     ; 0047d89c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047d8a1
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 0047d8a6
    FLD float ptr [ESP + 0x14]          ; 0047d8aa
    ADD ESP,0x8                         ; 0047d8ae
    PUSH 0x40000000                     ; 0047d8b1
    FADD float ptr [ESP + 0x20]         ; 0047d8b6
    PUSH 0xc0000000                     ; 0047d8ba
    FSTP float ptr [ESP + 0x24]         ; 0047d8bf
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047d8c3
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 0047d8c8
    FLD float ptr [ESP + 0x14]          ; 0047d8cc
    ADD ESP,0x8                         ; 0047d8d0
    PUSH 0x40a00000                     ; 0047d8d3
    FADD float ptr [ESP + 0x24]         ; 0047d8d8
    PUSH 0xc0a00000                     ; 0047d8dc
    FSTP float ptr [ESP + 0x28]         ; 0047d8e1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047d8e5
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 0047d8ea
    FLD float ptr [ESP + 0x14]          ; 0047d8ee
    ADD ESP,0x8                         ; 0047d8f2
    MOV EDI,ESP                         ; 0047d8f5
    FADD float ptr [ESP + 0x24]         ; 0047d8f7
    LEA ESI,[ESP + 0x1c]                ; 0047d8fb
    FSTP float ptr [ESP + 0x24]         ; 0047d8ff
    MOVSD ES:EDI,ESI                    ; 0047d903
    MOVSD ES:EDI,ESI                    ; 0047d904
    MOVSD ES:EDI,ESI                    ; 0047d905
    MOV ESI,ESP                         ; 0047d906
    MOV EDI,EBX                         ; 0047d908
    MOVSD ES:EDI,ESI                    ; 0047d90a
    MOVSD ES:EDI,ESI                    ; 0047d90b
    MOVSD ES:EDI,ESI                    ; 0047d90c
    MOV EAX,EBX                         ; 0047d90d
    ADD ESP,0x10                        ; 0047d90f
    POP EDI                             ; 0047d912
    POP EBX                             ; 0047d913
    RET                                 ; 0047d914

