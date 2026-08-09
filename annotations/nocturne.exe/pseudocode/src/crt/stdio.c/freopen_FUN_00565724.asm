; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl crt_stdio_c_freopen_FUN_00565724(char *filename,char *mode,_FILE *stream)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   mode
; _FILE *          Stack[0xc]:4   stream
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004c85f0 at 004c86a8
;
; Referenced Globals:
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4 = 005671e4
;   undefined4 DAT_005c1d58
;
; Called Functions:
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_unknown.c_FUN_005656a4
;   crt_unknown.c_OpenFileAndInitialize_FUN_0056551c
;   crt_unknown.c_OpenModeStringParser_FUN_005653e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565724
        ;   Label: crt_stdio.c_freopen_FUN_00565724
    PUSH ESI                            ; 00565725
    PUSH EDI                            ; 00565726
    PUSH EBP                            ; 00565727
    SUB ESP,0x4                         ; 00565728
    MOV ESI,dword ptr [ESP + 0x20]      ; 0056572b
    MOV EAX,ESP                         ; 0056572f
    PUSH EAX                            ; 00565731
    MOV EDX,dword ptr [ESP + 0x20]      ; 00565732
    PUSH EDX                            ; 00565736
    CALL crt_unknown.c_OpenModeStringParser_FUN_005653e0 ; 00565737
        ;   XREF to: 005653e0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_OpenModeStringParser_FUN_005653e0(char * mode_string, char * output_flags)
    ADD ESP,0x8                         ; 0056573c
    MOV EDI,EAX                         ; 0056573f
    TEST EAX,EAX                        ; 00565741
    JZ 0x005657ae                       ; 00565743
        ;   XREF to: 005657ae (CONDITIONAL_JUMP)  ; LAB_005657ae
    MOV EBX,dword ptr [ESI + 0x10]      ; 00565745
    PUSH EBX                            ; 00565748
    CALL dword ptr [0x005c1ac0]         ; 00565749 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0
    MOV ECX,dword ptr [0x005c1d58]      ; 0056574f | DAT_005c1d58
    ADD ESP,0x4                         ; 00565755
    TEST ECX,ECX                        ; 00565758
    JZ 0x00565766                       ; 0056575a
        ;   XREF to: 00565766 (CONDITIONAL_JUMP)  ; LAB_00565766
    PUSH EBX                            ; 0056575c
    CALL dword ptr [0x005c1d58]         ; 0056575d | DAT_005c1d58
    ADD ESP,0x4                         ; 00565763
    PUSH ESI                            ; 00565766
        ;   Label: LAB_00565766
    CALL crt_unknown.c_FUN_005656a4     ; 00565767
        ;   XREF to: 005656a4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005656a4()
    ADD ESP,0x4                         ; 0056576c
    MOV ESI,EAX                         ; 0056576f
    TEST EAX,EAX                        ; 00565771
    JZ 0x005657a2                       ; 00565773
        ;   XREF to: 005657a2 (CONDITIONAL_JUMP)  ; LAB_005657a2
    MOV ESI,dword ptr [EAX + 0xc]       ; 00565775
    AND ESI,0x4000                      ; 00565778
    PUSH EAX                            ; 0056577e
    MOV dword ptr [EAX + 0xc],ESI       ; 0056577f
    PUSH 0x0                            ; 00565782
    MOV EBP,dword ptr [ESP + 0x8]       ; 00565784
    PUSH EBP                            ; 00565788
    MOV ESI,dword ptr [ESP + 0x28]      ; 00565789
    XOR EAX,EAX                         ; 0056578d
    PUSH EDI                            ; 0056578f
    MOV AL,byte ptr [ESI]               ; 00565790
    PUSH EAX                            ; 00565792
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00565793
    PUSH EAX                            ; 00565797
    CALL crt_unknown.c_OpenFileAndInitialize_FUN_0056551c ; 00565798
        ;   XREF to: 0056551c (UNCONDITIONAL_CALL)  ; _FILE * crt_unknown.c_OpenFileAndInitialize_FUN_0056551c(char * filename, char mode_char, int parsed_mode_flags, int stage1_result, ...)
    ADD ESP,0x18                        ; 0056579d
    MOV ESI,EAX                         ; 005657a0
    PUSH EBX                            ; 005657a2
        ;   Label: LAB_005657a2
    CALL dword ptr [0x005c1ac4]         ; 005657a3 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 005657a9
    MOV EAX,ESI                         ; 005657ac
    ADD ESP,0x4                         ; 005657ae
        ;   Label: LAB_005657ae
    POP EBP                             ; 005657b1
    POP EDI                             ; 005657b2
    POP ESI                             ; 005657b3
    POP EBX                             ; 005657b4
    RET                                 ; 005657b5

