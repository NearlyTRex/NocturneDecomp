; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_terrain_cpp_FUN_0057cc20(int *param_1,undefined1 *param_2,int param_3)
;
;
; XREF[2]:
;   engine_font.cpp_FUN_004a859e at 004a8641
;   sound_sndmain.cpp_FUN_0054bac0 at 0054bc4a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057cc20
        ;   Label: core_terrain.cpp_FUN_0057cc20
    PUSH ESI                            ; 0057cc21
    PUSH EDI                            ; 0057cc22
    PUSH EBP                            ; 0057cc23
    MOV EDI,dword ptr [ESP + 0x14]      ; 0057cc24
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0057cc28
    MOV EBX,dword ptr [ESP + 0x18]      ; 0057cc2c
    XOR ESI,ESI                         ; 0057cc30
    DEC EBP                             ; 0057cc32
    PUSH EDI                            ; 0057cc33
        ;   Label: LAB_0057cc33
    MOV EAX,dword ptr [EDI]             ; 0057cc34
    CALL dword ptr [EAX + 0x4]          ; 0057cc36
    ADD ESP,0x4                         ; 0057cc39
    MOV EDX,EAX                         ; 0057cc3c
    CMP EAX,-0x1                        ; 0057cc3e
    JZ 0x0057cc5b                       ; 0057cc41
        ;   XREF to: 0057cc5b (CONDITIONAL_JUMP)  ; LAB_0057cc5b
    TEST EAX,EAX                        ; 0057cc43
    JL 0x0057cc66                       ; 0057cc45
        ;   XREF to: 0057cc66 (CONDITIONAL_JUMP)  ; LAB_0057cc66
    CMP EAX,0xd                         ; 0057cc47
    JZ 0x0057cc33                       ; 0057cc4a
        ;   XREF to: 0057cc33 (CONDITIONAL_JUMP)  ; LAB_0057cc33
    CMP EAX,0xa                         ; 0057cc4c
    JNZ 0x0057cc6d                      ; 0057cc4f
        ;   XREF to: 0057cc6d (CONDITIONAL_JUMP)  ; LAB_0057cc6d
    MOV byte ptr [EBX],0x0              ; 0057cc51
        ;   Label: LAB_0057cc51
    MOV EAX,ESI                         ; 0057cc54
        ;   Label: LAB_0057cc54
    POP EBP                             ; 0057cc56
    POP EDI                             ; 0057cc57
    POP ESI                             ; 0057cc58
    POP EBX                             ; 0057cc59
    RET                                 ; 0057cc5a
    MOV byte ptr [EBX],0x0              ; 0057cc5b
        ;   Label: LAB_0057cc5b
    TEST ESI,ESI                        ; 0057cc5e
    JNZ 0x0057cc54                      ; 0057cc60
        ;   XREF to: 0057cc54 (CONDITIONAL_JUMP)  ; LAB_0057cc54
    MOV ESI,EAX                         ; 0057cc62
    JMP 0x0057cc54                      ; 0057cc64
        ;   XREF to: 0057cc54 (UNCONDITIONAL_JUMP)  ; LAB_0057cc54
    MOV ESI,0xfffffffe                  ; 0057cc66
        ;   Label: LAB_0057cc66
    JMP 0x0057cc51                      ; 0057cc6b
        ;   XREF to: 0057cc51 (UNCONDITIONAL_JUMP)  ; LAB_0057cc51
    CMP ESI,EBP                         ; 0057cc6d
        ;   Label: LAB_0057cc6d
    JGE 0x0057cc33                      ; 0057cc6f
        ;   XREF to: 0057cc33 (CONDITIONAL_JUMP)  ; LAB_0057cc33
    INC EBX                             ; 0057cc71
    INC ESI                             ; 0057cc72
    MOV byte ptr [EBX + -0x1],DL        ; 0057cc73
    JMP 0x0057cc33                      ; 0057cc76
        ;   XREF to: 0057cc33 (UNCONDITIONAL_JUMP)  ; LAB_0057cc33

