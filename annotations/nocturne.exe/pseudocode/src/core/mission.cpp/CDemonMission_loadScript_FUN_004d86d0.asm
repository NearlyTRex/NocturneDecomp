; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_004d86d0(CDemonMission *this_ptr,int is_loading)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   is_loading
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_startMission_FUN_004d9780 at 004d9836
;
; Referenced Globals:
;   TerminatedCString s_scr_00589a49
;   undefined4 DAT_005be220
;   CScript g_CScript_01e56da0
;
; Called Functions:
;   core_script.cpp_CScript_FUN_004febd0
;   crt_file.c_makepath_FUN_0056626c
;
; *****************************************************************************

section .text

    SUB ESP,0x104                       ; 004d86d0
        ;   Label: core_mission.cpp_CDemonMission_loadScript_FUN_004d86d0
    MOV EAX,dword ptr [ESP + 0x108]     ; 004d86d6
    PUSH 0x589a49                       ; 004d86dd | = "scr"
    ADD EAX,0x10                        ; 004d86e2
    PUSH EAX                            ; 004d86e5
    PUSH 0x0                            ; 004d86e6
    PUSH 0x0                            ; 004d86e8
    LEA EAX,[ESP + 0x10]                ; 004d86ea
    PUSH EAX                            ; 004d86ee
    CALL crt_file.c_makepath_FUN_0056626c ; 004d86ef
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_0056626c(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004d86f4
    MOV EDX,dword ptr [ESP + 0x10c]     ; 004d86f7
    PUSH EDX                            ; 004d86fe
    LEA EAX,[ESP + 0x4]                 ; 004d86ff
    PUSH EAX                            ; 004d8703
    MOV ECX,dword ptr [0x005be220]      ; 004d8704 | DAT_005be220
    PUSH ECX                            ; 004d870a | g_CScript_01e56da0
    CALL core_script.cpp_CScript_FUN_004febd0 ; 004d870b
        ;   XREF to: 004febd0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_FUN_004febd0(CScript * this_ptr, char * param_2, int param_3)
    ADD ESP,0xc                         ; 004d8710
    ADD ESP,0x104                       ; 004d8713
    RET                                 ; 004d8719

