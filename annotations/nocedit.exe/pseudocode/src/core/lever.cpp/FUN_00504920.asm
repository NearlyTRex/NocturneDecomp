; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_lever.cpp_FUN_00504920()
;
;
; Referenced Globals:
;   double DOUBLE_006310a0 = 6
;   double DOUBLE_006310a8 = 0.100000000000000
;   double DOUBLE_006310b0 = 0.900000000000000
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CEventList g_CEventListInstance
;   undefined4 g_CLeverClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;   undefined4 DAT_032613d4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_event.cpp_CEventList_FUN_004aabe0
;   core_lever.cpp_FUN_00504b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504920
        ;   Label: core_lever.cpp_FUN_00504920
    PUSH ESI                            ; 00504921
    PUSH EDI                            ; 00504922
    PUSH EBP                            ; 00504923
    SUB ESP,0x8                         ; 00504924
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00504927
    CMP dword ptr [EBX + 0x418],0x0     ; 0050492b
    JZ 0x00504aa4                       ; 00504932 | LAB_00504aa4
        ;   XREF to: 00504aa4 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x2dc]         ; 00504938
    FCOMP float ptr [EBX + 0x41c]       ; 0050493e
    FNSTSW AX                           ; 00504944
    SAHF                                ; 00504946
    JNC 0x005049fd                      ; 00504947 | LAB_005049fd
        ;   XREF to: 005049fd (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x20]          ; 0050494d
    FMUL double ptr [0x006310a0]        ; 00504951 | double DOUBLE_006310a0
    FADD float ptr [EBX + 0x2dc]        ; 00504957
    FST float ptr [EBX + 0x2dc]         ; 0050495d
    FCOMP float ptr [EBX + 0x41c]       ; 00504963
    FNSTSW AX                           ; 00504969
    SAHF                                ; 0050496b
    JBE 0x005049b5                      ; 0050496c | LAB_005049b5
        ;   XREF to: 005049b5 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x418],0x0     ; 0050496e
    FLD float ptr [EBX + 0x41c]         ; 00504978
    MOV EDI,dword ptr [EBX + 0x40c]     ; 0050497e
    FSTP float ptr [EBX + 0x2dc]        ; 00504984
    TEST EDI,EDI                        ; 0050498a
    JZ 0x005049b5                       ; 0050498c | LAB_005049b5
        ;   XREF to: 005049b5 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x2dc]         ; 0050498e
    FCOMP double ptr [0x006310b0]       ; 00504994 | double DOUBLE_006310b0
    FNSTSW AX                           ; 0050499a
    SAHF                                ; 0050499c
    JBE 0x005049b5                      ; 0050499d | LAB_005049b5
        ;   XREF to: 005049b5 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x2e0]               ; 0050499f
    PUSH EAX                            ; 005049a5
    MOV EBP,dword ptr [0x006793d0]      ; 005049a6 | CEventList * g_CEventListPtr
    PUSH EBP                            ; 005049ac | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004aabe0 ; 005049ad | void core_event.cpp_CEventList_FUN_004aabe0(CEventList * this_ptr)
        ;   Label: LAB_005049ad
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005049b2
    MOV EAX,dword ptr [EBX + 0x410]     ; 005049b5
        ;   Label: LAB_005049b5
    TEST EAX,EAX                        ; 005049bb
    JNZ 0x00504a6a                      ; 005049bd | LAB_00504a6a
        ;   XREF to: 00504a6a (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005049c3
        ;   Label: LAB_005049c3
    XOR EDI,EDI                         ; 005049c5
    MOV EAX,[0x006810c8]                ; 005049c7 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_005049c7
    CMP EDI,dword ptr [EAX + 0x14d154]  ; 005049cc | g_CDemonSetInstance.actor_list_ptr
    JGE 0x00504aa4                      ; 005049d2 | LAB_00504aa4
        ;   XREF to: 00504aa4 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x02dd3090]      ; 005049d8 | g_CLeverClassInfo.name_hash
    PUSH EBP                            ; 005049de
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 005049df | g_CDemonSetInstance.actor_list_data[0]
    PUSH EDX                            ; 005049e6
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005049e7 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005049ec
    TEST EAX,EAX                        ; 005049ef
    JNZ 0x00504a7e                      ; 005049f1 | LAB_00504a7e
        ;   XREF to: 00504a7e (CONDITIONAL_JUMP)
    INC EDI                             ; 005049f7
        ;   Label: LAB_005049f7
    ADD ESI,0x4                         ; 005049f8
    JMP 0x005049c7                      ; 005049fb | LAB_005049c7
        ;   XREF to: 005049c7 (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x20]          ; 005049fd
        ;   Label: LAB_005049fd
    FMUL double ptr [0x006310a0]        ; 00504a01 | double DOUBLE_006310a0
    FSUBR float ptr [EBX + 0x2dc]       ; 00504a07
    FST float ptr [EBX + 0x2dc]         ; 00504a0d
    FCOMP float ptr [EBX + 0x41c]       ; 00504a13
    FNSTSW AX                           ; 00504a19
    SAHF                                ; 00504a1b
    JNC 0x005049b5                      ; 00504a1c | LAB_005049b5
        ;   XREF to: 005049b5 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x418],0x0     ; 00504a1e
    FLD float ptr [EBX + 0x41c]         ; 00504a28
    MOV ECX,dword ptr [EBX + 0x40c]     ; 00504a2e
    FSTP float ptr [EBX + 0x2dc]        ; 00504a34
    TEST ECX,ECX                        ; 00504a3a
    JZ 0x005049b5                       ; 00504a3c | LAB_005049b5
        ;   XREF to: 005049b5 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x2dc]         ; 00504a42
    FCOMP double ptr [0x006310a8]       ; 00504a48 | double DOUBLE_006310a8
    FNSTSW AX                           ; 00504a4e
    SAHF                                ; 00504a50
    JNC 0x005049b5                      ; 00504a51 | LAB_005049b5
        ;   XREF to: 005049b5 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x344]               ; 00504a57
    PUSH EAX                            ; 00504a5d
    MOV ESI,dword ptr [0x006793d0]      ; 00504a5e | CEventList * g_CEventListPtr
    PUSH ESI                            ; 00504a64 | CEventList g_CEventListInstance
    JMP 0x005049ad                      ; 00504a65 | LAB_005049ad
        ;   XREF to: 005049ad (UNCONDITIONAL_JUMP)
    PUSH dword ptr [EBX + 0x2dc]        ; 00504a6a
        ;   Label: LAB_00504a6a
    PUSH EAX                            ; 00504a70
    CALL core_lever.cpp_FUN_00504b20    ; 00504a71 | undefined core_lever.cpp_FUN_00504b20()
        ;   XREF to: 00504b20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00504a76
    JMP 0x005049c3                      ; 00504a79 | LAB_005049c3
        ;   XREF to: 005049c3 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX + 0x410]     ; 00504a7e
        ;   Label: LAB_00504a7e
    CMP EBX,ECX                         ; 00504a84
    JNZ 0x005049f7                      ; 00504a86 | LAB_005049f7
        ;   XREF to: 005049f7 (CONDITIONAL_JUMP)
    PUSH dword ptr [ECX + 0x2dc]        ; 00504a8c
    PUSH EAX                            ; 00504a92
    CALL core_lever.cpp_FUN_00504b20    ; 00504a93 | undefined core_lever.cpp_FUN_00504b20()
        ;   XREF to: 00504b20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00504a98
    INC EDI                             ; 00504a9b
    ADD ESI,0x4                         ; 00504a9c
    JMP 0x005049c7                      ; 00504a9f | LAB_005049c7
        ;   XREF to: 005049c7 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x40c],0x0     ; 00504aa4
        ;   Label: LAB_00504aa4
    JNZ 0x00504af7                      ; 00504aab | LAB_00504af7
        ;   XREF to: 00504af7 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x2dc]         ; 00504aad
    FCOMP double ptr [0x006310a8]       ; 00504ab3 | double DOUBLE_006310a8
    FNSTSW AX                           ; 00504ab9
    SAHF                                ; 00504abb
    JNC 0x00504add                      ; 00504abc | LAB_00504add
        ;   XREF to: 00504add (CONDITIONAL_JUMP)
    CMP byte ptr [EBX + 0x344],0x0      ; 00504abe
    JZ 0x00504add                       ; 00504ac5 | LAB_00504add
        ;   XREF to: 00504add (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x344]               ; 00504ac7
    PUSH EAX                            ; 00504acd
    MOV EDI,dword ptr [0x006793d0]      ; 00504ace | CEventList * g_CEventListPtr
    PUSH EDI                            ; 00504ad4 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004aabe0 ; 00504ad5 | void core_event.cpp_CEventList_FUN_004aabe0(CEventList * this_ptr)
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00504ada
    FLD float ptr [EBX + 0x2dc]         ; 00504add
        ;   Label: LAB_00504add
    FCOMP double ptr [0x006310b0]       ; 00504ae3 | double DOUBLE_006310b0
    FNSTSW AX                           ; 00504ae9
    SAHF                                ; 00504aeb
    JBE 0x00504af7                      ; 00504aec | LAB_00504af7
        ;   XREF to: 00504af7 (CONDITIONAL_JUMP)
    CMP byte ptr [EBX + 0x2e0],0x0      ; 00504aee
    JNZ 0x00504aff                      ; 00504af5 | LAB_00504aff
        ;   XREF to: 00504aff (CONDITIONAL_JUMP)
    ADD ESP,0x8                         ; 00504af7
        ;   Label: LAB_00504af7
    POP EBP                             ; 00504afa
    POP EDI                             ; 00504afb
    POP ESI                             ; 00504afc
    POP EBX                             ; 00504afd
    RET                                 ; 00504afe
    ADD EBX,0x2e0                       ; 00504aff
        ;   Label: LAB_00504aff
    PUSH EBX                            ; 00504b05
    MOV EBP,dword ptr [0x006793d0]      ; 00504b06 | CEventList * g_CEventListPtr
    PUSH EBP                            ; 00504b0c | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004aabe0 ; 00504b0d | void core_event.cpp_CEventList_FUN_004aabe0(CEventList * this_ptr)
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00504b12
    ADD ESP,0x8                         ; 00504b15
    POP EBP                             ; 00504b18
    POP EDI                             ; 00504b19
    POP ESI                             ; 00504b1a
    POP EBX                             ; 00504b1b
    RET                                 ; 00504b1c

