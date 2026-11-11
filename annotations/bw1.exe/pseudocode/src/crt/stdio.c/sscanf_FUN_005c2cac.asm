; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_sscanf_FUN_005c2cac(char *str,char *format)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[25]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a7323
;   core_event.cpp_FUN_004a1d00 at 004a1fb9
;   core_event.cpp_parseIntOrCounter_FUN_004a1330 at 004a1340
;   core_event.cpp_parseVectorLocation_FUN_004a14a0 at 004a14dd
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0 at 004bd614
;   core_fldnotes.cpp_STextView_handleTag_FUN_004bb6f0 at 004bb809
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_0051bcc0 at 0051bd44
;   core_script.cpp_CScript_startDialogLine_FUN_0054aa60 at 0054aad9
;   core_script.cpp_CScript_step_FUN_00544460 at 00545c2c
;   core_script.cpp_parseBodyPartMask_FUN_00543610 at 00543663
;   ... and 15 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c2c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2cac
        ;   Label: crt_stdio.c_sscanf_FUN_005c2cac
    SUB ESP,0x4                         ; 005c2cad
    LEA EAX,[ESP + 0x14]                ; 005c2cb0
    MOV dword ptr [ESP],EAX             ; 005c2cb4
    MOV EAX,ESP                         ; 005c2cb7
    PUSH EAX                            ; 005c2cb9
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c2cba
    PUSH EDX                            ; 005c2cbe
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c2cbf
    PUSH EBX                            ; 005c2cc3
    CALL crt_unknown.c_FUN_005c2c70     ; 005c2cc4
        ;   XREF to: 005c2c70 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2c70()
    ADD ESP,0xc                         ; 005c2cc9
    ADD ESP,0x4                         ; 005c2ccc
    POP EBX                             ; 005c2ccf
    RET                                 ; 005c2cd0

