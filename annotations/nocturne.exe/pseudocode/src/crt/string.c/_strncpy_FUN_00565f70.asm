; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c__strncpy_FUN_00565f70(char *param_1,char *param_2,int param_3)
;
;
; XREF[6]:
;   FUN_0056c864 at 0056cb4b
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0 at 004f3fcc
;   core_netgame.cpp_CNetGame_processChatOut_FUN_004ebfd0 at 004ec0cf
;   engine_dosio.cpp_CFileFinder_convertStruct_FUN_00456d90 at 00456dbb
;   engine_pod.cpp_findFilesByExtension_FUN_004f8b90 at 004f8cfa
;   shape_edittool.cpp_CInputString_init_FUN_0046f0a0 at 0046f10c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565f70
        ;   Label: crt_string.c__strncpy_FUN_00565f70
    PUSH ESI                            ; 00565f71
    MOV EAX,dword ptr [ESP + 0xc]       ; 00565f72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00565f76
    MOV EDX,dword ptr [ESP + 0x14]      ; 00565f7a
    MOV ESI,EAX                         ; 00565f7e
    TEST EDX,EDX                        ; 00565f80
    JZ 0x00565f93                       ; 00565f82
        ;   XREF to: 00565f93 (CONDITIONAL_JUMP)  ; LAB_00565f93
    CMP byte ptr [EBX],0x0              ; 00565f84
        ;   Label: LAB_00565f84
    JZ 0x00565f93                       ; 00565f87
        ;   XREF to: 00565f93 (CONDITIONAL_JUMP)  ; LAB_00565f93
    INC EAX                             ; 00565f89
    MOV CL,byte ptr [EBX]               ; 00565f8a
    INC EBX                             ; 00565f8c
    MOV byte ptr [EAX + -0x1],CL        ; 00565f8d
    DEC EDX                             ; 00565f90
    JNZ 0x00565f84                      ; 00565f91
        ;   XREF to: 00565f84 (CONDITIONAL_JUMP)  ; LAB_00565f84
    XOR EBX,EBX                         ; 00565f93
        ;   Label: LAB_00565f93
    TEST EDX,EDX                        ; 00565f95
        ;   Label: LAB_00565f95
    JZ 0x00565fa0                       ; 00565f97
        ;   XREF to: 00565fa0 (CONDITIONAL_JUMP)  ; LAB_00565fa0
    INC EAX                             ; 00565f99
    DEC EDX                             ; 00565f9a
    MOV byte ptr [EAX + -0x1],BL        ; 00565f9b
    JMP 0x00565f95                      ; 00565f9e
        ;   XREF to: 00565f95 (UNCONDITIONAL_JUMP)  ; LAB_00565f95
    MOV EAX,ESI                         ; 00565fa0
        ;   Label: LAB_00565fa0
    POP ESI                             ; 00565fa2
    POP EBX                             ; 00565fa3
    RET                                 ; 00565fa4

