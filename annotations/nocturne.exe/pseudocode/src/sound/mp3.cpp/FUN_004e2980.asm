; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_FUN_004e2980(void)
;
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2980
        ;   Label: sound_mp3.cpp_FUN_004e2980
    PUSH ESI                            ; 004e2981
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e2982
    MOV EDX,dword ptr [EBX]             ; 004e2986
    TEST EDX,EDX                        ; 004e2988
    JNZ 0x004e2996                      ; 004e298a
        ;   XREF to: 004e2996 (CONDITIONAL_JUMP)  ; LAB_004e2996
    MOV ESI,dword ptr [EBX + 0x4]       ; 004e298c
    TEST ESI,ESI                        ; 004e298f
    JNZ 0x004e29af                      ; 004e2991
        ;   XREF to: 004e29af (CONDITIONAL_JUMP)  ; LAB_004e29af
    POP ESI                             ; 004e2993
    POP EBX                             ; 004e2994
    RET                                 ; 004e2995
    PUSH EDX                            ; 004e2996
        ;   Label: LAB_004e2996
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004e2997
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004e299c
    MOV dword ptr [EBX],0x0             ; 004e299f
    MOV ESI,dword ptr [EBX + 0x4]       ; 004e29a5
    TEST ESI,ESI                        ; 004e29a8
    JNZ 0x004e29af                      ; 004e29aa
        ;   XREF to: 004e29af (CONDITIONAL_JUMP)  ; LAB_004e29af
    POP ESI                             ; 004e29ac
    POP EBX                             ; 004e29ad
    RET                                 ; 004e29ae
    PUSH ESI                            ; 004e29af
        ;   Label: LAB_004e29af
    CALL crt_unknown.c_FUN_005638d0     ; 004e29b0
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 004e29b5
    MOV dword ptr [EBX + 0x4],0x0       ; 004e29b8
    POP ESI                             ; 004e29bf
    POP EBX                             ; 004e29c0
    RET                                 ; 004e29c1

