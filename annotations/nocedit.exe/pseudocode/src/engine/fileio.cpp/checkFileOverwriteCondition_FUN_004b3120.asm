; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_fileio_cpp_checkFileOverwriteCondition_FUN_004b3120(char *target_filename,char *source_directory)
;
; Parameters:
; char *           Stack[0x4]:4   target_filename
; char *           Stack[0x8]:4   source_directory
; Local Variables:
; char[500]        Stack[-0x3f4]:500  local_3f4
; char[500]        Stack[-0x200]:500  local_200
;
; Referenced Globals:
;   TerminatedCString s_You_currently_have_s_che_00626502
;   TerminatedCString s_A_writable_copy_of_s_exi_0062654c
;   SVersionControlSession g_VersionControlSession
;   undefined4 g_VersionControlSession.overwrite_own_choice
;   undefined4 g_VersionControlSession.overwrite_writeable_choice
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_dosio.c_getFileSizeWithFinder_FUN_00481960
;   engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3120
        ;   Label: engine_fileio.cpp_checkFileOverwriteCondition_FUN_004b3120
    PUSH ESI                            ; 004b3121
    PUSH EDI                            ; 004b3122
    SUB ESP,0x3e8                       ; 004b3123
    MOV ESI,dword ptr [ESP + 0x3f8]     ; 004b3129
    MOV EDI,dword ptr [ESP + 0x3fc]     ; 004b3130
    PUSH ESI                            ; 004b3137
    PUSH 0x0                            ; 004b3138
    CALL engine_dosio.c_getFileSizeWithFinder_FUN_00481960 ; 004b313a
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSizeWithFinder_FUN_00481960(char * directory, char * filename)
    ADD ESP,0x8                         ; 004b313f
    MOV EBX,EAX                         ; 004b3142
    TEST EAX,EAX                        ; 004b3144
    JL 0x004b3168                       ; 004b3146
        ;   XREF to: 004b3168 (CONDITIONAL_JUMP)  ; LAB_004b3168
    TEST EDI,EDI                        ; 004b3148
    JZ 0x004b3163                       ; 004b314a
        ;   XREF to: 004b3163 (CONDITIONAL_JUMP)  ; LAB_004b3163
    CMP byte ptr [EDI],0x0              ; 004b314c
    JZ 0x004b3163                       ; 004b314f
        ;   XREF to: 004b3163 (CONDITIONAL_JUMP)  ; LAB_004b3163
    PUSH 0x2d12bd0                      ; 004b3151 | g_VersionControlSession
    PUSH EDI                            ; 004b3156
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b3157
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b315c
    TEST EAX,EAX                        ; 004b315f
    JZ 0x004b3177                       ; 004b3161
        ;   XREF to: 004b3177 (CONDITIONAL_JUMP)  ; LAB_004b3177
    TEST BL,0x8                         ; 004b3163
        ;   Label: LAB_004b3163
    JZ 0x004b319e                       ; 004b3166
        ;   XREF to: 004b319e (CONDITIONAL_JUMP)  ; LAB_004b319e
    MOV EAX,0x1                         ; 004b3168
        ;   Label: LAB_004b3168
    ADD ESP,0x3e8                       ; 004b316d
        ;   Label: LAB_004b316d
    POP EDI                             ; 004b3173
    POP ESI                             ; 004b3174
    POP EBX                             ; 004b3175
    RET                                 ; 004b3176
    PUSH ESI                            ; 004b3177
        ;   Label: LAB_004b3177
    PUSH 0x626502                       ; 004b3178 | = "You currently have %s checked out.  R..."
    LEA EAX,[ESP + 0x8]                 ; 004b317d
    PUSH EAX                            ; 004b3181
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b3182
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b3187
    PUSH 0x2d12bf0                      ; 004b318a | g_VersionControlSession.overwrite_own_choice
    LEA EAX,[ESP + 0x4]                 ; 004b318f
    PUSH EAX                            ; 004b3193
    CALL engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90 ; 004b3194
        ;   XREF to: 004b2f90 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90(char * dialog_title, int * overwrite_state)
    ADD ESP,0x8                         ; 004b3199
    JMP 0x004b316d                      ; 004b319c
        ;   XREF to: 004b316d (UNCONDITIONAL_JUMP)  ; LAB_004b316d
    PUSH ESI                            ; 004b319e
        ;   Label: LAB_004b319e
    PUSH 0x62654c                       ; 004b319f | = "A writable copy of %s exists.  Replac..."
    LEA EAX,[ESP + 0x1fc]               ; 004b31a4
    PUSH EAX                            ; 004b31ab
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b31ac
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b31b1
    PUSH 0x2d12bf4                      ; 004b31b4 | g_VersionControlSession.overwrite_writeable_choice
    LEA EAX,[ESP + 0x1f8]               ; 004b31b9
    PUSH EAX                            ; 004b31c0
    CALL engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90 ; 004b31c1
        ;   XREF to: 004b2f90 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90(char * dialog_title, int * overwrite_state)
    ADD ESP,0x8                         ; 004b31c6
    ADD ESP,0x3e8                       ; 004b31c9
    POP EDI                             ; 004b31cf
    POP ESI                             ; 004b31d0
    POP EBX                             ; 004b31d1
    RET                                 ; 004b31d2

