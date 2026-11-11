; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_sscanf_FUN_005ba8cc(char *str,char *format)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[25]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0 at 0048ea33
;   core_event.cpp_FUN_00489670 at 004898c1
;   core_event.cpp_parseIntOrCounter_FUN_00488cc0 at 00488cd0
;   core_event.cpp_parseVectorLocation_FUN_00488e30 at 00488e6d
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0 at 004a4c24
;   core_fldnotes.cpp_STextView_handleTag_FUN_004a2cc0 at 004a2dd9
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004fcd00 at 004fcd84
;   core_script.cpp_CScript_startDialogLine_FUN_00529750 at 005297c9
;   core_script.cpp_FUN_00522350 at 00523d76
;   core_script.cpp_parseBodyPartMask_FUN_00521500 at 00521550
;   ... and 15 more
;
; Called Functions:
;   crt_unknown.c_FUN_005ba890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba8cc
        ;   Label: crt_stdio.c_sscanf_FUN_005ba8cc
    SUB ESP,0x4                         ; 005ba8cd
    LEA EAX,[ESP + 0x14]                ; 005ba8d0
    MOV dword ptr [ESP],EAX             ; 005ba8d4
    MOV EAX,ESP                         ; 005ba8d7
    PUSH EAX                            ; 005ba8d9
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ba8da
    PUSH EDX                            ; 005ba8de
    MOV EBX,dword ptr [ESP + 0x14]      ; 005ba8df
    PUSH EBX                            ; 005ba8e3
    CALL crt_unknown.c_FUN_005ba890     ; 005ba8e4
        ;   XREF to: 005ba890 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba890()
    ADD ESP,0xc                         ; 005ba8e9
    ADD ESP,0x4                         ; 005ba8ec
    POP EBX                             ; 005ba8ef
    RET                                 ; 005ba8f0

