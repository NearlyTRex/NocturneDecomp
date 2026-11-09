; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_sscanf_FUN_005a5b9c(char *str,char *format)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[25]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_00491f40 at 00492193
;   core_event.cpp_FUN_0048c2e0 at 0048c599
;   core_event.cpp_parseIntOrCounter_FUN_0048b910 at 0048b920
;   core_event.cpp_parseVectorLocation_FUN_0048ba80 at 0048babd
;   core_fldnotes.cpp_FUN_004a9330 at 004a9449
;   core_fldnotes.cpp_FUN_004aa810 at 004ab30c
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004f7490 at 004f7514
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052b313
;   core_script.cpp_FUN_00528c20 at 00528c73
;   core_script.cpp_FUN_00530150 at 005301c9
;   ... and 15 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a5b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5b9c
        ;   Label: crt_stdio.c_sscanf_FUN_005a5b9c
    SUB ESP,0x4                         ; 005a5b9d
    LEA EAX,[ESP + 0x14]                ; 005a5ba0
    MOV dword ptr [ESP],EAX             ; 005a5ba4
    MOV EAX,ESP                         ; 005a5ba7
    PUSH EAX                            ; 005a5ba9
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a5baa
    PUSH EDX                            ; 005a5bae
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a5baf
    PUSH EBX                            ; 005a5bb3
    CALL crt_unknown.c_FUN_005a5b60     ; 005a5bb4
        ;   XREF to: 005a5b60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5b60()
    ADD ESP,0xc                         ; 005a5bb9
    ADD ESP,0x4                         ; 005a5bbc
    POP EBX                             ; 005a5bbf
    RET                                 ; 005a5bc0

