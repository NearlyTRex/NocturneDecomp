; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trap_cpp_CTrap_process_FUN_00546900(CDemonActor *param_1)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
;
; Referenced Globals:
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 g_CDemonSet_01e57284.enemy_count
;   undefined4 g_CWerewolfActorType_02de078c.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546900
        ;   Label: core_trap.cpp_CTrap_process_FUN_00546900
    PUSH ESI                            ; 00546901
    PUSH EDI                            ; 00546902
    PUSH EBP                            ; 00546903
    SUB ESP,0x88                        ; 00546904
    MOV ESI,dword ptr [ESP + 0x9c]      ; 0054690a
    CMP dword ptr [ESI + 0x2cc],0x0     ; 00546911
    JNZ 0x00546948                      ; 00546918
        ;   XREF to: 00546948 (CONDITIONAL_JUMP)  ; LAB_00546948
    MOV ECX,dword ptr [ESI + 0x2d0]     ; 0054691a
    TEST ECX,ECX                        ; 00546920
    JNZ 0x00546953                      ; 00546922
        ;   XREF to: 00546953 (CONDITIONAL_JUMP)  ; LAB_00546953
    LEA EDX,[ESP + 0x64]                ; 00546924
        ;   Label: LAB_00546924
    PUSH EDX                            ; 00546928
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00546929
    PUSH ESI                            ; 0054692f
    XOR EBP,EBP                         ; 00546930
    XOR EDI,EDI                         ; 00546932
    CALL dword ptr [EAX + 0x14]         ; 00546934
    ADD ESP,0x8                         ; 00546937
    MOV EBX,dword ptr [0x005be368]      ; 0054693a | g_CDemonSet_PTR_005be368
        ;   Label: LAB_0054693a
    CMP EBP,dword ptr [EBX + 0x150bf4]  ; 00546940 | g_CDemonSet_01e57284.enemy_count
    JL 0x00546989                       ; 00546946
        ;   XREF to: 00546989 (CONDITIONAL_JUMP)  ; LAB_00546989
    ADD ESP,0x88                        ; 00546948
        ;   Label: LAB_00546948
    POP EBP                             ; 0054694e
    POP EDI                             ; 0054694f
    POP ESI                             ; 00546950
    POP EBX                             ; 00546951
    RET                                 ; 00546952
    PUSH ECX                            ; 00546953
        ;   Label: LAB_00546953
    MOV EDX,dword ptr [ECX + 0x14c]     ; 00546954
    CALL dword ptr [EDX + 0x104]        ; 0054695a
    ADD ESP,0x4                         ; 00546960
    TEST EAX,EAX                        ; 00546963
    JZ 0x00546948                       ; 00546965
        ;   XREF to: 00546948 (CONDITIONAL_JUMP)  ; LAB_00546948
    MOV EAX,dword ptr [ESI + 0x2d0]     ; 00546967
    MOV dword ptr [EAX + 0xbd50],0x0    ; 0054696d
    MOV dword ptr [ESI + 0x2d0],0x0     ; 00546977
    JMP 0x00546924                      ; 00546981
        ;   XREF to: 00546924 (UNCONDITIONAL_JUMP)  ; LAB_00546924
    INC EBP                             ; 00546983
        ;   Label: LAB_00546983
    ADD EDI,0x4                         ; 00546984
    JMP 0x0054693a                      ; 00546987
        ;   XREF to: 0054693a (UNCONDITIONAL_JUMP)  ; LAB_0054693a
    MOV EDX,dword ptr [0x02de07c4]      ; 00546989 | g_CWerewolfActorType_02de078c.name_hash
        ;   Label: LAB_00546989
    PUSH EDX                            ; 0054698f
    MOV ECX,dword ptr [EDI + EBX*0x1 + 0x150bf8] ; 00546990
    PUSH ECX                            ; 00546997
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00546998
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0054699d
    ADD ESP,0x8                         ; 0054699f
    TEST EAX,EAX                        ; 005469a2
    JZ 0x00546983                       ; 005469a4
        ;   XREF to: 00546983 (CONDITIONAL_JUMP)  ; LAB_00546983
    CMP dword ptr [EAX + 0xbd50],0x0    ; 005469a6
    JNZ 0x00546983                      ; 005469ad
        ;   XREF to: 00546983 (CONDITIONAL_JUMP)  ; LAB_00546983
    LEA EAX,[ESP + 0x3c]                ; 005469af
    PUSH EAX                            ; 005469b3
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 005469b4
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005469b9
    LEA EAX,[ESP + 0x3c]                ; 005469bc
    PUSH EAX                            ; 005469c0
    MOV EDX,dword ptr [EBX + 0x14c]     ; 005469c1
    PUSH EBX                            ; 005469c7
    CALL dword ptr [EDX + 0x34]         ; 005469c8
    ADD ESP,0x8                         ; 005469cb
    FLD float ptr [ESI + 0x24]          ; 005469ce
    FADD float ptr [ESP + 0x74]         ; 005469d1
    FCOMP float ptr [EBX + 0x24]        ; 005469d5
    FNSTSW AX                           ; 005469d8
    SAHF                                ; 005469da
    JC 0x00546983                       ; 005469db
        ;   XREF to: 00546983 (CONDITIONAL_JUMP)  ; LAB_00546983
    FLD float ptr [EBX + 0x24]          ; 005469dd
    FADD float ptr [ESP + 0x54]         ; 005469e0
    FLD float ptr [ESI + 0x24]          ; 005469e4
    FADD float ptr [ESP + 0x68]         ; 005469e7
    FCOMPP                              ; 005469eb
    FNSTSW AX                           ; 005469ed
    SAHF                                ; 005469ef
    JA 0x00546983                       ; 005469f0
        ;   XREF to: 00546983 (CONDITIONAL_JUMP)  ; LAB_00546983
    LEA EAX,[EBX + 0x20]                ; 005469f2
    PUSH EAX                            ; 005469f5
    LEA EAX,[ESP + 0x80]                ; 005469f6
    PUSH EAX                            ; 005469fd
    PUSH ESI                            ; 005469fe
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 005469ff
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00546a04
    FLD float ptr [ESP + 0x7c]          ; 00546a07
    FADD float ptr [ESP + 0x58]         ; 00546a0b
    FCOMP float ptr [ESP + 0x64]        ; 00546a0f
    FNSTSW AX                           ; 00546a13
    SAHF                                ; 00546a15
    JC 0x00546983                       ; 00546a16
        ;   XREF to: 00546983 (CONDITIONAL_JUMP)  ; LAB_00546983
    FLD float ptr [ESP + 0x7c]          ; 00546a1c
    FSUB float ptr [ESP + 0x58]         ; 00546a20
    FCOMP float ptr [ESP + 0x70]        ; 00546a24
    FNSTSW AX                           ; 00546a28
    SAHF                                ; 00546a2a
    JA 0x00546983                       ; 00546a2b
        ;   XREF to: 00546983 (CONDITIONAL_JUMP)  ; LAB_00546983
    FLD float ptr [ESP + 0x84]          ; 00546a31
    FADD float ptr [ESP + 0x58]         ; 00546a38
    FCOMP float ptr [ESP + 0x6c]        ; 00546a3c
    FNSTSW AX                           ; 00546a40
    SAHF                                ; 00546a42
    JC 0x00546983                       ; 00546a43
        ;   XREF to: 00546983 (CONDITIONAL_JUMP)  ; LAB_00546983
    FLD float ptr [ESP + 0x84]          ; 00546a49
    FSUB float ptr [ESP + 0x58]         ; 00546a50
    FCOMP float ptr [ESP + 0x78]        ; 00546a54
    FNSTSW AX                           ; 00546a58
    SAHF                                ; 00546a5a
    JA 0x00546983                       ; 00546a5b
        ;   XREF to: 00546983 (CONDITIONAL_JUMP)  ; LAB_00546983
    MOV dword ptr [ESI + 0x2d0],EBX     ; 00546a61
    MOV EAX,ESP                         ; 00546a67
    MOV dword ptr [EBX + 0xbd54],0x40000000 ; 00546a69
    PUSH EAX                            ; 00546a73
    MOV dword ptr [EBX + 0xbd50],ESI    ; 00546a74
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00546a7a
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00546a7f
    MOV EAX,ESP                         ; 00546a82
    MOV EDX,0x41200000                  ; 00546a84
    PUSH EAX                            ; 00546a89
    MOV dword ptr [ESP + 0x8],EDX       ; 00546a8a
    PUSH EBX                            ; 00546a8e
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00546a8f
    CALL dword ptr [EDX + 0x100]        ; 00546a95
    ADD ESP,0x8                         ; 00546a9b
    ADD ESP,0x88                        ; 00546a9e
    POP EBP                             ; 00546aa4
    POP EDI                             ; 00546aa5
    POP ESI                             ; 00546aa6
    POP EBX                             ; 00546aa7
    RET                                 ; 00546aa8

