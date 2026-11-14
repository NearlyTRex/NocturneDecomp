; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_smiley_cpp_CSmiley_attractActorToward_FUN_0056ccc0(CSmiley *this_ptr,CDemonActor *actor,CVector3f *target_local_point)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CVector3f *      Stack[0xc]:4   target_local_point
;
; Referenced Globals:
;   undefined4 DAT_005f29ff
;   undefined4 DAT_02c5fce0
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_xform.cpp_FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ccc0
        ;   Label: core_smiley.cpp_CSmiley_attractActorToward_FUN_0056ccc0
    PUSH EBP                            ; 0056ccc1
    SUB ESP,0x30                        ; 0056ccc2
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0056ccc5
    MOV EBX,dword ptr [ESP + 0x40]      ; 0056ccc9
    TEST EBX,EBX                        ; 0056cccd
    JNZ 0x0056ccd9                      ; 0056cccf
        ;   XREF to: 0056ccd9 (CONDITIONAL_JUMP)  ; LAB_0056ccd9
    XOR EAX,EAX                         ; 0056ccd1
    ADD ESP,0x30                        ; 0056ccd3
    POP EBP                             ; 0056ccd6
    POP EBX                             ; 0056ccd7
    RET                                 ; 0056ccd8
    PUSH EBP                            ; 0056ccd9
        ;   Label: LAB_0056ccd9
    MOV EAX,dword ptr [EBP + 0x154]     ; 0056ccda
    CALL dword ptr [EAX + 0x10c]        ; 0056cce0
    ADD ESP,0x4                         ; 0056cce6
    TEST EAX,EAX                        ; 0056cce9
    JZ 0x0056cd08                       ; 0056cceb
        ;   XREF to: 0056cd08 (CONDITIONAL_JUMP)  ; LAB_0056cd08
    PUSH EBX                            ; 0056cced
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056ccee
    CALL dword ptr [EAX + 0xf0]         ; 0056ccf4
    MOV EAX,0x1                         ; 0056ccfa
    ADD ESP,0x4                         ; 0056ccff
    ADD ESP,0x30                        ; 0056cd02
    POP EBP                             ; 0056cd05
    POP EBX                             ; 0056cd06
    RET                                 ; 0056cd07
    PUSH EDI                            ; 0056cd08
        ;   Label: LAB_0056cd08
    PUSH ESI                            ; 0056cd09
    MOV ESI,dword ptr [0x02c5fce0]      ; 0056cd0a | DAT_02c5fce0
    LEA EAX,[ESI*0x4 + 0x0]             ; 0056cd10
    SUB EAX,ESI                         ; 0056cd17
    SHL EAX,0x4                         ; 0056cd19
    LEA ESI,[EBP + 0xfd8]               ; 0056cd1c
    ADD EAX,ESI                         ; 0056cd22
    PUSH EAX                            ; 0056cd24
    PUSH 0x2c8af28                      ; 0056cd25 | DAT_02c8af28
    LEA ESI,[ESP + 0x34]                ; 0056cd2a
    LEA EDI,[ESP + 0x1c]                ; 0056cd2e
    CALL core_xform.cpp_FUN_005b5080    ; 0056cd32
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0056cd37
    LEA EAX,[ESP + 0x14]                ; 0056cd3a
    LEA ESI,[ESP + 0x2c]                ; 0056cd3e
    PUSH EAX                            ; 0056cd42
    MOVSD ES:EDI,ESI                    ; 0056cd43
    MOVSD ES:EDI,ESI                    ; 0056cd44
    MOVSD ES:EDI,ESI                    ; 0056cd45
    PUSH EBP                            ; 0056cd46
    LEA ESI,[ESP + 0x10]                ; 0056cd47
    LEA EDI,[ESP + 0x28]                ; 0056cd4b
    CALL core_actor.cpp_FUN_00408b40    ; 0056cd4f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0056cd54
    LEA EAX,[EBX + 0x30]                ; 0056cd57
    LEA ESI,[ESP + 0x8]                 ; 0056cd5a
    PUSH EAX                            ; 0056cd5e
    MOVSD ES:EDI,ESI                    ; 0056cd5f
    MOVSD ES:EDI,ESI                    ; 0056cd60
    MOVSD ES:EDI,ESI                    ; 0056cd61
    LEA EAX,[ESP + 0x24]                ; 0056cd62
    FLD float ptr [ESP + 0x28]          ; 0056cd66
    PUSH EAX                            ; 0056cd6a
    FADD float ptr [0x005f29ff]         ; 0056cd6b | DAT_005f29ff
    PUSH EBX                            ; 0056cd71
    FSTP float ptr [ESP + 0x30]         ; 0056cd72
    MOV ESI,dword ptr [EBX + 0x154]     ; 0056cd76
    CALL dword ptr [ESI + 0x68]         ; 0056cd7c
    MOV EAX,0x1                         ; 0056cd7f
    ADD ESP,0xc                         ; 0056cd84
    POP ESI                             ; 0056cd87
    POP EDI                             ; 0056cd88
    ADD ESP,0x30                        ; 0056cd89
    POP EBP                             ; 0056cd8c
    POP EBX                             ; 0056cd8d
    RET                                 ; 0056cd8e

