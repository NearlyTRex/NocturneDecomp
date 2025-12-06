; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_door.cpp_CDoor_processInEditor_FUN_00481590(CDoor * this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481590
        ;   Label: core_door.cpp_CDoor_processInEditor_FUN_00481590
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481591
    PUSH EBX                            ; 00481595
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 00481596 | void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x2e0]     ; 0048159b
    ADD ESP,0x4                         ; 004815a1
    TEST EDX,EDX                        ; 004815a4
    JNZ 0x004815e2                      ; 004815a6 | LAB_004815e2
        ;   XREF to: 004815e2 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x994]               ; 004815a8
    LEA EDX,[EBX + 0x20]                ; 004815ae
    CMP EAX,EDX                         ; 004815b1
    JZ 0x004815c5                       ; 004815b3 | LAB_004815c5
        ;   XREF to: 004815c5 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDX]             ; 004815b5
    MOV dword ptr [EAX],ECX             ; 004815b7
    MOV ECX,dword ptr [EDX + 0x4]       ; 004815b9
    MOV dword ptr [EAX + 0x4],ECX       ; 004815bc
    MOV ECX,dword ptr [EDX + 0x8]       ; 004815bf
    MOV dword ptr [EAX + 0x8],ECX       ; 004815c2
    LEA EAX,[EBX + 0x9a0]               ; 004815c5
        ;   Label: LAB_004815c5
    LEA EDX,[EBX + 0x30]                ; 004815cb
    CMP EAX,EDX                         ; 004815ce
    JZ 0x004815e2                       ; 004815d0 | LAB_004815e2
        ;   XREF to: 004815e2 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDX]             ; 004815d2
    MOV dword ptr [EAX],ECX             ; 004815d4
    MOV ECX,dword ptr [EDX + 0x4]       ; 004815d6
    MOV dword ptr [EAX + 0x4],ECX       ; 004815d9
    MOV ECX,dword ptr [EDX + 0x8]       ; 004815dc
    MOV dword ptr [EAX + 0x8],ECX       ; 004815df
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 004815e2
        ;   Label: LAB_004815e2
    TEST EAX,EAX                        ; 004815e8
    JBE 0x004815ff                      ; 004815ea | LAB_004815ff
        ;   XREF to: 004815ff (CONDITIONAL_JUMP)
    CMP EAX,0x2                         ; 004815ec
    JNZ 0x0048160b                      ; 004815ef | LAB_0048160b
        ;   XREF to: 0048160b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x9b0]     ; 004815f1
    MOV dword ptr [EBX + 0x9ac],EAX     ; 004815f7
    POP EBX                             ; 004815fd
    RET                                 ; 004815fe
    MOV dword ptr [EBX + 0x9ac],0x0     ; 004815ff
        ;   Label: LAB_004815ff
    POP EBX                             ; 00481609
    RET                                 ; 0048160a
    MOV dword ptr [EBX + 0x9ac],0x0     ; 0048160b
        ;   Label: LAB_0048160b
    MOV dword ptr [EBX + 0x2e0],0x0     ; 00481615
    POP EBX                             ; 0048161f
    RET                                 ; 00481620

