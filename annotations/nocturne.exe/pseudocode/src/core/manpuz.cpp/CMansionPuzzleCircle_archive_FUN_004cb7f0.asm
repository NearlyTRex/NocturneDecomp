; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0(CDemonActor *param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_pGemPos_005880e3
;   TerminatedCString s_pGemOrient_005880eb
;   TerminatedCString s_pEmitterPos_005880f6
;   TerminatedCString s_exists_00588102
;   TerminatedCString s_r_00588109
;   TerminatedCString s_g_0058810b
;   TerminatedCString s_b_0058810d
;   int INT_005bad50 = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveOrientation_FUN_0040c4f0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004cb7f0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0
    PUSH EBP                            ; 004cb7f1
    SUB ESP,0x4                         ; 004cb7f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004cb7f5
    PUSH ESI                            ; 004cb7f9
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004cb7fa
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    MOV EDX,dword ptr [0x005bad50]      ; 004cb7ff | INT_005bad50
    ADD ESP,0x4                         ; 004cb805
    CMP EDX,0x2                         ; 004cb808
    JGE 0x004cb892                      ; 004cb80b
        ;   XREF to: 004cb892 (CONDITIONAL_JUMP)  ; LAB_004cb892
    CMP dword ptr [0x005bad50],0x3      ; 004cb811 | INT_005bad50
        ;   Label: LAB_004cb811
    JL 0x004cb88c                       ; 004cb818
        ;   XREF to: 004cb88c (CONDITIONAL_JUMP)  ; LAB_004cb88c
    PUSH EDI                            ; 004cb81a
    PUSH EBX                            ; 004cb81b
    LEA EAX,[ESI + 0x5e8]               ; 004cb81c
    LEA EBP,[ESI + 0x63c]               ; 004cb822
    XOR EBX,EBX                         ; 004cb828
    LEA EDI,[ESI + 0x638]               ; 004cb82a
    MOV dword ptr [ESP + 0x8],EAX       ; 004cb830
    ADD ESI,0x634                       ; 004cb834
    IMUL EAX,EBX,0x64                   ; 004cb83a
        ;   Label: LAB_004cb83a
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cb83d
    PUSH 0x588102                       ; 004cb841 | = "exists"
    ADD EAX,EDX                         ; 004cb846
    PUSH EAX                            ; 004cb848
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004cb849
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cb84e
    PUSH 0x588109                       ; 004cb851 | = "r"
    PUSH ESI                            ; 004cb856
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004cb857
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cb85c
    PUSH 0x58810b                       ; 004cb85f | = "g"
    PUSH EDI                            ; 004cb864
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004cb865
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cb86a
    PUSH 0x58810d                       ; 004cb86d | = "b"
    INC EBX                             ; 004cb872
    PUSH EBP                            ; 004cb873
    ADD ESI,0x64                        ; 004cb874
    ADD EDI,0x64                        ; 004cb877
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004cb87a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cb87f
    ADD EBP,0x64                        ; 004cb882
    CMP EBX,0xc                         ; 004cb885
    JL 0x004cb83a                       ; 004cb888
        ;   XREF to: 004cb83a (CONDITIONAL_JUMP)  ; LAB_004cb83a
    POP EBX                             ; 004cb88a
    POP EDI                             ; 004cb88b
    ADD ESP,0x4                         ; 004cb88c
        ;   Label: LAB_004cb88c
    POP EBP                             ; 004cb88f
    POP ESI                             ; 004cb890
    RET                                 ; 004cb891
    PUSH 0x5880e3                       ; 004cb892 | = "pGemPos"
        ;   Label: LAB_004cb892
    LEA EAX,[ESI + 0x5c4]               ; 004cb897
    PUSH EAX                            ; 004cb89d
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 004cb89e
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cb8a3
    PUSH 0x5880eb                       ; 004cb8a6 | = "pGemOrient"
    LEA EAX,[ESI + 0x5d0]               ; 004cb8ab
    PUSH EAX                            ; 004cb8b1
    CALL core_actor.cpp_archiveOrientation_FUN_0040c4f0 ; 004cb8b2
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveOrientation_FUN_0040c4f0(COrientation * orient_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cb8b7
    PUSH 0x5880f6                       ; 004cb8ba | = "pEmitterPos"
    LEA EAX,[ESI + 0x5dc]               ; 004cb8bf
    PUSH EAX                            ; 004cb8c5
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 004cb8c6
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cb8cb
    JMP 0x004cb811                      ; 004cb8ce
        ;   XREF to: 004cb811 (UNCONDITIONAL_JUMP)  ; LAB_004cb811

