; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_fseek_FUN_005ffacc(_FILE *file,long offset,int whence)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
; long             Stack[0x8]:4   offset
; int              Stack[0xc]:4   whence
;
; XREF[33]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 at 0054b84b
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 at 0054c2a4
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 at 0044fc10
;   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 at 00494ef6
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e14ae
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 00579907
;   core_skeledit.cpp_CDeformableModel_importVertexAssignmentsVPH_FUN_0058bd00 at 0058be34
;   core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690 at 00592ba0
;   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c at 00601a06
;   engine_dosio.cpp_getFile_FUN_00481a50 at 00481b1b
;   ... and 23 more
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_io.c_tell_FUN_00606720
;   crt_stdio.c_lseek_FUN_00606690
;   crt_stdio.c_seek_within_buffer_FUN_005ffa70
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ffacc
        ;   Label: crt_stdio.c_fseek_FUN_005ffacc
    PUSH ESI                            ; 005ffacd
    PUSH EDI                            ; 005fface
    PUSH EBP                            ; 005ffacf
    MOV EBX,dword ptr [ESP + 0x14]      ; 005ffad0
    MOV ESI,dword ptr [ESP + 0x18]      ; 005ffad4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005ffad8
    MOV EDX,dword ptr [EBX + 0x10]      ; 005ffadc
    PUSH EDX                            ; 005ffadf
    CALL dword ptr [0x00684ee8]         ; 005ffae0 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV AH,byte ptr [EBX + 0xc]         ; 005ffae6
    ADD ESP,0x4                         ; 005ffae9
    TEST AH,0x6                         ; 005ffaec
    JZ 0x005ffb7f                       ; 005ffaef
        ;   XREF to: 005ffb7f (CONDITIONAL_JUMP)  ; LAB_005ffb7f
    TEST byte ptr [EBX + 0xd],0x10      ; 005ffaf5
    JZ 0x005ffb31                       ; 005ffaf9
        ;   XREF to: 005ffb31 (CONDITIONAL_JUMP)  ; LAB_005ffb31
    PUSH EBX                            ; 005ffafb
    CALL 0x006039d0                     ; 005ffafc
        ;   XREF to: 006039d0 (UNCONDITIONAL_CALL)  ; LAB_006039ce+2
    ADD ESP,0x4                         ; 005ffb01
    TEST EAX,EAX                        ; 005ffb04
    JZ 0x005ffb48                       ; 005ffb06
        ;   XREF to: 005ffb48 (CONDITIONAL_JUMP)  ; LAB_005ffb48
    TEST EDI,EDI                        ; 005ffb08
    JNZ 0x005ffb1a                      ; 005ffb0a
        ;   XREF to: 005ffb1a (CONDITIONAL_JUMP)  ; LAB_005ffb1a
    TEST ESI,ESI                        ; 005ffb0c
    JGE 0x005ffb1a                      ; 005ffb0e
        ;   XREF to: 005ffb1a (CONDITIONAL_JUMP)  ; LAB_005ffb1a
    PUSH 0x9                            ; 005ffb10
    CALL crt_errno.c_setErrno_FUN_00602790 ; 005ffb12
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 005ffb17
    MOV ESI,dword ptr [EBX + 0x10]      ; 005ffb1a
        ;   Label: LAB_005ffb1a
    PUSH ESI                            ; 005ffb1d
    CALL dword ptr [0x00684eec]         ; 005ffb1e | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 005ffb24
    ADD ESP,0x4                         ; 005ffb29
    POP EBP                             ; 005ffb2c
    POP EDI                             ; 005ffb2d
    POP ESI                             ; 005ffb2e
    POP EBX                             ; 005ffb2f
    RET                                 ; 005ffb30
    CMP EDI,0x1                         ; 005ffb31
        ;   Label: LAB_005ffb31
    JNZ 0x005ffb39                      ; 005ffb34
        ;   XREF to: 005ffb39 (CONDITIONAL_JUMP)  ; LAB_005ffb39
    SUB ESI,dword ptr [EBX + 0x4]       ; 005ffb36
    MOV EAX,dword ptr [EBX + 0x8]       ; 005ffb39
        ;   Label: LAB_005ffb39
    MOV EAX,dword ptr [EAX + 0x8]       ; 005ffb3c
    MOV dword ptr [EBX + 0x4],0x0       ; 005ffb3f
    MOV dword ptr [EBX],EAX             ; 005ffb46
    PUSH EDI                            ; 005ffb48
        ;   Label: LAB_005ffb48
    MOV CL,byte ptr [EBX + 0xc]         ; 005ffb49
    PUSH ESI                            ; 005ffb4c
    MOV EAX,dword ptr [EBX + 0x10]      ; 005ffb4d
    AND CL,0xeb                         ; 005ffb50
    PUSH EAX                            ; 005ffb53
    MOV byte ptr [EBX + 0xc],CL         ; 005ffb54
    CALL crt_stdio.c_lseek_FUN_00606690 ; 005ffb57
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 005ffb5c
    CMP EAX,-0x1                        ; 005ffb5f
    JNZ 0x005ffc9f                      ; 005ffb62
        ;   XREF to: 005ffc9f (CONDITIONAL_JUMP)  ; LAB_005ffc9f
    MOV ECX,dword ptr [EBX + 0x10]      ; 005ffb68
    PUSH ECX                            ; 005ffb6b
    CALL dword ptr [0x00684eec]         ; 005ffb6c | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 005ffb72
    ADD ESP,0x4                         ; 005ffb77
    POP EBP                             ; 005ffb7a
    POP EDI                             ; 005ffb7b
    POP ESI                             ; 005ffb7c
    POP EBX                             ; 005ffb7d
    RET                                 ; 005ffb7e
    CMP EDI,0x1                         ; 005ffb7f
        ;   Label: LAB_005ffb7f
    JC 0x005ffb94                       ; 005ffb82
        ;   XREF to: 005ffb94 (CONDITIONAL_JUMP)  ; LAB_005ffb94
    JBE 0x005ffb9d                      ; 005ffb84
        ;   XREF to: 005ffb9d (CONDITIONAL_JUMP)  ; LAB_005ffb9d
    CMP EDI,0x2                         ; 005ffb86
    JZ 0x005ffc3d                       ; 005ffb89
        ;   XREF to: 005ffc3d (CONDITIONAL_JUMP)  ; LAB_005ffc3d
    JMP 0x005ffc7e                      ; 005ffb8f
        ;   XREF to: 005ffc7e (UNCONDITIONAL_JUMP)  ; LAB_005ffc7e
    TEST EDI,EDI                        ; 005ffb94
        ;   Label: LAB_005ffb94
    JZ 0x005ffbec                       ; 005ffb96
        ;   XREF to: 005ffbec (CONDITIONAL_JUMP)  ; LAB_005ffbec
    JMP 0x005ffc7e                      ; 005ffb98
        ;   XREF to: 005ffc7e (UNCONDITIONAL_JUMP)  ; LAB_005ffc7e
    PUSH EBX                            ; 005ffb9d
        ;   Label: LAB_005ffb9d
    PUSH ESI                            ; 005ffb9e
    MOV EBP,dword ptr [EBX + 0x4]       ; 005ffb9f
    CALL crt_stdio.c_seek_within_buffer_FUN_005ffa70 ; 005ffba2
        ;   XREF to: 005ffa70 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_seek_within_buffer_FUN_005ffa70(int offset, _FILE * file)
    ADD ESP,0x8                         ; 005ffba7
    TEST EAX,EAX                        ; 005ffbaa
    JZ 0x005ffc9f                       ; 005ffbac
        ;   XREF to: 005ffc9f (CONDITIONAL_JUMP)  ; LAB_005ffc9f
    PUSH EDI                            ; 005ffbb2
    SUB ESI,EBP                         ; 005ffbb3
    PUSH ESI                            ; 005ffbb5
    MOV EDI,dword ptr [EBX + 0x10]      ; 005ffbb6
    PUSH EDI                            ; 005ffbb9
    CALL crt_stdio.c_lseek_FUN_00606690 ; 005ffbba
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 005ffbbf
    CMP EAX,-0x1                        ; 005ffbc2
    JNZ 0x005ffbde                      ; 005ffbc5
        ;   XREF to: 005ffbde (CONDITIONAL_JUMP)  ; LAB_005ffbde
    MOV EBP,dword ptr [EBX + 0x10]      ; 005ffbc7
    PUSH EBP                            ; 005ffbca
    CALL dword ptr [0x00684eec]         ; 005ffbcb | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 005ffbd1
    ADD ESP,0x4                         ; 005ffbd6
    POP EBP                             ; 005ffbd9
    POP EDI                             ; 005ffbda
    POP ESI                             ; 005ffbdb
    POP EBX                             ; 005ffbdc
    RET                                 ; 005ffbdd
    PUSH EBX                            ; 005ffbde
        ;   Label: LAB_005ffbde
    CALL crt_stdio.c_seek_within_buffer_FUN_005ffa70 ; 005ffbdf
        ;   XREF to: 005ffab4 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_seek_within_buffer_FUN_005ffa70(_FILE * file)
    ADD ESP,0x4                         ; 005ffbe4
    JMP 0x005ffc9f                      ; 005ffbe7
        ;   XREF to: 005ffc9f (UNCONDITIONAL_JUMP)  ; LAB_005ffc9f
    MOV EDX,dword ptr [EBX + 0x10]      ; 005ffbec
        ;   Label: LAB_005ffbec
    PUSH EDX                            ; 005ffbef
    CALL crt_io.c_tell_FUN_00606720     ; 005ffbf0
        ;   XREF to: 00606720 (UNCONDITIONAL_CALL)  ; long crt_io.c_tell_FUN_00606720(int file_handle_index)
    ADD ESP,0x4                         ; 005ffbf5
    MOV ECX,dword ptr [EBX + 0x4]       ; 005ffbf8
    MOV EBP,ESI                         ; 005ffbfb
    SUB EAX,ECX                         ; 005ffbfd
    PUSH EBX                            ; 005ffbff
    SUB EBP,EAX                         ; 005ffc00
    PUSH EBP                            ; 005ffc02
    CALL crt_stdio.c_seek_within_buffer_FUN_005ffa70 ; 005ffc03
        ;   XREF to: 005ffa70 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_seek_within_buffer_FUN_005ffa70(int offset, _FILE * file)
    ADD ESP,0x8                         ; 005ffc08
    TEST EAX,EAX                        ; 005ffc0b
    JZ 0x005ffc9f                       ; 005ffc0d
        ;   XREF to: 005ffc9f (CONDITIONAL_JUMP)  ; LAB_005ffc9f
    PUSH EDI                            ; 005ffc13
    PUSH ESI                            ; 005ffc14
    MOV ESI,dword ptr [EBX + 0x10]      ; 005ffc15
    PUSH ESI                            ; 005ffc18
    CALL crt_stdio.c_lseek_FUN_00606690 ; 005ffc19
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 005ffc1e
    CMP EAX,-0x1                        ; 005ffc21
    JNZ 0x005ffbde                      ; 005ffc24
        ;   XREF to: 005ffbde (CONDITIONAL_JUMP)  ; LAB_005ffbde
    MOV EDI,dword ptr [EBX + 0x10]      ; 005ffc26
    PUSH EDI                            ; 005ffc29
    CALL dword ptr [0x00684eec]         ; 005ffc2a | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 005ffc30
    ADD ESP,0x4                         ; 005ffc35
    POP EBP                             ; 005ffc38
    POP EDI                             ; 005ffc39
    POP ESI                             ; 005ffc3a
    POP EBX                             ; 005ffc3b
    RET                                 ; 005ffc3c
    MOV DL,AH                           ; 005ffc3d
        ;   Label: LAB_005ffc3d
    PUSH EDI                            ; 005ffc3f
    MOV ECX,dword ptr [EBX + 0x10]      ; 005ffc40
    AND DL,0xef                         ; 005ffc43
    MOV EAX,dword ptr [EBX + 0x8]       ; 005ffc46
    MOV byte ptr [EBX + 0xc],DL         ; 005ffc49
    PUSH ESI                            ; 005ffc4c
    MOV EAX,dword ptr [EAX + 0x8]       ; 005ffc4d
    MOV dword ptr [EBX + 0x4],0x0       ; 005ffc50
    PUSH ECX                            ; 005ffc57
    MOV dword ptr [EBX],EAX             ; 005ffc58
    CALL crt_stdio.c_lseek_FUN_00606690 ; 005ffc5a
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 005ffc5f
    CMP EAX,-0x1                        ; 005ffc62
    JNZ 0x005ffc9f                      ; 005ffc65
        ;   XREF to: 005ffc9f (CONDITIONAL_JUMP)  ; LAB_005ffc9f
    MOV ESI,dword ptr [EBX + 0x10]      ; 005ffc67
    PUSH ESI                            ; 005ffc6a
    CALL dword ptr [0x00684eec]         ; 005ffc6b | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 005ffc71
    ADD ESP,0x4                         ; 005ffc76
    POP EBP                             ; 005ffc79
    POP EDI                             ; 005ffc7a
    POP ESI                             ; 005ffc7b
    POP EBX                             ; 005ffc7c
    RET                                 ; 005ffc7d
    PUSH 0x9                            ; 005ffc7e
        ;   Label: LAB_005ffc7e
    CALL crt_errno.c_setErrno_FUN_00602790 ; 005ffc80
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 005ffc85
    MOV EAX,dword ptr [EBX + 0x10]      ; 005ffc88
    PUSH EAX                            ; 005ffc8b
    CALL dword ptr [0x00684eec]         ; 005ffc8c | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0xffffffff                  ; 005ffc92
    ADD ESP,0x4                         ; 005ffc97
    POP EBP                             ; 005ffc9a
    POP EDI                             ; 005ffc9b
    POP ESI                             ; 005ffc9c
    POP EBX                             ; 005ffc9d
    RET                                 ; 005ffc9e
    MOV EDX,dword ptr [EBX + 0x10]      ; 005ffc9f
        ;   Label: LAB_005ffc9f
    PUSH EDX                            ; 005ffca2
    CALL dword ptr [0x00684eec]         ; 005ffca3 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 005ffca9
    XOR EAX,EAX                         ; 005ffcac
    POP EBP                             ; 005ffcae
    POP EDI                             ; 005ffcaf
    POP ESI                             ; 005ffcb0
    POP EBX                             ; 005ffcb1
    RET                                 ; 005ffcb2

