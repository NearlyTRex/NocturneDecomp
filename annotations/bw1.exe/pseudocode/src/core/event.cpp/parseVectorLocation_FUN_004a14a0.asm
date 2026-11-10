; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_event_cpp_parseVectorLocation_FUN_004a14a0(int param_1,int *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a8368
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_n_005dcc7f
;   TerminatedCString s_n_005dcc91
;   TerminatedCString s_Error_parsing_vector_loc_005dcc9f
;   undefined4 DAT_005ffcb8
;   CDemonActorType g_CDemonActorClassInfo
;   undefined4 g_CDemonActorClassInfo.name_hash
;   undefined4 DAT_01c56ed0
;
; Called Functions:
;   core_event.cpp_resolveActorByName_FUN_004a1370
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a14a0
        ;   Label: core_event.cpp_parseVectorLocation_FUN_004a14a0
    PUSH ESI                            ; 004a14a1
    PUSH EDI                            ; 004a14a2
    PUSH EBP                            ; 004a14a3
    SUB ESP,0x68                        ; 004a14a4
    MOV ESI,dword ptr [ESP + 0x80]      ; 004a14a7
    MOV EBX,dword ptr [ESP + 0x84]      ; 004a14ae
    LEA EAX,[ESP + 0x64]                ; 004a14b5
    PUSH EAX                            ; 004a14b9
    LEA EAX,[EBX + 0x8]                 ; 004a14ba
    PUSH EAX                            ; 004a14bd
    LEA EAX,[EBX + 0x4]                 ; 004a14be
    MOV EDX,0xffffffff                  ; 004a14c1
    PUSH EAX                            ; 004a14c6
    MOV dword ptr [ESP + 0x70],EDX      ; 004a14c7
    PUSH EBX                            ; 004a14cb
    MOV ECX,dword ptr [ESI]             ; 004a14cc
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004a14ce
    PUSH 0x5dcc7f                       ; 004a14d5 | = " { %f, %f, %f }%n"
    ADD EAX,ECX                         ; 004a14da
    PUSH EAX                            ; 004a14dc
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a14dd
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x18                        ; 004a14e2
    MOV EDI,dword ptr [ESP + 0x64]      ; 004a14e5
    CMP EDI,0x7                         ; 004a14e9
    JL 0x004a1503                       ; 004a14ec
        ;   XREF to: 004a1503 (CONDITIONAL_JUMP)  ; LAB_004a1503
    MOV EAX,EDI                         ; 004a14ee
    MOV EDI,dword ptr [ESI]             ; 004a14f0
    ADD EDI,EAX                         ; 004a14f2
    MOV EAX,0x1                         ; 004a14f4
    MOV dword ptr [ESI],EDI             ; 004a14f9
    ADD ESP,0x68                        ; 004a14fb
    POP EBP                             ; 004a14fe
    POP EDI                             ; 004a14ff
    POP ESI                             ; 004a1500
    POP EBX                             ; 004a1501
    RET                                 ; 004a1502
    LEA EAX,[ESP + 0x64]                ; 004a1503
        ;   Label: LAB_004a1503
    PUSH EAX                            ; 004a1507
    LEA EAX,[ESP + 0x4]                 ; 004a1508
    PUSH EAX                            ; 004a150c
    MOV EBP,dword ptr [ESI]             ; 004a150d
    MOV EAX,dword ptr [ESP + 0x84]      ; 004a150f
    PUSH 0x5dcc91                       ; 004a1516 | = " %[^ ,(){}]%n"
    ADD EAX,EBP                         ; 004a151b
    PUSH EAX                            ; 004a151d
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a151e
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004a1523
    CMP dword ptr [ESP + 0x64],0x0      ; 004a1526
    JL 0x004a157e                       ; 004a152b
        ;   XREF to: 004a157e (CONDITIONAL_JUMP)  ; LAB_004a157e
    PUSH 0x7c2ff8                       ; 004a152d | g_CDemonActorClassInfo
    MOV EDX,dword ptr [0x007c3030]      ; 004a1532 | g_CDemonActorClassInfo.name_hash
    PUSH EDX                            ; 004a1538
    LEA EAX,[ESP + 0x8]                 ; 004a1539
    PUSH EAX                            ; 004a153d
    CALL core_event.cpp_resolveActorByName_FUN_004a1370 ; 004a153e
        ;   XREF to: 004a1370 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_004a1370()
    MOV EDX,EAX                         ; 004a1543
    ADD ESP,0xc                         ; 004a1545
    TEST EAX,EAX                        ; 004a1548
    JZ 0x004a159d                       ; 004a154a
        ;   XREF to: 004a159d (CONDITIONAL_JUMP)  ; LAB_004a159d
    MOV EAX,dword ptr [ESP + 0x64]      ; 004a154c
    ADD dword ptr [ESI],EAX             ; 004a1550
    CMP EDX,dword ptr [0x005ffcb8]      ; 004a1552 | DAT_005ffcb8
    JZ 0x004a15aa                       ; 004a1558
        ;   XREF to: 004a15aa (CONDITIONAL_JUMP)  ; LAB_004a15aa
    ADD EDX,0x20                        ; 004a155a
    CMP EBX,EDX                         ; 004a155d
    JZ 0x004a1571                       ; 004a155f
        ;   XREF to: 004a1571 (CONDITIONAL_JUMP)  ; LAB_004a1571
    MOV EAX,dword ptr [EDX]             ; 004a1561
    MOV dword ptr [EBX],EAX             ; 004a1563
    MOV EAX,dword ptr [EDX + 0x4]       ; 004a1565
    MOV dword ptr [EBX + 0x4],EAX       ; 004a1568
    MOV EAX,dword ptr [EDX + 0x8]       ; 004a156b
    MOV dword ptr [EBX + 0x8],EAX       ; 004a156e
    MOV EAX,0x1                         ; 004a1571
        ;   Label: LAB_004a1571
    ADD ESP,0x68                        ; 004a1576
    POP EBP                             ; 004a1579
    POP EDI                             ; 004a157a
    POP ESI                             ; 004a157b
    POP EBX                             ; 004a157c
    RET                                 ; 004a157d
    PUSH 0x5dcc9f                       ; 004a157e | = "Error parsing vector location"
        ;   Label: LAB_004a157e
    PUSH 0x1c56ed0                      ; 004a1583 | DAT_01c56ed0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004a1588
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0xffffffff                  ; 004a158d
    ADD ESP,0x8                         ; 004a1592
    ADD ESP,0x68                        ; 004a1595
    POP EBP                             ; 004a1598
    POP EDI                             ; 004a1599
    POP ESI                             ; 004a159a
    POP EBX                             ; 004a159b
    RET                                 ; 004a159c
    MOV EAX,0xffffffff                  ; 004a159d
        ;   Label: LAB_004a159d
    ADD ESP,0x68                        ; 004a15a2
    POP EBP                             ; 004a15a5
    POP EDI                             ; 004a15a6
    POP ESI                             ; 004a15a7
    POP EBX                             ; 004a15a8
    RET                                 ; 004a15a9
    XOR EAX,EAX                         ; 004a15aa
        ;   Label: LAB_004a15aa
    ADD ESP,0x68                        ; 004a15ac
    POP EBP                             ; 004a15af
    POP EDI                             ; 004a15b0
    POP ESI                             ; 004a15b1
    POP EBX                             ; 004a15b2
    RET                                 ; 004a15b3

