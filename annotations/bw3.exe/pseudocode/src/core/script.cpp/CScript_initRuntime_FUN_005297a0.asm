; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_initRuntime_FUN_005297a0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined1       Stack[-0x6f]:1  local_6f
;
; XREF[3]:
;   core_mission.cpp_FUN_004f7590 at 004f7672
;   core_script.cpp_FUN_00529410 at 00529546
;   core_script.cpp_FUN_00529710 at 0052972f
;
; Referenced Globals:
;   undefined1 DAT_005cdf02
;   undefined1 DAT_005cdf03
;   undefined1 DAT_005cdf04
;   undefined1 DAT_005cdf05
;   TerminatedCString s_smill_wav_005cdf07
;   undefined1 DAT_005cdf11
;   undefined1 DAT_005cdf12
;   undefined1 DAT_005cdf13
;   undefined1 DAT_005cdf14
;   TerminatedCString s_town_wav_005cdf17
;   undefined1 DAT_005cdf20
;   undefined1 DAT_005cdf21
;   undefined1 DAT_005cdf22
;   undefined1 DAT_005cdf23
;   CGame* g_CGamePtr = 01d2130c
;   ... and 8 more
;
; Called Functions:
;   core_sound.cpp_CSound_playAmbientSound_FUN_00560940
;   crt_string.c__stricmp_FUN_005a3260
;   crt_string.c_splitpath_FUN_005a5128
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005297a0
        ;   Label: core_script.cpp_CScript_initRuntime_FUN_005297a0
    PUSH ESI                            ; 005297a1
    PUSH EDI                            ; 005297a2
    SUB ESP,0x64                        ; 005297a3
    MOV EBX,dword ptr [ESP + 0x74]      ; 005297a6
    MOV dword ptr [EBX + 0x44],0x0      ; 005297aa
    MOV byte ptr [EBX + 0x50],0x0       ; 005297b1
    MOV dword ptr [EBX + 0x48],0xbf800000 ; 005297b5
    MOV dword ptr [EBX + 0x4c],0xbf800000 ; 005297bc
    MOV dword ptr [EBX],0x0             ; 005297c3
    MOV EAX,[0x01d5ba14]                ; 005297c9 | DAT_01d5ba14
    MOV dword ptr [EBX + 0x4],0x0       ; 005297ce
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 005297d5
    MOV dword ptr [EBX + 0x18],0x0      ; 005297dc
    MOV dword ptr [EBX + 0xc],EAX       ; 005297e3
    MOV EAX,[0x005fe9dc]                ; 005297e6 | g_CGamePtr
    MOV dword ptr [EBX + 0x10],0x1      ; 005297eb
    MOV dword ptr [EAX + 0x250],0x1     ; 005297f2 | g_CGameInstance.field544_0x250
    XOR EDX,EDX                         ; 005297fc
    MOV dword ptr [EAX + 0x254],0x1     ; 005297fe | g_CGameInstance.field548_0x254
    PUSH EDX                            ; 00529808
    MOV dword ptr [EAX + 0x24c],EDX     ; 00529809 | g_CGameInstance.field540_0x24c
    LEA EAX,[ESP + 0x4]                 ; 0052980f
    PUSH EAX                            ; 00529813
    MOV dword ptr [0x01ed7010],EDX      ; 00529814 | DAT_01ed7010
    MOV dword ptr [EBX + 0x450],0xbf800000 ; 0052981a
    PUSH EDX                            ; 00529824
    MOV dword ptr [EBX + 0x454],0xffffffff ; 00529825
    MOV EAX,[0x00603b28]                ; 0052982f | g_CDemonSetPtr
    PUSH EDX                            ; 00529834
    ADD EAX,0x14d0f0                    ; 00529835
    MOV dword ptr [EBX + 0x458],EDX     ; 0052983a
    PUSH EAX                            ; 00529840
    MOV dword ptr [0x01ed7018],EDX      ; 00529841 | DAT_01ed7018
    MOV dword ptr [EBX + 0x14],EDX      ; 00529847
    CALL crt_string.c_splitpath_FUN_005a5128 ; 0052984a
        ;   XREF to: 005a5128 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005a5128(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0052984f
    MOV ESI,0x5cdf02                    ; 00529852 | DAT_005cdf02
    MOV EDI,ESP                         ; 00529857
    PUSH EDI                            ; 00529859
    SUB ECX,ECX                         ; 0052985a
    DEC ECX                             ; 0052985c
    MOV AL,0x0                          ; 0052985d
    SCASB.REPNE ES:EDI                  ; 0052985f
    DEC EDI                             ; 00529861
    MOV AL,byte ptr [ESI]               ; 00529862 | DAT_005cdf02 | DAT_005cdf04
        ;   Label: LAB_00529862
    MOV byte ptr [EDI],AL               ; 00529864
    CMP AL,0x0                          ; 00529866
    JZ 0x0052987a                       ; 00529868
        ;   XREF to: 0052987a (CONDITIONAL_JUMP)  ; LAB_0052987a
    MOV AL,byte ptr [ESI + 0x1]         ; 0052986a | DAT_005cdf03 | DAT_005cdf05
    ADD ESI,0x2                         ; 0052986d
    MOV byte ptr [EDI + 0x1],AL         ; 00529870
    ADD EDI,0x2                         ; 00529873
    CMP AL,0x0                          ; 00529876
    JNZ 0x00529862                      ; 00529878
        ;   XREF to: 00529862 (CONDITIONAL_JUMP)  ; LAB_00529862
    POP EDI                             ; 0052987a
        ;   Label: LAB_0052987a
    PUSH 0x5cdf07                       ; 0052987b | = "smill.wav"
    LEA EAX,[ESP + 0x4]                 ; 00529880
    PUSH EAX                            ; 00529884
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00529885
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052988a
    TEST EAX,EAX                        ; 0052988d
    JNZ 0x005298ba                      ; 0052988f
        ;   XREF to: 005298ba (CONDITIONAL_JUMP)  ; LAB_005298ba
    MOV ESI,0x5cdf11                    ; 00529891 | DAT_005cdf11
    MOV EDI,ESP                         ; 00529896
    PUSH EDI                            ; 00529898
    SUB ECX,ECX                         ; 00529899
    DEC ECX                             ; 0052989b
    MOV AL,0x0                          ; 0052989c
    SCASB.REPNE ES:EDI                  ; 0052989e
    DEC EDI                             ; 005298a0
    MOV AL,byte ptr [ESI]               ; 005298a1 | DAT_005cdf11 | DAT_005cdf13
        ;   Label: LAB_005298a1
    MOV byte ptr [EDI],AL               ; 005298a3
    CMP AL,0x0                          ; 005298a5
    JZ 0x005298b9                       ; 005298a7
        ;   XREF to: 005298b9 (CONDITIONAL_JUMP)  ; LAB_005298b9
    MOV AL,byte ptr [ESI + 0x1]         ; 005298a9 | DAT_005cdf12 | DAT_005cdf14
    ADD ESI,0x2                         ; 005298ac
    MOV byte ptr [EDI + 0x1],AL         ; 005298af
    ADD EDI,0x2                         ; 005298b2
    CMP AL,0x0                          ; 005298b5
    JNZ 0x005298a1                      ; 005298b7
        ;   XREF to: 005298a1 (CONDITIONAL_JUMP)  ; LAB_005298a1
    POP EDI                             ; 005298b9
        ;   Label: LAB_005298b9
    PUSH 0x5cdf17                       ; 005298ba | = "town.wav"
        ;   Label: LAB_005298ba
    LEA EAX,[ESP + 0x4]                 ; 005298bf
    PUSH EAX                            ; 005298c3
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005298c4
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005298c9
    TEST EAX,EAX                        ; 005298cc
    JZ 0x005298f0                       ; 005298ce
        ;   XREF to: 005298f0 (CONDITIONAL_JUMP)  ; LAB_005298f0
    MOV EAX,ESP                         ; 005298d0
        ;   Label: LAB_005298d0
    PUSH EAX                            ; 005298d2
    MOV ESI,dword ptr [0x006045f8]      ; 005298d3 | DAT_006045f8
    PUSH ESI                            ; 005298d9
    CALL core_sound.cpp_CSound_playAmbientSound_FUN_00560940 ; 005298da
        ;   XREF to: 00560940 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playAmbientSound_FUN_00560940(CSound * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 005298df
    MOV dword ptr [EBX + 0x1c],0x0      ; 005298e2
    ADD ESP,0x64                        ; 005298e9
    POP EDI                             ; 005298ec
    POP ESI                             ; 005298ed
    POP EBX                             ; 005298ee
    RET                                 ; 005298ef
    MOV ESI,0x5cdf20                    ; 005298f0 | DAT_005cdf20
        ;   Label: LAB_005298f0
    MOV EDI,ESP                         ; 005298f5
    PUSH EDI                            ; 005298f7
    SUB ECX,ECX                         ; 005298f8
    DEC ECX                             ; 005298fa
    MOV AL,0x0                          ; 005298fb
    SCASB.REPNE ES:EDI                  ; 005298fd
    DEC EDI                             ; 005298ff
    MOV AL,byte ptr [ESI]               ; 00529900 | DAT_005cdf20 | DAT_005cdf22
        ;   Label: LAB_00529900
    MOV byte ptr [EDI],AL               ; 00529902
    CMP AL,0x0                          ; 00529904
    JZ 0x00529918                       ; 00529906
        ;   XREF to: 00529918 (CONDITIONAL_JUMP)  ; LAB_00529918
    MOV AL,byte ptr [ESI + 0x1]         ; 00529908 | DAT_005cdf21 | DAT_005cdf23
    ADD ESI,0x2                         ; 0052990b
    MOV byte ptr [EDI + 0x1],AL         ; 0052990e
    ADD EDI,0x2                         ; 00529911
    CMP AL,0x0                          ; 00529914
    JNZ 0x00529900                      ; 00529916
        ;   XREF to: 00529900 (CONDITIONAL_JUMP)  ; LAB_00529900
    POP EDI                             ; 00529918
        ;   Label: LAB_00529918
    JMP 0x005298d0                      ; 00529919
        ;   XREF to: 005298d0 (UNCONDITIONAL_JUMP)  ; LAB_005298d0

