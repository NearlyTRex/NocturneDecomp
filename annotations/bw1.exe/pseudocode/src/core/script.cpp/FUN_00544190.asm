; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_FUN_00544190(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined1       Stack[-0x6f]:1  local_6f
;
; XREF[3]:
;   core_mission.cpp_FUN_0051bdc0 at 0051be98
;   core_script.cpp_FUN_00543e00 at 00543f36
;   core_script.cpp_FUN_00544100 at 0054411f
;
; Referenced Globals:
;   undefined1 DAT_005ee2a1
;   undefined1 DAT_005ee2a2
;   undefined1 DAT_005ee2a3
;   undefined1 DAT_005ee2a4
;   TerminatedCString s_smill_wav_005ee2a6
;   undefined1 DAT_005ee2b0
;   undefined1 DAT_005ee2b1
;   undefined1 DAT_005ee2b2
;   undefined1 DAT_005ee2b3
;   TerminatedCString s_town_wav_005ee2b6
;   undefined1 DAT_005ee2bf
;   undefined1 DAT_005ee2c0
;   undefined1 DAT_005ee2c1
;   undefined1 DAT_005ee2c2
;   CGame* g_CGamePtr = 01ccf390
;   ... and 8 more
;
; Called Functions:
;   core_sound.cpp_CSound_playAmbientSound_FUN_0057d810
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_string.c_splitpath_FUN_005c2238
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544190
        ;   Label: core_script.cpp_FUN_00544190
    PUSH ESI                            ; 00544191
    PUSH EDI                            ; 00544192
    SUB ESP,0x64                        ; 00544193
    MOV EBX,dword ptr [ESP + 0x74]      ; 00544196
    MOV dword ptr [EBX + 0x44],0x0      ; 0054419a
    MOV byte ptr [EBX + 0x50],0x0       ; 005441a1
    MOV dword ptr [EBX + 0x48],0xbf800000 ; 005441a5
    MOV dword ptr [EBX + 0x4c],0xbf800000 ; 005441ac
    MOV dword ptr [EBX],0x0             ; 005441b3
    MOV EAX,[0x01d06ab4]                ; 005441b9 | DAT_01d06ab4
    MOV dword ptr [EBX + 0x4],0x0       ; 005441be
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005441c5
    MOV dword ptr [EBX + 0x18],0x0      ; 005441cc
    MOV dword ptr [EBX + 0xc],EAX       ; 005441d3
    MOV EAX,[0x0061d95c]                ; 005441d6 | g_CGamePtr
    MOV dword ptr [EBX + 0x10],0x1      ; 005441db
    MOV dword ptr [EAX + 0x248],0x1     ; 005441e2 | g_CGameInstance.field584_0x248
    XOR EDX,EDX                         ; 005441ec
    MOV dword ptr [EAX + 0x24c],0x1     ; 005441ee | g_CGameInstance.field588_0x24c
    PUSH EDX                            ; 005441f8
    MOV dword ptr [EAX + 0x244],EDX     ; 005441f9 | g_CGameInstance.field580_0x244
    LEA EAX,[ESP + 0x4]                 ; 005441ff
    PUSH EAX                            ; 00544203
    MOV dword ptr [0x01e818b0],EDX      ; 00544204 | DAT_01e818b0
    MOV dword ptr [EBX + 0x450],0xbf800000 ; 0054420a
    PUSH EDX                            ; 00544214
    MOV dword ptr [EBX + 0x454],0xffffffff ; 00544215
    MOV EAX,[0x00622c18]                ; 0054421f | g_CDemonSetPtr
    PUSH EDX                            ; 00544224
    ADD EAX,0x14d0f0                    ; 00544225
    MOV dword ptr [EBX + 0x458],EDX     ; 0054422a
    PUSH EAX                            ; 00544230
    MOV dword ptr [0x01e818b8],EDX      ; 00544231 | DAT_01e818b8
    MOV dword ptr [EBX + 0x14],EDX      ; 00544237
    CALL crt_string.c_splitpath_FUN_005c2238 ; 0054423a
        ;   XREF to: 005c2238 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005c2238(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0054423f
    MOV ESI,0x5ee2a1                    ; 00544242 | DAT_005ee2a1
    MOV EDI,ESP                         ; 00544247
    PUSH EDI                            ; 00544249
    SUB ECX,ECX                         ; 0054424a
    DEC ECX                             ; 0054424c
    MOV AL,0x0                          ; 0054424d
    SCASB.REPNE ES:EDI                  ; 0054424f
    DEC EDI                             ; 00544251
    MOV AL,byte ptr [ESI]               ; 00544252 | DAT_005ee2a1 | DAT_005ee2a3
        ;   Label: LAB_00544252
    MOV byte ptr [EDI],AL               ; 00544254
    CMP AL,0x0                          ; 00544256
    JZ 0x0054426a                       ; 00544258
        ;   XREF to: 0054426a (CONDITIONAL_JUMP)  ; LAB_0054426a
    MOV AL,byte ptr [ESI + 0x1]         ; 0054425a | DAT_005ee2a2 | DAT_005ee2a4
    ADD ESI,0x2                         ; 0054425d
    MOV byte ptr [EDI + 0x1],AL         ; 00544260
    ADD EDI,0x2                         ; 00544263
    CMP AL,0x0                          ; 00544266
    JNZ 0x00544252                      ; 00544268
        ;   XREF to: 00544252 (CONDITIONAL_JUMP)  ; LAB_00544252
    POP EDI                             ; 0054426a
        ;   Label: LAB_0054426a
    PUSH 0x5ee2a6                       ; 0054426b | = "smill.wav"
    LEA EAX,[ESP + 0x4]                 ; 00544270
    PUSH EAX                            ; 00544274
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00544275
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054427a
    TEST EAX,EAX                        ; 0054427d
    JNZ 0x005442aa                      ; 0054427f
        ;   XREF to: 005442aa (CONDITIONAL_JUMP)  ; LAB_005442aa
    MOV ESI,0x5ee2b0                    ; 00544281 | DAT_005ee2b0
    MOV EDI,ESP                         ; 00544286
    PUSH EDI                            ; 00544288
    SUB ECX,ECX                         ; 00544289
    DEC ECX                             ; 0054428b
    MOV AL,0x0                          ; 0054428c
    SCASB.REPNE ES:EDI                  ; 0054428e
    DEC EDI                             ; 00544290
    MOV AL,byte ptr [ESI]               ; 00544291 | DAT_005ee2b0 | DAT_005ee2b2
        ;   Label: LAB_00544291
    MOV byte ptr [EDI],AL               ; 00544293
    CMP AL,0x0                          ; 00544295
    JZ 0x005442a9                       ; 00544297
        ;   XREF to: 005442a9 (CONDITIONAL_JUMP)  ; LAB_005442a9
    MOV AL,byte ptr [ESI + 0x1]         ; 00544299 | DAT_005ee2b1 | DAT_005ee2b3
    ADD ESI,0x2                         ; 0054429c
    MOV byte ptr [EDI + 0x1],AL         ; 0054429f
    ADD EDI,0x2                         ; 005442a2
    CMP AL,0x0                          ; 005442a5
    JNZ 0x00544291                      ; 005442a7
        ;   XREF to: 00544291 (CONDITIONAL_JUMP)  ; LAB_00544291
    POP EDI                             ; 005442a9
        ;   Label: LAB_005442a9
    PUSH 0x5ee2b6                       ; 005442aa | = "town.wav"
        ;   Label: LAB_005442aa
    LEA EAX,[ESP + 0x4]                 ; 005442af
    PUSH EAX                            ; 005442b3
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005442b4
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005442b9
    TEST EAX,EAX                        ; 005442bc
    JZ 0x005442e0                       ; 005442be
        ;   XREF to: 005442e0 (CONDITIONAL_JUMP)  ; LAB_005442e0
    MOV EAX,ESP                         ; 005442c0
        ;   Label: LAB_005442c0
    PUSH EAX                            ; 005442c2
    MOV ESI,dword ptr [0x006236b8]      ; 005442c3 | DAT_006236b8
    PUSH ESI                            ; 005442c9
    CALL core_sound.cpp_CSound_playAmbientSound_FUN_0057d810 ; 005442ca
        ;   XREF to: 0057d810 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playAmbientSound_FUN_0057d810(CSound * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 005442cf
    MOV dword ptr [EBX + 0x1c],0x0      ; 005442d2
    ADD ESP,0x64                        ; 005442d9
    POP EDI                             ; 005442dc
    POP ESI                             ; 005442dd
    POP EBX                             ; 005442de
    RET                                 ; 005442df
    MOV ESI,0x5ee2bf                    ; 005442e0 | DAT_005ee2bf
        ;   Label: LAB_005442e0
    MOV EDI,ESP                         ; 005442e5
    PUSH EDI                            ; 005442e7
    SUB ECX,ECX                         ; 005442e8
    DEC ECX                             ; 005442ea
    MOV AL,0x0                          ; 005442eb
    SCASB.REPNE ES:EDI                  ; 005442ed
    DEC EDI                             ; 005442ef
    MOV AL,byte ptr [ESI]               ; 005442f0 | DAT_005ee2bf | DAT_005ee2c1
        ;   Label: LAB_005442f0
    MOV byte ptr [EDI],AL               ; 005442f2
    CMP AL,0x0                          ; 005442f4
    JZ 0x00544308                       ; 005442f6
        ;   XREF to: 00544308 (CONDITIONAL_JUMP)  ; LAB_00544308
    MOV AL,byte ptr [ESI + 0x1]         ; 005442f8 | DAT_005ee2c0 | DAT_005ee2c2
    ADD ESI,0x2                         ; 005442fb
    MOV byte ptr [EDI + 0x1],AL         ; 005442fe
    ADD EDI,0x2                         ; 00544301
    CMP AL,0x0                          ; 00544304
    JNZ 0x005442f0                      ; 00544306
        ;   XREF to: 005442f0 (CONDITIONAL_JUMP)  ; LAB_005442f0
    POP EDI                             ; 00544308
        ;   Label: LAB_00544308
    JMP 0x005442c0                      ; 00544309
        ;   XREF to: 005442c0 (UNCONDITIONAL_JUMP)  ; LAB_005442c0

