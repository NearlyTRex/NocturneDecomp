; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_0052bbd0(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)
;
; Parameters:
; LPGUID           Stack[0x4]:4   device_guid
; LPCSTR           Stack[0x8]:4   description
; LPCSTR           Stack[0xc]:4   module
; LPVOID           Stack[0x10]:4   context
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0052be40 at 0052be67
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005940b7
;   TerminatedCString s_create_DirectSound_objec_0059480f
;   TerminatedCString s_Querry_DirectSound_capab_00594829
;   undefined4 DAT_005bed40
;   undefined4 DAT_02dc83a8
;   undefined4 DAT_02dc83ac
;   undefined4 DAT_02dc83b0
;   undefined4 DAT_02dc83b4
;   undefined4 DAT_02dc83b8
;   undefined4 DAT_02dc83bc
;   undefined4 DAT_02dc83bd
;   undefined4 DAT_02dc83be
;   undefined4 DAT_02dc83bf
;   undefined4 DAT_02dc84bc
;   undefined4 DAT_02dc84c0
;
; Called Functions:
;   crt_dsound.c_DirectSoundCreate
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_logSoundError_FUN_00529980
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0052bbd0
        ;   Label: sound_snddx.cpp_directSoundEnumerationCallback_FUN_0052bbd0
    PUSH EDI                            ; 0052bbd1
    PUSH EBP                            ; 0052bbd2
    SUB ESP,0x384                       ; 0052bbd3
    MOV ESI,dword ptr [ESP + 0x394]     ; 0052bbd9
    CMP dword ptr [0x005bed40],0xc      ; 0052bbe0 | DAT_005bed40
    JL 0x0052bbf7                       ; 0052bbe7
        ;   XREF to: 0052bbf7 (CONDITIONAL_JUMP)  ; LAB_0052bbf7
    XOR EAX,EAX                         ; 0052bbe9
    ADD ESP,0x384                       ; 0052bbeb
    POP EBP                             ; 0052bbf1
    POP EDI                             ; 0052bbf2
    POP ESI                             ; 0052bbf3
    RET 0x10                            ; 0052bbf4
    XOR ECX,ECX                         ; 0052bbf7
        ;   Label: LAB_0052bbf7
    PUSH ECX                            ; 0052bbf9
    LEA EAX,[ESP + 0x384]               ; 0052bbfa
    PUSH EAX                            ; 0052bc01
    PUSH ESI                            ; 0052bc02
    MOV dword ptr [ESP + 0x38c],ECX     ; 0052bc03
    CALL crt_dsound.c_DirectSoundCreate ; 0052bc0a
        ;   XREF to: 00574c14 (UNCONDITIONAL_CALL)  ; HRESULT crt_dsound.c_DirectSoundCreate(LPGUID lp_guid, LPDIRECTSOUND * pp_ds, LPUNKNOWN p_unk_outer)
    TEST EAX,EAX                        ; 0052bc0f
    JNZ 0x0052bc2e                      ; 0052bc11
        ;   XREF to: 0052bc2e (CONDITIONAL_JUMP)  ; LAB_0052bc2e
    CMP dword ptr [ESP + 0x380],0x0     ; 0052bc13
    JNZ 0x0052bc73                      ; 0052bc1b
        ;   XREF to: 0052bc73 (CONDITIONAL_JUMP)  ; LAB_0052bc73
    MOV EAX,0x1                         ; 0052bc1d
        ;   Label: LAB_0052bc1d
    ADD ESP,0x384                       ; 0052bc22
    POP EBP                             ; 0052bc28
    POP EDI                             ; 0052bc29
    POP ESI                             ; 0052bc2a
    RET 0x10                            ; 0052bc2b
    PUSH EAX                            ; 0052bc2e
        ;   Label: LAB_0052bc2e
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052bc2f
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052bc34
    PUSH EAX                            ; 0052bc37
    PUSH 0x59480f                       ; 0052bc38 | = "create DirectSound object"
    PUSH 0x5940b7                       ; 0052bc3d | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0052bc42
    PUSH EAX                            ; 0052bc49
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052bc4a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052bc4f
    LEA EAX,[ESP + 0x190]               ; 0052bc52
    PUSH EAX                            ; 0052bc59
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 0052bc5a
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    MOV EAX,0x1                         ; 0052bc5f
    ADD ESP,0x4                         ; 0052bc64
    ADD ESP,0x384                       ; 0052bc67
    POP EBP                             ; 0052bc6d
    POP EDI                             ; 0052bc6e
    POP ESI                             ; 0052bc6f
    RET 0x10                            ; 0052bc70
    PUSH 0x60                           ; 0052bc73
        ;   Label: LAB_0052bc73
    PUSH EAX                            ; 0052bc75
    LEA EAX,[ESP + 0x328]               ; 0052bc76
    PUSH EAX                            ; 0052bc7d
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0052bc7e
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0052bc83
    MOV EDI,0x60                        ; 0052bc86
    MOV EAX,dword ptr [ESP + 0x380]     ; 0052bc8b
    MOV dword ptr [ESP + 0x320],EDI     ; 0052bc92
    MOV EDX,dword ptr [EAX]             ; 0052bc99
    LEA EAX,[ESP + 0x320]               ; 0052bc9b
    PUSH EAX                            ; 0052bca2
    MOV EBP,dword ptr [ESP + 0x384]     ; 0052bca3
    PUSH EBP                            ; 0052bcaa
    CALL dword ptr [EDX + 0x10]         ; 0052bcab
    TEST EAX,EAX                        ; 0052bcae
    JNZ 0x0052bdad                      ; 0052bcb0
        ;   XREF to: 0052bdad (CONDITIONAL_JUMP)  ; LAB_0052bdad
    MOV EAX,0x1                         ; 0052bcb6
    MOV EDI,EAX                         ; 0052bcbb
        ;   Label: LAB_0052bcbb
    MOV EAX,dword ptr [ESP + 0x380]     ; 0052bcbd
    TEST EAX,EAX                        ; 0052bcc4
    JZ 0x0052bcde                       ; 0052bcc6
        ;   XREF to: 0052bcde (CONDITIONAL_JUMP)  ; LAB_0052bcde
    MOV EDX,dword ptr [ESP + 0x380]     ; 0052bcc8
    MOV EAX,dword ptr [EAX]             ; 0052bccf
    PUSH EDX                            ; 0052bcd1
    CALL dword ptr [EAX + 0x8]          ; 0052bcd2
    XOR ECX,ECX                         ; 0052bcd5
    MOV dword ptr [ESP + 0x380],ECX     ; 0052bcd7
    TEST EDI,EDI                        ; 0052bcde
        ;   Label: LAB_0052bcde
    JZ 0x0052bc1d                       ; 0052bce0
        ;   XREF to: 0052bc1d (CONDITIONAL_JUMP)  ; LAB_0052bc1d
    MOV EDX,dword ptr [0x005bed40]      ; 0052bce6 | DAT_005bed40
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052bcec
    ADD EAX,EDX                         ; 0052bcf3
    SHL EAX,0x3                         ; 0052bcf5
    SUB EAX,EDX                         ; 0052bcf8
    SHL EAX,0x2                         ; 0052bcfa
    TEST ESI,ESI                        ; 0052bcfd
    JZ 0x0052bde0                       ; 0052bcff
        ;   XREF to: 0052bde0 (CONDITIONAL_JUMP)  ; LAB_0052bde0
    PUSH EBX                            ; 0052bd05
    XOR EBX,EBX                         ; 0052bd06
    LEA EDI,[EAX + 0x2dc84c8]           ; 0052bd08
    MOV dword ptr [EAX + 0x2dc84c4],EBX ; 0052bd0e | DAT_02dc83a8
    MOVSD ES:EDI,ESI                    ; 0052bd14 | DAT_02dc83ac
    MOVSD ES:EDI,ESI                    ; 0052bd15 | DAT_02dc83b0
    MOVSD ES:EDI,ESI                    ; 0052bd16 | DAT_02dc83b4
    MOVSD ES:EDI,ESI                    ; 0052bd17 | DAT_02dc83b8
    POP EBX                             ; 0052bd18
    TEST byte ptr [ESP + 0x324],0x20    ; 0052bd19
        ;   Label: LAB_0052bd19
    SETNZ AL                            ; 0052bd21
    MOV EDX,dword ptr [0x005bed40]      ; 0052bd24 | DAT_005bed40
    MOVZX ESI,AL                        ; 0052bd2a
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052bd2d
    ADD EAX,EDX                         ; 0052bd34
    SHL EAX,0x3                         ; 0052bd36
    SUB EAX,EDX                         ; 0052bd39
    MOV EDI,dword ptr [ESP + 0x338]     ; 0052bd3b
    MOV dword ptr [EAX*0x4 + 0x2dc85d8],ESI ; 0052bd42 | DAT_02dc84bc
    TEST EDI,EDI                        ; 0052bd49
    SETA AL                             ; 0052bd4b
    MOV ESI,EAX                         ; 0052bd4e
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052bd50
    ADD EAX,EDX                         ; 0052bd57
    SHL EAX,0x3                         ; 0052bd59
    SUB EAX,EDX                         ; 0052bd5c
    SHL EAX,0x2                         ; 0052bd5e
    AND ESI,0xff                        ; 0052bd61
    MOV dword ptr [EAX + 0x2dc85dc],ESI ; 0052bd67 | DAT_02dc84c0
    ADD EAX,0x2dc84c4                   ; 0052bd6d
    MOV ESI,dword ptr [ESP + 0x398]     ; 0052bd72
    LEA EDI,[EAX + 0x14]                ; 0052bd79
    PUSH EDI                            ; 0052bd7c
    MOV AL,byte ptr [ESI]               ; 0052bd7d
        ;   Label: LAB_0052bd7d
    MOV byte ptr [EDI],AL               ; 0052bd7f | DAT_02dc83bc | DAT_02dc83be
    CMP AL,0x0                          ; 0052bd81
    JZ 0x0052bd95                       ; 0052bd83
        ;   XREF to: 0052bd95 (CONDITIONAL_JUMP)  ; LAB_0052bd95
    MOV AL,byte ptr [ESI + 0x1]         ; 0052bd85
    ADD ESI,0x2                         ; 0052bd88
    MOV byte ptr [EDI + 0x1],AL         ; 0052bd8b | DAT_02dc83bd | DAT_02dc83bf
    ADD EDI,0x2                         ; 0052bd8e
    CMP AL,0x0                          ; 0052bd91
    JNZ 0x0052bd7d                      ; 0052bd93
        ;   XREF to: 0052bd7d (CONDITIONAL_JUMP)  ; LAB_0052bd7d
    POP EDI                             ; 0052bd95
        ;   Label: LAB_0052bd95
    MOV EAX,0x1                         ; 0052bd96
    ADD dword ptr [0x005bed40],EAX      ; 0052bd9b | DAT_005bed40
    ADD ESP,0x384                       ; 0052bda1
    POP EBP                             ; 0052bda7
    POP EDI                             ; 0052bda8
    POP ESI                             ; 0052bda9
    RET 0x10                            ; 0052bdaa
    PUSH EAX                            ; 0052bdad
        ;   Label: LAB_0052bdad
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052bdae
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052bdb3
    PUSH EAX                            ; 0052bdb6
    PUSH 0x594829                       ; 0052bdb7 | = "Querry DirectSound capabilities"
    PUSH 0x5940b7                       ; 0052bdbc | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0052bdc1
    PUSH EAX                            ; 0052bdc5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052bdc6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052bdcb
    MOV EAX,ESP                         ; 0052bdce
    PUSH EAX                            ; 0052bdd0
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 0052bdd1
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x4                         ; 0052bdd6
    XOR EAX,EAX                         ; 0052bdd9
    JMP 0x0052bcbb                      ; 0052bddb
        ;   XREF to: 0052bcbb (UNCONDITIONAL_JUMP)  ; LAB_0052bcbb
    MOV dword ptr [EAX + 0x2dc84c4],0x1 ; 0052bde0 | DAT_02dc83a8
        ;   Label: LAB_0052bde0
    JMP 0x0052bd19                      ; 0052bdea
        ;   XREF to: 0052bd19 (UNCONDITIONAL_JUMP)  ; LAB_0052bd19

