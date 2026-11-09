; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_chain_cpp_FUN_00429420(int param_1)
;
;
; XREF[2]:
;   core_chain.cpp_FUN_004294a0 at 0042951c
;   core_chain.cpp_FUN_004298f0 at 00429a0c
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_xform.cpp_FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429420
        ;   Label: core_chain.cpp_FUN_00429420
    PUSH EDI                            ; 00429421
    PUSH EBP                            ; 00429422
    SUB ESP,0x24                        ; 00429423
    MOV EBP,dword ptr [ESP + 0x34]      ; 00429426
    MOV EBX,ESI                         ; 0042942a
    MOV EDX,dword ptr [EBP + 0x168]     ; 0042942c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00429432
    MOV ESI,dword ptr [EBP + 0x164]     ; 00429439
    SUB EAX,EDX                         ; 0042943f
    ADD ESI,0xfd8                       ; 00429441
    SHL EAX,0x4                         ; 00429447
    ADD EAX,ESI                         ; 0042944a
    PUSH EAX                            ; 0042944c
    PUSH 0x2cfd900                      ; 0042944d
    LEA ESI,[ESP + 0x20]                ; 00429452
    LEA EDI,[ESP + 0x14]                ; 00429456
    CALL core_xform.cpp_FUN_00583260    ; 0042945a
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x20]                ; 0042945f
    ADD ESP,0x8                         ; 00429463
    LEA EAX,[ESP + 0xc]                 ; 00429466
    MOVSD ES:EDI,ESI                    ; 0042946a
    MOVSD ES:EDI,ESI                    ; 0042946b
    MOVSD ES:EDI,ESI                    ; 0042946c
    PUSH EAX                            ; 0042946d
    MOV EDX,dword ptr [EBP + 0x164]     ; 0042946e
    PUSH EDX                            ; 00429474
    LEA ESI,[ESP + 0x8]                 ; 00429475
    MOV EDI,EBX                         ; 00429479
    CALL core_actor.cpp_FUN_00408b80    ; 0042947b
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x8]                 ; 00429480
    ADD ESP,0x8                         ; 00429484
    MOVSD ES:EDI,ESI                    ; 00429487
    MOVSD ES:EDI,ESI                    ; 00429488
    MOVSD ES:EDI,ESI                    ; 00429489
    MOV EAX,EBX                         ; 0042948a
    ADD ESP,0x24                        ; 0042948c
    POP EBP                             ; 0042948f
    POP EDI                             ; 00429490
    POP EBX                             ; 00429491
    RET                                 ; 00429492

