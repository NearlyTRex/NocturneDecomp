; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_save_FUN_004d7f80(CDemonMission *this_ptr,char *filename)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; Referenced Globals:
;   TerminatedCString s_wt_00589669
;   TerminatedCString s_world_0058966c
;   TerminatedCString s_core_mission_cpp_00589672
;   TerminatedCString s_CDemonMission_save_Unabl_00589686
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_mission.cpp_FUN_004d8720
;   crt_stdio.c_fclose_FUN_00563380
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7f80
        ;   Label: core_mission.cpp_CDemonMission_save_FUN_004d7f80
    PUSH EDI                            ; 004d7f81
    PUSH 0x589669                       ; 004d7f82 | = "wt"
    MOV EDX,dword ptr [ESP + 0x14]      ; 004d7f87
    PUSH EDX                            ; 004d7f8b
    PUSH 0x58966c                       ; 004d7f8c | = "world"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004d7f91
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004d7f96
    MOV EBX,EAX                         ; 004d7f99
    TEST EAX,EAX                        ; 004d7f9b
    JZ 0x004d7fb9                       ; 004d7f9d
        ;   XREF to: 004d7fb9 (CONDITIONAL_JUMP)  ; LAB_004d7fb9
    PUSH EBX                            ; 004d7f9f
        ;   Label: LAB_004d7f9f
    MOV EDI,dword ptr [ESP + 0x10]      ; 004d7fa0
    PUSH EDI                            ; 004d7fa4
    CALL core_mission.cpp_FUN_004d8720  ; 004d7fa5
        ;   XREF to: 004d8720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_FUN_004d8720(CDemonMission * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004d7faa
    PUSH EBX                            ; 004d7fad
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004d7fae
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004d7fb3
    POP EDI                             ; 004d7fb6
    POP EBX                             ; 004d7fb7
    RET                                 ; 004d7fb8
    PUSH ESI                            ; 004d7fb9
        ;   Label: LAB_004d7fb9
    MOV ECX,0x589672                    ; 004d7fba | = "..\\core\\mission.cpp"
    MOV ESI,0xb6                        ; 004d7fbf
    PUSH 0x589686                       ; 004d7fc4 | = "CDemonMission::save - Unable to open ..."
    MOV dword ptr [0x01cc4800],ECX      ; 004d7fc9 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004d7fcf | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d7fd5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d7fda
    POP ESI                             ; 004d7fdd
    JMP 0x004d7f9f                      ; 004d7fde
        ;   XREF to: 004d7f9f (UNCONDITIONAL_JUMP)  ; LAB_004d7f9f

