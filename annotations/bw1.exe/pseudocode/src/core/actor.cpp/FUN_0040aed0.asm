; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040aed0(char *param_1,int param_2)
;
; Local Variables:
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0x78]:1  local_78
; undefined1       Stack[-0x77]:1  local_77
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004f97a0 at 004f996c
;   FUN_0051a4f0 at 0051a890
;
; Referenced Globals:
;   TerminatedCString s_s_005d28a8
;   TerminatedCString s_core_actor_cpp_005d28b7
;   TerminatedCString s_Start_of_actor_file_tag_005d28c9
;   TerminatedCString s_s_005d28f7
;   TerminatedCString s_core_actor_cpp_005d2906
;   TerminatedCString s_End_of_actor_file_tag_mi_005d2918
;   TerminatedCString s_core_actor_cpp_005d294e
;   TerminatedCString s_IO_Error_after_reading_s_005d2960
;   undefined4 DAT_007c3034
;   undefined4 DAT_007c3038
;   undefined4 DAT_007c303c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00408830
;   FUN_005030e0
;   FUN_005c04b0
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040aed0
        ;   Label: FUN_0040aed0
    PUSH ESI                            ; 0040aed1
    PUSH EDI                            ; 0040aed2
    PUSH EBP                            ; 0040aed3
    SUB ESP,0xcc                        ; 0040aed4
    MOV EBX,dword ptr [ESP + 0xe0]      ; 0040aeda
    PUSH EBX                            ; 0040aee1
    CALL FUN_00408830                   ; 0040aee2
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    MOV ESI,EAX                         ; 0040aee7
    ADD ESP,0x4                         ; 0040aee9
    MOV EBP,EAX                         ; 0040aeec
    XOR AH,AH                           ; 0040aeee
    MOV byte ptr [ESP],AH               ; 0040aef0
    MOV byte ptr [ESP + 0x64],AH        ; 0040aef3
    LEA EAX,[ESP + 0x64]                ; 0040aef7
    PUSH EAX                            ; 0040aefb
    LEA EAX,[ESP + 0x4]                 ; 0040aefc
    PUSH EAX                            ; 0040af00
    PUSH 0x5d28a8                       ; 0040af01 | = " { %s \"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0040af06
    PUSH EDX                            ; 0040af0d
    CALL FUN_005c04b0                   ; 0040af0e
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0x10                        ; 0040af13
    MOV EAX,ESP                         ; 0040af16
    PUSH EAX                            ; 0040af18
    PUSH ESI                            ; 0040af19
    CALL FUN_005c04e0                   ; 0040af1a
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0040af1f
    TEST EAX,EAX                        ; 0040af22
    JNZ 0x0040b01f                      ; 0040af24
        ;   XREF to: 0040b01f (CONDITIONAL_JUMP)  ; LAB_0040b01f
    LEA ESI,[ESP + 0x64]                ; 0040af2a
        ;   Label: LAB_0040af2a
    MOV EDI,EBX                         ; 0040af2e
    PUSH EDI                            ; 0040af30
    MOV AL,byte ptr [ESI]               ; 0040af31
        ;   Label: LAB_0040af31
    MOV byte ptr [EDI],AL               ; 0040af33
    CMP AL,0x0                          ; 0040af35
    JZ 0x0040af49                       ; 0040af37
        ;   XREF to: 0040af49 (CONDITIONAL_JUMP)  ; LAB_0040af49
    MOV AL,byte ptr [ESI + 0x1]         ; 0040af39
    ADD ESI,0x2                         ; 0040af3c
    MOV byte ptr [EDI + 0x1],AL         ; 0040af3f
    ADD EDI,0x2                         ; 0040af42
    CMP AL,0x0                          ; 0040af45
    JNZ 0x0040af31                      ; 0040af47
        ;   XREF to: 0040af31 (CONDITIONAL_JUMP)  ; LAB_0040af31
    POP EDI                             ; 0040af49
        ;   Label: LAB_0040af49
    MOV EAX,[0x007c3034]                ; 0040af4a | DAT_007c3034
    MOV dword ptr [ESP + 0xc8],EAX      ; 0040af4f
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0040af56
    MOV EDI,dword ptr [0x007c3038]      ; 0040af5d | DAT_007c3038
    MOV [0x007c3034],EAX                ; 0040af63 | DAT_007c3034
    MOV EAX,0x1                         ; 0040af68
    PUSH EBX                            ; 0040af6d
    MOV [0x007c3038],EAX                ; 0040af6e | DAT_007c3038
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040af73
    MOV ESI,dword ptr [0x007c303c]      ; 0040af79 | DAT_007c303c
    MOV dword ptr [0x007c303c],EBX      ; 0040af7f | DAT_007c303c
    CALL dword ptr [EAX + 0xd4]         ; 0040af85
    ADD ESP,0x4                         ; 0040af8b
    LEA EAX,[ESP + 0x64]                ; 0040af8e
    PUSH EAX                            ; 0040af92
    LEA EAX,[ESP + 0x4]                 ; 0040af93
    XOR DH,DH                           ; 0040af97
    PUSH EAX                            ; 0040af99
    MOV byte ptr [ESP + 0x8],DH         ; 0040af9a
    PUSH 0x5d28f7                       ; 0040af9e | = " } %s \"%[^\"]\"\n"
    MOV byte ptr [ESP + 0x70],DH        ; 0040afa3
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0040afa7
    PUSH EDX                            ; 0040afae
    CALL FUN_005c04b0                   ; 0040afaf
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0x10                        ; 0040afb4
    MOV EAX,ESP                         ; 0040afb7
    PUSH EAX                            ; 0040afb9
    PUSH EBP                            ; 0040afba
    CALL FUN_005c04e0                   ; 0040afbb
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0040afc0
    TEST EAX,EAX                        ; 0040afc3
    JZ 0x0040b048                       ; 0040afc5
        ;   XREF to: 0040b048 (CONDITIONAL_JUMP)  ; LAB_0040b048
    PUSH EBX                            ; 0040afcb
        ;   Label: LAB_0040afcb
    PUSH EBP                            ; 0040afcc
    MOV ECX,0x5d2906                    ; 0040afcd | = "..\\core\\actor.cpp"
    MOV EAX,0x82b                       ; 0040afd2
    PUSH 0x5d2918                       ; 0040afd7 | = "End of actor file tag mismatch for cl..."
    MOV dword ptr [0x01d1d400],ECX      ; 0040afdc | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0040afe2 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0040afe7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 0040afec
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0040afef
        ;   Label: LAB_0040afef
    TEST byte ptr [EAX + 0xc],0x20      ; 0040aff6
    JNZ 0x0040b060                      ; 0040affa
        ;   XREF to: 0040b060 (CONDITIONAL_JUMP)  ; LAB_0040b060
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0040affc
        ;   Label: LAB_0040affc
    MOV dword ptr [0x007c303c],ESI      ; 0040b003 | DAT_007c303c
    MOV dword ptr [0x007c3038],EDI      ; 0040b009 | DAT_007c3038
    MOV [0x007c3034],EAX                ; 0040b00f | DAT_007c3034
    ADD ESP,0xcc                        ; 0040b014
    POP EBP                             ; 0040b01a
    POP EDI                             ; 0040b01b
    POP ESI                             ; 0040b01c
    POP EBX                             ; 0040b01d
    RET                                 ; 0040b01e
    PUSH ESI                            ; 0040b01f
        ;   Label: LAB_0040b01f
    MOV ECX,0x5d28b7                    ; 0040b020 | = "..\\core\\actor.cpp"
    MOV EDI,0x80e                       ; 0040b025
    PUSH 0x5d28c9                       ; 0040b02a | = "Start of actor file tag mismatch for ..."
    MOV dword ptr [0x01d1d400],ECX      ; 0040b02f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0040b035 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0040b03b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0040b040
    JMP 0x0040af2a                      ; 0040b043
        ;   XREF to: 0040af2a (UNCONDITIONAL_JUMP)  ; LAB_0040af2a
    LEA EAX,[ESP + 0x64]                ; 0040b048
        ;   Label: LAB_0040b048
    PUSH EAX                            ; 0040b04c
    PUSH EBX                            ; 0040b04d
    CALL FUN_005c04e0                   ; 0040b04e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0040b053
    TEST EAX,EAX                        ; 0040b056
    JNZ 0x0040afcb                      ; 0040b058
        ;   XREF to: 0040afcb (CONDITIONAL_JUMP)  ; LAB_0040afcb
    JMP 0x0040afef                      ; 0040b05e
        ;   XREF to: 0040afef (UNCONDITIONAL_JUMP)  ; LAB_0040afef
    PUSH EBX                            ; 0040b060
        ;   Label: LAB_0040b060
    PUSH EBP                            ; 0040b061
    MOV EDX,0x5d294e                    ; 0040b062 | = "..\\core\\actor.cpp"
    MOV ECX,0x830                       ; 0040b067
    PUSH 0x5d2960                       ; 0040b06c | = "IO Error after reading %s \"%s\""
    MOV dword ptr [0x01d1d400],EDX      ; 0040b071 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0040b077 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0040b07d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 0040b082
    JMP 0x0040affc                      ; 0040b085
        ;   XREF to: 0040affc (UNCONDITIONAL_JUMP)  ; LAB_0040affc

