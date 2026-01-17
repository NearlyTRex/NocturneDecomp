; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0(HANDLE hConsoleInput)
;
; Parameters:
; typedef HANDLE void * Stack[0x4]:4   hConsoleInput
; Local Variables:
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8 at 0060b458
;
; Referenced Globals:
;   ReadConsoleInputA* g_ReadConsoleInputAFunc = 002120de
;   int g_ConsoleInputState = 0x0
;   int g_BufferedCharacter
;   int g_BufferedVirtualKey
;   int g_BufferedRepeatCount
;
; Called Functions:
;   crt_stdio.c_IsRelevantKeyEvent_FUN_0060cd90
;   ReadConsoleInputA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060b2e0
        ;   Label: crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0
    PUSH ESI                            ; 0060b2e1
    PUSH EDI                            ; 0060b2e2
    PUSH EBP                            ; 0060b2e3
    SUB ESP,0x18                        ; 0060b2e4
    MOV ESI,dword ptr [0x03f9c148]      ; 0060b2e7 | g_BufferedRepeatCount
    MOV EDI,dword ptr [0x03f9c144]      ; 0060b2ed | g_BufferedVirtualKey
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0060b2f3
    MOV EAX,[0x00685470]                ; 0060b2f7 | g_ConsoleInputState
    CMP EAX,0x1                         ; 0060b2fc
    JC 0x0060b345                       ; 0060b2ff
        ;   XREF to: 0060b345 (CONDITIONAL_JUMP)  ; LAB_0060b345
    JBE 0x0060b30a                      ; 0060b301
        ;   XREF to: 0060b30a (CONDITIONAL_JUMP)  ; LAB_0060b30a
    CMP EAX,0x2                         ; 0060b303
    JZ 0x0060b32c                       ; 0060b306
        ;   XREF to: 0060b32c (CONDITIONAL_JUMP)  ; LAB_0060b32c
    JMP 0x0060b345                      ; 0060b308
        ;   XREF to: 0060b345 (UNCONDITIONAL_JUMP)  ; LAB_0060b345
    DEC ESI                             ; 0060b30a
        ;   Label: LAB_0060b30a
    TEST EDI,EDI                        ; 0060b30b
    JZ 0x0060b31b                       ; 0060b30d
        ;   XREF to: 0060b31b (CONDITIONAL_JUMP)  ; LAB_0060b31b
    TEST ESI,ESI                        ; 0060b30f
    JNZ 0x0060b325                      ; 0060b311
        ;   XREF to: 0060b325 (CONDITIONAL_JUMP)  ; LAB_0060b325
    MOV dword ptr [0x00685470],ESI      ; 0060b313 | g_ConsoleInputState
    JMP 0x0060b325                      ; 0060b319
        ;   XREF to: 0060b325 (UNCONDITIONAL_JUMP)  ; LAB_0060b325
    MOV dword ptr [0x00685470],0x2      ; 0060b31b | g_ConsoleInputState
        ;   Label: LAB_0060b31b
    MOV EAX,EDI                         ; 0060b325
        ;   Label: LAB_0060b325
    JMP 0x0060b3e4                      ; 0060b327
        ;   XREF to: 0060b3e4 (UNCONDITIONAL_JUMP)  ; LAB_0060b3e4
    TEST ESI,ESI                        ; 0060b32c
        ;   Label: LAB_0060b32c
    SETNZ AL                            ; 0060b32e
    AND EAX,0xff                        ; 0060b331
    MOV [0x00685470],EAX                ; 0060b336 | g_ConsoleInputState
    MOV EAX,[0x03f9c140]                ; 0060b33b | g_BufferedCharacter
    JMP 0x0060b3e4                      ; 0060b340
        ;   XREF to: 0060b3e4 (UNCONDITIONAL_JUMP)  ; LAB_0060b3e4
    MOV dword ptr [0x03f9c148],ESI      ; 0060b345 | g_BufferedRepeatCount
        ;   Label: LAB_0060b345
    MOV dword ptr [0x03f9c144],EDI      ; 0060b34b | g_BufferedVirtualKey
    LEA EAX,[ESP + 0x14]                ; 0060b351
        ;   Label: LAB_0060b351
    PUSH EAX                            ; 0060b355
    PUSH 0x1                            ; 0060b356
    LEA EAX,[ESP + 0x8]                 ; 0060b358
    PUSH EAX                            ; 0060b35c
    PUSH EBX                            ; 0060b35d
    CALL dword ptr CS:[0x611600]        ; 0060b35e | g_ReadConsoleInputAFunc
    TEST EAX,EAX                        ; 0060b365
    JZ 0x0060b3d3                       ; 0060b367
        ;   XREF to: 0060b3d3 (CONDITIONAL_JUMP)  ; LAB_0060b3d3
    MOV EAX,ESP                         ; 0060b369
    PUSH EAX                            ; 0060b36b
    CALL crt_stdio.c_IsRelevantKeyEvent_FUN_0060cd90 ; 0060b36c
        ;   XREF to: 0060cd90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_IsRelevantKeyEvent_FUN_0060cd90(_INPUT_RECORD * pInputRecord)
    ADD ESP,0x4                         ; 0060b371
    TEST EAX,EAX                        ; 0060b374
    JZ 0x0060b351                       ; 0060b376
        ;   XREF to: 0060b351 (CONDITIONAL_JUMP)  ; LAB_0060b351
    XOR EAX,EAX                         ; 0060b378
    MOV AX,word ptr [ESP + 0x8]         ; 0060b37a
    LEA ESI,[EAX + -0x1]                ; 0060b37f
    MOV AH,byte ptr [ESP + 0x11]        ; 0060b382
    MOVZX EDI,byte ptr [ESP + 0xe]      ; 0060b386
    TEST AH,0x1                         ; 0060b38b
    JNZ 0x0060b394                      ; 0060b38e
        ;   XREF to: 0060b394 (CONDITIONAL_JUMP)  ; LAB_0060b394
    TEST EDI,EDI                        ; 0060b390
    JNZ 0x0060b3af                      ; 0060b392
        ;   XREF to: 0060b3af (CONDITIONAL_JUMP)  ; LAB_0060b3af
    MOV EBP,0x2                         ; 0060b394
        ;   Label: LAB_0060b394
    XOR EAX,EAX                         ; 0060b399
    XOR EDI,EDI                         ; 0060b39b
    MOV AX,word ptr [ESP + 0xc]         ; 0060b39d
    MOV dword ptr [0x00685470],EBP      ; 0060b3a2 | g_ConsoleInputState
    MOV [0x03f9c140],EAX                ; 0060b3a8 | g_BufferedCharacter
    JMP 0x0060b3bd                      ; 0060b3ad
        ;   XREF to: 0060b3bd (UNCONDITIONAL_JUMP)  ; LAB_0060b3bd
    TEST ESI,ESI                        ; 0060b3af
        ;   Label: LAB_0060b3af
    JZ 0x0060b3bd                       ; 0060b3b1
        ;   XREF to: 0060b3bd (CONDITIONAL_JUMP)  ; LAB_0060b3bd
    MOV dword ptr [0x00685470],0x1      ; 0060b3b3 | g_ConsoleInputState
    MOV EAX,EDI                         ; 0060b3bd
        ;   Label: LAB_0060b3bd
    MOV dword ptr [0x03f9c144],EDI      ; 0060b3bf | g_BufferedVirtualKey
    MOV dword ptr [0x03f9c148],ESI      ; 0060b3c5 | g_BufferedRepeatCount
    ADD ESP,0x18                        ; 0060b3cb
    POP EBP                             ; 0060b3ce
    POP EDI                             ; 0060b3cf
    POP ESI                             ; 0060b3d0
    POP EBX                             ; 0060b3d1
    RET                                 ; 0060b3d2
    MOV EAX,0xffffffff                  ; 0060b3d3
        ;   Label: LAB_0060b3d3
    MOV EDI,dword ptr [0x03f9c144]      ; 0060b3d8 | g_BufferedVirtualKey
    MOV ESI,dword ptr [0x03f9c148]      ; 0060b3de | g_BufferedRepeatCount
    MOV dword ptr [0x03f9c144],EDI      ; 0060b3e4 | g_BufferedVirtualKey
        ;   Label: LAB_0060b3e4
    MOV dword ptr [0x03f9c148],ESI      ; 0060b3ea | g_BufferedRepeatCount
    ADD ESP,0x18                        ; 0060b3f0
    POP EBP                             ; 0060b3f3
    POP EDI                             ; 0060b3f4
    POP ESI                             ; 0060b3f5
    POP EBX                             ; 0060b3f6
    RET                                 ; 0060b3f7

