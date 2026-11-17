; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_005257d0(int layer,int mode_extension)
;
; Parameters:
; int              Stack[0x4]:4   layer
; int              Stack[0x8]:4   mode_extension
;
; Referenced Globals:
;   char* g_CHAR_PTR_01d1d400
;   int g_INT_01d1d404
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005257d0
        ;   Label: sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_005257d0
    PUSH ESI                            ; 005257d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005257d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005257d6
    CMP EBX,0x1                         ; 005257da
    JL 0x005257ff                       ; 005257dd
        ;   XREF to: 005257ff (CONDITIONAL_JUMP)  ; LAB_005257ff
    CMP EBX,0x3                         ; 005257df
    JG 0x005257ff                       ; 005257e2
        ;   XREF to: 005257ff (CONDITIONAL_JUMP)  ; LAB_005257ff
    TEST ESI,ESI                        ; 005257e4
    JL 0x005257ff                       ; 005257e6
        ;   XREF to: 005257ff (CONDITIONAL_JUMP)  ; LAB_005257ff
    CMP ESI,0x3                         ; 005257e8
    JG 0x005257ff                       ; 005257eb
        ;   XREF to: 005257ff (CONDITIONAL_JUMP)  ; LAB_005257ff
    SHL ESI,0x2                         ; 005257ed
    SHL EBX,0x4                         ; 005257f0
    LEA EAX,[EBX + ESI*0x1]             ; 005257f3
    MOV EAX,dword ptr [EAX + 0x61f8f0]  ; 005257f6
    POP ESI                             ; 005257fc
    POP EBX                             ; 005257fd
    RET                                 ; 005257fe
    PUSH 0x1d404c8                      ; 005257ff
        ;   Label: LAB_005257ff
    PUSH ESI                            ; 00525804
    PUSH EBX                            ; 00525805
    MOV EDX,0x5eb100                    ; 00525806
    MOV ECX,0x1ea                       ; 0052580b
    PUSH 0x5eb111                       ; 00525810
    MOV dword ptr [0x01d1d400],EDX      ; 00525815 | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0052581b | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 00525821
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x10                        ; 00525826
    SHL ESI,0x2                         ; 00525829
    SHL EBX,0x4                         ; 0052582c
    LEA EAX,[EBX + ESI*0x1]             ; 0052582f
    MOV EAX,dword ptr [EAX + 0x61f8f0]  ; 00525832
    POP ESI                             ; 00525838
    POP EBX                             ; 00525839
    RET                                 ; 0052583a

