; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * __cdecl core_flies_cpp_FUN_004c0970(CDemonActor *actor)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
;
; XREF[1]:
;   core_actor.cpp_FUN_00409c00 at 00409c05
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CFliesClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0970
        ;   Label: core_flies.cpp_FUN_004c0970
    PUSH ESI                            ; 004c0971
    PUSH EDI                            ; 004c0972
    PUSH EBP                            ; 004c0973
    MOV EDI,dword ptr [ESP + 0x14]      ; 004c0974
    XOR ESI,ESI                         ; 004c0978
    XOR EBX,EBX                         ; 004c097a
    MOV EAX,[0x00622c18]                ; 004c097c | g_CDemonSetPtr
        ;   Label: LAB_004c097c
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004c0981 | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x004c0996                       ; 004c0987
        ;   XREF to: 004c0996 (CONDITIONAL_JUMP)  ; LAB_004c0996
    XOR EAX,EAX                         ; 004c0989
    POP EBP                             ; 004c098b
    POP EDI                             ; 004c098c
    POP ESI                             ; 004c098d
    POP EBX                             ; 004c098e
    RET                                 ; 004c098f
    INC EBX                             ; 004c0990
        ;   Label: LAB_004c0990
    ADD ESI,0x4                         ; 004c0991
    JMP 0x004c097c                      ; 004c0994
        ;   XREF to: 004c097c (UNCONDITIONAL_JUMP)  ; LAB_004c097c
    MOV ECX,dword ptr [0x01cc80c0]      ; 004c0996 | g_CFliesClassInfo.name_hash
        ;   Label: LAB_004c0996
    PUSH ECX                            ; 004c099c
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004c099d | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EBP                            ; 004c09a4
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004c09a5
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004c09aa
    TEST EAX,EAX                        ; 004c09ad
    JZ 0x004c0990                       ; 004c09af
        ;   XREF to: 004c0990 (CONDITIONAL_JUMP)  ; LAB_004c0990
    CMP EDI,dword ptr [EAX + 0x2a08]    ; 004c09b1
    JNZ 0x004c0990                      ; 004c09b7
        ;   XREF to: 004c0990 (CONDITIONAL_JUMP)  ; LAB_004c0990
    POP EBP                             ; 004c09b9
    POP EDI                             ; 004c09ba
    POP ESI                             ; 004c09bb
    POP EBX                             ; 004c09bc
    RET                                 ; 004c09bd

