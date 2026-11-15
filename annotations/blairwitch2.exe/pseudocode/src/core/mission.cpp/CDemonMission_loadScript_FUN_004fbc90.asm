; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_004fbc90(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_startMission_FUN_004fce00 at 004fceca
;
; Referenced Globals:
;   undefined4 DAT_005de46d
;   CScript* g_CScriptPtr = 01e65cd0
;
; Called Functions:
;   core_script.cpp_CScript_loadScript_FUN_00521cf0
;   crt_file.c_makepath_FUN_005b9f4c
;
; *****************************************************************************

section .text

    SUB ESP,0x104                       ; 004fbc90
        ;   Label: core_mission.cpp_CDemonMission_loadScript_FUN_004fbc90
    MOV EAX,dword ptr [ESP + 0x108]     ; 004fbc96
    PUSH 0x5de46d                       ; 004fbc9d | DAT_005de46d
    ADD EAX,0x1014                      ; 004fbca2
    PUSH EAX                            ; 004fbca7
    PUSH 0x0                            ; 004fbca8
    PUSH 0x0                            ; 004fbcaa
    LEA EAX,[ESP + 0x10]                ; 004fbcac
    PUSH EAX                            ; 004fbcb0
    CALL crt_file.c_makepath_FUN_005b9f4c ; 004fbcb1
        ;   XREF to: 005b9f4c (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005b9f4c(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004fbcb6
    MOV EAX,ESP                         ; 004fbcb9
    PUSH EAX                            ; 004fbcbb
    MOV EDX,dword ptr [0x0061b460]      ; 004fbcbc | g_CScriptPtr
    PUSH EDX                            ; 004fbcc2
    CALL core_script.cpp_CScript_loadScript_FUN_00521cf0 ; 004fbcc3
        ;   XREF to: 00521cf0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_loadScript_FUN_00521cf0(CScript * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004fbcc8
    ADD ESP,0x104                       ; 004fbccb
    RET                                 ; 004fbcd1

