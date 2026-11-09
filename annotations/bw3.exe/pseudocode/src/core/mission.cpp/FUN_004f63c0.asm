; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_004f63c0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[1]:
;   core_mission.cpp_FUN_004f7590 at 004f7664
;
; Referenced Globals:
;   undefined4 DAT_005c87b2
;   CScript* g_CScriptPtr = 01ed73e0
;   CScript g_CScriptInstance
;
; Called Functions:
;   core_script.cpp_FUN_00529410
;   crt_file.c_makepath_FUN_005a521c
;
; *****************************************************************************

section .text

    SUB ESP,0x104                       ; 004f63c0
        ;   Label: core_mission.cpp_FUN_004f63c0
    MOV EAX,dword ptr [ESP + 0x108]     ; 004f63c6
    PUSH 0x5c87b2                       ; 004f63cd | DAT_005c87b2
    ADD EAX,0x133c                      ; 004f63d2
    PUSH EAX                            ; 004f63d7
    PUSH 0x0                            ; 004f63d8
    PUSH 0x0                            ; 004f63da
    LEA EAX,[ESP + 0x10]                ; 004f63dc
    PUSH EAX                            ; 004f63e0
    CALL crt_file.c_makepath_FUN_005a521c ; 004f63e1
        ;   XREF to: 005a521c (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005a521c(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004f63e6
    MOV EAX,ESP                         ; 004f63e9
    PUSH EAX                            ; 004f63eb
    MOV EDX,dword ptr [0x006039e0]      ; 004f63ec | g_CScriptPtr
    PUSH EDX                            ; 004f63f2 | g_CScriptInstance
    CALL core_script.cpp_FUN_00529410   ; 004f63f3
        ;   XREF to: 00529410 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00529410()
    ADD ESP,0x8                         ; 004f63f8
    ADD ESP,0x104                       ; 004f63fb
    RET                                 ; 004f6401

