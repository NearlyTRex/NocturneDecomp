; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_frankgen_cpp_findLeader_FUN_00495240(void)
;
;
; XREF[2]:
;   FUN_00494e80 at 00494e9a
;   core_frankgen.cpp_CFrankenstienMachine_process_FUN_00494950 at 00494967
;
; Referenced Globals:
;   TerminatedCString s_core_frankgen_cpp_00581d72
;   TerminatedCString s_CFrankenstienMachine_fin_00581d87
;   undefined4 DAT_005be368
;   undefined4 DAT_01c7133c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;   undefined4 DAT_01fa3ff8
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495240
        ;   Label: core_frankgen.cpp_findLeader_FUN_00495240
    PUSH ESI                            ; 00495241
    PUSH EDI                            ; 00495242
    PUSH EBP                            ; 00495243
    XOR ESI,ESI                         ; 00495244
    XOR EBX,EBX                         ; 00495246
    MOV EAX,[0x005be368]                ; 00495248 | DAT_005be368
        ;   Label: LAB_00495248
    CMP EBX,dword ptr [EAX + 0x14cd6c]  ; 0049524d | DAT_01fa3ff0
    JGE 0x0049527a                      ; 00495253
        ;   XREF to: 0049527a (CONDITIONAL_JUMP)  ; LAB_0049527a
    MOV EDI,dword ptr [0x01c7133c]      ; 00495255 | DAT_01c7133c
    PUSH EDI                            ; 0049525b
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14cd70] ; 0049525c | DAT_01fa3ff4 | DAT_01fa3ff8
    PUSH EBP                            ; 00495263
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00495264
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00495269
    TEST EAX,EAX                        ; 0049526c
    JNZ 0x00495170                      ; 0049526e
        ;   XREF to: 00495170 (CONDITIONAL_JUMP)  ; LAB_00495170
    INC EBX                             ; 00495274
    ADD ESI,0x4                         ; 00495275
    JMP 0x00495248                      ; 00495278
        ;   XREF to: 00495248 (UNCONDITIONAL_JUMP)  ; LAB_00495248
    MOV ECX,0x581d72                    ; 0049527a | = "..\\core\\frankgen.cpp"
        ;   Label: LAB_0049527a
    MOV EBX,0x1cf                       ; 0049527f
    PUSH 0x581d87                       ; 00495284 | = "CFrankenstienMachine::findLeader - no..."
    MOV dword ptr [0x01cc4800],ECX      ; 00495289 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0049528f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00495295
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0049529a
    XOR EAX,EAX                         ; 0049529d
    POP EBP                             ; 0049529f
    POP EDI                             ; 004952a0
    POP ESI                             ; 004952a1
    POP EBX                             ; 004952a2
    RET                                 ; 004952a3

