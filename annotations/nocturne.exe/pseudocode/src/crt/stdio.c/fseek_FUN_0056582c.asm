; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_fseek_FUN_0056582c(_FILE *file,long offset,int whence)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
; long             Stack[0x8]:4   offset
; int              Stack[0xc]:4   whence
;
; XREF[19]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80 at 004f4e27
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_004f5740 at 004f57fa
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250 at 00443a70
;   core_game.cpp_CGame_FUN_004a4170 at 004a4385
;   crt_unknown.c_OpenFileAndInitialize_FUN_0056551c at 00565616
;   engine_dosio.cpp_getFile_FUN_00456a60 at 00456b09
;   engine_pod.cpp_CPodFile_FUN_004f7ae0 at 004f7ec6
;   engine_pod.cpp_CPodFile_computeFileCRC_FUN_004f86a0 at 004f8737
;   engine_pod.cpp_CPodFile_getAuditRecord_FUN_004f8570 at 004f85f3
;   engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240 at 004f82c2
;   ... and 9 more
;
; Referenced Globals:
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4 = 005671e4
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00568e80
;   crt_io.c_tell_FUN_0056bc10
;   crt_stdio.c_lseek_FUN_005689c0
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_unknown.c_FUN_00568890
;   crt_unknown.c_seek_within_buffer_FUN_005657d0
;   crt_unknown.c_seek_within_buffer_FUN_00565814
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056582c
        ;   Label: crt_stdio.c_fseek_FUN_0056582c
    PUSH ESI                            ; 0056582d
    PUSH EDI                            ; 0056582e
    PUSH EBP                            ; 0056582f
    MOV EBX,dword ptr [ESP + 0x14]      ; 00565830
    MOV ESI,dword ptr [ESP + 0x18]      ; 00565834
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00565838
    MOV EDX,dword ptr [EBX + 0x10]      ; 0056583c
    PUSH EDX                            ; 0056583f
    CALL dword ptr [0x005c1ac0]         ; 00565840 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0
    MOV AH,byte ptr [EBX + 0xc]         ; 00565846
    ADD ESP,0x4                         ; 00565849
    TEST AH,0x6                         ; 0056584c
    JZ 0x005658df                       ; 0056584f
        ;   XREF to: 005658df (CONDITIONAL_JUMP)  ; LAB_005658df
    TEST byte ptr [EBX + 0xd],0x10      ; 00565855
    JZ 0x00565891                       ; 00565859
        ;   XREF to: 00565891 (CONDITIONAL_JUMP)  ; LAB_00565891
    PUSH EBX                            ; 0056585b
    CALL crt_unknown.c_FUN_00568890     ; 0056585c
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568890()
    ADD ESP,0x4                         ; 00565861
    TEST EAX,EAX                        ; 00565864
    JZ 0x005658a8                       ; 00565866
        ;   XREF to: 005658a8 (CONDITIONAL_JUMP)  ; LAB_005658a8
    TEST EDI,EDI                        ; 00565868
    JNZ 0x0056587a                      ; 0056586a
        ;   XREF to: 0056587a (CONDITIONAL_JUMP)  ; LAB_0056587a
    TEST ESI,ESI                        ; 0056586c
    JGE 0x0056587a                      ; 0056586e
        ;   XREF to: 0056587a (CONDITIONAL_JUMP)  ; LAB_0056587a
    PUSH 0x9                            ; 00565870
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00565872
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 00565877
    MOV ESI,dword ptr [EBX + 0x10]      ; 0056587a
        ;   Label: LAB_0056587a
    PUSH ESI                            ; 0056587d
    CALL dword ptr [0x005c1ac4]         ; 0056587e | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    MOV EAX,0xffffffff                  ; 00565884
    ADD ESP,0x4                         ; 00565889
    POP EBP                             ; 0056588c
    POP EDI                             ; 0056588d
    POP ESI                             ; 0056588e
    POP EBX                             ; 0056588f
    RET                                 ; 00565890
    CMP EDI,0x1                         ; 00565891
        ;   Label: LAB_00565891
    JNZ 0x00565899                      ; 00565894
        ;   XREF to: 00565899 (CONDITIONAL_JUMP)  ; LAB_00565899
    SUB ESI,dword ptr [EBX + 0x4]       ; 00565896
    MOV EAX,dword ptr [EBX + 0x8]       ; 00565899
        ;   Label: LAB_00565899
    MOV EAX,dword ptr [EAX + 0x8]       ; 0056589c
    MOV dword ptr [EBX + 0x4],0x0       ; 0056589f
    MOV dword ptr [EBX],EAX             ; 005658a6
    PUSH EDI                            ; 005658a8
        ;   Label: LAB_005658a8
    MOV CL,byte ptr [EBX + 0xc]         ; 005658a9
    PUSH ESI                            ; 005658ac
    MOV EAX,dword ptr [EBX + 0x10]      ; 005658ad
    AND CL,0xeb                         ; 005658b0
    PUSH EAX                            ; 005658b3
    MOV byte ptr [EBX + 0xc],CL         ; 005658b4
    CALL crt_stdio.c_lseek_FUN_005689c0 ; 005658b7
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_005689c0(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 005658bc
    CMP EAX,-0x1                        ; 005658bf
    JNZ 0x005659ff                      ; 005658c2
        ;   XREF to: 005659ff (CONDITIONAL_JUMP)  ; LAB_005659ff
    MOV ECX,dword ptr [EBX + 0x10]      ; 005658c8
    PUSH ECX                            ; 005658cb
    CALL dword ptr [0x005c1ac4]         ; 005658cc | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    MOV EAX,0xffffffff                  ; 005658d2
    ADD ESP,0x4                         ; 005658d7
    POP EBP                             ; 005658da
    POP EDI                             ; 005658db
    POP ESI                             ; 005658dc
    POP EBX                             ; 005658dd
    RET                                 ; 005658de
    CMP EDI,0x1                         ; 005658df
        ;   Label: LAB_005658df
    JC 0x005658f4                       ; 005658e2
        ;   XREF to: 005658f4 (CONDITIONAL_JUMP)  ; LAB_005658f4
    JBE 0x005658fd                      ; 005658e4
        ;   XREF to: 005658fd (CONDITIONAL_JUMP)  ; LAB_005658fd
    CMP EDI,0x2                         ; 005658e6
    JZ 0x0056599d                       ; 005658e9
        ;   XREF to: 0056599d (CONDITIONAL_JUMP)  ; LAB_0056599d
    JMP 0x005659de                      ; 005658ef
        ;   XREF to: 005659de (UNCONDITIONAL_JUMP)  ; LAB_005659de
    TEST EDI,EDI                        ; 005658f4
        ;   Label: LAB_005658f4
    JZ 0x0056594c                       ; 005658f6
        ;   XREF to: 0056594c (CONDITIONAL_JUMP)  ; LAB_0056594c
    JMP 0x005659de                      ; 005658f8
        ;   XREF to: 005659de (UNCONDITIONAL_JUMP)  ; LAB_005659de
    PUSH EBX                            ; 005658fd
        ;   Label: LAB_005658fd
    PUSH ESI                            ; 005658fe
    MOV EBP,dword ptr [EBX + 0x4]       ; 005658ff
    CALL crt_unknown.c_seek_within_buffer_FUN_005657d0 ; 00565902
        ;   XREF to: 005657d0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_seek_within_buffer_FUN_005657d0(int offset, _FILE * file)
    ADD ESP,0x8                         ; 00565907
    TEST EAX,EAX                        ; 0056590a
    JZ 0x005659ff                       ; 0056590c
        ;   XREF to: 005659ff (CONDITIONAL_JUMP)  ; LAB_005659ff
    PUSH EDI                            ; 00565912
    SUB ESI,EBP                         ; 00565913
    PUSH ESI                            ; 00565915
    MOV EDI,dword ptr [EBX + 0x10]      ; 00565916
    PUSH EDI                            ; 00565919
    CALL crt_stdio.c_lseek_FUN_005689c0 ; 0056591a
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_005689c0(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 0056591f
    CMP EAX,-0x1                        ; 00565922
    JNZ 0x0056593e                      ; 00565925
        ;   XREF to: 0056593e (CONDITIONAL_JUMP)  ; LAB_0056593e
    MOV EBP,dword ptr [EBX + 0x10]      ; 00565927
    PUSH EBP                            ; 0056592a
    CALL dword ptr [0x005c1ac4]         ; 0056592b | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    MOV EAX,0xffffffff                  ; 00565931
    ADD ESP,0x4                         ; 00565936
    POP EBP                             ; 00565939
    POP EDI                             ; 0056593a
    POP ESI                             ; 0056593b
    POP EBX                             ; 0056593c
    RET                                 ; 0056593d
    PUSH EBX                            ; 0056593e
        ;   Label: LAB_0056593e
    CALL crt_unknown.c_seek_within_buffer_FUN_00565814 ; 0056593f
        ;   XREF to: 00565814 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_seek_within_buffer_FUN_00565814(_FILE * file)
    ADD ESP,0x4                         ; 00565944
    JMP 0x005659ff                      ; 00565947
        ;   XREF to: 005659ff (UNCONDITIONAL_JUMP)  ; LAB_005659ff
    MOV EDX,dword ptr [EBX + 0x10]      ; 0056594c
        ;   Label: LAB_0056594c
    PUSH EDX                            ; 0056594f
    CALL crt_io.c_tell_FUN_0056bc10     ; 00565950
        ;   XREF to: 0056bc10 (UNCONDITIONAL_CALL)  ; long crt_io.c_tell_FUN_0056bc10(int file_handle_index)
    ADD ESP,0x4                         ; 00565955
    MOV ECX,dword ptr [EBX + 0x4]       ; 00565958
    MOV EBP,ESI                         ; 0056595b
    SUB EAX,ECX                         ; 0056595d
    PUSH EBX                            ; 0056595f
    SUB EBP,EAX                         ; 00565960
    PUSH EBP                            ; 00565962
    CALL crt_unknown.c_seek_within_buffer_FUN_005657d0 ; 00565963
        ;   XREF to: 005657d0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_seek_within_buffer_FUN_005657d0(int offset, _FILE * file)
    ADD ESP,0x8                         ; 00565968
    TEST EAX,EAX                        ; 0056596b
    JZ 0x005659ff                       ; 0056596d
        ;   XREF to: 005659ff (CONDITIONAL_JUMP)  ; LAB_005659ff
    PUSH EDI                            ; 00565973
    PUSH ESI                            ; 00565974
    MOV ESI,dword ptr [EBX + 0x10]      ; 00565975
    PUSH ESI                            ; 00565978
    CALL crt_stdio.c_lseek_FUN_005689c0 ; 00565979
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_005689c0(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 0056597e
    CMP EAX,-0x1                        ; 00565981
    JNZ 0x0056593e                      ; 00565984
        ;   XREF to: 0056593e (CONDITIONAL_JUMP)  ; LAB_0056593e
    MOV EDI,dword ptr [EBX + 0x10]      ; 00565986
    PUSH EDI                            ; 00565989
    CALL dword ptr [0x005c1ac4]         ; 0056598a | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    MOV EAX,0xffffffff                  ; 00565990
    ADD ESP,0x4                         ; 00565995
    POP EBP                             ; 00565998
    POP EDI                             ; 00565999
    POP ESI                             ; 0056599a
    POP EBX                             ; 0056599b
    RET                                 ; 0056599c
    MOV DL,AH                           ; 0056599d
        ;   Label: LAB_0056599d
    PUSH EDI                            ; 0056599f
    MOV ECX,dword ptr [EBX + 0x10]      ; 005659a0
    AND DL,0xef                         ; 005659a3
    MOV EAX,dword ptr [EBX + 0x8]       ; 005659a6
    MOV byte ptr [EBX + 0xc],DL         ; 005659a9
    PUSH ESI                            ; 005659ac
    MOV EAX,dword ptr [EAX + 0x8]       ; 005659ad
    MOV dword ptr [EBX + 0x4],0x0       ; 005659b0
    PUSH ECX                            ; 005659b7
    MOV dword ptr [EBX],EAX             ; 005659b8
    CALL crt_stdio.c_lseek_FUN_005689c0 ; 005659ba
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_005689c0(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 005659bf
    CMP EAX,-0x1                        ; 005659c2
    JNZ 0x005659ff                      ; 005659c5
        ;   XREF to: 005659ff (CONDITIONAL_JUMP)  ; LAB_005659ff
    MOV ESI,dword ptr [EBX + 0x10]      ; 005659c7
    PUSH ESI                            ; 005659ca
    CALL dword ptr [0x005c1ac4]         ; 005659cb | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    MOV EAX,0xffffffff                  ; 005659d1
    ADD ESP,0x4                         ; 005659d6
    POP EBP                             ; 005659d9
    POP EDI                             ; 005659da
    POP ESI                             ; 005659db
    POP EBX                             ; 005659dc
    RET                                 ; 005659dd
    PUSH 0x9                            ; 005659de
        ;   Label: LAB_005659de
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 005659e0
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 005659e5
    MOV EAX,dword ptr [EBX + 0x10]      ; 005659e8
    PUSH EAX                            ; 005659eb
    CALL dword ptr [0x005c1ac4]         ; 005659ec | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    MOV EAX,0xffffffff                  ; 005659f2
    ADD ESP,0x4                         ; 005659f7
    POP EBP                             ; 005659fa
    POP EDI                             ; 005659fb
    POP ESI                             ; 005659fc
    POP EBX                             ; 005659fd
    RET                                 ; 005659fe
    MOV EDX,dword ptr [EBX + 0x10]      ; 005659ff
        ;   Label: LAB_005659ff
    PUSH EDX                            ; 00565a02
    CALL dword ptr [0x005c1ac4]         ; 00565a03 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 00565a09
    XOR EAX,EAX                         ; 00565a0c
    POP EBP                             ; 00565a0e
    POP EDI                             ; 00565a0f
    POP ESI                             ; 00565a10
    POP EBX                             ; 00565a11
    RET                                 ; 00565a12

