; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_004fb530(CDemonMission *param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_mission.cpp_CDemonMission_writeFile_FUN_004fbce0
;   crt_stdio.c_fclose_FUN_005b89c0
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb530
        ;   Label: core_mission.cpp_FUN_004fb530
    PUSH EDI                            ; 004fb531
    PUSH 0x5de08d                       ; 004fb532
    MOV EDX,dword ptr [ESP + 0x14]      ; 004fb537
    PUSH EDX                            ; 004fb53b
    PUSH 0x5de090                       ; 004fb53c
    CALL engine_dosio.cpp_FUN_00460c70  ; 004fb541
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004fb546
    MOV EBX,EAX                         ; 004fb549
    TEST EAX,EAX                        ; 004fb54b
    JZ 0x004fb569                       ; 004fb54d
        ;   XREF to: 004fb569 (CONDITIONAL_JUMP)  ; LAB_004fb569
    PUSH EBX                            ; 004fb54f
        ;   Label: LAB_004fb54f
    MOV EDI,dword ptr [ESP + 0x10]      ; 004fb550
    PUSH EDI                            ; 004fb554
    CALL core_mission.cpp_CDemonMission_writeFile_FUN_004fbce0 ; 004fb555
        ;   XREF to: 004fbce0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_writeFile_FUN_004fbce0(CDemonMission * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004fb55a
    PUSH EBX                            ; 004fb55d
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004fb55e
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004fb563
    POP EDI                             ; 004fb566
    POP EBX                             ; 004fb567
    RET                                 ; 004fb568
    PUSH ESI                            ; 004fb569
        ;   Label: LAB_004fb569
    MOV ECX,0x5de096                    ; 004fb56a
    MOV ESI,0xba                        ; 004fb56f
    PUSH 0x5de0aa                       ; 004fb574
    MOV dword ptr [0x01d046a0],ECX      ; 004fb579 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004fb57f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004fb585
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004fb58a
    POP ESI                             ; 004fb58d
    JMP 0x004fb54f                      ; 004fb58e
        ;   XREF to: 004fb54f (UNCONDITIONAL_JUMP)  ; LAB_004fb54f

