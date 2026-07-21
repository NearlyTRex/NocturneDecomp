; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_isStreamableFile_FUN_00522970(undefined4 param_1)
;
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c_splitpath_FUN_00566498
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 00522970
        ;   Label: sound_sndmain.cpp_isStreamableFile_FUN_00522970
    MOV EDX,dword ptr [ESP + 0x104]     ; 00522976
    PUSH EDX                            ; 0052297d
    PUSH 0x592778                       ; 0052297e
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 00522983
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFileSize_FUN_004568c0()
    ADD ESP,0x8                         ; 00522988
    CMP EAX,0x200000                    ; 0052298b
    JLE 0x0052299e                      ; 00522990
        ;   XREF to: 0052299e (CONDITIONAL_JUMP)  ; LAB_0052299e
    MOV EAX,0x1                         ; 00522992
        ;   Label: LAB_00522992
    ADD ESP,0x100                       ; 00522997
    RET                                 ; 0052299d
    MOV EAX,ESP                         ; 0052299e
        ;   Label: LAB_0052299e
    PUSH EAX                            ; 005229a0
    PUSH 0x0                            ; 005229a1
    PUSH 0x0                            ; 005229a3
    PUSH 0x0                            ; 005229a5
    MOV ECX,dword ptr [ESP + 0x114]     ; 005229a7
    PUSH ECX                            ; 005229ae
    CALL crt_string.c_splitpath_FUN_00566498 ; 005229af
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 005229b4
    PUSH 0x59277e                       ; 005229b7
    LEA EAX,[ESP + 0x4]                 ; 005229bc
    PUSH EAX                            ; 005229c0
    CALL crt_string.c__stricmp_FUN_00564520 ; 005229c1
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 005229c6
    TEST EAX,EAX                        ; 005229c9
    JZ 0x00522992                       ; 005229cb
        ;   XREF to: 00522992 (CONDITIONAL_JUMP)  ; LAB_00522992
    PUSH 0x592782                       ; 005229cd
    LEA EAX,[ESP + 0x4]                 ; 005229d2
    PUSH EAX                            ; 005229d6
    CALL crt_string.c__stricmp_FUN_00564520 ; 005229d7
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 005229dc
    TEST EAX,EAX                        ; 005229df
    JZ 0x00522992                       ; 005229e1
        ;   XREF to: 00522992 (CONDITIONAL_JUMP)  ; LAB_00522992
    XOR EAX,EAX                         ; 005229e3
    ADD ESP,0x100                       ; 005229e5
    RET                                 ; 005229eb

