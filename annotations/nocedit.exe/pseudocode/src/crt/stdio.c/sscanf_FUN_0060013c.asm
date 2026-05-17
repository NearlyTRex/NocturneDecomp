; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_sscanf_FUN_0060013c(char *str,char *format,...)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined1 *     Stack[-0x8]:4  local_8
;
; XREF[47]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e6b5
;   core_event.cpp_CEventList_evaluateAtom_FUN_004ae140 at 004aff00
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ab061
;   core_event.cpp_parseIntOrCounter_FUN_004aa3c0 at 004aa3d0
;   core_event.cpp_parseVectorLocation_FUN_004aa530 at 004aa56d
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdbe7
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_00524660 at 005246e4
;   core_script.cpp_CCmdParm_getCharacterByContext_FUN_005627f0 at 0056280e
;   core_script.cpp_CScript_collectLabels_FUN_00566fa0 at 00566fdc
;   core_script.cpp_CScript_getDialogDuration_FUN_0055ff00 at 0055ff79
;   ... and 37 more
;
; Called Functions:
;   crt_stdio.c_vsscanf_FUN_00600100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060013c
        ;   Label: crt_stdio.c_sscanf_FUN_0060013c
    SUB ESP,0x4                         ; 0060013d
    LEA EAX,[ESP + 0x14]                ; 00600140
    MOV dword ptr [ESP],EAX             ; 00600144
    MOV EAX,ESP                         ; 00600147
    PUSH EAX                            ; 00600149
    MOV EDX,dword ptr [ESP + 0x14]      ; 0060014a
    PUSH EDX                            ; 0060014e
    MOV EBX,dword ptr [ESP + 0x14]      ; 0060014f
    PUSH EBX                            ; 00600153
    CALL crt_stdio.c_vsscanf_FUN_00600100 ; 00600154
        ;   XREF to: 00600100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsscanf_FUN_00600100(char * str, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00600159
    ADD ESP,0x4                         ; 0060015c
    POP EBX                             ; 0060015f
    RET                                 ; 00600160

