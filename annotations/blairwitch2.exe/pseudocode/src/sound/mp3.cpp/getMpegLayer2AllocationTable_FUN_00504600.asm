; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_00504600(int layer,int mode_extension)
;
; Parameters:
; int              Stack[0x4]:4   layer
; int              Stack[0x8]:4   mode_extension
;
; Referenced Globals:
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504600
        ;   Label: sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_00504600
    PUSH ESI                            ; 00504601
    MOV EBX,dword ptr [ESP + 0xc]       ; 00504602
    MOV ESI,dword ptr [ESP + 0x10]      ; 00504606
    CMP EBX,0x1                         ; 0050460a
    JL 0x0050462f                       ; 0050460d
        ;   XREF to: 0050462f (CONDITIONAL_JUMP)  ; LAB_0050462f
    CMP EBX,0x3                         ; 0050460f
    JG 0x0050462f                       ; 00504612
        ;   XREF to: 0050462f (CONDITIONAL_JUMP)  ; LAB_0050462f
    TEST ESI,ESI                        ; 00504614
    JL 0x0050462f                       ; 00504616
        ;   XREF to: 0050462f (CONDITIONAL_JUMP)  ; LAB_0050462f
    CMP ESI,0x3                         ; 00504618
    JG 0x0050462f                       ; 0050461b
        ;   XREF to: 0050462f (CONDITIONAL_JUMP)  ; LAB_0050462f
    SHL ESI,0x2                         ; 0050461d
    SHL EBX,0x4                         ; 00504620
    LEA EAX,[EBX + ESI*0x1]             ; 00504623
    MOV EAX,dword ptr [EAX + 0x618490]  ; 00504626
    POP ESI                             ; 0050462c
    POP EBX                             ; 0050462d
    RET                                 ; 0050462e
    PUSH 0x1d23558                      ; 0050462f
        ;   Label: LAB_0050462f
    PUSH ESI                            ; 00504634
    PUSH EBX                            ; 00504635
    MOV EDX,0x5dfea5                    ; 00504636
    MOV ECX,0x1ea                       ; 0050463b
    PUSH 0x5dfeb6                       ; 00504640
    MOV dword ptr [0x01d046a0],EDX      ; 00504645 | g_CurrentFilename
    MOV dword ptr [0x01d046a4],ECX      ; 0050464b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 00504651
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x10                        ; 00504656
    SHL ESI,0x2                         ; 00504659
    SHL EBX,0x4                         ; 0050465c
    LEA EAX,[EBX + ESI*0x1]             ; 0050465f
    MOV EAX,dword ptr [EAX + 0x618490]  ; 00504662
    POP ESI                             ; 00504668
    POP EBX                             ; 00504669
    RET                                 ; 0050466a

