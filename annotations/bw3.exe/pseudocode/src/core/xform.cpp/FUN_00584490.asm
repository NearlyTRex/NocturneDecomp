; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00584490(undefined4 param_1)
;
;
; Called Functions:
;   core_xform.cpp_FUN_00584450
;   core_xform.cpp_inverse_FUN_00584560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584490
        ;   Label: core_xform.cpp_FUN_00584490
    PUSH EDI                            ; 00584491
    SUB ESP,0x6c                        ; 00584492
    MOV EBX,ESI                         ; 00584495
    MOV EDX,dword ptr [ESP + 0x78]      ; 00584497
    PUSH EDX                            ; 0058449b
    LEA ESI,[ESP + 0x34]                ; 0058449c
    LEA EDI,[ESP + 0x4]                 ; 005844a0
    CALL core_xform.cpp_inverse_FUN_00584560 ; 005844a4
        ;   XREF to: 00584560 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_00584560()
    MOV ECX,0xc                         ; 005844a9
    LEA ESI,[ESP + 0x34]                ; 005844ae
    ADD ESP,0x4                         ; 005844b2
    MOVSD.REP ES:EDI,ESI                ; 005844b5
    MOV ESI,ESP                         ; 005844b7
    PUSH ESI                            ; 005844b9
    LEA ESI,[ESP + 0x64]                ; 005844ba
    MOV EDI,EBX                         ; 005844be
    CALL core_xform.cpp_FUN_00584450    ; 005844c0
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584450()
    LEA ESI,[ESP + 0x64]                ; 005844c5
    ADD ESP,0x4                         ; 005844c9
    MOVSD ES:EDI,ESI                    ; 005844cc
    MOVSD ES:EDI,ESI                    ; 005844cd
    MOVSD ES:EDI,ESI                    ; 005844ce
    MOV EAX,EBX                         ; 005844cf
    ADD ESP,0x6c                        ; 005844d1
    POP EDI                             ; 005844d4
    POP EBX                             ; 005844d5
    RET                                 ; 005844d6

