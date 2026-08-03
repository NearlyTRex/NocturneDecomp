; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl crt_unknown_c_OpenFileAndInitialize_FUN_0056551c(char *filename,char mode_char,int parsed_mode_flags,int stage1_result,int additional_flags,_FILE *file_struct)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char             Stack[0x8]:1   mode_char
; int              Stack[0xc]:4   parsed_mode_flags
; int              Stack[0x10]:4   stage1_result
; int              Stack[0x14]:4   additional_flags
; _FILE *          Stack[0x18]:4   file_struct
;
; XREF[2]:
;   crt_stdio.c_freopen_FUN_00565724 at 00565798
;   crt_unknown.c_fopenWithFlags_FUN_00565630 at 00565676
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_00564860
;   crt_stdio.c___freefp_FUN_00568620
;   crt_stdio.c_CreateFileVariadic_FUN_0056b934
;   crt_stdio.c_DetectDeviceAndSetBuffering_FUN_0056bbb0
;   crt_stdio.c_fseek_FUN_0056582c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056551c
        ;   Label: crt_unknown.c_OpenFileAndInitialize_FUN_0056551c
    PUSH ESI                            ; 0056551d
    PUSH EDI                            ; 0056551e
    PUSH EBP                            ; 0056551f
    MOV EBX,dword ptr [ESP + 0x28]      ; 00565520
    AND byte ptr [EBX + 0xc],0xfc       ; 00565524
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00565528
    MOV EDX,dword ptr [EBX + 0xc]       ; 0056552c
    OR EDX,EAX                          ; 0056552f
    XOR EAX,EAX                         ; 00565531
    MOV AL,byte ptr [ESP + 0x18]        ; 00565533
    PUSH EAX                            ; 00565537
    MOV dword ptr [EBX + 0xc],EDX       ; 00565538
    CALL crt_ctype.c_tolower_FUN_00564860 ; 0056553b
        ;   XREF to: 00564860 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_00564860(int character)
    ADD ESP,0x4                         ; 00565540
    CMP AL,0x72                         ; 00565543
    JNZ 0x00565575                      ; 00565545
        ;   XREF to: 00565575 (CONDITIONAL_JUMP)  ; LAB_00565575
    MOV CH,byte ptr [ESP + 0x1c]        ; 00565547
    XOR EAX,EAX                         ; 0056554b
    TEST CH,0x2                         ; 0056554d
    JZ 0x00565557                       ; 00565550
        ;   XREF to: 00565557 (CONDITIONAL_JUMP)  ; LAB_00565557
    MOV EAX,0x2                         ; 00565552
    TEST byte ptr [ESP + 0x1c],0x40     ; 00565557
        ;   Label: LAB_00565557
    JZ 0x00565563                       ; 0056555c
        ;   XREF to: 00565563 (CONDITIONAL_JUMP)  ; LAB_00565563
    OR AH,0x2                           ; 0056555e
    JMP 0x00565566                      ; 00565561
        ;   XREF to: 00565566 (UNCONDITIONAL_JUMP)  ; LAB_00565566
    OR AH,0x1                           ; 00565563
        ;   Label: LAB_00565563
    PUSH 0x0                            ; 00565566
        ;   Label: LAB_00565566
    MOV EDI,dword ptr [ESP + 0x28]      ; 00565568
    PUSH EDI                            ; 0056556c
    PUSH EAX                            ; 0056556d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0056556e
    PUSH EBP                            ; 00565572
    JMP 0x005655b1                      ; 00565573
        ;   XREF to: 005655b1 (UNCONDITIONAL_JUMP)  ; LAB_005655b1
    MOV DL,byte ptr [ESP + 0x1c]        ; 00565575
        ;   Label: LAB_00565575
    TEST DL,0x1                         ; 00565579
    SETNZ AL                            ; 0056557c
    AND EAX,0xff                        ; 0056557f
    ADD EAX,0x21                        ; 00565584
    TEST DL,0x80                        ; 00565587
    JZ 0x00565590                       ; 0056558a
        ;   XREF to: 00565590 (CONDITIONAL_JUMP)  ; LAB_00565590
    OR AL,0x10                          ; 0056558c
    JMP 0x00565592                      ; 0056558e
        ;   XREF to: 00565592 (UNCONDITIONAL_JUMP)  ; LAB_00565592
    OR AL,0x40                          ; 00565590
        ;   Label: LAB_00565590
    TEST byte ptr [ESP + 0x1c],0x40     ; 00565592
        ;   Label: LAB_00565592
    JZ 0x0056559e                       ; 00565597
        ;   XREF to: 0056559e (CONDITIONAL_JUMP)  ; LAB_0056559e
    OR AH,0x2                           ; 00565599
    JMP 0x005655a1                      ; 0056559c
        ;   XREF to: 005655a1 (UNCONDITIONAL_JUMP)  ; LAB_005655a1
    OR AH,0x1                           ; 0056559e
        ;   Label: LAB_0056559e
    PUSH 0x180                          ; 005655a1
        ;   Label: LAB_005655a1
    MOV ECX,dword ptr [ESP + 0x28]      ; 005655a6
    PUSH ECX                            ; 005655aa
    PUSH EAX                            ; 005655ab
    MOV ESI,dword ptr [ESP + 0x20]      ; 005655ac
    PUSH ESI                            ; 005655b0
    CALL crt_stdio.c_CreateFileVariadic_FUN_0056b934 ; 005655b1
        ;   XREF to: 0056b934 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_CreateFileVariadic_FUN_0056b934(char * filename, int access_mode, int share_mode)
        ;   Label: LAB_005655b1
    ADD ESP,0x10                        ; 005655b6
    MOV dword ptr [EBX + 0x10],EAX      ; 005655b9
    CMP dword ptr [EBX + 0x10],-0x1     ; 005655bc
    JNZ 0x005655d2                      ; 005655c0
        ;   XREF to: 005655d2 (CONDITIONAL_JUMP)  ; LAB_005655d2
    PUSH EBX                            ; 005655c2
    CALL crt_stdio.c___freefp_FUN_00568620 ; 005655c3
        ;   XREF to: 00568620 (UNCONDITIONAL_CALL)  ; void crt_stdio.c___freefp_FUN_00568620(_FILE * file_handle)
    ADD ESP,0x4                         ; 005655c8
    XOR EAX,EAX                         ; 005655cb
    POP EBP                             ; 005655cd
    POP EDI                             ; 005655ce
    POP ESI                             ; 005655cf
    POP EBX                             ; 005655d0
    RET                                 ; 005655d1
    MOV dword ptr [EBX + 0x4],0x0       ; 005655d2
        ;   Label: LAB_005655d2
    MOV EAX,dword ptr [EBX + 0x8]       ; 005655d9
    MOV dword ptr [EBX + 0x14],0x0      ; 005655dc
    MOV dword ptr [EAX + 0xc],0x0       ; 005655e3
    MOV EAX,dword ptr [EBX + 0x8]       ; 005655ea
    MOV EDX,dword ptr [ESP + 0x20]      ; 005655ed
    MOV dword ptr [EAX + 0x10],EDX      ; 005655f1
    MOV EAX,dword ptr [EBX + 0x8]       ; 005655f4
    MOV dword ptr [EAX + 0x15],0x0      ; 005655f7
    MOV EAX,dword ptr [EBX + 0x8]       ; 005655fe
    MOV DH,byte ptr [ESP + 0x1c]        ; 00565601
    MOV dword ptr [EAX + 0x8],0x0       ; 00565605
    TEST DH,0x80                        ; 0056560c
    JZ 0x0056561e                       ; 0056560f
        ;   XREF to: 0056561e (CONDITIONAL_JUMP)  ; LAB_0056561e
    PUSH 0x2                            ; 00565611
    PUSH 0x0                            ; 00565613
    PUSH EBX                            ; 00565615
    CALL crt_stdio.c_fseek_FUN_0056582c ; 00565616
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0056561b
    PUSH EBX                            ; 0056561e
        ;   Label: LAB_0056561e
    CALL crt_stdio.c_DetectDeviceAndSetBuffering_FUN_0056bbb0 ; 0056561f
        ;   XREF to: 0056bbb0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_DetectDeviceAndSetBuffering_FUN_0056bbb0(_FILE * file)
    ADD ESP,0x4                         ; 00565624
    MOV EAX,EBX                         ; 00565627
    POP EBP                             ; 00565629
    POP EDI                             ; 0056562a
    POP ESI                             ; 0056562b
    POP EBX                             ; 0056562c
    RET                                 ; 0056562d

