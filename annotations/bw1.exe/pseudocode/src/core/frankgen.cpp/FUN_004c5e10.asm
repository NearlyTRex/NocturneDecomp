; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_frankgen_cpp_FUN_004c5e10(void)
;
;
; XREF[2]:
;   core_frankgen.cpp_FUN_004c5470 at 004c5489
;   core_frankgen.cpp_FUN_004c5a40 at 004c5a5d
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CFrankenstienMachineClassInfo.name_hash
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5e10
        ;   Label: core_frankgen.cpp_FUN_004c5e10
    PUSH ESI                            ; 004c5e11
    PUSH EDI                            ; 004c5e12
    PUSH EBP                            ; 004c5e13
    XOR ESI,ESI                         ; 004c5e14
    XOR EBX,EBX                         ; 004c5e16
    MOV EAX,[0x00622c18]                ; 004c5e18 | g_CDemonSetPtr
        ;   Label: LAB_004c5e18
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004c5e1d
    JGE 0x004c5e4a                      ; 004c5e23
        ;   XREF to: 004c5e4a (CONDITIONAL_JUMP)  ; LAB_004c5e4a
    MOV EDI,dword ptr [0x01cc90ac]      ; 004c5e25 | g_CFrankenstienMachineClassInfo.name_hash
    PUSH EDI                            ; 004c5e2b
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004c5e2c
    PUSH EBP                            ; 004c5e33
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004c5e34
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004c5e39
    TEST EAX,EAX                        ; 004c5e3c
    JNZ 0x004c5d3e                      ; 004c5e3e
        ;   XREF to: 004c5d3e (CONDITIONAL_JUMP)  ; LAB_004c5d3e
    INC EBX                             ; 004c5e44
    ADD ESI,0x4                         ; 004c5e45
    JMP 0x004c5e18                      ; 004c5e48
        ;   XREF to: 004c5e18 (UNCONDITIONAL_JUMP)  ; LAB_004c5e18
    MOV ECX,0x5e0d64                    ; 004c5e4a
        ;   Label: LAB_004c5e4a
    MOV EBX,0x1cf                       ; 004c5e4f
    PUSH 0x5e0d79                       ; 004c5e54
    MOV dword ptr [0x01d1d400],ECX      ; 004c5e59 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 004c5e5f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004c5e65
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004c5e6a
    XOR EAX,EAX                         ; 004c5e6d
    POP EBP                             ; 004c5e6f
    POP EDI                             ; 004c5e70
    POP ESI                             ; 004c5e71
    POP EBX                             ; 004c5e72
    RET                                 ; 004c5e73

