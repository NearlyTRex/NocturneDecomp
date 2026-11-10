; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_FUN_0053489e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_01e6c16c
;   undefined4 DAT_01e6c170
;   undefined4 DAT_01e6c174
;   undefined4 DAT_01e6c178
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_2d.c_drawText_FUN_00401fe0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0053489e
        ;   Label: core_path.cpp_FUN_0053489e
    PUSH EBX                            ; 005348a0
    PUSH ESI                            ; 005348a1
    PUSH EDI                            ; 005348a2
    PUSH EBP                            ; 005348a3
    SUB ESP,0x10c                       ; 005348a4
    XOR EBP,EBP                         ; 005348aa
    MOV ECX,0x441                       ; 005348ac
    MOV dword ptr [ESP + 0x104],EBP     ; 005348b1
    MOV dword ptr [ESP + 0x108],ECX     ; 005348b8
    MOV EAX,dword ptr [ESP + 0x108]     ; 005348bf
        ;   Label: LAB_005348bf
    MOV EDI,dword ptr [ESP + 0x104]     ; 005348c6
    XOR ESI,ESI                         ; 005348cd
    XOR EBX,EBX                         ; 005348cf
    MOV dword ptr [ESP + 0x100],EAX     ; 005348d1
    XOR EAX,EAX                         ; 005348d8
        ;   Label: LAB_005348d8
    MOV AL,byte ptr [EDI + 0x1e7abe8]   ; 005348da
    MOV EDX,dword ptr [EAX*0x4 + 0x6227d0] ; 005348e0
    PUSH EDX                            ; 005348e7
    PUSH 0x5eca80                       ; 005348e8
    LEA EAX,[ESP + 0x8]                 ; 005348ed
    PUSH EAX                            ; 005348f1
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005348f2
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV ECX,dword ptr [0x01e6c16c]      ; 005348f7 | DAT_01e6c16c
    ADD ESP,0xc                         ; 005348fd
    CMP EBX,ECX                         ; 00534900
    JNZ 0x00534910                      ; 00534902
        ;   XREF to: 00534910 (CONDITIONAL_JUMP)  ; LAB_00534910
    CMP EBP,dword ptr [0x01e6c170]      ; 00534904 | DAT_01e6c170
    JNZ 0x00534910                      ; 0053490a
        ;   XREF to: 00534910 (CONDITIONAL_JUMP)  ; LAB_00534910
    MOV byte ptr [ESP],0x73             ; 0053490c
    CMP EBX,dword ptr [0x01e6c174]      ; 00534910 | DAT_01e6c174
        ;   Label: LAB_00534910
    JNZ 0x00534924                      ; 00534916
        ;   XREF to: 00534924 (CONDITIONAL_JUMP)  ; LAB_00534924
    CMP EBP,dword ptr [0x01e6c178]      ; 00534918 | DAT_01e6c178
    JNZ 0x00534924                      ; 0053491e
        ;   XREF to: 00534924 (CONDITIONAL_JUMP)  ; LAB_00534924
    MOV byte ptr [ESP],0x64             ; 00534920
    MOV EAX,dword ptr [ESP + 0x100]     ; 00534924
        ;   Label: LAB_00534924
    PUSH EAX                            ; 0053492b
    MOV EAX,[0x0061b498]                ; 0053492c | DAT_0061b498
    MOV EDX,EAX                         ; 00534931
    SAR EDX,0x1f                        ; 00534933
    SUB EAX,EDX                         ; 00534936
    SAR EAX,0x1                         ; 00534938
    ADD EAX,ESI                         ; 0053493a
    PUSH EAX                            ; 0053493c
    LEA EAX,[ESP + 0x8]                 ; 0053493d
    INC EDI                             ; 00534941
    PUSH EAX                            ; 00534942
    INC EBX                             ; 00534943
    ADD ESI,0xe                         ; 00534944
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00534947
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053494c
    CMP EBX,0x64                        ; 0053494f
    JL 0x005348d8                       ; 00534952
        ;   XREF to: 005348d8 (CONDITIONAL_JUMP)  ; LAB_005348d8
    MOV ECX,dword ptr [ESP + 0x108]     ; 00534954
    MOV EDX,dword ptr [ESP + 0x104]     ; 0053495b
    INC EBP                             ; 00534962
    SUB ECX,0xb                         ; 00534963
    ADD EDX,0x64                        ; 00534966
    MOV dword ptr [ESP + 0x108],ECX     ; 00534969
    MOV dword ptr [ESP + 0x104],EDX     ; 00534970
    CMP EBP,0x64                        ; 00534977
    JL 0x005348bf                       ; 0053497a
        ;   XREF to: 005348bf (CONDITIONAL_JUMP)  ; LAB_005348bf
    ADD ESP,0x10c                       ; 00534980
    POP EBP                             ; 00534986
    POP EDI                             ; 00534987
    POP ESI                             ; 00534988
    POP EBX                             ; 00534989
    LEA EAX,[EAX]                       ; 0053498a
    RET                                 ; 00534990

