; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aca40(void)
;
;
; XREF[1]:
;   thunk_FUN_005aca40 at 00402ad0
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_02c83370
;   undefined4 DAT_02c99300
;   undefined4 DAT_02c99304
;   undefined4 DAT_02c99308
;   undefined4 DAT_02c9930c
;   undefined4 DAT_02c99318
;   undefined4 DAT_02c9be68
;
; Called Functions:
;   DirectDrawCreate
;   FUN_00582310
;   FUN_005ac300
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005aca40
        ;   Label: FUN_005aca40
    XOR EDX,EDX                         ; 005aca41
    MOV ECX,dword ptr [0x02c83370]      ; 005aca43 | DAT_02c83370
    MOV dword ptr [0x02c99318],EDX      ; 005aca49 | DAT_02c99318
    TEST ECX,ECX                        ; 005aca4f
    JNZ 0x005aca55                      ; 005aca51
        ;   XREF to: 005aca55 (CONDITIONAL_JUMP)  ; LAB_005aca55
    POP EBP                             ; 005aca53
    RET                                 ; 005aca54
    PUSH EDI                            ; 005aca55
        ;   Label: LAB_005aca55
    PUSH ESI                            ; 005aca56
    PUSH EBX                            ; 005aca57
    CALL FUN_00582310                   ; 005aca58
        ;   XREF to: 00582310 (UNCONDITIONAL_CALL)  ; undefined FUN_00582310()
    MOV EBX,dword ptr [0x02c9930c]      ; 005aca5d | DAT_02c9930c
    TEST EBX,EBX                        ; 005aca63
    JZ 0x005aca75                       ; 005aca65
        ;   XREF to: 005aca75 (CONDITIONAL_JUMP)  ; LAB_005aca75
    PUSH EBX                            ; 005aca67
    MOV EDX,dword ptr [EBX]             ; 005aca68
    XOR ESI,ESI                         ; 005aca6a
    CALL dword ptr [EDX + 0x8]          ; 005aca6c
    MOV dword ptr [0x02c9930c],ESI      ; 005aca6f | DAT_02c9930c
    MOV EDI,dword ptr [0x02c99308]      ; 005aca75 | DAT_02c99308
        ;   Label: LAB_005aca75
    TEST EDI,EDI                        ; 005aca7b
    JZ 0x005aca8d                       ; 005aca7d
        ;   XREF to: 005aca8d (CONDITIONAL_JUMP)  ; LAB_005aca8d
    PUSH EDI                            ; 005aca7f
    MOV EDX,dword ptr [EDI]             ; 005aca80
    XOR EBP,EBP                         ; 005aca82
    CALL dword ptr [EDX + 0x8]          ; 005aca84
    MOV dword ptr [0x02c99308],EBP      ; 005aca87 | DAT_02c99308
    MOV EAX,[0x02c99304]                ; 005aca8d | DAT_02c99304
        ;   Label: LAB_005aca8d
    TEST EAX,EAX                        ; 005aca92
    JZ 0x005acaa4                       ; 005aca94
        ;   XREF to: 005acaa4 (CONDITIONAL_JUMP)  ; LAB_005acaa4
    PUSH EAX                            ; 005aca96
    MOV EDX,dword ptr [EAX]             ; 005aca97
    CALL dword ptr [EDX + 0x8]          ; 005aca99
    XOR EDX,EDX                         ; 005aca9c
    MOV dword ptr [0x02c99304],EDX      ; 005aca9e | DAT_02c99304
    MOV ECX,dword ptr [0x02c99300]      ; 005acaa4 | DAT_02c99300
        ;   Label: LAB_005acaa4
    TEST ECX,ECX                        ; 005acaaa
    JZ 0x005acac7                       ; 005acaac
        ;   XREF to: 005acac7 (CONDITIONAL_JUMP)  ; LAB_005acac7
    PUSH ECX                            ; 005acaae
    MOV EDX,dword ptr [ECX]             ; 005acaaf
    CALL dword ptr [EDX + 0x4c]         ; 005acab1
    MOV EAX,[0x02c99300]                ; 005acab4 | DAT_02c99300
    PUSH EAX                            ; 005acab9
    MOV EDX,dword ptr [EAX]             ; 005acaba
    XOR EBX,EBX                         ; 005acabc
    CALL dword ptr [EDX + 0x8]          ; 005acabe
    MOV dword ptr [0x02c99300],EBX      ; 005acac1 | DAT_02c99300
    PUSH 0x0                            ; 005acac7
        ;   Label: LAB_005acac7
    PUSH 0x2c99300                      ; 005acac9 | DAT_02c99300
    PUSH 0x0                            ; 005acace
    CALL DirectDrawCreate               ; 005acad0
        ;   XREF to: 005cf7ba (UNCONDITIONAL_CALL)  ; undefined DirectDrawCreate()
    TEST EAX,EAX                        ; 005acad5
    JNZ 0x005acaed                      ; 005acad7
        ;   XREF to: 005acaed (CONDITIONAL_JUMP)  ; LAB_005acaed
    PUSH 0x11                           ; 005acad9
    MOV ESI,dword ptr [0x02c9be68]      ; 005acadb | DAT_02c9be68
    MOV EAX,[0x02c99300]                ; 005acae1 | DAT_02c99300
    PUSH ESI                            ; 005acae6
    MOV EDX,dword ptr [EAX]             ; 005acae7
    PUSH EAX                            ; 005acae9
    CALL dword ptr [EDX + 0x50]         ; 005acaea
    MOV EDI,dword ptr [0x0061b4a0]      ; 005acaed | DAT_0061b4a0
        ;   Label: LAB_005acaed
    PUSH EDI                            ; 005acaf3
    MOV EBP,dword ptr [0x0061b49c]      ; 005acaf4 | DAT_0061b49c
    PUSH EBP                            ; 005acafa
    MOV EAX,[0x0061b498]                ; 005acafb | DAT_0061b498
    PUSH EAX                            ; 005acb00
    CALL FUN_005ac300                   ; 005acb01
        ;   XREF to: 005ac300 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac300()
    ADD ESP,0xc                         ; 005acb06
    POP EBX                             ; 005acb09
    POP ESI                             ; 005acb0a
    POP EDI                             ; 005acb0b
    POP EBP                             ; 005acb0c
    RET                                 ; 005acb0d

