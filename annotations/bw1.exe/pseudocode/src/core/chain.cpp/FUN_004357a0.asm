; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_chain_cpp_FUN_004357a0(int param_1)
;
;
; XREF[2]:
;   core_chain.cpp_CChain_process_FUN_00435c70 at 00435d8c
;   core_chain.cpp_CChain_setup_FUN_00435820 at 0043589c
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_xform.cpp_FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004357a0
        ;   Label: core_chain.cpp_FUN_004357a0
    PUSH EDI                            ; 004357a1
    PUSH EBP                            ; 004357a2
    SUB ESP,0x24                        ; 004357a3
    MOV EBP,dword ptr [ESP + 0x34]      ; 004357a6
    MOV EBX,ESI                         ; 004357aa
    MOV EDX,dword ptr [EBP + 0x168]     ; 004357ac
    LEA EAX,[EDX*0x4 + 0x0]             ; 004357b2
    MOV ESI,dword ptr [EBP + 0x164]     ; 004357b9
    SUB EAX,EDX                         ; 004357bf
    ADD ESI,0xfd8                       ; 004357c1
    SHL EAX,0x4                         ; 004357c7
    ADD EAX,ESI                         ; 004357ca
    PUSH EAX                            ; 004357cc
    PUSH 0x2c8af28                      ; 004357cd
    LEA ESI,[ESP + 0x20]                ; 004357d2
    LEA EDI,[ESP + 0x14]                ; 004357d6
    CALL core_xform.cpp_FUN_005b5080    ; 004357da
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x20]                ; 004357df
    ADD ESP,0x8                         ; 004357e3
    LEA EAX,[ESP + 0xc]                 ; 004357e6
    MOVSD ES:EDI,ESI                    ; 004357ea
    MOVSD ES:EDI,ESI                    ; 004357eb
    MOVSD ES:EDI,ESI                    ; 004357ec
    PUSH EAX                            ; 004357ed
    MOV EDX,dword ptr [EBP + 0x164]     ; 004357ee
    PUSH EDX                            ; 004357f4
    LEA ESI,[ESP + 0x8]                 ; 004357f5
    MOV EDI,EBX                         ; 004357f9
    CALL core_actor.cpp_FUN_00408b40    ; 004357fb
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x8]                 ; 00435800
    ADD ESP,0x8                         ; 00435804
    MOVSD ES:EDI,ESI                    ; 00435807
    MOVSD ES:EDI,ESI                    ; 00435808
    MOVSD ES:EDI,ESI                    ; 00435809
    MOV EAX,EBX                         ; 0043580a
    ADD ESP,0x24                        ; 0043580c
    POP EBP                             ; 0043580f
    POP EDI                             ; 00435810
    POP EBX                             ; 00435811
    RET                                 ; 00435812

