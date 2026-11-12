; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dracbrid_cpp_FUN_00465370(float param_1,float param_2,float param_3)
;
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465370
        ;   Label: core_dracbrid.cpp_FUN_00465370
    PUSH EDI                            ; 00465371
    SUB ESP,0x10                        ; 00465372
    MOV EBX,ESI                         ; 00465375
    PUSH 0x40a00000                     ; 00465377
    PUSH 0xc0a00000                     ; 0046537c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00465381
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 00465386
    FLD float ptr [ESP + 0x14]          ; 0046538a
    ADD ESP,0x8                         ; 0046538e
    PUSH 0x40000000                     ; 00465391
    FADD float ptr [ESP + 0x20]         ; 00465396
    PUSH 0xc0000000                     ; 0046539a
    FSTP float ptr [ESP + 0x24]         ; 0046539f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004653a3
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 004653a8
    FLD float ptr [ESP + 0x14]          ; 004653ac
    ADD ESP,0x8                         ; 004653b0
    PUSH 0x40a00000                     ; 004653b3
    FADD float ptr [ESP + 0x24]         ; 004653b8
    PUSH 0xc0a00000                     ; 004653bc
    FSTP float ptr [ESP + 0x28]         ; 004653c1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004653c5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 004653ca
    FLD float ptr [ESP + 0x14]          ; 004653ce
    ADD ESP,0x8                         ; 004653d2
    MOV EDI,ESP                         ; 004653d5
    FADD float ptr [ESP + 0x24]         ; 004653d7
    LEA ESI,[ESP + 0x1c]                ; 004653db
    FSTP float ptr [ESP + 0x24]         ; 004653df
    MOVSD ES:EDI,ESI                    ; 004653e3
    MOVSD ES:EDI,ESI                    ; 004653e4
    MOVSD ES:EDI,ESI                    ; 004653e5
    MOV ESI,ESP                         ; 004653e6
    MOV EDI,EBX                         ; 004653e8
    MOVSD ES:EDI,ESI                    ; 004653ea
    MOVSD ES:EDI,ESI                    ; 004653eb
    MOVSD ES:EDI,ESI                    ; 004653ec
    MOV EAX,EBX                         ; 004653ed
    ADD ESP,0x10                        ; 004653ef
    POP EDI                             ; 004653f2
    POP EBX                             ; 004653f3
    RET                                 ; 004653f4

