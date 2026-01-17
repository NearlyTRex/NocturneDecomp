; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140(char * buffer)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 at 004b1c20
;
; Referenced Globals:
;   GetUserNameA* g_GetUserNameAFunc = 002119a4
;   GetComputerNameA* g_GetComputerNameAFunc = 00211e1c
;   TerminatedCString s_COMPUTERNAME_0065818c
;   TerminatedCString s_USERNAME_00658199
;
; Called Functions:
;   crt_env.c_getenv_FUN_006013f0
;   crt_memory.c_memset_FUN_005fde40
;   GetComputerNameA
;   GetUserNameA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f4140
        ;   Label: wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140
    PUSH ESI                            ; 005f4141
    PUSH EDI                            ; 005f4142
    SUB ESP,0x4                         ; 005f4143
    MOV EBX,dword ptr [ESP + 0x14]      ; 005f4146
    PUSH 0x200                          ; 005f414a
    PUSH 0x0                            ; 005f414f
    PUSH EBX                            ; 005f4151
    CALL crt_memory.c_memset_FUN_005fde40 ; 005f4152
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005f4157
    MOV EAX,ESP                         ; 005f415a
    MOV EDX,0x100                       ; 005f415c
    PUSH EAX                            ; 005f4161
    LEA EDI,[EBX + EDX*0x1]             ; 005f4162
    PUSH EDI                            ; 005f4165
    MOV dword ptr [ESP + 0x8],EDX       ; 005f4166
    CALL dword ptr CS:[0x611570]        ; 005f416a | g_GetComputerNameAFunc
    MOV EAX,ESP                         ; 005f4171
    PUSH EAX                            ; 005f4173
    MOV ECX,0x100                       ; 005f4174
    PUSH EBX                            ; 005f4179
    MOV dword ptr [ESP + 0x8],ECX       ; 005f417a
    CALL dword ptr CS:[0x611460]        ; 005f417e | g_GetUserNameAFunc
    CMP byte ptr [EBX + 0x100],0x0      ; 005f4185
    JZ 0x005f419a                       ; 005f418c
        ;   XREF to: 005f419a (CONDITIONAL_JUMP)  ; LAB_005f419a
    CMP byte ptr [EBX],0x0              ; 005f418e
        ;   Label: LAB_005f418e
    JZ 0x005f41d3                       ; 005f4191
        ;   XREF to: 005f41d3 (CONDITIONAL_JUMP)  ; LAB_005f41d3
    ADD ESP,0x4                         ; 005f4193
        ;   Label: LAB_005f4193
    POP EDI                             ; 005f4196
    POP ESI                             ; 005f4197
    POP EBX                             ; 005f4198
    RET                                 ; 005f4199
    PUSH 0x65818c                       ; 005f419a | = "COMPUTERNAME"
        ;   Label: LAB_005f419a
    CALL crt_env.c_getenv_FUN_006013f0  ; 005f419f
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    ADD ESP,0x4                         ; 005f41a4
    TEST EAX,EAX                        ; 005f41a7
    JZ 0x005f418e                       ; 005f41a9
        ;   XREF to: 005f418e (CONDITIONAL_JUMP)  ; LAB_005f418e
    MOV ESI,EAX                         ; 005f41ab
    PUSH EDI                            ; 005f41ad
    MOV AL,byte ptr [ESI]               ; 005f41ae
        ;   Label: LAB_005f41ae
    MOV byte ptr [EDI],AL               ; 005f41b0
    CMP AL,0x0                          ; 005f41b2
    JZ 0x005f41c6                       ; 005f41b4
        ;   XREF to: 005f41c6 (CONDITIONAL_JUMP)  ; LAB_005f41c6
    MOV AL,byte ptr [ESI + 0x1]         ; 005f41b6
    ADD ESI,0x2                         ; 005f41b9
    MOV byte ptr [EDI + 0x1],AL         ; 005f41bc
    ADD EDI,0x2                         ; 005f41bf
    CMP AL,0x0                          ; 005f41c2
    JNZ 0x005f41ae                      ; 005f41c4
        ;   XREF to: 005f41ae (CONDITIONAL_JUMP)  ; LAB_005f41ae
    POP EDI                             ; 005f41c6
        ;   Label: LAB_005f41c6
    CMP byte ptr [EBX],0x0              ; 005f41c7
    JZ 0x005f41d3                       ; 005f41ca
        ;   XREF to: 005f41d3 (CONDITIONAL_JUMP)  ; LAB_005f41d3
    ADD ESP,0x4                         ; 005f41cc
    POP EDI                             ; 005f41cf
    POP ESI                             ; 005f41d0
    POP EBX                             ; 005f41d1
    RET                                 ; 005f41d2
    PUSH 0x658199                       ; 005f41d3 | = "USERNAME"
        ;   Label: LAB_005f41d3
    CALL crt_env.c_getenv_FUN_006013f0  ; 005f41d8
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    ADD ESP,0x4                         ; 005f41dd
    TEST EAX,EAX                        ; 005f41e0
    JZ 0x005f4193                       ; 005f41e2
        ;   XREF to: 005f4193 (CONDITIONAL_JUMP)  ; LAB_005f4193
    MOV ESI,EAX                         ; 005f41e4
    MOV EDI,EBX                         ; 005f41e6
    PUSH EDI                            ; 005f41e8
    MOV AL,byte ptr [ESI]               ; 005f41e9
        ;   Label: LAB_005f41e9
    MOV byte ptr [EDI],AL               ; 005f41eb
    CMP AL,0x0                          ; 005f41ed
    JZ 0x005f4201                       ; 005f41ef
        ;   XREF to: 005f4201 (CONDITIONAL_JUMP)  ; LAB_005f4201
    MOV AL,byte ptr [ESI + 0x1]         ; 005f41f1
    ADD ESI,0x2                         ; 005f41f4
    MOV byte ptr [EDI + 0x1],AL         ; 005f41f7
    ADD EDI,0x2                         ; 005f41fa
    CMP AL,0x0                          ; 005f41fd
    JNZ 0x005f41e9                      ; 005f41ff
        ;   XREF to: 005f41e9 (CONDITIONAL_JUMP)  ; LAB_005f41e9
    POP EDI                             ; 005f4201
        ;   Label: LAB_005f4201
    ADD ESP,0x4                         ; 005f4202
    POP EDI                             ; 005f4205
    POP ESI                             ; 005f4206
    POP EBX                             ; 005f4207
    RET                                 ; 005f4208

