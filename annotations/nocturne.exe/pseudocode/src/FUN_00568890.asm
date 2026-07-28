; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00568890(undefined4 *param_1)
;
;
; XREF[9]:
;   FUN_0056ae10 at 0056aebf
;   FUN_0056aefc at 0056af27
;   crt_stdio.c_fflush_FUN_0056dd60 at 0056dd71
;   crt_stdio.c_fputc_FUN_00566cc0 at 00566d81
;   crt_stdio.c_fputs_FUN_00573660 at 005736e7
;   crt_stdio.c_fseek_FUN_0056582c at 0056585c
;   crt_stdio.c_fwrite_FUN_00563a50 at 00563b98
;   crt_stdio.c_prepare_stream_for_write_FUN_0056b35c at 0056b3a5
;   crt_unknown.c_fclose_FUN_005634b0 at 005634dc
;
; Referenced Globals:
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4 = 005671e4
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00568e80
;   crt_stdio.c_flushFileBuffers_FUN_0056f1c0
;   crt_stdio.c_lseek_FUN_005689c0
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   FUN_00569fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568890
        ;   Label: FUN_00568890
    PUSH ESI                            ; 00568891
    PUSH EDI                            ; 00568892
    PUSH EBP                            ; 00568893
    SUB ESP,0x4                         ; 00568894
    MOV EBX,dword ptr [ESP + 0x18]      ; 00568897
    MOV EDX,dword ptr [EBX + 0x10]      ; 0056889b
    PUSH EDX                            ; 0056889e
    XOR EDI,EDI                         ; 0056889f
    CALL dword ptr [0x005c1ac0]         ; 005688a1 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0
    MOV AH,byte ptr [EBX + 0xd]         ; 005688a7
    ADD ESP,0x4                         ; 005688aa
    TEST AH,0x10                        ; 005688ad
    JZ 0x00568936                       ; 005688b0
        ;   XREF to: 00568936 (CONDITIONAL_JUMP)  ; LAB_00568936
    MOV CH,AH                           ; 005688b6
    AND CH,0xef                         ; 005688b8
    MOV AL,byte ptr [EBX + 0xc]         ; 005688bb
    MOV byte ptr [EBX + 0xd],CH         ; 005688be
    TEST AL,0x2                         ; 005688c1
    JZ 0x00568971                       ; 005688c3
        ;   XREF to: 00568971 (CONDITIONAL_JUMP)  ; LAB_00568971
    MOV EBP,dword ptr [EBX + 0x8]       ; 005688c9
    MOV EAX,dword ptr [EBP + 0x8]       ; 005688cc
    TEST EAX,EAX                        ; 005688cf
    JZ 0x00568971                       ; 005688d1
        ;   XREF to: 00568971 (CONDITIONAL_JUMP)  ; LAB_00568971
    MOV ESI,dword ptr [EBX + 0x4]       ; 005688d7
    MOV EBP,EAX                         ; 005688da
    TEST ESI,ESI                        ; 005688dc
    JZ 0x00568971                       ; 005688de
        ;   XREF to: 00568971 (CONDITIONAL_JUMP)  ; LAB_00568971
    TEST EDI,EDI                        ; 005688e4
        ;   Label: LAB_005688e4
    JNZ 0x00568971                      ; 005688e6
        ;   XREF to: 00568971 (CONDITIONAL_JUMP)  ; LAB_00568971
    PUSH ESI                            ; 005688ec
    PUSH EBP                            ; 005688ed
    MOV EAX,dword ptr [EBX + 0x10]      ; 005688ee
    PUSH EAX                            ; 005688f1
    CALL FUN_00569fb0                   ; 005688f2
        ;   XREF to: 00569fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569fb0()
    ADD ESP,0xc                         ; 005688f7
    MOV dword ptr [ESP],EAX             ; 005688fa
    CMP EAX,-0x1                        ; 005688fd
    JNZ 0x0056890f                      ; 00568900
        ;   XREF to: 0056890f (CONDITIONAL_JUMP)  ; LAB_0056890f
    MOV DL,byte ptr [EBX + 0xc]         ; 00568902
    OR DL,0x20                          ; 00568905
    MOV EDI,EAX                         ; 00568908
    MOV byte ptr [EBX + 0xc],DL         ; 0056890a
    JMP 0x0056892b                      ; 0056890d
        ;   XREF to: 0056892b (UNCONDITIONAL_JUMP)  ; LAB_0056892b
    TEST EAX,EAX                        ; 0056890f
        ;   Label: LAB_0056890f
    JNZ 0x0056892b                      ; 00568911
        ;   XREF to: 0056892b (CONDITIONAL_JUMP)  ; LAB_0056892b
    PUSH 0xc                            ; 00568913
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00568915
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    MOV AH,byte ptr [EBX + 0xc]         ; 0056891a
    MOV EDI,0xffffffff                  ; 0056891d
    OR AH,0x20                          ; 00568922
    ADD ESP,0x4                         ; 00568925
    MOV byte ptr [EBX + 0xc],AH         ; 00568928
    MOV EDX,dword ptr [ESP]             ; 0056892b
        ;   Label: LAB_0056892b
    ADD EBP,EDX                         ; 0056892e
    SUB ESI,EDX                         ; 00568930
    JNZ 0x005688e4                      ; 00568932
        ;   XREF to: 005688e4 (CONDITIONAL_JUMP)  ; LAB_005688e4
    JMP 0x00568971                      ; 00568934
        ;   XREF to: 00568971 (UNCONDITIONAL_JUMP)  ; LAB_00568971
    MOV EAX,dword ptr [EBX + 0x8]       ; 00568936
        ;   Label: LAB_00568936
    CMP dword ptr [EAX + 0x8],0x0       ; 00568939
    JZ 0x00568971                       ; 0056893d
        ;   XREF to: 00568971 (CONDITIONAL_JUMP)  ; LAB_00568971
    AND byte ptr [EBX + 0xc],0xef       ; 0056893f
    TEST byte ptr [EBX + 0xd],0x20      ; 00568943
    JNZ 0x00568971                      ; 00568947
        ;   XREF to: 00568971 (CONDITIONAL_JUMP)  ; LAB_00568971
    MOV EAX,dword ptr [EBX + 0x4]       ; 00568949
    TEST EAX,EAX                        ; 0056894c
    JZ 0x00568961                       ; 0056894e
        ;   XREF to: 00568961 (CONDITIONAL_JUMP)  ; LAB_00568961
    PUSH 0x1                            ; 00568950
    NEG EAX                             ; 00568952
    PUSH EAX                            ; 00568954
    MOV ESI,dword ptr [EBX + 0x10]      ; 00568955
    PUSH ESI                            ; 00568958
    CALL crt_stdio.c_lseek_FUN_005689c0 ; 00568959
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_005689c0(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 0056895e
    CMP EAX,-0x1                        ; 00568961
        ;   Label: LAB_00568961
    JNZ 0x00568971                      ; 00568964
        ;   XREF to: 00568971 (CONDITIONAL_JUMP)  ; LAB_00568971
    MOV CL,byte ptr [EBX + 0xc]         ; 00568966
    OR CL,0x20                          ; 00568969
    MOV EDI,EAX                         ; 0056896c
    MOV byte ptr [EBX + 0xc],CL         ; 0056896e
    MOV EAX,dword ptr [EBX + 0x8]       ; 00568971
        ;   Label: LAB_00568971
    MOV EAX,dword ptr [EAX + 0x8]       ; 00568974
    MOV dword ptr [EBX + 0x4],0x0       ; 00568977
    MOV dword ptr [EBX],EAX             ; 0056897e
    TEST EDI,EDI                        ; 00568980
    JNZ 0x005689a0                      ; 00568982
        ;   XREF to: 005689a0 (CONDITIONAL_JUMP)  ; LAB_005689a0
    MOV EAX,dword ptr [EBX + 0x8]       ; 00568984
    TEST byte ptr [EAX + 0x10],0x1      ; 00568987
    JZ 0x005689a0                       ; 0056898b
        ;   XREF to: 005689a0 (CONDITIONAL_JUMP)  ; LAB_005689a0
    MOV EDX,dword ptr [EBX + 0x10]      ; 0056898d
    PUSH EDX                            ; 00568990
    CALL crt_stdio.c_flushFileBuffers_FUN_0056f1c0 ; 00568991
        ;   XREF to: 0056f1c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_flushFileBuffers_FUN_0056f1c0(int file_handle_index)
    ADD ESP,0x4                         ; 00568996
    CMP EAX,-0x1                        ; 00568999
    JNZ 0x005689a0                      ; 0056899c
        ;   XREF to: 005689a0 (CONDITIONAL_JUMP)  ; LAB_005689a0
    MOV EDI,EAX                         ; 0056899e
    MOV ECX,dword ptr [EBX + 0x10]      ; 005689a0
        ;   Label: LAB_005689a0
    PUSH ECX                            ; 005689a3
    CALL dword ptr [0x005c1ac4]         ; 005689a4 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 005689aa
    MOV EAX,EDI                         ; 005689ad
    ADD ESP,0x4                         ; 005689af
    POP EBP                             ; 005689b2
    POP EDI                             ; 005689b3
    POP ESI                             ; 005689b4
    POP EBX                             ; 005689b5
    RET                                 ; 005689b6

