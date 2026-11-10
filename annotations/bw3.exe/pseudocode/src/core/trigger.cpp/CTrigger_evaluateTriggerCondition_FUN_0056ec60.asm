; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_0056ec60(CTrigger *this_ptr,CDemonActor *querying_actor,CVector3f *query_position)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   querying_actor
; CVector3f *      Stack[0xc]:4   query_position
;
; Called Functions:
;   core_actor.cpp_FUN_00408bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ec60
        ;   Label: core_trigger.cpp_CTrigger_evaluateTriggerCondition_FUN_0056ec60
    PUSH ESI                            ; 0056ec61
    PUSH EDI                            ; 0056ec62
    SUB ESP,0x4c                        ; 0056ec63
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0056ec66
    CMP dword ptr [EBX + 0x174],0x3     ; 0056ec6a
    JZ 0x0056ec86                       ; 0056ec71
        ;   XREF to: 0056ec86 (CONDITIONAL_JUMP)  ; LAB_0056ec86
    MOV dword ptr [ESP + 0x48],0xbf800000 ; 0056ec73
        ;   Label: LAB_0056ec73
    MOV EAX,dword ptr [ESP + 0x48]      ; 0056ec7b
    ADD ESP,0x4c                        ; 0056ec7f
    POP EDI                             ; 0056ec82
    POP ESI                             ; 0056ec83
    POP EBX                             ; 0056ec84
    RET                                 ; 0056ec85
    MOV ECX,dword ptr [ESP + 0x64]      ; 0056ec86
        ;   Label: LAB_0056ec86
    PUSH ECX                            ; 0056ec8a
    PUSH EBX                            ; 0056ec8b
    LEA ESI,[ESP + 0x38]                ; 0056ec8c
    LEA EDI,[ESP + 0x44]                ; 0056ec90
    CALL core_actor.cpp_FUN_00408bf0    ; 0056ec94
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x38]                ; 0056ec99
    ADD ESP,0x8                         ; 0056ec9d
    MOVSD ES:EDI,ESI                    ; 0056eca0
    MOVSD ES:EDI,ESI                    ; 0056eca1
    MOVSD ES:EDI,ESI                    ; 0056eca2
    PUSH EBX                            ; 0056eca3
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056eca4
    LEA ESI,[ESP + 0x1c]                ; 0056ecaa
    LEA EDI,[ESP + 0x4]                 ; 0056ecae
    CALL dword ptr [EAX + 0x1c]         ; 0056ecb2
    MOV ECX,0x6                         ; 0056ecb5
    LEA ESI,[ESP + 0x1c]                ; 0056ecba
    ADD ESP,0x4                         ; 0056ecbe
    MOVSD.REP ES:EDI,ESI                ; 0056ecc1
    FLD float ptr [ESP]                 ; 0056ecc3
    FCOMP float ptr [ESP + 0x3c]        ; 0056ecc6
    FNSTSW AX                           ; 0056ecca
    SAHF                                ; 0056eccc
    JA 0x0056ec73                       ; 0056eccd
        ;   XREF to: 0056ec73 (CONDITIONAL_JUMP)  ; LAB_0056ec73
    FLD float ptr [ESP + 0x4]           ; 0056eccf
    FCOMP float ptr [ESP + 0x40]        ; 0056ecd3
    FNSTSW AX                           ; 0056ecd7
    SAHF                                ; 0056ecd9
    JA 0x0056ec73                       ; 0056ecda
        ;   XREF to: 0056ec73 (CONDITIONAL_JUMP)  ; LAB_0056ec73
    FLD float ptr [ESP + 0x8]           ; 0056ecdc
    FCOMP float ptr [ESP + 0x44]        ; 0056ece0
    FNSTSW AX                           ; 0056ece4
    SAHF                                ; 0056ece6
    JA 0x0056ec73                       ; 0056ece7
        ;   XREF to: 0056ec73 (CONDITIONAL_JUMP)  ; LAB_0056ec73
    FLD float ptr [ESP + 0xc]           ; 0056ece9
    FCOMP float ptr [ESP + 0x3c]        ; 0056eced
    FNSTSW AX                           ; 0056ecf1
    SAHF                                ; 0056ecf3
    JC 0x0056ec73                       ; 0056ecf4
        ;   XREF to: 0056ec73 (CONDITIONAL_JUMP)  ; LAB_0056ec73
    FLD float ptr [ESP + 0x10]          ; 0056ecfa
    FCOMP float ptr [ESP + 0x40]        ; 0056ecfe
    FNSTSW AX                           ; 0056ed02
    SAHF                                ; 0056ed04
    JC 0x0056ec73                       ; 0056ed05
        ;   XREF to: 0056ec73 (CONDITIONAL_JUMP)  ; LAB_0056ec73
    FLD float ptr [ESP + 0x14]          ; 0056ed0b
    FCOMP float ptr [ESP + 0x44]        ; 0056ed0f
    FNSTSW AX                           ; 0056ed13
    SAHF                                ; 0056ed15
    JC 0x0056ec73                       ; 0056ed16
        ;   XREF to: 0056ec73 (CONDITIONAL_JUMP)  ; LAB_0056ec73
    MOV EAX,dword ptr [EBX + 0x2fc]     ; 0056ed1c
    XOR ESI,ESI                         ; 0056ed22
    MOV EBX,dword ptr [ESP + 0x68]      ; 0056ed24
    MOV dword ptr [ESP + 0x48],ESI      ; 0056ed28
    MOV dword ptr [EBX],EAX             ; 0056ed2c
    MOV EAX,dword ptr [ESP + 0x48]      ; 0056ed2e
    ADD ESP,0x4c                        ; 0056ed32
    POP EDI                             ; 0056ed35
    POP ESI                             ; 0056ed36
    POP EBX                             ; 0056ed37
    RET                                 ; 0056ed38

