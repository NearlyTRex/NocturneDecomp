; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_0056deac(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056de90 at 0056de92
;
; Referenced Globals:
;   undefined4 DAT_02de4e20
;
; Called Functions:
;   crt_unknown.c___CClose_FUN_005633c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056deac
        ;   Label: crt_unknown.c_FUN_0056deac
    PUSH ESI                            ; 0056dead
    PUSH EDI                            ; 0056deae
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056deaf
    LEA EAX,[EDX*0x4 + 0x0]             ; 0056deb3
    SUB EAX,EDX                         ; 0056deba
    SHL EAX,0x2                         ; 0056debc
    ADD EAX,EDX                         ; 0056debf
    MOV EDI,0x5c1894                    ; 0056dec1
    ADD EAX,EAX                         ; 0056dec6
    ADD EDI,EAX                         ; 0056dec8
    MOV EAX,[0x02de4e20]                ; 0056deca | DAT_02de4e20
    XOR EBX,EBX                         ; 0056decf
    TEST EAX,EAX                        ; 0056ded1
    JZ 0x0056df0a                       ; 0056ded3
        ;   XREF to: 0056df0a (CONDITIONAL_JUMP)  ; LAB_0056df0a
    MOV ESI,dword ptr [EAX]             ; 0056ded5
        ;   Label: LAB_0056ded5
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056ded7
    MOV CL,byte ptr [EAX + 0xd]         ; 0056deda
    MOV EDX,0x1                         ; 0056dedd
    TEST CL,0x40                        ; 0056dee2
    JNZ 0x0056def9                      ; 0056dee5
        ;   XREF to: 0056def9 (CONDITIONAL_JUMP)  ; LAB_0056def9
    TEST CL,0x8                         ; 0056dee7
    JNZ 0x0056def9                      ; 0056deea
        ;   XREF to: 0056def9 (CONDITIONAL_JUMP)  ; LAB_0056def9
    CMP EAX,EDI                         ; 0056deec
    JC 0x0056df04                       ; 0056deee
        ;   XREF to: 0056df04 (CONDITIONAL_JUMP)  ; LAB_0056df04
    CMP EAX,0x5c18e2                    ; 0056def0
    JNC 0x0056def9                      ; 0056def5
        ;   XREF to: 0056def9 (CONDITIONAL_JUMP)  ; LAB_0056def9
    XOR EDX,EDX                         ; 0056def7
    PUSH EDX                            ; 0056def9
        ;   Label: LAB_0056def9
    PUSH EAX                            ; 0056defa
    INC EBX                             ; 0056defb
    CALL crt_unknown.c___CClose_FUN_005633c4 ; 0056defc
        ;   XREF to: 005633c4 (UNCONDITIONAL_CALL)  ; int crt_unknown.c___CClose_FUN_005633c4(_FILE * file_handle, int close_flags)
    ADD ESP,0x8                         ; 0056df01
    MOV EAX,ESI                         ; 0056df04
        ;   Label: LAB_0056df04
    TEST ESI,ESI                        ; 0056df06
    JNZ 0x0056ded5                      ; 0056df08
        ;   XREF to: 0056ded5 (CONDITIONAL_JUMP)  ; LAB_0056ded5
    MOV EAX,EBX                         ; 0056df0a
        ;   Label: LAB_0056df0a
    POP EDI                             ; 0056df0c
    POP ESI                             ; 0056df0d
    POP EBX                             ; 0056df0e
    RET                                 ; 0056df0f

