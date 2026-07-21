; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_ctype_c_toupper_FUN_00565e20(int param_1)
;
;
; XREF[11]:
;   FUN_004c8510 at 004c8567
;   FUN_00569f8c at 00569f9c
;   FUN_00573ca0 at 00573cc1
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047adec
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a0683
;   core_texlist.cpp_CTextureList_load_FUN_00544950 at 00544b18
;   engine_dosio.cpp_getFile_FUN_00456a60 at 00456a9a
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004c41d0 at 004c41db
;   engine_model.c_loadModelFile_FUN_004dcd10 at 004dcebd
;   engine_pod.cpp_findFilesByExtension_FUN_004f8b90 at 004f8bbd
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00565e20
        ;   Label: crt_ctype.c_toupper_FUN_00565e20
    CMP EAX,0x61                        ; 00565e24
    JL 0x00565e31                       ; 00565e27
        ;   XREF to: 00565e31 (CONDITIONAL_JUMP)  ; LAB_00565e31
    CMP EAX,0x7a                        ; 00565e29
    JG 0x00565e31                       ; 00565e2c
        ;   XREF to: 00565e31 (CONDITIONAL_JUMP)  ; LAB_00565e31
    SUB EAX,0x20                        ; 00565e2e
    RET                                 ; 00565e31
        ;   Label: LAB_00565e31

