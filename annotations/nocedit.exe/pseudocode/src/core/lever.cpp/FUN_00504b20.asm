; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_lever_cpp_FUN_00504b20(void)
;
;
; XREF[3]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004acde5
;   core_lever.cpp_FUN_00504920 at 00504a71
;   core_lever.cpp_FUN_005051a0 at 00505200
;
; Referenced Globals:
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CEventList g_CEventListInstance
;   undefined4 g_CLeverClassInfo.name_hash
;   undefined4 DAT_02f33744
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_event.cpp_CEventList_FUN_004aabe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504b20
        ;   Label: core_lever.cpp_FUN_00504b20
    PUSH ESI                            ; 00504b21
    PUSH EDI                            ; 00504b22
    PUSH EBP                            ; 00504b23
    MOV EDI,dword ptr [ESP + 0x14]      ; 00504b24
    FLD float ptr [EDI + 0x2dc]         ; 00504b28
    FCOMP float ptr [ESP + 0x18]        ; 00504b2e
    FNSTSW AX                           ; 00504b32
    SAHF                                ; 00504b34
    JZ 0x00504ba5                       ; 00504b35
        ;   XREF to: 00504ba5 (CONDITIONAL_JUMP)  ; LAB_00504ba5
    MOV EAX,[0x0067d550]                ; 00504b37 | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 00504b3c | DAT_02f33744
    JZ 0x00504baa                       ; 00504b40
        ;   XREF to: 00504baa (CONDITIONAL_JUMP)  ; LAB_00504baa
    FLDZ                                ; 00504b42
        ;   Label: LAB_00504b42
    FCOMP float ptr [ESP + 0x18]        ; 00504b44
    FNSTSW AX                           ; 00504b48
    SAHF                                ; 00504b4a
    JNC 0x00504c1b                      ; 00504b4b
        ;   XREF to: 00504c1b (CONDITIONAL_JUMP)  ; LAB_00504c1b
    FLD float ptr [EDI + 0x2dc]         ; 00504b51
    FLDZ                                ; 00504b57
    FCOMPP                              ; 00504b59
    FNSTSW AX                           ; 00504b5b
    SAHF                                ; 00504b5d
    JC 0x00504c1b                       ; 00504b5e
        ;   XREF to: 00504c1b (CONDITIONAL_JUMP)  ; LAB_00504c1b
    LEA EBX,[EDI + 0x3a8]               ; 00504b64
        ;   Label: LAB_00504b64
    PUSH EBX                            ; 00504b6a
    MOV EAX,dword ptr [EDI + 0x154]     ; 00504b6b
    PUSH EDI                            ; 00504b71
    CALL dword ptr [EAX + 0x24]         ; 00504b72
    ADD ESP,0x8                         ; 00504b75
    MOV EAX,dword ptr [ESP + 0x18]      ; 00504b78
        ;   Label: LAB_00504b78
    MOV EBP,dword ptr [EDI + 0x410]     ; 00504b7c
    MOV dword ptr [EDI + 0x2dc],EAX     ; 00504b82
    TEST EBP,EBP                        ; 00504b88
    JNZ 0x00504c41                      ; 00504b8a
        ;   XREF to: 00504c41 (CONDITIONAL_JUMP)  ; LAB_00504c41
    XOR EBX,EBX                         ; 00504b90
        ;   Label: LAB_00504b90
    XOR ESI,ESI                         ; 00504b92
    MOV EAX,[0x006810c8]                ; 00504b94 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00504b94
    CMP ESI,dword ptr [EAX + 0x14d154]  ; 00504b99 | g_CDemonSetInstance.actor_list_ptr
    JL 0x00504c50                       ; 00504b9f
        ;   XREF to: 00504c50 (CONDITIONAL_JUMP)  ; LAB_00504c50
    POP EBP                             ; 00504ba5
        ;   Label: LAB_00504ba5
    POP EDI                             ; 00504ba6
    POP ESI                             ; 00504ba7
    POP EBX                             ; 00504ba8
    RET                                 ; 00504ba9
    FLD float ptr [ESP + 0x18]          ; 00504baa
        ;   Label: LAB_00504baa
    FLDZ                                ; 00504bae
    FCOMPP                              ; 00504bb0
    FNSTSW AX                           ; 00504bb2
    SAHF                                ; 00504bb4
    JC 0x00504bdc                       ; 00504bb5
        ;   XREF to: 00504bdc (CONDITIONAL_JUMP)  ; LAB_00504bdc
    FLD float ptr [EDI + 0x2dc]         ; 00504bb7
    FLDZ                                ; 00504bbd
    FCOMPP                              ; 00504bbf
    FNSTSW AX                           ; 00504bc1
    SAHF                                ; 00504bc3
    JNC 0x00504bdc                      ; 00504bc4
        ;   XREF to: 00504bdc (CONDITIONAL_JUMP)  ; LAB_00504bdc
    LEA EAX,[EDI + 0x344]               ; 00504bc6
    PUSH EAX                            ; 00504bcc
    MOV ECX,dword ptr [0x006793d0]      ; 00504bcd | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 00504bd3 | g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004aabe0 ; 00504bd4
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_FUN_004aabe0(CEventList * this_ptr)
    ADD ESP,0x8                         ; 00504bd9
    FLD float ptr [ESP + 0x18]          ; 00504bdc
        ;   Label: LAB_00504bdc
    FLD1                                ; 00504be0
    FCOMPP                              ; 00504be2
    FNSTSW AX                           ; 00504be4
    SAHF                                ; 00504be6
    JA 0x00504b42                       ; 00504be7
        ;   XREF to: 00504b42 (CONDITIONAL_JUMP)  ; LAB_00504b42
    FLD float ptr [EDI + 0x2dc]         ; 00504bed
    FLD1                                ; 00504bf3
    FCOMPP                              ; 00504bf5
    FNSTSW AX                           ; 00504bf7
    SAHF                                ; 00504bf9
    JBE 0x00504b42                      ; 00504bfa
        ;   XREF to: 00504b42 (CONDITIONAL_JUMP)  ; LAB_00504b42
    LEA EAX,[EDI + 0x2e0]               ; 00504c00
    PUSH EAX                            ; 00504c06
    MOV EBX,dword ptr [0x006793d0]      ; 00504c07 | g_CEventListInstance | g_CEventListPtr
    PUSH EBX                            ; 00504c0d | g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004aabe0 ; 00504c0e
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_FUN_004aabe0(CEventList * this_ptr)
    ADD ESP,0x8                         ; 00504c13
    JMP 0x00504b42                      ; 00504c16
        ;   XREF to: 00504b42 (UNCONDITIONAL_JUMP)  ; LAB_00504b42
    CMP dword ptr [ESP + 0x18],0x3f800000 ; 00504c1b
        ;   Label: LAB_00504c1b
    JGE 0x00504b78                      ; 00504c23
        ;   XREF to: 00504b78 (CONDITIONAL_JUMP)  ; LAB_00504b78
    FLD float ptr [EDI + 0x2dc]         ; 00504c29
    FLD1                                ; 00504c2f
    FCOMPP                              ; 00504c31
    FNSTSW AX                           ; 00504c33
    SAHF                                ; 00504c35
    JBE 0x00504b64                      ; 00504c36
        ;   XREF to: 00504b64 (CONDITIONAL_JUMP)  ; LAB_00504b64
    JMP 0x00504b78                      ; 00504c3c
        ;   XREF to: 00504b78 (UNCONDITIONAL_JUMP)  ; LAB_00504b78
    PUSH EAX                            ; 00504c41
        ;   Label: LAB_00504c41
    PUSH EBP                            ; 00504c42
    CALL core_lever.cpp_FUN_00504b20    ; 00504c43
        ;   XREF to: 00504b20 (UNCONDITIONAL_CALL)  ; void core_lever.cpp_FUN_00504b20()
    ADD ESP,0x8                         ; 00504c48
    JMP 0x00504b90                      ; 00504c4b
        ;   XREF to: 00504b90 (UNCONDITIONAL_JUMP)  ; LAB_00504b90
    MOV ECX,dword ptr [0x02dd3090]      ; 00504c50 | g_CLeverClassInfo.name_hash
        ;   Label: LAB_00504c50
    PUSH ECX                            ; 00504c56
    MOV EBP,dword ptr [EBX + EAX*0x1 + 0x14d158] ; 00504c57 | g_CDemonSetInstance.actor_list_data[0]
    PUSH EBP                            ; 00504c5e
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00504c5f
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00504c64
    TEST EAX,EAX                        ; 00504c67
    JZ 0x00504c80                       ; 00504c69
        ;   XREF to: 00504c80 (CONDITIONAL_JUMP)  ; LAB_00504c80
    CMP EDI,dword ptr [EAX + 0x410]     ; 00504c6b
    JNZ 0x00504c80                      ; 00504c71
        ;   XREF to: 00504c80 (CONDITIONAL_JUMP)  ; LAB_00504c80
    PUSH dword ptr [ESP + 0x18]         ; 00504c73
    PUSH EAX                            ; 00504c77
    CALL core_lever.cpp_FUN_00504b20    ; 00504c78
        ;   XREF to: 00504b20 (UNCONDITIONAL_CALL)  ; void core_lever.cpp_FUN_00504b20()
    ADD ESP,0x8                         ; 00504c7d
    INC ESI                             ; 00504c80
        ;   Label: LAB_00504c80
    ADD EBX,0x4                         ; 00504c81
    JMP 0x00504b94                      ; 00504c84
        ;   XREF to: 00504b94 (UNCONDITIONAL_JUMP)  ; LAB_00504b94

