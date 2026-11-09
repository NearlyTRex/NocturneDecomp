; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_frankgen_cpp_FUN_004ace60(void)
;
;
; XREF[2]:
;   core_frankgen.cpp_FUN_004ac4c0 at 004ac4d9
;   core_frankgen.cpp_FUN_004aca90 at 004acaad
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CFrankenstienMachineClassInfo.name_hash
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ace60
        ;   Label: core_frankgen.cpp_FUN_004ace60
    PUSH ESI                            ; 004ace61
    PUSH EDI                            ; 004ace62
    PUSH EBP                            ; 004ace63
    XOR ESI,ESI                         ; 004ace64
    XOR EBX,EBX                         ; 004ace66
    MOV EAX,[0x0061b5a8]                ; 004ace68 | g_CDemonSetPtr
        ;   Label: LAB_004ace68
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004ace6d
    JGE 0x004ace9a                      ; 004ace73
        ;   XREF to: 004ace9a (CONDITIONAL_JUMP)  ; LAB_004ace9a
    MOV EDI,dword ptr [0x01cb061c]      ; 004ace75 | g_CFrankenstienMachineClassInfo.name_hash
    PUSH EDI                            ; 004ace7b
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004ace7c
    PUSH EBP                            ; 004ace83
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004ace84
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004ace89
    TEST EAX,EAX                        ; 004ace8c
    JNZ 0x004acd8e                      ; 004ace8e
        ;   XREF to: 004acd8e (CONDITIONAL_JUMP)  ; LAB_004acd8e
    INC EBX                             ; 004ace94
    ADD ESI,0x4                         ; 004ace95
    JMP 0x004ace68                      ; 004ace98
        ;   XREF to: 004ace68 (UNCONDITIONAL_JUMP)  ; LAB_004ace68
    MOV ECX,0x5d6ceb                    ; 004ace9a
        ;   Label: LAB_004ace9a
    MOV EBX,0x1cf                       ; 004ace9f
    PUSH 0x5d6d00                       ; 004acea4
    MOV dword ptr [0x01d046a0],ECX      ; 004acea9 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 004aceaf | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004aceb5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004aceba
    XOR EAX,EAX                         ; 004acebd
    POP EBP                             ; 004acebf
    POP EDI                             ; 004acec0
    POP ESI                             ; 004acec1
    POP EBX                             ; 004acec2
    RET                                 ; 004acec3

