; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_stdlib.c_system_FUN_00602130(char * command)
;
; Parameters:
; char *           Stack[0x4]:4   command
; Local Variables:
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 at 0055a244
;
; Referenced Globals:
;   TerminatedCString s_ComSpec_00658fb0
;   TerminatedCString s_CMD_EXE_00658fb8
;   TerminatedCString s_CMD_00658fcc
;   TerminatedCString s_COMMAND_00658fd0
;   int g_ProcessSpawnEnabled = 0x1
;
; Called Functions:
;   crt_env.c_getenv_FUN_006013f0
;   crt_process.c_set_shell_execute_flag_FUN_00609c80
;   crt_process.c_spawnCommand_FUN_00609c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00602130
        ;   Label: crt_stdlib.c_system_FUN_00602130
    PUSH ESI                            ; 00602131
    PUSH EDI                            ; 00602132
    PUSH EBP                            ; 00602133
    MOV EBP,ESP                         ; 00602134
    SUB ESP,0x8                         ; 00602136
    PUSH 0x658fb0                       ; 00602139 | = "ComSpec" | s_ComSpec_00658fb0 = ComSpec
    CALL crt_env.c_getenv_FUN_006013f0  ; 0060213e | char * crt_env.c_getenv_FUN_006013f0(char * name)
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBP + 0x14]      ; 00602143
    ADD ESP,0x4                         ; 00602146
    MOV EBX,EAX                         ; 00602149
    TEST EDX,EDX                        ; 0060214b
    JNZ 0x00602156                      ; 0060214d | LAB_00602156
        ;   XREF to: 00602156 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0060214f
    JMP 0x006021ae                      ; 00602154 | LAB_006021ae
        ;   XREF to: 006021ae (UNCONDITIONAL_JUMP)
    MOV byte ptr [EBP + -0x4],0x1       ; 00602156
        ;   Label: LAB_00602156
    TEST EAX,EAX                        ; 0060215a
    JNZ 0x00602163                      ; 0060215c | LAB_00602163
        ;   XREF to: 00602163 (CONDITIONAL_JUMP)
    MOV EBX,0x658fb8                    ; 0060215e | = "CMD.EXE" | s_CMD_EXE_00658fb8 = CMD.EXE
    XOR ECX,ECX                         ; 00602163
        ;   Label: LAB_00602163
    PUSH ECX                            ; 00602165
    MOV EDI,dword ptr [EBP + 0x14]      ; 00602166
    XOR EAX,EAX                         ; 00602169
    PUSH EDI                            ; 0060216b
    MOV AL,byte ptr [EBP + -0x4]        ; 0060216c
    PUSH EAX                            ; 0060216f
    LEA EAX,[EBP + -0x8]                ; 00602170
    PUSH EAX                            ; 00602173
    MOV ESI,dword ptr [0x006853e0]      ; 00602174 | int g_ProcessSpawnEnabled
    MOV dword ptr [0x006853e0],ECX      ; 0060217a | int g_ProcessSpawnEnabled
    CALL crt_process.c_set_shell_execute_flag_FUN_00609c80 ; 00602180 | void crt_process.c_set_shell_execute_flag_FUN_00609c80(char * buffer)
        ;   XREF to: 00609c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00602185
    MOV DH,byte ptr [EBP + -0x4]        ; 00602188
    PUSH EAX                            ; 0060218b
    TEST DH,DH                          ; 0060218c
    JZ 0x00602197                       ; 0060218e | LAB_00602197
        ;   XREF to: 00602197 (CONDITIONAL_JUMP)
    MOV EAX,0x658fcc                    ; 00602190 | = "CMD" | s_CMD_00658fcc = CMD
    JMP 0x0060219c                      ; 00602195 | LAB_0060219c
        ;   XREF to: 0060219c (UNCONDITIONAL_JUMP)
    MOV EAX,0x658fd0                    ; 00602197 | = "COMMAND" | s_COMMAND_00658fd0 = COMMAND
        ;   Label: LAB_00602197
    PUSH EAX                            ; 0060219c | = "CMD" | s_CMD_00658fcc = CMD | s_COMMAND_00658fd0 = COMMAND
        ;   Label: LAB_0060219c
    PUSH EBX                            ; 0060219d | = "CMD.EXE" | s_CMD_EXE_00658fb8 = CMD.EXE
    PUSH 0x0                            ; 0060219e
    CALL crt_process.c_spawnCommand_FUN_00609c90 ; 006021a0 | int crt_process.c_spawnCommand_FUN_00609c90(int mode, char * cmdPath, char * cmdName, char * args, ...)
        ;   XREF to: 00609c90 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 006021a5
    MOV dword ptr [0x006853e0],ESI      ; 006021a8 | int g_ProcessSpawnEnabled
    MOV ESP,EBP                         ; 006021ae
        ;   Label: LAB_006021ae
    POP EBP                             ; 006021b0
    POP EDI                             ; 006021b1
    POP ESI                             ; 006021b2
    POP EBX                             ; 006021b3
    RET                                 ; 006021b4

