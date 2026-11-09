; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_patrpoin_cpp_FUN_0059c9c0(char *param_1,uint *param_2)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined1       Stack[-0x33]:1  local_33
; undefined        Stack[-0x18]:1  local_18
; undefined1       Stack[-0x17]:1  local_17
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   unkafter_basicene.cpp_FUN_0059ee00 at 0059eef2
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789_005ef78e
;   undefined4 DAT_00618170
;   undefined4 DAT_01d182f0
;   undefined4 g_CPatrolPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_mission.cpp_FUN_004fc740
;   crt_stdio.c_IntegerToString_FUN_005bafd8
;   crt_stdlib.c_atoi_FUN_005bad20
;   crt_string.c__strncpy_FUN_005b9cf0
;   crt_unknown.c_FUN_005baf20
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0059c9c0
        ;   Label: core_patrpoin.cpp_FUN_0059c9c0
    PUSH EBP                            ; 0059c9c1
    SUB ESP,0x2c                        ; 0059c9c2
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0059c9c5
    PUSH 0x5ef78e                       ; 0059c9c9 | = "0123456789"
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0059c9ce
    XOR EDX,EDX                         ; 0059c9d2
    PUSH ECX                            ; 0059c9d4
    MOV dword ptr [ESP + 0x30],EDX      ; 0059c9d5
    CALL crt_unknown.c_FUN_005baf20     ; 0059c9d9
        ;   XREF to: 005baf20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005baf20()
    ADD ESP,0x8                         ; 0059c9de
    MOV EDI,EAX                         ; 0059c9e1
    MOV dword ptr [ESP + 0x24],EAX      ; 0059c9e3
    TEST EAX,EAX                        ; 0059c9e7
    JG 0x0059c9f3                       ; 0059c9e9
        ;   XREF to: 0059c9f3 (CONDITIONAL_JUMP)  ; LAB_0059c9f3
    XOR EAX,EAX                         ; 0059c9eb
    ADD ESP,0x2c                        ; 0059c9ed
    POP EBP                             ; 0059c9f0
    POP EDI                             ; 0059c9f1
    RET                                 ; 0059c9f2
    PUSH ESI                            ; 0059c9f3
        ;   Label: LAB_0059c9f3
    PUSH EBX                            ; 0059c9f4
    PUSH EAX                            ; 0059c9f5
    MOV EBX,dword ptr [ESP + 0x44]      ; 0059c9f6
    PUSH EBX                            ; 0059c9fa
    LEA EAX,[ESP + 0x10]                ; 0059c9fb
    PUSH EAX                            ; 0059c9ff
    MOV ESI,EDI                         ; 0059ca00
    CALL crt_string.c__strncpy_FUN_005b9cf0 ; 0059ca02
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005b9cf0(char * dest, char * src, SIZE_T count)
    MOV EBX,EDI                         ; 0059ca07
    ADD ESP,0xc                         ; 0059ca09
    NEG EBX                             ; 0059ca0c
    XOR AH,AH                           ; 0059ca0e
    MOV EDX,dword ptr [ESP + 0x40]      ; 0059ca10
    ADD EBX,EDI                         ; 0059ca14
    MOV byte ptr [ESP + EDI*0x1 + 0x8],AH ; 0059ca16
    ADD EDX,EDI                         ; 0059ca1a
    MOV EDI,dword ptr [ESP + 0x40]      ; 0059ca1c
        ;   Label: LAB_0059ca1c
    SUB ECX,ECX                         ; 0059ca20
    DEC ECX                             ; 0059ca22
    XOR EAX,EAX                         ; 0059ca23
    SCASB.REPNE ES:EDI                  ; 0059ca25
    NOT ECX                             ; 0059ca27
    DEC ECX                             ; 0059ca29
    CMP ESI,ECX                         ; 0059ca2a
    JNC 0x0059ca39                      ; 0059ca2c
        ;   XREF to: 0059ca39 (CONDITIONAL_JUMP)  ; LAB_0059ca39
    INC EBX                             ; 0059ca2e
    MOV AL,byte ptr [EDX]               ; 0059ca2f
    INC EDX                             ; 0059ca31
    INC ESI                             ; 0059ca32
    MOV byte ptr [ESP + EBX*0x1 + 0x23],AL ; 0059ca33
    JMP 0x0059ca1c                      ; 0059ca37
        ;   XREF to: 0059ca1c (UNCONDITIONAL_JUMP)  ; LAB_0059ca1c
    LEA EAX,[ESP + 0x24]                ; 0059ca39
        ;   Label: LAB_0059ca39
    XOR DL,DL                           ; 0059ca3d
    PUSH EAX                            ; 0059ca3f
    MOV byte ptr [ESP + EBX*0x1 + 0x28],DL ; 0059ca40
    CALL crt_stdlib.c_atoi_FUN_005bad20 ; 0059ca44
        ;   XREF to: 005bad20 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005bad20(char * string_ptr)
    ADD ESP,0x4                         ; 0059ca49
    MOV ESI,dword ptr [ESP + 0x30]      ; 0059ca4c
    MOV EBX,EAX                         ; 0059ca50
    TEST ESI,ESI                        ; 0059ca52
    JNZ 0x0059cb15                      ; 0059ca54
        ;   XREF to: 0059cb15 (CONDITIONAL_JUMP)  ; LAB_0059cb15
    TEST EBX,EBX                        ; 0059ca5a
        ;   Label: LAB_0059ca5a
    JL 0x0059cb15                       ; 0059ca5c
        ;   XREF to: 0059cb15 (CONDITIONAL_JUMP)  ; LAB_0059cb15
    CMP EBX,0x64                        ; 0059ca62
    JGE 0x0059cb15                      ; 0059ca65
        ;   XREF to: 0059cb15 (CONDITIONAL_JUMP)  ; LAB_0059cb15
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0059ca6b
    XOR DH,DH                           ; 0059ca6f
    MOV byte ptr [ESP + EAX*0x1 + 0x8],DH ; 0059ca71
    CMP dword ptr [EBP],0x0             ; 0059ca75
    JL 0x0059cb31                       ; 0059ca79
        ;   XREF to: 0059cb31 (CONDITIONAL_JUMP)  ; LAB_0059cb31
    CMP dword ptr [EBP],0x0             ; 0059ca7f
        ;   Label: LAB_0059ca7f
    JLE 0x0059ca86                      ; 0059ca83
        ;   XREF to: 0059ca86 (CONDITIONAL_JUMP)  ; LAB_0059ca86
    INC EBX                             ; 0059ca85
    TEST EBX,EBX                        ; 0059ca86
        ;   Label: LAB_0059ca86
    JL 0x0059cb37                       ; 0059ca88
        ;   XREF to: 0059cb37 (CONDITIONAL_JUMP)  ; LAB_0059cb37
    CMP EBX,0x63                        ; 0059ca8e
        ;   Label: LAB_0059ca8e
    JLE 0x0059cabb                      ; 0059ca91
        ;   XREF to: 0059cabb (CONDITIONAL_JUMP)  ; LAB_0059cabb
    MOV EAX,dword ptr [EBP]             ; 0059ca93
    CDQ                                 ; 0059ca96
    XOR EAX,EDX                         ; 0059ca97
    SUB EAX,EDX                         ; 0059ca99
    CMP EAX,0x1                         ; 0059ca9b
    JNZ 0x0059caa2                      ; 0059ca9e
        ;   XREF to: 0059caa2 (CONDITIONAL_JUMP)  ; LAB_0059caa2
    XOR EBX,EBX                         ; 0059caa0
    MOV EAX,dword ptr [EBP]             ; 0059caa2
        ;   Label: LAB_0059caa2
    CDQ                                 ; 0059caa5
    XOR EAX,EDX                         ; 0059caa6
    SUB EAX,EDX                         ; 0059caa8
    CMP EAX,0x2                         ; 0059caaa
    JNZ 0x0059cabb                      ; 0059caad
        ;   XREF to: 0059cabb (CONDITIONAL_JUMP)  ; LAB_0059cabb
    IMUL EAX,dword ptr [EBP],-0x1       ; 0059caaf
    MOV EBX,0x63                        ; 0059cab3
    MOV dword ptr [EBP],EAX             ; 0059cab8
        ;   Label: LAB_0059cab8
    PUSH 0xa                            ; 0059cabb
        ;   Label: LAB_0059cabb
    LEA EAX,[ESP + 0x28]                ; 0059cabd
    PUSH EAX                            ; 0059cac1
    PUSH EBX                            ; 0059cac2
    CALL crt_stdio.c_IntegerToString_FUN_005bafd8 ; 0059cac3
        ;   XREF to: 005bafd8 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_IntegerToString_FUN_005bafd8(int value, char * buffer, int base)
    ADD ESP,0xc                         ; 0059cac8
    LEA ESI,[ESP + 0x24]                ; 0059cacb
    LEA EDI,[ESP + 0x8]                 ; 0059cacf
    PUSH EDI                            ; 0059cad3
    SUB ECX,ECX                         ; 0059cad4
    DEC ECX                             ; 0059cad6
    MOV AL,0x0                          ; 0059cad7
    SCASB.REPNE ES:EDI                  ; 0059cad9
    DEC EDI                             ; 0059cadb
    MOV AL,byte ptr [ESI]               ; 0059cadc
        ;   Label: LAB_0059cadc
    MOV byte ptr [EDI],AL               ; 0059cade
    CMP AL,0x0                          ; 0059cae0
    JZ 0x0059caf4                       ; 0059cae2
        ;   XREF to: 0059caf4 (CONDITIONAL_JUMP)  ; LAB_0059caf4
    MOV AL,byte ptr [ESI + 0x1]         ; 0059cae4
    ADD ESI,0x2                         ; 0059cae7
    MOV byte ptr [EDI + 0x1],AL         ; 0059caea
    ADD EDI,0x2                         ; 0059caed
    CMP AL,0x0                          ; 0059caf0
    JNZ 0x0059cadc                      ; 0059caf2
        ;   XREF to: 0059cadc (CONDITIONAL_JUMP)  ; LAB_0059cadc
    POP EDI                             ; 0059caf4
        ;   Label: LAB_0059caf4
    LEA EAX,[ESP + 0x8]                 ; 0059caf5
    PUSH EAX                            ; 0059caf9
    MOV EDI,dword ptr [0x00618170]      ; 0059cafa | DAT_00618170
    PUSH EDI                            ; 0059cb00 | DAT_01d182f0
    CALL core_mission.cpp_FUN_004fc740  ; 0059cb01
        ;   XREF to: 004fc740 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_FUN_004fc740(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0059cb06
    MOV dword ptr [ESP + 0x30],EAX      ; 0059cb09
    TEST EAX,EAX                        ; 0059cb0d
    JZ 0x0059ca5a                       ; 0059cb0f
        ;   XREF to: 0059ca5a (CONDITIONAL_JUMP)  ; LAB_0059ca5a
    MOV ESI,dword ptr [0x02668164]      ; 0059cb15 | g_CPatrolPointClassInfo.name_hash
        ;   Label: LAB_0059cb15
    PUSH ESI                            ; 0059cb1b
    MOV EDI,dword ptr [ESP + 0x34]      ; 0059cb1c
    PUSH EDI                            ; 0059cb20
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0059cb21
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0059cb26
    POP EBX                             ; 0059cb29
    POP ESI                             ; 0059cb2a
    ADD ESP,0x2c                        ; 0059cb2b
    POP EBP                             ; 0059cb2e
    POP EDI                             ; 0059cb2f
    RET                                 ; 0059cb30
    DEC EBX                             ; 0059cb31
        ;   Label: LAB_0059cb31
    JMP 0x0059ca7f                      ; 0059cb32
        ;   XREF to: 0059ca7f (UNCONDITIONAL_JUMP)  ; LAB_0059ca7f
    MOV EAX,dword ptr [EBP]             ; 0059cb37
        ;   Label: LAB_0059cb37
    CDQ                                 ; 0059cb3a
    XOR EAX,EDX                         ; 0059cb3b
    SUB EAX,EDX                         ; 0059cb3d
    CMP EAX,0x1                         ; 0059cb3f
    JNZ 0x0059cb49                      ; 0059cb42
        ;   XREF to: 0059cb49 (CONDITIONAL_JUMP)  ; LAB_0059cb49
    MOV EBX,0x63                        ; 0059cb44
    MOV EAX,dword ptr [EBP]             ; 0059cb49
        ;   Label: LAB_0059cb49
    CDQ                                 ; 0059cb4c
    XOR EAX,EDX                         ; 0059cb4d
    SUB EAX,EDX                         ; 0059cb4f
    CMP EAX,0x2                         ; 0059cb51
    JNZ 0x0059ca8e                      ; 0059cb54
        ;   XREF to: 0059ca8e (CONDITIONAL_JUMP)  ; LAB_0059ca8e
    IMUL EAX,dword ptr [EBP],-0x1       ; 0059cb5a
    XOR EBX,EBX                         ; 0059cb5e
    JMP 0x0059cab8                      ; 0059cb60
        ;   XREF to: 0059cab8 (UNCONDITIONAL_JUMP)  ; LAB_0059cab8

