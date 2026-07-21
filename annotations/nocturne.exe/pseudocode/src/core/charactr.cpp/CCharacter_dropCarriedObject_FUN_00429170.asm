; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00429170(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_stranger.cpp_CStranger_dropCarriedObject_FUN_005408c0 at 005408eb
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429170
        ;   Label: core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00429170
    SUB ESP,0x18                        ; 00429171
    MOV ECX,dword ptr [ESP + 0x20]      ; 00429174
    MOV EDX,dword ptr [ESP + 0x28]      ; 00429178
    MOV EBX,dword ptr [ESP + 0x24]      ; 0042917c
    MOV EAX,EBX                         ; 00429180
    SHL EAX,0x4                         ; 00429182
    ADD EAX,EBX                         ; 00429185
    SHL EAX,0x2                         ; 00429187
    LEA EBX,[ECX + 0x24a4]              ; 0042918a
    ADD EBX,EAX                         ; 00429190
    CMP dword ptr [EBX + 0x8],0x0       ; 00429192
    JZ 0x004291e8                       ; 00429196
        ;   XREF to: 004291e8 (CONDITIONAL_JUMP)  ; LAB_004291e8
    TEST EDX,EDX                        ; 00429198
    JZ 0x004291cd                       ; 0042919a
        ;   XREF to: 004291cd (CONDITIONAL_JUMP)  ; LAB_004291cd
    PUSH EDX                            ; 0042919c
    LEA EAX,[ESP + 0x4]                 ; 0042919d
    PUSH EAX                            ; 004291a1
    PUSH ECX                            ; 004291a2
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004291a3
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    MOV EDX,EAX                         ; 004291a8
    LEA EAX,[ESP + 0x18]                ; 004291aa
    ADD ESP,0xc                         ; 004291ae
    CMP EAX,EDX                         ; 004291b1
    JZ 0x004291c9                       ; 004291b3
        ;   XREF to: 004291c9 (CONDITIONAL_JUMP)  ; LAB_004291c9
    MOV EAX,dword ptr [EDX]             ; 004291b5
    MOV dword ptr [ESP + 0xc],EAX       ; 004291b7
    MOV EAX,dword ptr [EDX + 0x4]       ; 004291bb
    MOV dword ptr [ESP + 0x10],EAX      ; 004291be
    MOV EAX,dword ptr [EDX + 0x8]       ; 004291c2
    MOV dword ptr [ESP + 0x14],EAX      ; 004291c5
    LEA EDX,[ESP + 0xc]                 ; 004291c9
        ;   Label: LAB_004291c9
    PUSH EDX                            ; 004291cd
        ;   Label: LAB_004291cd
    MOV EAX,dword ptr [EBX + 0x8]       ; 004291ce
    PUSH EAX                            ; 004291d1
    MOV ECX,dword ptr [EAX + 0x14c]     ; 004291d2
    CALL dword ptr [ECX + 0x84]         ; 004291d8
    ADD ESP,0x8                         ; 004291de
    MOV dword ptr [EBX + 0x8],0x0       ; 004291e1
    ADD ESP,0x18                        ; 004291e8
        ;   Label: LAB_004291e8
    POP EBX                             ; 004291eb
    RET                                 ; 004291ec

