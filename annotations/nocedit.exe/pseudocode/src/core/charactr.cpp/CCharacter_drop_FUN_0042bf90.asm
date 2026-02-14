; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_drop_FUN_0042bf90(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
; CVector3f *      Stack[0xc]:4   drop_position
;
; XREF[1]:
;   core_stranger.cpp_CStranger_drop_FUN_005c6850 at 005c686d
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_0061715e
;   TerminatedCString s_core_charactr_cpp_00617173
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042bf90
        ;   Label: core_charactr.cpp_CCharacter_drop_FUN_0042bf90
    PUSH ESI                            ; 0042bf91
    PUSH EDI                            ; 0042bf92
    PUSH EBP                            ; 0042bf93
    MOV ESI,dword ptr [ESP + 0x14]      ; 0042bf94
    MOV EDI,dword ptr [ESP + 0x18]      ; 0042bf98
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0042bf9c
    PUSH 0x954                          ; 0042bfa0
    PUSH 0x61715e                       ; 0042bfa5 | = "..\\core\\charactr.cpp"
    PUSH EDI                            ; 0042bfaa
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0042bfab
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 0042bfb0
    PUSH 0x955                          ; 0042bfb3
    PUSH 0x617173                       ; 0042bfb8 | = "..\\core\\charactr.cpp"
    PUSH ESI                            ; 0042bfbd
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0042bfbe
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESI,0x24ac                      ; 0042bfc3
    ADD ESP,0xc                         ; 0042bfc9
    MOV EBX,ESI                         ; 0042bfcc
    ADD ESI,0x88                        ; 0042bfce
    MOV EDX,dword ptr [EBX + 0x8]       ; 0042bfd4
        ;   Label: LAB_0042bfd4
    CMP EDI,EDX                         ; 0042bfd7
    JZ 0x0042bfe7                       ; 0042bfd9
        ;   XREF to: 0042bfe7 (CONDITIONAL_JUMP)  ; LAB_0042bfe7
    ADD EBX,0x44                        ; 0042bfdb
    CMP EBX,ESI                         ; 0042bfde
    JNZ 0x0042bfd4                      ; 0042bfe0
        ;   XREF to: 0042bfd4 (CONDITIONAL_JUMP)  ; LAB_0042bfd4
    POP EBP                             ; 0042bfe2
    POP EDI                             ; 0042bfe3
    POP ESI                             ; 0042bfe4
    POP EBX                             ; 0042bfe5
    RET                                 ; 0042bfe6
    PUSH EBP                            ; 0042bfe7
        ;   Label: LAB_0042bfe7
    MOV EDX,dword ptr [EDX + 0x154]     ; 0042bfe8
    PUSH EDI                            ; 0042bfee
    CALL dword ptr [EDX + 0x84]         ; 0042bfef
    ADD ESP,0x8                         ; 0042bff5
    MOV dword ptr [EBX + 0x8],0x0       ; 0042bff8
    ADD EBX,0x44                        ; 0042bfff
    CMP EBX,ESI                         ; 0042c002
    JNZ 0x0042bfd4                      ; 0042c004
        ;   XREF to: 0042bfd4 (CONDITIONAL_JUMP)  ; LAB_0042bfd4
    POP EBP                             ; 0042c006
    POP EDI                             ; 0042c007
    POP ESI                             ; 0042c008
    POP EBX                             ; 0042c009
    RET                                 ; 0042c00a

