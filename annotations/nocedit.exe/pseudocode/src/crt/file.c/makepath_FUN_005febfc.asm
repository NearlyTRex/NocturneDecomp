; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_file_c_makepath_FUN_005febfc (char *path_buffer,char *drive,char *directory,char *filename,char *extension)
;
; Parameters:
; char *           Stack[0x4]:4   path_buffer
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   directory
; char *           Stack[0x10]:4   filename
; char *           Stack[0x14]:4   extension
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[23]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f5ef
;   core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50 at 0047cac7
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 0047976e
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047db3f
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bda9f
;   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 at 004bd82b
;   core_mission.cpp_CDemonMission_FUN_005235b0 at 005235cf
;   core_msnedit.cpp_CDemonMission_FUN_0053d190 at 0053d1dd
;   core_script.cpp_editParameterValue_FUN_00562920 at 00563546
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005988df
;   ... and 13 more
;
; Called Functions:
;   crt_file.c_normalize_path_separator_FUN_005febe0
;   crt_locale.c_mblen_FUN_00605a40
;   crt_locale.c_wchar_to_bytes_FUN_00605a20
;   crt_string.c_mb_get_last_char_FUN_00605aa0
;   crt_string.c_mbtowc_next_FUN_00605a70
;   crt_string.c_mbtowc_peek_FUN_006059e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005febfc
        ;   Label: crt_file.c_makepath_FUN_005febfc
    PUSH ESI                            ; 005febfd
    PUSH EDI                            ; 005febfe
    PUSH EBP                            ; 005febff
    SUB ESP,0x8                         ; 005fec00
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005fec03
    MOV EDX,dword ptr [ESP + 0x20]      ; 005fec07
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005fec0b
    XOR ECX,ECX                         ; 005fec0f
    MOV dword ptr [ESP + 0x4],EBX       ; 005fec11
    MOV dword ptr [ESP],ECX             ; 005fec15
    TEST EDX,EDX                        ; 005fec18
    JZ 0x005fec6a                       ; 005fec1a
        ;   XREF to: 005fec6a (CONDITIONAL_JUMP)  ; LAB_005fec6a
    MOV AH,byte ptr [EDX]               ; 005fec1c
    TEST AH,AH                          ; 005fec1e
    JZ 0x005fec6a                       ; 005fec20
        ;   XREF to: 005fec6a (CONDITIONAL_JUMP)  ; LAB_005fec6a
    CMP AH,0x5c                         ; 005fec22
    JNZ 0x005fec60                      ; 005fec25
        ;   XREF to: 005fec60 (CONDITIONAL_JUMP)  ; LAB_005fec60
    CMP AH,byte ptr [EDX + 0x1]         ; 005fec27
    JNZ 0x005fec60                      ; 005fec2a
        ;   XREF to: 005fec60 (CONDITIONAL_JUMP)  ; LAB_005fec60
    MOV ESI,EDX                         ; 005fec2c
    MOV EDI,EBX                         ; 005fec2e
    PUSH EDI                            ; 005fec30
    MOV AL,byte ptr [ESI]               ; 005fec31
        ;   Label: LAB_005fec31
    MOV byte ptr [EDI],AL               ; 005fec33
    CMP AL,0x0                          ; 005fec35
    JZ 0x005fec49                       ; 005fec37
        ;   XREF to: 005fec49 (CONDITIONAL_JUMP)  ; LAB_005fec49
    MOV AL,byte ptr [ESI + 0x1]         ; 005fec39
    ADD ESI,0x2                         ; 005fec3c
    MOV byte ptr [EDI + 0x1],AL         ; 005fec3f
    ADD EDI,0x2                         ; 005fec42
    CMP AL,0x0                          ; 005fec45
    JNZ 0x005fec31                      ; 005fec47
        ;   XREF to: 005fec31 (CONDITIONAL_JUMP)  ; LAB_005fec31
    POP EDI                             ; 005fec49
        ;   Label: LAB_005fec49
    MOV EDI,EDX                         ; 005fec4a
    PUSH ES                             ; 005fec4c
    MOV AX,DS                           ; 005fec4d
    MOV ES,AX                           ; 005fec4f
    SUB ECX,ECX                         ; 005fec51
    DEC ECX                             ; 005fec53
    XOR EAX,EAX                         ; 005fec54
    SCASB.REPNE ES:EDI                  ; 005fec56
    NOT ECX                             ; 005fec58
    DEC ECX                             ; 005fec5a
    POP ES                              ; 005fec5b
    ADD EBX,ECX                         ; 005fec5c
    JMP 0x005fec6a                      ; 005fec5e
        ;   XREF to: 005fec6a (UNCONDITIONAL_JUMP)  ; LAB_005fec6a
    INC EBX                             ; 005fec60
        ;   Label: LAB_005fec60
    MOV AL,byte ptr [EDX]               ; 005fec61
    MOV byte ptr [EBX + -0x1],AL        ; 005fec63
    MOV byte ptr [EBX],0x3a             ; 005fec66
    INC EBX                             ; 005fec69
    MOV ESI,dword ptr [ESP + 0x24]      ; 005fec6a
        ;   Label: LAB_005fec6a
    MOV byte ptr [EBX],0x0              ; 005fec6e
    TEST ESI,ESI                        ; 005fec71
    JZ 0x005fed01                       ; 005fec73
        ;   XREF to: 005fed01 (CONDITIONAL_JUMP)  ; LAB_005fed01
    CMP byte ptr [ESI],0x0              ; 005fec79
    JZ 0x005fed01                       ; 005fec7c
        ;   XREF to: 005fed01 (CONDITIONAL_JUMP)  ; LAB_005fed01
    MOV EAX,ESP                         ; 005fec82
        ;   Label: LAB_005fec82
    PUSH EAX                            ; 005fec84
    MOV EDI,dword ptr [ESP + 0x28]      ; 005fec85
    PUSH EDI                            ; 005fec89
    CALL crt_string.c_mbtowc_peek_FUN_006059e0 ; 005fec8a
        ;   XREF to: 006059e0 (UNCONDITIONAL_CALL)  ; wchar_t crt_string.c_mbtowc_peek_FUN_006059e0(char * str)
    ADD ESP,0x4                         ; 005fec8f
    PUSH EAX                            ; 005fec92
    CALL crt_file.c_normalize_path_separator_FUN_005febe0 ; 005fec93
        ;   XREF to: 005febe0 (UNCONDITIONAL_CALL)  ; wchar_t crt_file.c_normalize_path_separator_FUN_005febe0(wchar_t ch, wchar_t * preferred_separator)
    ADD ESP,0x8                         ; 005fec98
    PUSH EBX                            ; 005fec9b
    PUSH EAX                            ; 005fec9c
    CALL crt_locale.c_wchar_to_bytes_FUN_00605a20 ; 005fec9d
        ;   XREF to: 00605a20 (UNCONDITIONAL_CALL)  ; void crt_locale.c_wchar_to_bytes_FUN_00605a20(wchar_t character, char * output_buffer)
    ADD ESP,0x8                         ; 005feca2
    PUSH EBX                            ; 005feca5
    CALL crt_locale.c_mblen_FUN_00605a40 ; 005feca6
        ;   XREF to: 00605a40 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mblen_FUN_00605a40(char * mb_string)
    ADD ESP,0x4                         ; 005fecab
    PUSH EBX                            ; 005fecae
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 005fecaf
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 005fecb3
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    ADD ESP,0x4                         ; 005fecb8
    PUSH EDI                            ; 005fecbb
    MOV EBX,EAX                         ; 005fecbc
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 005fecbe
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    ADD ESP,0x4                         ; 005fecc3
    MOV DH,byte ptr [EAX]               ; 005fecc6
    MOV dword ptr [ESP + 0x24],EAX      ; 005fecc8
    TEST DH,DH                          ; 005feccc
    JNZ 0x005fec82                      ; 005fecce
        ;   XREF to: 005fec82 (CONDITIONAL_JUMP)  ; LAB_005fec82
    CMP dword ptr [ESP],0x0             ; 005fecd0
    JNZ 0x005fecdd                      ; 005fecd4
        ;   XREF to: 005fecdd (CONDITIONAL_JUMP)  ; LAB_005fecdd
    MOV dword ptr [ESP],0x5c            ; 005fecd6
    PUSH EBX                            ; 005fecdd
        ;   Label: LAB_005fecdd
    MOV ESI,dword ptr [ESP + 0x8]       ; 005fecde
    PUSH ESI                            ; 005fece2
    CALL crt_string.c_mb_get_last_char_FUN_00605aa0 ; 005fece3
        ;   XREF to: 00605aa0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mb_get_last_char_FUN_00605aa0(char * start, char * end)
    ADD ESP,0x8                         ; 005fece8
    MOV AL,byte ptr [EAX]               ; 005feceb
    MOV EDI,dword ptr [ESP]             ; 005feced
    AND EAX,0xff                        ; 005fecf0
    CMP EAX,EDI                         ; 005fecf5
    JNZ 0x005fecfc                      ; 005fecf7
        ;   XREF to: 005fecfc (CONDITIONAL_JUMP)  ; LAB_005fecfc
    DEC EBX                             ; 005fecf9
    JMP 0x005fed01                      ; 005fecfa
        ;   XREF to: 005fed01 (UNCONDITIONAL_JUMP)  ; LAB_005fed01
    MOV AL,byte ptr [ESP]               ; 005fecfc
        ;   Label: LAB_005fecfc
    MOV byte ptr [EBX],AL               ; 005fecff
    CMP dword ptr [ESP],0x0             ; 005fed01
        ;   Label: LAB_005fed01
    JNZ 0x005fed0e                      ; 005fed05
        ;   XREF to: 005fed0e (CONDITIONAL_JUMP)  ; LAB_005fed0e
    MOV dword ptr [ESP],0x5c            ; 005fed07
    MOV ECX,dword ptr [ESP + 0x28]      ; 005fed0e
        ;   Label: LAB_005fed0e
    LEA ESI,[EBX + 0x1]                 ; 005fed12
    TEST ECX,ECX                        ; 005fed15
    JZ 0x005fed96                       ; 005fed17
        ;   XREF to: 005fed96 (CONDITIONAL_JUMP)  ; LAB_005fed96
    PUSH ECX                            ; 005fed1d
    CALL crt_string.c_mbtowc_peek_FUN_006059e0 ; 005fed1e
        ;   XREF to: 006059e0 (UNCONDITIONAL_CALL)  ; wchar_t crt_string.c_mbtowc_peek_FUN_006059e0(char * str)
    ADD ESP,0x4                         ; 005fed23
    MOV EDX,ESP                         ; 005fed26
    PUSH EDX                            ; 005fed28
    PUSH EAX                            ; 005fed29
    CALL crt_file.c_normalize_path_separator_FUN_005febe0 ; 005fed2a
        ;   XREF to: 005febe0 (UNCONDITIONAL_CALL)  ; wchar_t crt_file.c_normalize_path_separator_FUN_005febe0(wchar_t ch, wchar_t * preferred_separator)
    ADD ESP,0x8                         ; 005fed2f
    MOV EDX,dword ptr [ESP]             ; 005fed32
    CMP EAX,EDX                         ; 005fed35
    JZ 0x005fed43                       ; 005fed37
        ;   XREF to: 005fed43 (CONDITIONAL_JUMP)  ; LAB_005fed43
    XOR EAX,EAX                         ; 005fed39
    MOV AL,byte ptr [EBX]               ; 005fed3b
    CMP EAX,EDX                         ; 005fed3d
    JNZ 0x005fed43                      ; 005fed3f
        ;   XREF to: 005fed43 (CONDITIONAL_JUMP)  ; LAB_005fed43
    MOV EBX,ESI                         ; 005fed41
    MOV EAX,dword ptr [ESP + 0x28]      ; 005fed43
        ;   Label: LAB_005fed43
    CMP byte ptr [EAX],0x0              ; 005fed47
    JZ 0x005feda3                       ; 005fed4a
        ;   XREF to: 005feda3 (CONDITIONAL_JUMP)  ; LAB_005feda3
    MOV EAX,ESP                         ; 005fed4c
    PUSH EAX                            ; 005fed4e
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005fed4f
    PUSH ESI                            ; 005fed53
    CALL crt_string.c_mbtowc_peek_FUN_006059e0 ; 005fed54
        ;   XREF to: 006059e0 (UNCONDITIONAL_CALL)  ; wchar_t crt_string.c_mbtowc_peek_FUN_006059e0(char * str)
    ADD ESP,0x4                         ; 005fed59
    PUSH EAX                            ; 005fed5c
    CALL crt_file.c_normalize_path_separator_FUN_005febe0 ; 005fed5d
        ;   XREF to: 005febe0 (UNCONDITIONAL_CALL)  ; wchar_t crt_file.c_normalize_path_separator_FUN_005febe0(wchar_t ch, wchar_t * preferred_separator)
    ADD ESP,0x8                         ; 005fed62
    PUSH EBX                            ; 005fed65
    PUSH EAX                            ; 005fed66
    CALL crt_locale.c_wchar_to_bytes_FUN_00605a20 ; 005fed67
        ;   XREF to: 00605a20 (UNCONDITIONAL_CALL)  ; void crt_locale.c_wchar_to_bytes_FUN_00605a20(wchar_t character, char * output_buffer)
    ADD ESP,0x8                         ; 005fed6c
    PUSH EBX                            ; 005fed6f
    CALL crt_locale.c_mblen_FUN_00605a40 ; 005fed70
        ;   XREF to: 00605a40 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mblen_FUN_00605a40(char * mb_string)
    ADD ESP,0x4                         ; 005fed75
    PUSH EBX                            ; 005fed78
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 005fed79
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 005fed7d
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    ADD ESP,0x4                         ; 005fed82
    PUSH ESI                            ; 005fed85
    MOV EBX,EAX                         ; 005fed86
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 005fed88
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    ADD ESP,0x4                         ; 005fed8d
    MOV dword ptr [ESP + 0x28],EAX      ; 005fed90
    JMP 0x005fed43                      ; 005fed94
        ;   XREF to: 005fed43 (UNCONDITIONAL_JUMP)  ; LAB_005fed43
    XOR EAX,EAX                         ; 005fed96
        ;   Label: LAB_005fed96
    MOV EDI,dword ptr [ESP]             ; 005fed98
    MOV AL,byte ptr [EBX]               ; 005fed9b
    CMP EAX,EDI                         ; 005fed9d
    JNZ 0x005feda3                      ; 005fed9f
        ;   XREF to: 005feda3 (CONDITIONAL_JUMP)  ; LAB_005feda3
    MOV EBX,ESI                         ; 005feda1
    TEST EBP,EBP                        ; 005feda3
        ;   Label: LAB_005feda3
    JZ 0x005fedc5                       ; 005feda5
        ;   XREF to: 005fedc5 (CONDITIONAL_JUMP)  ; LAB_005fedc5
    MOV CH,byte ptr [EBP]               ; 005feda7
    TEST CH,CH                          ; 005fedaa
    JZ 0x005fedc5                       ; 005fedac
        ;   XREF to: 005fedc5 (CONDITIONAL_JUMP)  ; LAB_005fedc5
    CMP CH,0x2e                         ; 005fedae
    JZ 0x005fedb7                       ; 005fedb1
        ;   XREF to: 005fedb7 (CONDITIONAL_JUMP)  ; LAB_005fedb7
    MOV byte ptr [EBX],0x2e             ; 005fedb3
    INC EBX                             ; 005fedb6
    MOV AH,byte ptr [EBP]               ; 005fedb7
        ;   Label: LAB_005fedb7
    TEST AH,AH                          ; 005fedba
    JZ 0x005fedc5                       ; 005fedbc
        ;   XREF to: 005fedc5 (CONDITIONAL_JUMP)  ; LAB_005fedc5
    INC EBX                             ; 005fedbe
    INC EBP                             ; 005fedbf
    MOV byte ptr [EBX + -0x1],AH        ; 005fedc0
    JMP 0x005fedb7                      ; 005fedc3
        ;   XREF to: 005fedb7 (UNCONDITIONAL_JUMP)  ; LAB_005fedb7
    MOV byte ptr [EBX],0x0              ; 005fedc5
        ;   Label: LAB_005fedc5
    ADD ESP,0x8                         ; 005fedc8
    POP EBP                             ; 005fedcb
    POP EDI                             ; 005fedcc
    POP ESI                             ; 005fedcd
    POP EBX                             ; 005fedce
    RET                                 ; 005fedcf

