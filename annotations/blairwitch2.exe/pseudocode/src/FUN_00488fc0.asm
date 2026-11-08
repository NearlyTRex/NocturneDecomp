; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_00488fc0(int *param_1,char *param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   FUN_00489670 at 004899d1
;
; Referenced Globals:
;   TerminatedCString s_No_opening_parenthesis_005d2f24
;   TerminatedCString s_Argument_too_long_005d2f3b
;   TerminatedCString s_Can_t_find_closing_paren_005d2f4d
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488fc0
        ;   Label: FUN_00488fc0
    PUSH ESI                            ; 00488fc1
    PUSH EDI                            ; 00488fc2
    PUSH EBP                            ; 00488fc3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00488fc4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00488fc8
    MOV ECX,dword ptr [ESI]             ; 00488fcc
    MOV AL,byte ptr [ECX]               ; 00488fce
        ;   Label: LAB_00488fce
    INC AL                              ; 00488fd0
    AND EAX,0xff                        ; 00488fd2
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 00488fd7 | DAT_0061ed94
    JZ 0x00488fe3                       ; 00488fde
        ;   XREF to: 00488fe3 (CONDITIONAL_JUMP)  ; LAB_00488fe3
    INC ECX                             ; 00488fe0
    JMP 0x00488fce                      ; 00488fe1
        ;   XREF to: 00488fce (UNCONDITIONAL_JUMP)  ; LAB_00488fce
    MOV EDX,dword ptr [ESP + 0x20]      ; 00488fe3
        ;   Label: LAB_00488fe3
    MOV dword ptr [ESI],ECX             ; 00488fe7
    TEST EDX,EDX                        ; 00488fe9
    JZ 0x00488ffb                       ; 00488feb
        ;   XREF to: 00488ffb (CONDITIONAL_JUMP)  ; LAB_00488ffb
    MOV DH,byte ptr [ECX]               ; 00488fed
    MOV EAX,ECX                         ; 00488fef
    CMP DH,0x28                         ; 00488ff1
    JNZ 0x00489034                      ; 00488ff4
        ;   XREF to: 00489034 (CONDITIONAL_JUMP)  ; LAB_00489034
    LEA EAX,[ECX + 0x1]                 ; 00488ff6
    MOV dword ptr [ESI],EAX             ; 00488ff9
    XOR EBX,EBX                         ; 00488ffb
        ;   Label: LAB_00488ffb
    XOR ECX,ECX                         ; 00488ffd
    TEST EDI,EDI                        ; 00488fff
    JLE 0x0048902a                      ; 00489001
        ;   XREF to: 0048902a (CONDITIONAL_JUMP)  ; LAB_0048902a
    MOV EAX,dword ptr [ESI]             ; 00489003
        ;   Label: LAB_00489003
    MOV DL,byte ptr [EAX]               ; 00489005
    TEST DL,DL                          ; 00489007
    JZ 0x0048903e                       ; 00489009
        ;   XREF to: 0048903e (CONDITIONAL_JUMP)  ; LAB_0048903e
    CMP DL,0x28                         ; 0048900b
    JNZ 0x00489048                      ; 0048900e
        ;   XREF to: 00489048 (CONDITIONAL_JUMP)  ; LAB_00489048
    INC EBX                             ; 00489010
    MOV EDX,dword ptr [ESP + 0x18]      ; 00489011
        ;   Label: LAB_00489011
    MOV EAX,ECX                         ; 00489015
    MOV EBP,dword ptr [ESI]             ; 00489017
    ADD EDX,EAX                         ; 00489019
    MOV AL,byte ptr [EBP]               ; 0048901b
    MOV byte ptr [EDX],AL               ; 0048901e
    MOV EBP,dword ptr [ESI]             ; 00489020
    INC EBP                             ; 00489022
    INC ECX                             ; 00489023
    MOV dword ptr [ESI],EBP             ; 00489024
    CMP ECX,EDI                         ; 00489026
    JL 0x00489003                       ; 00489028
        ;   XREF to: 00489003 (CONDITIONAL_JUMP)  ; LAB_00489003
    MOV EAX,0x5d2f3b                    ; 0048902a | = "Argument too long"
        ;   Label: LAB_0048902a
    POP EBP                             ; 0048902f
    POP EDI                             ; 00489030
    POP ESI                             ; 00489031
    POP EBX                             ; 00489032
    RET                                 ; 00489033
    MOV EAX,0x5d2f24                    ; 00489034 | = "No opening parenthesis"
        ;   Label: LAB_00489034
    POP EBP                             ; 00489039
    POP EDI                             ; 0048903a
    POP ESI                             ; 0048903b
    POP EBX                             ; 0048903c
    RET                                 ; 0048903d
    MOV EAX,0x5d2f4d                    ; 0048903e | = "Can't find closing parenthesis"
        ;   Label: LAB_0048903e
    POP EBP                             ; 00489043
    POP EDI                             ; 00489044
    POP ESI                             ; 00489045
    POP EBX                             ; 00489046
    RET                                 ; 00489047
    CMP DL,0x29                         ; 00489048
        ;   Label: LAB_00489048
    JNZ 0x00489011                      ; 0048904b
        ;   XREF to: 00489011 (CONDITIONAL_JUMP)  ; LAB_00489011
    TEST EBX,EBX                        ; 0048904d
    JZ 0x00489054                       ; 0048904f
        ;   XREF to: 00489054 (CONDITIONAL_JUMP)  ; LAB_00489054
    DEC EBX                             ; 00489051
    JMP 0x00489011                      ; 00489052
        ;   XREF to: 00489011 (UNCONDITIONAL_JUMP)  ; LAB_00489011
    INC EAX                             ; 00489054
        ;   Label: LAB_00489054
    MOV dword ptr [ESI],EAX             ; 00489055
    MOV EAX,dword ptr [ESP + 0x18]      ; 00489057
    ADD ECX,EAX                         ; 0048905b
    MOV EBP,EAX                         ; 0048905d
    MOV EDI,EAX                         ; 0048905f
    MOV byte ptr [ECX],0x0              ; 00489061
    SUB ECX,ECX                         ; 00489064
    DEC ECX                             ; 00489066
    XOR EAX,EAX                         ; 00489067
    SCASB.REPNE ES:EDI                  ; 00489069
    NOT ECX                             ; 0048906b
    DEC ECX                             ; 0048906d
    MOV EAX,ECX                         ; 0048906e
    MOV EBX,ECX                         ; 00489070
    TEST ECX,ECX                        ; 00489072
    JLE 0x0048908d                      ; 00489074
        ;   XREF to: 0048908d (CONDITIONAL_JUMP)  ; LAB_0048908d
    LEA EAX,[ECX + EBP*0x1]             ; 00489076
    MOV CL,byte ptr [EAX + -0x1]        ; 00489079
        ;   Label: LAB_00489079
    INC CL                              ; 0048907c
    AND ECX,0xff                        ; 0048907e
    TEST byte ptr [ECX + 0x61ed94],0x2  ; 00489084 | DAT_0061ed94
    JNZ 0x004890b7                      ; 0048908b
        ;   XREF to: 004890b7 (CONDITIONAL_JUMP)  ; LAB_004890b7
    LEA EAX,[EBX + EBP*0x1]             ; 0048908d
        ;   Label: LAB_0048908d
    LEA EDI,[EBP + 0x1]                 ; 00489090
    MOV byte ptr [EAX],0x0              ; 00489093
    MOV AL,byte ptr [EBP]               ; 00489096
        ;   Label: LAB_00489096
    INC AL                              ; 00489099
    AND EAX,0xff                        ; 0048909b
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004890a0 | DAT_0061ed94
    JZ 0x004890bf                       ; 004890a7
        ;   XREF to: 004890bf (CONDITIONAL_JUMP)  ; LAB_004890bf
    PUSH EBX                            ; 004890a9
    PUSH EDI                            ; 004890aa
    PUSH EBP                            ; 004890ab
    DEC EBX                             ; 004890ac
    CALL FUN_005ba1f0                   ; 004890ad
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1f0()
    ADD ESP,0xc                         ; 004890b2
    JMP 0x00489096                      ; 004890b5
        ;   XREF to: 00489096 (UNCONDITIONAL_JUMP)  ; LAB_00489096
    DEC EBX                             ; 004890b7
        ;   Label: LAB_004890b7
    DEC EAX                             ; 004890b8
    TEST EBX,EBX                        ; 004890b9
    JG 0x00489079                       ; 004890bb
        ;   XREF to: 00489079 (CONDITIONAL_JUMP)  ; LAB_00489079
    JMP 0x0048908d                      ; 004890bd
        ;   XREF to: 0048908d (UNCONDITIONAL_JUMP)  ; LAB_0048908d
    MOV EAX,dword ptr [ESI]             ; 004890bf
        ;   Label: LAB_004890bf
    MOV BL,byte ptr [EAX]               ; 004890c1
        ;   Label: LAB_004890c1
    XOR ECX,ECX                         ; 004890c3
    INC BL                              ; 004890c5
    MOV CL,BL                           ; 004890c7
    TEST byte ptr [ECX + 0x61ed94],0x2  ; 004890c9 | DAT_0061ed94
    JZ 0x004890d5                       ; 004890d0
        ;   XREF to: 004890d5 (CONDITIONAL_JUMP)  ; LAB_004890d5
    INC EAX                             ; 004890d2
    JMP 0x004890c1                      ; 004890d3
        ;   XREF to: 004890c1 (UNCONDITIONAL_JUMP)  ; LAB_004890c1
    MOV dword ptr [ESI],EAX             ; 004890d5
        ;   Label: LAB_004890d5
    XOR EAX,EAX                         ; 004890d7
    POP EBP                             ; 004890d9
    POP EDI                             ; 004890da
    POP ESI                             ; 004890db
    POP EBX                             ; 004890dc
    RET                                 ; 004890dd

