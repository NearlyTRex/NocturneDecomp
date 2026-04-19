; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_ungetc_FUN_005fea10(int character,_FILE *stream)
;
; Parameters:
; int              Stack[0x4]:4   character
; _FILE *          Stack[0x8]:4   stream
;
; XREF[4]:
;   core_actor.cpp_archiveString_FUN_0040b5c0 at 0040b62a
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 at 00476e0f
;   core_mission.cpp_CDemonMission_loadActor_FUN_00523990 at 00523a3a
;   crt_stdio.c_ungetc_helper_FUN_005fe720 at 005fe72e
;
; Referenced Globals:
;   undefined4 CAVE_cave_006027e0
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;
; Called Functions:
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fea10
        ;   Label: crt_stdio.c_ungetc_FUN_005fea10
    PUSH ESI                            ; 005fea11
    PUSH EDI                            ; 005fea12
    PUSH EBP                            ; 005fea13
    MOV EBX,dword ptr [ESP + 0x18]      ; 005fea14
    MOV EDX,dword ptr [ESP + 0x14]      ; 005fea18
    CMP EDX,-0x1                        ; 005fea1c
    JNZ 0x005fea28                      ; 005fea1f
        ;   XREF to: 005fea28 (CONDITIONAL_JUMP)  ; LAB_005fea28
    MOV EAX,EDX                         ; 005fea21
    POP EBP                             ; 005fea23
    POP EDI                             ; 005fea24
    POP ESI                             ; 005fea25
    POP EBX                             ; 005fea26
    RET                                 ; 005fea27
    MOV ECX,dword ptr [EBX + 0x10]      ; 005fea28
        ;   Label: LAB_005fea28
    PUSH ECX                            ; 005fea2b
    CALL dword ptr [0x00684ee8]         ; 005fea2c | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV EAX,dword ptr [EBX + 0x8]       ; 005fea32
    MOV ESI,dword ptr [EAX + 0xc]       ; 005fea35
    ADD ESP,0x4                         ; 005fea38
    CMP ESI,0x1                         ; 005fea3b
    JZ 0x005fea62                       ; 005fea3e
        ;   XREF to: 005fea62 (CONDITIONAL_JUMP)  ; LAB_005fea62
    TEST ESI,ESI                        ; 005fea40
    JZ 0x005fea5b                       ; 005fea42
        ;   XREF to: 005fea5b (CONDITIONAL_JUMP)  ; LAB_005fea5b
    MOV EBP,dword ptr [EBX + 0x10]      ; 005fea44
    PUSH EBP                            ; 005fea47
    CALL dword ptr [0x00684eec]         ; 005fea48 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 005fea4e
    ADD ESP,0x4                         ; 005fea53
    POP EBP                             ; 005fea56
    POP EDI                             ; 005fea57
    POP ESI                             ; 005fea58
    POP EBX                             ; 005fea59
    RET                                 ; 005fea5a
    MOV dword ptr [EAX + 0xc],0x1       ; 005fea5b
        ;   Label: LAB_005fea5b
    TEST byte ptr [EBX + 0xd],0x10      ; 005fea62
        ;   Label: LAB_005fea62
    JZ 0x005fea7f                       ; 005fea66
        ;   XREF to: 005fea7f (CONDITIONAL_JUMP)  ; LAB_005fea7f
    MOV EBP,dword ptr [EBX + 0x10]      ; 005fea68
    PUSH EBP                            ; 005fea6b
    CALL dword ptr [0x00684eec]         ; 005fea6c | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 005fea72
    ADD ESP,0x4                         ; 005fea77
    POP EBP                             ; 005fea7a
    POP EDI                             ; 005fea7b
    POP ESI                             ; 005fea7c
    POP EBX                             ; 005fea7d
    RET                                 ; 005fea7e
    TEST byte ptr [EBX + 0xc],0x1       ; 005fea7f
        ;   Label: LAB_005fea7f
    JNZ 0x005fea9c                      ; 005fea83
        ;   XREF to: 005fea9c (CONDITIONAL_JUMP)  ; LAB_005fea9c
    MOV EDI,dword ptr [EBX + 0x10]      ; 005fea85
        ;   Label: LAB_005fea85
    PUSH EDI                            ; 005fea88
    CALL dword ptr [0x00684eec]         ; 005fea89 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 005fea8f
    ADD ESP,0x4                         ; 005fea94
    POP EBP                             ; 005fea97
    POP EDI                             ; 005fea98
    POP ESI                             ; 005fea99
    POP EBX                             ; 005fea9a
    RET                                 ; 005fea9b
    MOV EAX,dword ptr [EBX + 0x8]       ; 005fea9c
        ;   Label: LAB_005fea9c
    CMP dword ptr [EAX + 0x8],0x0       ; 005fea9f
    JNZ 0x005feaae                      ; 005feaa3
        ;   XREF to: 005feaae (CONDITIONAL_JUMP)  ; LAB_005feaae
    PUSH EBX                            ; 005feaa5
    CALL 0x006027e0                     ; 005feaa6
        ;   XREF to: 006027e0 (UNCONDITIONAL_CALL)  ; CAVE_cave_006027e0
    ADD ESP,0x4                         ; 005feaab
    MOV ECX,dword ptr [EBX + 0x4]       ; 005feaae
        ;   Label: LAB_005feaae
    TEST ECX,ECX                        ; 005feab1
    JNZ 0x005feadb                      ; 005feab3
        ;   XREF to: 005feadb (CONDITIONAL_JUMP)  ; LAB_005feadb
    MOV dword ptr [EBX + 0x4],0x1       ; 005feab5
    MOV EAX,dword ptr [EBX + 0x8]       ; 005feabc
    MOV ECX,dword ptr [EBX + 0x14]      ; 005feabf
    MOV EAX,dword ptr [EAX + 0x8]       ; 005feac2
    ADD EAX,ECX                         ; 005feac5
    DEC EAX                             ; 005feac7
    MOV CL,byte ptr [EBX + 0xc]         ; 005feac8
    MOV dword ptr [EBX],EAX             ; 005feacb
    OR CL,0x4                           ; 005feacd
    MOV EAX,dword ptr [EBX]             ; 005fead0
    MOV DL,byte ptr [ESP + 0x14]        ; 005fead2
    MOV byte ptr [EBX + 0xc],CL         ; 005fead6
    JMP 0x005feb09                      ; 005fead9
        ;   XREF to: 005feb09 (UNCONDITIONAL_JUMP)  ; LAB_005feb09
    MOV EDX,dword ptr [EBX + 0x8]       ; 005feadb
        ;   Label: LAB_005feadb
    MOV EAX,dword ptr [EBX]             ; 005feade
    CMP EAX,dword ptr [EDX + 0x8]       ; 005feae0
    JZ 0x005fea85                       ; 005feae3
        ;   XREF to: 005fea85 (CONDITIONAL_JUMP)  ; LAB_005fea85
    MOV EAX,dword ptr [EBX]             ; 005feae5
    LEA EBP,[ECX + 0x1]                 ; 005feae7
    DEC EAX                             ; 005feaea
    MOV dword ptr [EBX + 0x4],EBP       ; 005feaeb
    MOV dword ptr [EBX],EAX             ; 005feaee
    MOV AL,byte ptr [EAX]               ; 005feaf0
    MOV EDX,dword ptr [ESP + 0x14]      ; 005feaf2
    AND EAX,0xff                        ; 005feaf6
    CMP EAX,EDX                         ; 005feafb
    JZ 0x005feb03                       ; 005feafd
        ;   XREF to: 005feb03 (CONDITIONAL_JUMP)  ; LAB_005feb03
    OR byte ptr [EBX + 0xc],0x4         ; 005feaff
    MOV EAX,dword ptr [EBX]             ; 005feb03
        ;   Label: LAB_005feb03
    MOV DL,byte ptr [ESP + 0x14]        ; 005feb05
    MOV byte ptr [EAX],DL               ; 005feb09
        ;   Label: LAB_005feb09
    MOV CH,byte ptr [EBX + 0xc]         ; 005feb0b
    MOV ESI,dword ptr [EBX + 0x10]      ; 005feb0e
    AND CH,0xef                         ; 005feb11
    PUSH ESI                            ; 005feb14
    MOV byte ptr [EBX + 0xc],CH         ; 005feb15
    CALL dword ptr [0x00684eec]         ; 005feb18 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 005feb1e
    XOR EAX,EAX                         ; 005feb21
    MOV AL,byte ptr [ESP + 0x14]        ; 005feb23
    POP EBP                             ; 005feb27
    POP EDI                             ; 005feb28
    POP ESI                             ; 005feb29
    POP EBX                             ; 005feb2a
    RET                                 ; 005feb2b

