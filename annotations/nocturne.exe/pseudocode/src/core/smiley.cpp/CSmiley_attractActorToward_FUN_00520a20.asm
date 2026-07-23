; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_smiley_cpp_CSmiley_attractActorToward_FUN_00520a20(int param_1,int param_2)
;
;
; Referenced Globals:
;   float FLOAT_005920a5 = -4
;   undefined4 DAT_02da8a7c
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520a20
        ;   Label: core_smiley.cpp_CSmiley_attractActorToward_FUN_00520a20
    PUSH ESI                            ; 00520a21
    SUB ESP,0x18                        ; 00520a22
    MOV ESI,dword ptr [ESP + 0x24]      ; 00520a25
    MOV EBX,dword ptr [ESP + 0x28]      ; 00520a29
    TEST EBX,EBX                        ; 00520a2d
    JNZ 0x00520a39                      ; 00520a2f
        ;   XREF to: 00520a39 (CONDITIONAL_JUMP)  ; LAB_00520a39
    XOR EAX,EAX                         ; 00520a31
    ADD ESP,0x18                        ; 00520a33
    POP ESI                             ; 00520a36
    POP EBX                             ; 00520a37
    RET                                 ; 00520a38
    PUSH ESI                            ; 00520a39
        ;   Label: LAB_00520a39
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00520a3a
    CALL dword ptr [EAX + 0x104]        ; 00520a40
    ADD ESP,0x4                         ; 00520a46
    TEST EAX,EAX                        ; 00520a49
    JZ 0x00520a68                       ; 00520a4b
        ;   XREF to: 00520a68 (CONDITIONAL_JUMP)  ; LAB_00520a68
    PUSH EBX                            ; 00520a4d
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00520a4e
    CALL dword ptr [EAX + 0xe8]         ; 00520a54
    MOV EAX,0x1                         ; 00520a5a
    ADD ESP,0x4                         ; 00520a5f
    ADD ESP,0x18                        ; 00520a62
    POP ESI                             ; 00520a65
    POP EBX                             ; 00520a66
    RET                                 ; 00520a67
    MOV EDX,dword ptr [0x02da8a7c]      ; 00520a68 | DAT_02da8a7c
        ;   Label: LAB_00520a68
    LEA EAX,[EDX*0x4 + 0x0]             ; 00520a6e
    SUB EAX,EDX                         ; 00520a75
    SHL EAX,0x4                         ; 00520a77
    LEA EDX,[ESI + 0xfd0]               ; 00520a7a
    ADD EAX,EDX                         ; 00520a80
    PUSH EAX                            ; 00520a82
    PUSH 0x2dd1184                      ; 00520a83 | DAT_02dd1184
    LEA EAX,[ESP + 0x14]                ; 00520a88
    PUSH EAX                            ; 00520a8c
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00520a8d
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 00520a92
    PUSH EAX                            ; 00520a95
    LEA EAX,[ESP + 0x4]                 ; 00520a96
    PUSH EAX                            ; 00520a9a
    PUSH ESI                            ; 00520a9b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00520a9c
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00520aa1
    LEA EAX,[EBX + 0x30]                ; 00520aa4
    FLD float ptr [ESP + 0x4]           ; 00520aa7
    PUSH EAX                            ; 00520aab
    LEA EAX,[ESP + 0x4]                 ; 00520aac
    FADD float ptr [0x005920a5]         ; 00520ab0 | FLOAT_005920a5
    PUSH EAX                            ; 00520ab6
    FSTP float ptr [ESP + 0xc]          ; 00520ab7
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00520abb
    PUSH EBX                            ; 00520ac1
    CALL dword ptr [EDX + 0x60]         ; 00520ac2
    MOV EAX,0x1                         ; 00520ac5
    ADD ESP,0xc                         ; 00520aca
    ADD ESP,0x18                        ; 00520acd
    POP ESI                             ; 00520ad0
    POP EBX                             ; 00520ad1
    RET                                 ; 00520ad2

