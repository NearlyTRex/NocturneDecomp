; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_charactr.cpp_CCharacter_FUN_0042c110(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c110
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042c110
    SUB ESP,0xc                         ; 0042c111
    MOV EBX,dword ptr [ESP + 0x14]      ; 0042c114
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042c118
    PUSH EDX                            ; 0042c11c
    LEA EAX,[ESP + 0x4]                 ; 0042c11d
    PUSH EAX                            ; 0042c121
    PUSH EBX                            ; 0042c122
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0042c123
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0042c128
    MOV EDX,ESP                         ; 0042c12b
    PUSH dword ptr [ESP + 0x1c]         ; 0042c12d
    PUSH EDX                            ; 0042c131
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042c132
    PUSH EBX                            ; 0042c138
    CALL dword ptr [EAX + 0xa4]         ; 0042c139
    ADD ESP,0xc                         ; 0042c13f
    TEST EAX,EAX                        ; 0042c142
    JNZ 0x0042c158                      ; 0042c144
        ;   XREF to: 0042c158 (CONDITIONAL_JUMP)  ; LAB_0042c158
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042c146
    MOV dword ptr [EAX + 0x4],0x0       ; 0042c14a
    XOR EAX,EAX                         ; 0042c151
    ADD ESP,0xc                         ; 0042c153
    POP EBX                             ; 0042c156
    RET                                 ; 0042c157
    MOV ECX,dword ptr [ESP + 0x20]      ; 0042c158
        ;   Label: LAB_0042c158
    PUSH ECX                            ; 0042c15c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042c15d
    PUSH EBX                            ; 0042c163
    CALL dword ptr [EAX + 0x11c]        ; 0042c164
    MOV EAX,0x1                         ; 0042c16a
    ADD ESP,0x8                         ; 0042c16f
    ADD ESP,0xc                         ; 0042c172
    POP EBX                             ; 0042c175
    RET                                 ; 0042c176

