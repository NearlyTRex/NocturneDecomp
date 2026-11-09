; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004dee60(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004df050 at 004df3e9
;
; Referenced Globals:
;   TerminatedCString s_engine_keyframe_c_005c66f5
;   TerminatedCString s_Bad_key_frame_005c670a
;   TerminatedCString s_engine_keyframe_c_005c6718
;   TerminatedCString s_Key_frame_vertex_mismatc_005c672d
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_model.c_FUN_004f8730
;   engine_model.c_FUN_004f89a0
;   engine_model.c_loadModelFile_FUN_004f7f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dee60
        ;   Label: engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004dee60
    PUSH ESI                            ; 004dee61
    PUSH EDI                            ; 004dee62
    PUSH EBP                            ; 004dee63
    SUB ESP,0x8                         ; 004dee64
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004dee67
    CMP dword ptr [EAX + 0x14],0x0      ; 004dee6b
    JZ 0x004defae                       ; 004dee6f
        ;   XREF to: 004defae (CONDITIONAL_JUMP)  ; LAB_004defae
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004dee75
        ;   Label: LAB_004dee75
    MOV ECX,dword ptr [EAX + 0x14]      ; 004dee79
    PUSH ECX                            ; 004dee7c
    CALL engine_model.c_FUN_004f8730    ; 004dee7d
        ;   XREF to: 004f8730 (UNCONDITIONAL_CALL)  ; int engine_model.c_FUN_004f8730(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 004dee82
    MOV EBP,EAX                         ; 004dee85
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004dee87
    MOV EAX,dword ptr [EAX + 0x14]      ; 004dee8b
    ADD EAX,EBP                         ; 004dee8e
    PUSH EAX                            ; 004dee90
    CALL engine_model.c_FUN_004f8730    ; 004dee91
        ;   XREF to: 004f8730 (UNCONDITIONAL_CALL)  ; int engine_model.c_FUN_004f8730(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 004dee96
    ADD EBP,EAX                         ; 004dee99
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004dee9b
    MOV EBX,dword ptr [EAX + 0x8]       ; 004dee9f
    XOR ESI,ESI                         ; 004deea2
    TEST EBX,EBX                        ; 004deea4
    JLE 0x004deed8                      ; 004deea6
        ;   XREF to: 004deed8 (CONDITIONAL_JUMP)  ; LAB_004deed8
    LEA EDI,[EAX + 0x18]                ; 004deea8
    MOV EBX,EAX                         ; 004deeab
    CMP dword ptr [EBX + 0x118],0x0     ; 004deead
        ;   Label: LAB_004deead
    JNZ 0x004deec6                      ; 004deeb4
        ;   XREF to: 004deec6 (CONDITIONAL_JUMP)  ; LAB_004deec6
    PUSH EBP                            ; 004deeb6
    PUSH EDI                            ; 004deeb7
    CALL engine_model.c_FUN_004f89a0    ; 004deeb8
        ;   XREF to: 004f89a0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_FUN_004f89a0(char * filename, int model_size)
    ADD ESP,0x8                         ; 004deebd
    MOV dword ptr [EBX + 0x118],EAX     ; 004deec0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004deec6
        ;   Label: LAB_004deec6
    ADD EBX,0x4                         ; 004deeca
    INC ESI                             ; 004deecd
    MOV EDX,dword ptr [EAX + 0x8]       ; 004deece
    ADD EDI,0x10                        ; 004deed1
    CMP ESI,EDX                         ; 004deed4
    JL 0x004deead                       ; 004deed6
        ;   XREF to: 004deead (CONDITIONAL_JUMP)  ; LAB_004deead
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004deed8
        ;   Label: LAB_004deed8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004deedc
    XOR EBX,EBX                         ; 004deee0
    MOV EBP,dword ptr [EBP + 0x14]      ; 004deee2
    MOV ECX,dword ptr [EAX + 0x8]       ; 004deee5
    ADD EBP,0x8                         ; 004deee8
    TEST ECX,ECX                        ; 004deeeb
    JLE 0x004def5f                      ; 004deeed
        ;   XREF to: 004def5f (CONDITIONAL_JUMP)  ; LAB_004def5f
    MOV ESI,EAX                         ; 004deeef
    MOV EDI,dword ptr [ESI + 0x118]     ; 004deef1
        ;   Label: LAB_004deef1
    MOV EAX,dword ptr [EDI + 0x8]       ; 004deef7
    ADD EDI,0x8                         ; 004deefa
    CMP EAX,0x2                         ; 004deefd
    JZ 0x004def25                       ; 004def00
        ;   XREF to: 004def25 (CONDITIONAL_JUMP)  ; LAB_004def25
    MOV EDX,0x5c66f5                    ; 004def02 | = "..\\engine\\keyframe.c"
    MOV ECX,0xfd                        ; 004def07
    PUSH 0x5c670a                       ; 004def0c | = "Bad key frame"
    MOV dword ptr [0x01d71de0],EDX      ; 004def11 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004def17 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004def1d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004def22
    MOV EDX,dword ptr [EDI + 0x8]       ; 004def25
        ;   Label: LAB_004def25
    CMP EDX,dword ptr [EBP + 0x8]       ; 004def28
    JZ 0x004def50                       ; 004def2b
        ;   XREF to: 004def50 (CONDITIONAL_JUMP)  ; LAB_004def50
    MOV ECX,0x5c6718                    ; 004def2d | = "..\\engine\\keyframe.c"
    MOV EDI,0xfe                        ; 004def32
    PUSH 0x5c672d                       ; 004def37 | = "Key frame vertex mismatch"
    MOV dword ptr [0x01d71de0],ECX      ; 004def3c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004def42 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004def48
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004def4d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004def50
        ;   Label: LAB_004def50
    INC EBX                             ; 004def54
    MOV EDX,dword ptr [EAX + 0x8]       ; 004def55
    ADD ESI,0x4                         ; 004def58
    CMP EBX,EDX                         ; 004def5b
    JL 0x004deef1                       ; 004def5d
        ;   XREF to: 004deef1 (CONDITIONAL_JUMP)  ; LAB_004deef1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004def5f
        ;   Label: LAB_004def5f
    MOV EAX,dword ptr [EAX + 0x14]      ; 004def63
    MOV dword ptr [ESP],EAX             ; 004def66
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004def69
    XOR ECX,ECX                         ; 004def6d
    MOV EBX,dword ptr [EAX + 0x8]       ; 004def6f
    MOV dword ptr [ESP + 0x4],ECX       ; 004def72
    TEST EBX,EBX                        ; 004def76
    JLE 0x004defa6                      ; 004def78
        ;   XREF to: 004defa6 (CONDITIONAL_JUMP)  ; LAB_004defa6
    MOV EBP,EAX                         ; 004def7a
    MOV EAX,dword ptr [ESP]             ; 004def7c
        ;   Label: LAB_004def7c
    MOV EBX,dword ptr [EBP + 0x118]     ; 004def7f
    MOV EAX,dword ptr [EAX + 0x4]       ; 004def85
    MOV ESI,dword ptr [EBX + 0x4]       ; 004def88
    CMP EAX,ESI                         ; 004def8b
    JNZ 0x004defc6                      ; 004def8d
        ;   XREF to: 004defc6 (CONDITIONAL_JUMP)  ; LAB_004defc6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004def8f
        ;   Label: LAB_004def8f
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004def93
    ADD EBP,0x4                         ; 004def97
    INC EAX                             ; 004def9a
    MOV ECX,dword ptr [EDX + 0x8]       ; 004def9b
    MOV dword ptr [ESP + 0x4],EAX       ; 004def9e
    CMP EAX,ECX                         ; 004defa2
    JL 0x004def7c                       ; 004defa4
        ;   XREF to: 004def7c (CONDITIONAL_JUMP)  ; LAB_004def7c
    ADD ESP,0x8                         ; 004defa6
        ;   Label: LAB_004defa6
    POP EBP                             ; 004defa9
    POP EDI                             ; 004defaa
    POP ESI                             ; 004defab
    POP EBX                             ; 004defac
    RET                                 ; 004defad
    ADD EAX,0x18                        ; 004defae
        ;   Label: LAB_004defae
    PUSH EAX                            ; 004defb1
    CALL engine_model.c_loadModelFile_FUN_004f7f20 ; 004defb2
        ;   XREF to: 004f7f20 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_loadModelFile_FUN_004f7f20()
    ADD ESP,0x4                         ; 004defb7
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004defba
    MOV dword ptr [EDX + 0x14],EAX      ; 004defbe
    JMP 0x004dee75                      ; 004defc1
        ;   XREF to: 004dee75 (UNCONDITIONAL_JUMP)  ; LAB_004dee75
    MOV EAX,dword ptr [ESP]             ; 004defc6
        ;   Label: LAB_004defc6
    MOV EBX,ESI                         ; 004defc9
    MOV EAX,dword ptr [EAX + 0x4]       ; 004defcb
    CDQ                                 ; 004defce
    MOV ECX,EDX                         ; 004defcf
    XOR EAX,EDX                         ; 004defd1
    XOR EDX,EDX                         ; 004defd3
    DIV EBX                             ; 004defd5
    CMP EAX,0x7fff                      ; 004defd7
    JC 0x004defe3                       ; 004defdc
        ;   XREF to: 004defe3 (CONDITIONAL_JUMP)  ; LAB_004defe3
    MOV EAX,0x7fff                      ; 004defde
    PUSH EAX                            ; 004defe3
        ;   Label: LAB_004defe3
    XOR EAX,EAX                         ; 004defe4
    DIV EBX                             ; 004defe6
    POP EDX                             ; 004defe8
    SHRD EAX,EDX,0x10                   ; 004defe9
    XOR EAX,ECX                         ; 004defed
    XOR ESI,ESI                         ; 004defef
    MOV EDI,dword ptr [EBP + 0x118]     ; 004deff1
    MOV EBX,EAX                         ; 004deff7
    MOV ECX,dword ptr [EBP + 0x118]     ; 004deff9
    MOV EAX,dword ptr [EDI + 0x10]      ; 004defff
    ADD EDI,0x8                         ; 004df002
    ADD ECX,0x14                        ; 004df005
    TEST EAX,EAX                        ; 004df008
    JLE 0x004def8f                      ; 004df00a
        ;   XREF to: 004def8f (CONDITIONAL_JUMP)  ; LAB_004def8f
    MOV EAX,EBX                         ; 004df00c
        ;   Label: LAB_004df00c
    MOV EDX,dword ptr [ECX]             ; 004df00e
    IMUL EDX                            ; 004df010
    SHRD EAX,EDX,0x10                   ; 004df012
    MOV EDX,dword ptr [ECX + 0x4]       ; 004df016
    MOV dword ptr [ECX],EAX             ; 004df019
    MOV EAX,EBX                         ; 004df01b
    IMUL EDX                            ; 004df01d
    SHRD EAX,EDX,0x10                   ; 004df01f
    MOV EDX,dword ptr [ECX + 0x8]       ; 004df023
    MOV dword ptr [ECX + 0x4],EAX       ; 004df026
    MOV EAX,EBX                         ; 004df029
    IMUL EDX                            ; 004df02b
    SHRD EAX,EDX,0x10                   ; 004df02d
    MOV dword ptr [ECX + 0x8],EAX       ; 004df031
    INC ESI                             ; 004df034
    MOV EDX,dword ptr [EDI + 0x8]       ; 004df035
    ADD ECX,0xc                         ; 004df038
    CMP ESI,EDX                         ; 004df03b
    JGE 0x004def8f                      ; 004df03d
        ;   XREF to: 004def8f (CONDITIONAL_JUMP)  ; LAB_004def8f
    JMP 0x004df00c                      ; 004df043
        ;   XREF to: 004df00c (UNCONDITIONAL_JUMP)  ; LAB_004df00c

