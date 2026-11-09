; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * unkafter_asgaya_cpp_FUN_005ad480(uint param_1,char *param_2,uint param_3)
;
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
; undefined        Stack[-0x37]:1  local_37
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_unknown.c_FUN_005a6a78 at 005a6ee1
;   unkafter_asgaya.cpp_FUN_005ad4d4 at 005ad4f7
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdefghijkl_00607db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad480
        ;   Label: unkafter_asgaya.cpp_FUN_005ad480
    PUSH ESI                            ; 005ad481
    PUSH EDI                            ; 005ad482
    PUSH EBP                            ; 005ad483
    SUB ESP,0x28                        ; 005ad484
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005ad487
    MOV EBP,dword ptr [ESP + 0x40]      ; 005ad48b
    MOV EDI,dword ptr [ESP + 0x44]      ; 005ad48f
    LEA ECX,[ESP + 0x1]                 ; 005ad493
    XOR DL,DL                           ; 005ad497
    MOV ESI,EBP                         ; 005ad499
    MOV byte ptr [ESP],DL               ; 005ad49b
    LEA EBX,[ESP + 0x24]                ; 005ad49e
        ;   Label: LAB_005ad49e
    MOV dword ptr [ESP + 0x24],EDI      ; 005ad4a2
    XOR EDX,EDX                         ; 005ad4a6
    DIV dword ptr [EBX]                 ; 005ad4a8
    MOV dword ptr [EBX],EDX             ; 005ad4aa
    MOV EBX,dword ptr [ESP + 0x24]      ; 005ad4ac
    INC ECX                             ; 005ad4b0
    MOV BL,byte ptr [EBX + 0x607db0]    ; 005ad4b1 | = "0123456789abcdefghijklmnopqrstuvwxyz"
    MOV byte ptr [ECX + -0x1],BL        ; 005ad4b7
    TEST EAX,EAX                        ; 005ad4ba
    JNZ 0x005ad49e                      ; 005ad4bc
        ;   XREF to: 005ad49e (CONDITIONAL_JUMP)  ; LAB_005ad49e
    INC ESI                             ; 005ad4be
        ;   Label: LAB_005ad4be
    MOV AL,byte ptr [ECX + -0x1]        ; 005ad4bf
    DEC ECX                             ; 005ad4c2
    MOV byte ptr [ESI + -0x1],AL        ; 005ad4c3
    TEST AL,AL                          ; 005ad4c6
    JNZ 0x005ad4be                      ; 005ad4c8
        ;   XREF to: 005ad4be (CONDITIONAL_JUMP)  ; LAB_005ad4be
    MOV EAX,EBP                         ; 005ad4ca
    ADD ESP,0x28                        ; 005ad4cc
    POP EBP                             ; 005ad4cf
    POP EDI                             ; 005ad4d0
    POP ESI                             ; 005ad4d1
    POP EBX                             ; 005ad4d2
    RET                                 ; 005ad4d3

