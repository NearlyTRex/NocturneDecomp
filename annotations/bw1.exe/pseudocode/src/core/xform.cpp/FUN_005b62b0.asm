; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b62b0(undefined4 param_1)
;
;
; Called Functions:
;   core_xform.cpp_FUN_005b6270
;   core_xform.cpp_inverse_FUN_005b6380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b62b0
        ;   Label: core_xform.cpp_FUN_005b62b0
    PUSH EDI                            ; 005b62b1
    SUB ESP,0x6c                        ; 005b62b2
    MOV EBX,ESI                         ; 005b62b5
    MOV EDX,dword ptr [ESP + 0x78]      ; 005b62b7
    PUSH EDX                            ; 005b62bb
    LEA ESI,[ESP + 0x34]                ; 005b62bc
    LEA EDI,[ESP + 0x4]                 ; 005b62c0
    CALL core_xform.cpp_inverse_FUN_005b6380 ; 005b62c4
        ;   XREF to: 005b6380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_005b6380()
    MOV ECX,0xc                         ; 005b62c9
    LEA ESI,[ESP + 0x34]                ; 005b62ce
    ADD ESP,0x4                         ; 005b62d2
    MOVSD.REP ES:EDI,ESI                ; 005b62d5
    MOV ESI,ESP                         ; 005b62d7
    PUSH ESI                            ; 005b62d9
    LEA ESI,[ESP + 0x64]                ; 005b62da
    MOV EDI,EBX                         ; 005b62de
    CALL core_xform.cpp_FUN_005b6270    ; 005b62e0
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    LEA ESI,[ESP + 0x64]                ; 005b62e5
    ADD ESP,0x4                         ; 005b62e9
    MOVSD ES:EDI,ESI                    ; 005b62ec
    MOVSD ES:EDI,ESI                    ; 005b62ed
    MOVSD ES:EDI,ESI                    ; 005b62ee
    MOV EAX,EBX                         ; 005b62ef
    ADD ESP,0x6c                        ; 005b62f1
    POP EDI                             ; 005b62f4
    POP EBX                             ; 005b62f5
    RET                                 ; 005b62f6

