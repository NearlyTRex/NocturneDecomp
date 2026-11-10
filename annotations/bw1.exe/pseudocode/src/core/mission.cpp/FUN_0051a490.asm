; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_0051a490(CDemonMission *param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_mission.cpp_CDemonMission_writeFile_FUN_0051ac40
;   crt_stdio.c_fclose_FUN_005c0d10
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a490
        ;   Label: core_mission.cpp_FUN_0051a490
    PUSH EDI                            ; 0051a491
    PUSH 0x5e90d0                       ; 0051a492
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051a497
    PUSH EDX                            ; 0051a49b
    PUSH 0x5e90d3                       ; 0051a49c
    CALL engine_dosio.cpp_FUN_00479180  ; 0051a4a1
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0051a4a6
    MOV EBX,EAX                         ; 0051a4a9
    TEST EAX,EAX                        ; 0051a4ab
    JZ 0x0051a4c9                       ; 0051a4ad
        ;   XREF to: 0051a4c9 (CONDITIONAL_JUMP)  ; LAB_0051a4c9
    PUSH EBX                            ; 0051a4af
        ;   Label: LAB_0051a4af
    MOV EDI,dword ptr [ESP + 0x10]      ; 0051a4b0
    PUSH EDI                            ; 0051a4b4
    CALL core_mission.cpp_CDemonMission_writeFile_FUN_0051ac40 ; 0051a4b5
        ;   XREF to: 0051ac40 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_writeFile_FUN_0051ac40(CDemonMission * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0051a4ba
    PUSH EBX                            ; 0051a4bd
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0051a4be
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0051a4c3
    POP EDI                             ; 0051a4c6
    POP EBX                             ; 0051a4c7
    RET                                 ; 0051a4c8
    PUSH ESI                            ; 0051a4c9
        ;   Label: LAB_0051a4c9
    MOV ECX,0x5e90d9                    ; 0051a4ca
    MOV ESI,0xbd                        ; 0051a4cf
    PUSH 0x5e90ed                       ; 0051a4d4
    MOV dword ptr [0x01d1d400],ECX      ; 0051a4d9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0051a4df | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051a4e5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051a4ea
    POP ESI                             ; 0051a4ed
    JMP 0x0051a4af                      ; 0051a4ee
        ;   XREF to: 0051a4af (UNCONDITIONAL_JUMP)  ; LAB_0051a4af

