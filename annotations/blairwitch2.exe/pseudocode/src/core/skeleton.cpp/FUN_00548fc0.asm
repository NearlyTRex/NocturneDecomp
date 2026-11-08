; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00548fc0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00541540 at 00541552
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e759a
;   TerminatedCString s_Can_t_load_s_because_ske_005e75af
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02628554
;
; Called Functions:
;   FUN_004e4500
;   FUN_00540a10
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548fc0
        ;   Label: FUN_00548fc0
    PUSH ESI                            ; 00548fc1
    PUSH EDI                            ; 00548fc2
    PUSH EBP                            ; 00548fc3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00548fc4
    MOV ESI,0x21780f4                   ; 00548fc8
    XOR EBX,EBX                         ; 00548fcd
    ADD ESI,0x1d1a8                     ; 00548fcf
    IMUL EAX,EBX,0x1e01c                ; 00548fd5
        ;   Label: LAB_00548fd5
    PUSH EDI                            ; 00548fdb
    MOV EBP,0x21780f4                   ; 00548fdc
    PUSH ESI                            ; 00548fe1
    ADD EBP,EAX                         ; 00548fe2
    CALL FUN_005b8130                   ; 00548fe4
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00548fe9
    TEST EAX,EAX                        ; 00548fec
    JZ 0x00549048                       ; 00548fee
        ;   XREF to: 00549048 (CONDITIONAL_JUMP)  ; LAB_00549048
    INC EBX                             ; 00548ff0
    ADD ESI,0x1e01c                     ; 00548ff1
    CMP EBX,0x28                        ; 00548ff7
    JL 0x00548fd5                       ; 00548ffa
        ;   XREF to: 00548fd5 (CONDITIONAL_JUMP)  ; LAB_00548fd5
    MOV EDX,dword ptr [0x02628554]      ; 00548ffc | DAT_02628554
    XOR EBX,EBX                         ; 00549002
    XOR EAX,EAX                         ; 00549004
    TEST EDX,EDX                        ; 00549006
    JZ 0x0054901f                       ; 00549008
        ;   XREF to: 0054901f (CONDITIONAL_JUMP)  ; LAB_0054901f
    ADD EBX,0x4                         ; 0054900a
        ;   Label: LAB_0054900a
    INC EAX                             ; 0054900d
    CMP EBX,0xa0                        ; 0054900e
    JGE 0x0054905b                      ; 00549014
        ;   XREF to: 0054905b (CONDITIONAL_JUMP)  ; LAB_0054905b
    CMP dword ptr [EBX + 0x2628554],0x0 ; 00549016
    JNZ 0x0054900a                      ; 0054901d
        ;   XREF to: 0054900a (CONDITIONAL_JUMP)  ; LAB_0054900a
    IMUL EAX,EAX,0x1e01c                ; 0054901f
        ;   Label: LAB_0054901f
    MOV ESI,0x21780f4                   ; 00549025
    PUSH EDI                            ; 0054902a
    ADD ESI,EAX                         ; 0054902b
    PUSH ESI                            ; 0054902d
    MOV EDI,0x1                         ; 0054902e
    CALL FUN_00540a10                   ; 00549033
        ;   XREF to: 00540a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00540a10()
    ADD ESP,0x8                         ; 00549038
    MOV EAX,ESI                         ; 0054903b
    MOV dword ptr [EBX + 0x2628554],EDI ; 0054903d
    POP EBP                             ; 00549043
    POP EDI                             ; 00549044
    POP ESI                             ; 00549045
    POP EBX                             ; 00549046
    RET                                 ; 00549047
    MOV ECX,0x1                         ; 00549048
        ;   Label: LAB_00549048
    MOV EAX,EBP                         ; 0054904d
    MOV dword ptr [EBX*0x4 + 0x2628554],ECX ; 0054904f | DAT_02628554
    POP EBP                             ; 00549056
    POP EDI                             ; 00549057
    POP ESI                             ; 00549058
    POP EBX                             ; 00549059
    RET                                 ; 0054905a
    PUSH 0x28                           ; 0054905b
        ;   Label: LAB_0054905b
    PUSH EDI                            ; 0054905d
    MOV EBP,0x5e759a                    ; 0054905e | = "..\\core\\skeleton.cpp"
    MOV EAX,0x10a5                      ; 00549063
    PUSH 0x5e75af                       ; 00549068 | = "Can't load %s because skeleton manage..."
    MOV dword ptr [0x01d046a0],EBP      ; 0054906d | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00549073 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00549078
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 0054907d
    XOR EAX,EAX                         ; 00549080
    POP EBP                             ; 00549082
    POP EDI                             ; 00549083
    POP ESI                             ; 00549084
    POP EBX                             ; 00549085
    RET                                 ; 00549086

