; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_ctype_c_toupper_FUN_005b8e40(int c)
;
; Parameters:
; int              Stack[0x4]:4   c
;
; XREF[15]:
;   core_event.cpp_FUN_00489670 at 00489824
;   core_fldnotes.cpp_FUN_004a41b0 at 004a4503
;   core_game.cpp_FUN_004b90d0 at 004b91f4
;   core_main.c_FUN_004e45e0 at 004e463c
;   core_texlist.cpp_CTextureList_load_FUN_005734b0 at 00573678
;   crt_unknown.c_FUN_005bbf9c at 005bbfac
;   crt_unknown.c_FUN_005c6580 at 005c65a1
;   engine_dosio.cpp_FUN_00460c70 at 00460caa
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004dfea0 at 004dfeab
;   engine_model.c_loadModelFile_FUN_00500720 at 005008cb
;   ... and 5 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b8e40
        ;   Label: crt_ctype.c_toupper_FUN_005b8e40
    CMP EAX,0x61                        ; 005b8e44
    JL 0x005b8e51                       ; 005b8e47
        ;   XREF to: 005b8e51 (CONDITIONAL_JUMP)  ; LAB_005b8e51
    CMP EAX,0x7a                        ; 005b8e49
    JG 0x005b8e51                       ; 005b8e4c
        ;   XREF to: 005b8e51 (CONDITIONAL_JUMP)  ; LAB_005b8e51
    SUB EAX,0x20                        ; 005b8e4e
    RET                                 ; 005b8e51
        ;   Label: LAB_005b8e51

