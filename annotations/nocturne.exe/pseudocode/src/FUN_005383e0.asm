; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005383e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 CDemonActorType_00764a9c.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005383e0
        ;   Label: FUN_005383e0
    SUB ESP,0x4                         ; 005383e1
    MOV EDX,dword ptr [0x00764ad4]      ; 005383e4 | CDemonActorType_00764a9c.name_hash
    MOV EAX,dword ptr [ESP + 0xc]       ; 005383ea
    PUSH EDX                            ; 005383ee
    MOV ECX,dword ptr [EAX + 0x24ac]    ; 005383ef
    PUSH ECX                            ; 005383f5
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 005383f6
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 005383fb
    TEST EAX,EAX                        ; 005383fe
    JZ 0x00538421                       ; 00538400
        ;   XREF to: 00538421 (CONDITIONAL_JUMP)  ; LAB_00538421
    MOV EBX,dword ptr [EAX + 0x664]     ; 00538402
    CMP EBX,0x2                         ; 00538408
    JZ 0x00538412                       ; 0053840b
        ;   XREF to: 00538412 (CONDITIONAL_JUMP)  ; LAB_00538412
    CMP EBX,0x3                         ; 0053840d
    JNZ 0x00538421                      ; 00538410
        ;   XREF to: 00538421 (CONDITIONAL_JUMP)  ; LAB_00538421
    MOV dword ptr [ESP],0xbf860a92      ; 00538412
        ;   Label: LAB_00538412
    MOV EAX,dword ptr [ESP]             ; 00538419
    ADD ESP,0x4                         ; 0053841c
    POP EBX                             ; 0053841f
    RET                                 ; 00538420
    MOV dword ptr [ESP],0xbfc80fc6      ; 00538421
        ;   Label: LAB_00538421
    MOV EAX,dword ptr [ESP]             ; 00538428
    ADD ESP,0x4                         ; 0053842b
    POP EBX                             ; 0053842e
    RET                                 ; 0053842f

