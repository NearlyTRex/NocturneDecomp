; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005698b0(ushort *param_1,undefined4 param_2,int param_3,code *param_4)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_00569040 at 00569352
;
; Called Functions:
;   crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005698b0
        ;   Label: crt_unknown.c_FUN_005698b0
    PUSH ESI                            ; 005698b1
    PUSH EDI                            ; 005698b2
    PUSH ES                             ; 005698b3
    PUSH EBP                            ; 005698b4
    SUB ESP,0x4                         ; 005698b5
    MOV EBX,dword ptr [ESP + 0x24]      ; 005698b8
    MOV ES,word ptr [ESP + 0x20]        ; 005698bc
    MOV EDX,dword ptr [EBX + 0x28]      ; 005698c0
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005698c3
    TEST EDX,EDX                        ; 005698c7
    JLE 0x0056991d                      ; 005698c9
        ;   XREF to: 0056991d (CONDITIONAL_JUMP)  ; LAB_0056991d
    XOR EAX,EAX                         ; 005698cb
        ;   Label: LAB_005698cb
    MOV AX,word ptr ES:[EBP]            ; 005698cd
    PUSH EAX                            ; 005698d2
    LEA EAX,[ESP + 0x4]                 ; 005698d3
    PUSH EAX                            ; 005698d7
    ADD EBP,0x2                         ; 005698d8
    CALL crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0 ; 005698db
        ;   XREF to: 0056f3a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0(wchar_t wide_char, char * output_buffer)
    ADD ESP,0x8                         ; 005698e0
    MOV ESI,EAX                         ; 005698e3
    CMP EAX,-0x1                        ; 005698e5
    JZ 0x005698f7                       ; 005698e8
        ;   XREF to: 005698f7 (CONDITIONAL_JUMP)  ; LAB_005698f7
    CMP EAX,dword ptr [EBX + 0x28]      ; 005698ea
    JG 0x00569916                       ; 005698ed
        ;   XREF to: 00569916 (CONDITIONAL_JUMP)  ; LAB_00569916
    MOV EDI,ESP                         ; 005698ef
    DEC ESI                             ; 005698f1
        ;   Label: LAB_005698f1
    CMP ESI,-0x1                        ; 005698f2
    JNZ 0x005698ff                      ; 005698f5
        ;   XREF to: 005698ff (CONDITIONAL_JUMP)  ; LAB_005698ff
    CMP dword ptr [EBX + 0x28],0x0      ; 005698f7
        ;   Label: LAB_005698f7
    JG 0x005698cb                       ; 005698fb
        ;   XREF to: 005698cb (CONDITIONAL_JUMP)  ; LAB_005698cb
    JMP 0x0056991d                      ; 005698fd
        ;   XREF to: 0056991d (UNCONDITIONAL_JUMP)  ; LAB_0056991d
    XOR EAX,EAX                         ; 005698ff
        ;   Label: LAB_005698ff
    MOV AL,byte ptr [EDI]               ; 00569901
    PUSH EAX                            ; 00569903
    PUSH EBX                            ; 00569904
    CALL dword ptr [ESP + 0x30]         ; 00569905
    MOV EAX,dword ptr [EBX + 0x28]      ; 00569909
    INC EDI                             ; 0056990c
    DEC EAX                             ; 0056990d
    ADD ESP,0x8                         ; 0056990e
    MOV dword ptr [EBX + 0x28],EAX      ; 00569911
    JMP 0x005698f1                      ; 00569914
        ;   XREF to: 005698f1 (UNCONDITIONAL_JUMP)  ; LAB_005698f1
    MOV dword ptr [EBX + 0x28],0x0      ; 00569916
        ;   Label: LAB_00569916
    ADD ESP,0x4                         ; 0056991d
        ;   Label: LAB_0056991d
    POP EBP                             ; 00569920
    POP ES                              ; 00569921
    POP EDI                             ; 00569922
    POP ESI                             ; 00569923
    POP EBX                             ; 00569924
    RET                                 ; 00569925

