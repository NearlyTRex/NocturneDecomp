; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_CMansionPuzzleCircle_load_FUN_0050adf0()
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_pGemPos_0063588e
;   TerminatedCString s_pGemOrient_00635896
;   TerminatedCString s_pEmitterPos_006358a1
;   TerminatedCString s_exists_006358ad
;   TerminatedCString s_r_006358b4
;   TerminatedCString s_g_006358b6
;   TerminatedCString s_b_006358b8
;   int g_CMansionPuzzleCircleClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeOrientation_FUN_0040b3e0
;   core_actor.cpp_serializeVector_FUN_0040b340
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0050adf0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_load_FUN_0050adf0
    PUSH EBP                            ; 0050adf1
    SUB ESP,0x4                         ; 0050adf2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0050adf5
    PUSH ESI                            ; 0050adf9
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 0050adfa | void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0067d0d4]      ; 0050adff | int g_CMansionPuzzleCircleClassVersion
    ADD ESP,0x4                         ; 0050ae05
    CMP EDX,0x2                         ; 0050ae08
    JGE 0x0050ae92                      ; 0050ae0b | LAB_0050ae92
        ;   XREF to: 0050ae92 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067d0d4],0x3      ; 0050ae11 | int g_CMansionPuzzleCircleClassVersion
        ;   Label: LAB_0050ae11
    JL 0x0050ae8c                       ; 0050ae18 | LAB_0050ae8c
        ;   XREF to: 0050ae8c (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0050ae1a
    PUSH EBX                            ; 0050ae1b
    LEA EAX,[ESI + 0x5f0]               ; 0050ae1c
    LEA EBP,[ESI + 0x644]               ; 0050ae22
    XOR EBX,EBX                         ; 0050ae28
    LEA EDI,[ESI + 0x640]               ; 0050ae2a
    MOV dword ptr [ESP + 0x8],EAX       ; 0050ae30
    ADD ESI,0x63c                       ; 0050ae34
    IMUL EAX,EBX,0x64                   ; 0050ae3a
        ;   Label: LAB_0050ae3a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050ae3d
    PUSH 0x6358ad                       ; 0050ae41 | = "exists" | s_exists_006358ad = exists
    ADD EAX,EDX                         ; 0050ae46
    PUSH EAX                            ; 0050ae48
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0050ae49 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050ae4e
    PUSH 0x6358b4                       ; 0050ae51 | = "r" | s_r_006358b4 = r
    PUSH ESI                            ; 0050ae56
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0050ae57 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050ae5c
    PUSH 0x6358b6                       ; 0050ae5f | = "g" | s_g_006358b6 = g
    PUSH EDI                            ; 0050ae64
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0050ae65 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050ae6a
    PUSH 0x6358b8                       ; 0050ae6d | = "b" | s_b_006358b8 = b
    INC EBX                             ; 0050ae72
    PUSH EBP                            ; 0050ae73
    ADD ESI,0x64                        ; 0050ae74
    ADD EDI,0x64                        ; 0050ae77
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0050ae7a | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050ae7f
    ADD EBP,0x64                        ; 0050ae82
    CMP EBX,0xc                         ; 0050ae85
    JL 0x0050ae3a                       ; 0050ae88 | LAB_0050ae3a
        ;   XREF to: 0050ae3a (CONDITIONAL_JUMP)
    POP EBX                             ; 0050ae8a
    POP EDI                             ; 0050ae8b
    ADD ESP,0x4                         ; 0050ae8c
        ;   Label: LAB_0050ae8c
    POP EBP                             ; 0050ae8f
    POP ESI                             ; 0050ae90
    RET                                 ; 0050ae91
    PUSH 0x63588e                       ; 0050ae92 | = "pGemPos" | s_pGemPos_0063588e = pGemPos
        ;   Label: LAB_0050ae92
    LEA EAX,[ESI + 0x5cc]               ; 0050ae97
    PUSH EAX                            ; 0050ae9d
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 0050ae9e | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050aea3
    PUSH 0x635896                       ; 0050aea6 | = "pGemOrient" | s_pGemOrient_00635896 = pGemOrient
    LEA EAX,[ESI + 0x5d8]               ; 0050aeab
    PUSH EAX                            ; 0050aeb1
    CALL core_actor.cpp_serializeOrientation_FUN_0040b3e0 ; 0050aeb2 | void core_actor.cpp_serializeOrientation_FUN_0040b3e0(COrientation * orient_ptr, char * property_name)
        ;   XREF to: 0040b3e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050aeb7
    PUSH 0x6358a1                       ; 0050aeba | = "pEmitterPos" | s_pEmitterPos_006358a1 = pEmitterPos
    LEA EAX,[ESI + 0x5e4]               ; 0050aebf
    PUSH EAX                            ; 0050aec5
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 0050aec6 | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050aecb
    JMP 0x0050ae11                      ; 0050aece | LAB_0050ae11
        ;   XREF to: 0050ae11 (UNCONDITIONAL_JUMP)

