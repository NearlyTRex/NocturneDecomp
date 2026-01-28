; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSkeleton * __cdecl core_skeleton_cpp_loadSkeleton_FUN_005a1df0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780 at 0059a792
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064f093
;   TerminatedCString s_Can_t_load_s_because_ske_0064f0a8
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_SkeletonPoolCount
;   CSkeleton[40] g_SkeletonPool
;   undefined4 DAT_038f4dac
;   undefined4 DAT_0391e5d8
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CSkeleton_load_FUN_00599b10
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1df0
        ;   Label: core_skeleton.cpp_loadSkeleton_FUN_005a1df0
    PUSH ESI                            ; 005a1df1
    PUSH EDI                            ; 005a1df2
    PUSH EBP                            ; 005a1df3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005a1df4
    MOV EDX,dword ptr [0x038cc8a0]      ; 005a1df8 | g_SkeletonPoolCount
    XOR EBX,EBX                         ; 005a1dfe
    TEST EDX,EDX                        ; 005a1e00
    JLE 0x005a1e3b                      ; 005a1e02
        ;   XREF to: 005a1e3b (CONDITIONAL_JUMP)  ; LAB_005a1e3b
    MOV ESI,0x38cc8a4                   ; 005a1e04 | g_SkeletonPool
    ADD ESI,0x28508                     ; 005a1e09
    IMUL EAX,EBX,0x2982c                ; 005a1e0f
        ;   Label: LAB_005a1e0f
    PUSH EDI                            ; 005a1e15
    MOV EBP,0x38cc8a4                   ; 005a1e16 | g_SkeletonPool
    PUSH ESI                            ; 005a1e1b | DAT_038f4dac | DAT_0391e5d8
    ADD EBP,EAX                         ; 005a1e1c
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005a1e1e
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a1e23
    TEST EAX,EAX                        ; 005a1e26
    JZ 0x005a1e95                       ; 005a1e28
        ;   XREF to: 005a1e95 (CONDITIONAL_JUMP)  ; LAB_005a1e95
    MOV ECX,dword ptr [0x038cc8a0]      ; 005a1e2a | g_SkeletonPoolCount
    INC EBX                             ; 005a1e30
    ADD ESI,0x2982c                     ; 005a1e31
    CMP EBX,ECX                         ; 005a1e37
    JL 0x005a1e0f                       ; 005a1e39
        ;   XREF to: 005a1e0f (CONDITIONAL_JUMP)  ; LAB_005a1e0f
    CMP dword ptr [0x038cc8a0],0x28     ; 005a1e3b | g_SkeletonPoolCount
        ;   Label: LAB_005a1e3b
    JL 0x005a1e6a                       ; 005a1e42
        ;   XREF to: 005a1e6a (CONDITIONAL_JUMP)  ; LAB_005a1e6a
    PUSH 0x28                           ; 005a1e44
    PUSH EDI                            ; 005a1e46
    MOV ESI,0x64f093                    ; 005a1e47 | = "..\\core\\skeleton.cpp"
    MOV EBP,0x1093                      ; 005a1e4c
    PUSH 0x64f0a8                       ; 005a1e51 | = "Can't load %s because skeleton manage..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005a1e56 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005a1e5c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a1e62
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 005a1e67
    MOV EAX,[0x038cc8a0]                ; 005a1e6a | g_SkeletonPoolCount
        ;   Label: LAB_005a1e6a
    IMUL EBX,EAX,0x2982c                ; 005a1e6f
    PUSH EDI                            ; 005a1e75
    ADD EBX,0x38cc8a4                   ; 005a1e76 | g_SkeletonPool
    LEA EDX,[EAX + 0x1]                 ; 005a1e7c
    PUSH EBX                            ; 005a1e7f
    MOV dword ptr [0x038cc8a0],EDX      ; 005a1e80 | g_SkeletonPoolCount
    CALL core_skeleton.cpp_CSkeleton_load_FUN_00599b10 ; 005a1e86
        ;   XREF to: 00599b10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_load_FUN_00599b10(CSkeleton * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a1e8b
    MOV EAX,EBX                         ; 005a1e8e
    POP EBP                             ; 005a1e90
    POP EDI                             ; 005a1e91
    POP ESI                             ; 005a1e92
    POP EBX                             ; 005a1e93
    RET                                 ; 005a1e94
    MOV EAX,EBP                         ; 005a1e95 | g_SkeletonPool
        ;   Label: LAB_005a1e95
    POP EBP                             ; 005a1e97
    POP EDI                             ; 005a1e98
    POP ESI                             ; 005a1e99
    POP EBX                             ; 005a1e9a
    RET                                 ; 005a1e9b

