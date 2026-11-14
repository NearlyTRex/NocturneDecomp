; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; long __cdecl crt_stdio_c_ftell_FUN_005c2e90(_FILE *file_handle)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
;
; XREF[9]:
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0 at 004bcc56
;   core_game.cpp_FUN_004d6990 at 004d6b1e
;   core_script.cpp_CScript_dbLoad_FUN_0054af20 at 0054af86
;   core_script.cpp_FUN_00543e00 at 00543ece
;   crt_stdio.c_fclose_FUN_005c0e40 at 005c0e84
;   sound_mp3.cpp_FUN_00525ab0 at 00525ae2
;   sound_mp3.cpp_FUN_0052af80 at 0052afdf
;   support_newmsg.cpp_readMessageFile_FUN_00530bf0 at 00530c45
;   support_trstream.cpp_COutStreamFile_tell_FUN_005a1970 at 005a1982
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;
; Called Functions:
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c7510
;   crt_unknown.c_FUN_005c9e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2e90
        ;   Label: crt_stdio.c_ftell_FUN_005c2e90
    PUSH ESI                            ; 005c2e91
    PUSH EDI                            ; 005c2e92
    PUSH EBP                            ; 005c2e93
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c2e94
    TEST byte ptr [EBX + 0xc],0x80      ; 005c2e98
    JZ 0x005c2ead                       ; 005c2e9c
        ;   XREF to: 005c2ead (CONDITIONAL_JUMP)  ; LAB_005c2ead
    TEST byte ptr [EBX + 0xd],0x10      ; 005c2e9e
    JZ 0x005c2ead                       ; 005c2ea2
        ;   XREF to: 005c2ead (CONDITIONAL_JUMP)  ; LAB_005c2ead
    PUSH EBX                            ; 005c2ea4
    CALL crt_unknown.c_FUN_005c9e80     ; 005c2ea5
        ;   XREF to: 005c9e80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9e80()
    ADD ESP,0x4                         ; 005c2eaa
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c2ead
        ;   Label: LAB_005c2ead
    PUSH EDX                            ; 005c2eb0
    CALL crt_unknown.c_FUN_005c7510     ; 005c2eb1
        ;   XREF to: 005c7510 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7510()
    MOV ESI,EAX                         ; 005c2eb6
    ADD ESP,0x4                         ; 005c2eb8
    MOV EDI,EAX                         ; 005c2ebb
    CMP EAX,-0x1                        ; 005c2ebd
    JZ 0x005c2ef0                       ; 005c2ec0
        ;   XREF to: 005c2ef0 (CONDITIONAL_JUMP)  ; LAB_005c2ef0
    MOV ECX,dword ptr [EBX + 0x10]      ; 005c2ec2
    PUSH ECX                            ; 005c2ec5
    CALL dword ptr [0x00626600]         ; 005c2ec6 | PTR_crt_unknown.c_FUN_005c50d4_00626600
    MOV EBP,dword ptr [EBX + 0x4]       ; 005c2ecc
    ADD ESP,0x4                         ; 005c2ecf
    TEST EBP,EBP                        ; 005c2ed2
    JZ 0x005c2ee3                       ; 005c2ed4
        ;   XREF to: 005c2ee3 (CONDITIONAL_JUMP)  ; LAB_005c2ee3
    TEST byte ptr [EBX + 0xd],0x10      ; 005c2ed6
    JZ 0x005c2ee1                       ; 005c2eda
        ;   XREF to: 005c2ee1 (CONDITIONAL_JUMP)  ; LAB_005c2ee1
    LEA EDI,[ESI + EBP*0x1]             ; 005c2edc
    JMP 0x005c2ee3                      ; 005c2edf
        ;   XREF to: 005c2ee3 (UNCONDITIONAL_JUMP)  ; LAB_005c2ee3
    SUB EDI,EBP                         ; 005c2ee1
        ;   Label: LAB_005c2ee1
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c2ee3
        ;   Label: LAB_005c2ee3
    PUSH EDX                            ; 005c2ee6
    CALL dword ptr [0x00626604]         ; 005c2ee7 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c2eed
    MOV EAX,EDI                         ; 005c2ef0
        ;   Label: LAB_005c2ef0
    POP EBP                             ; 005c2ef2
    POP EDI                             ; 005c2ef3
    POP ESI                             ; 005c2ef4
    POP EBX                             ; 005c2ef5
    RET                                 ; 005c2ef6

