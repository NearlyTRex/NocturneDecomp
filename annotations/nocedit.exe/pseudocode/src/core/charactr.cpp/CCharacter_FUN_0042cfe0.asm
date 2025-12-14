; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_0042cfe0(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c67f0 at 005c681b
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042cfe0
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042cfe0
    SUB ESP,0x18                        ; 0042cfe1
    MOV ECX,dword ptr [ESP + 0x20]      ; 0042cfe4
    MOV EDX,dword ptr [ESP + 0x28]      ; 0042cfe8
    MOV EBX,dword ptr [ESP + 0x24]      ; 0042cfec
    MOV EAX,EBX                         ; 0042cff0
    SHL EAX,0x4                         ; 0042cff2
    ADD EAX,EBX                         ; 0042cff5
    SHL EAX,0x2                         ; 0042cff7
    LEA EBX,[ECX + 0x24ac]              ; 0042cffa
    ADD EBX,EAX                         ; 0042d000
    CMP dword ptr [EBX + 0x8],0x0       ; 0042d002
    JZ 0x0042d058                       ; 0042d006
        ;   XREF to: 0042d058 (CONDITIONAL_JUMP)  ; LAB_0042d058
    TEST EDX,EDX                        ; 0042d008
    JZ 0x0042d03d                       ; 0042d00a
        ;   XREF to: 0042d03d (CONDITIONAL_JUMP)  ; LAB_0042d03d
    PUSH EDX                            ; 0042d00c
    LEA EAX,[ESP + 0x4]                 ; 0042d00d
    PUSH EAX                            ; 0042d011
    PUSH ECX                            ; 0042d012
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0042d013
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 0042d018
    LEA EAX,[ESP + 0x18]                ; 0042d01a
    ADD ESP,0xc                         ; 0042d01e
    CMP EAX,EDX                         ; 0042d021
    JZ 0x0042d039                       ; 0042d023
        ;   XREF to: 0042d039 (CONDITIONAL_JUMP)  ; LAB_0042d039
    MOV EAX,dword ptr [EDX]             ; 0042d025
    MOV dword ptr [ESP + 0xc],EAX       ; 0042d027
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042d02b
    MOV dword ptr [ESP + 0x10],EAX      ; 0042d02e
    MOV EAX,dword ptr [EDX + 0x8]       ; 0042d032
    MOV dword ptr [ESP + 0x14],EAX      ; 0042d035
    LEA EDX,[ESP + 0xc]                 ; 0042d039
        ;   Label: LAB_0042d039
    PUSH EDX                            ; 0042d03d
        ;   Label: LAB_0042d03d
    MOV EAX,dword ptr [EBX + 0x8]       ; 0042d03e
    PUSH EAX                            ; 0042d041
    MOV ECX,dword ptr [EAX + 0x154]     ; 0042d042
    CALL dword ptr [ECX + 0x84]         ; 0042d048
    ADD ESP,0x8                         ; 0042d04e
    MOV dword ptr [EBX + 0x8],0x0       ; 0042d051
    ADD ESP,0x18                        ; 0042d058
        ;   Label: LAB_0042d058
    POP EBX                             ; 0042d05b
    RET                                 ; 0042d05c

