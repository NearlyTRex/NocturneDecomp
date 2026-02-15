; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_FUN_005fb530(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_zombie.cpp_CZombie_process_FUN_005f9470 at 005fa8e9
;
; Referenced Globals:
;   TerminatedCString s_s_can_t_pick_up_s_sombod_0065882d
;   TerminatedCString s_s_can_t_pick_up_s_giving_0065885f
;   TerminatedCString s_s_beginning_to_pickup_s_0065887f
;   TerminatedCString s_core_zombie_cpp_0065889a
;   TerminatedCString s_Invalid_zombie_object_sh_006588ad
;   TerminatedCString s_CBodyPart_006588ca
;   TerminatedCString s_s_is_going_to_try_to_pic_006588d4
;   double DOUBLE_006588fd = 0.333333333333333
;   double DOUBLE_00658905 = 5
;   double DOUBLE_0065890d = 0.400000000000000
;   float FLOAT_00658915 = 15
;   CConsole* g_CConsolePtr = 0083b1a4
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CConsole g_CConsoleInstance
;   char* g_CurrentFilename
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_bodypart.cpp_FUN_0041b4e0
;   core_bodypart.cpp_FUN_0041b540
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_zombie.cpp_CZombie_FUN_005fbd00
;   core_zombie.cpp_CZombie_FUN_005fbda0
;   core_zombie.cpp_CZombie_FUN_005fca10
;   core_zombie.cpp_FUN_005f8e50
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fb530
        ;   Label: core_zombie.cpp_CZombie_FUN_005fb530
    PUSH ESI                            ; 005fb531
    PUSH EDI                            ; 005fb532
    PUSH EBP                            ; 005fb533
    MOV EBP,ESP                         ; 005fb534
    SUB ESP,0x158                       ; 005fb536
    AND ESP,0xfffffff8                  ; 005fb53c
    MOV ESI,dword ptr [EBP + 0x14]      ; 005fb53f
    CMP dword ptr [ESI + 0xbf88],0x0    ; 005fb542
    JL 0x005fb5a3                       ; 005fb549
        ;   XREF to: 005fb5a3 (CONDITIONAL_JUMP)  ; LAB_005fb5a3
    FLD float ptr [ESI + 0xbec4]        ; 005fb54b
    FSUB float ptr [EBP + 0x18]         ; 005fb551
    FST float ptr [ESI + 0xbec4]        ; 005fb554
    FLDZ                                ; 005fb55a
    FCOMPP                              ; 005fb55c
    FNSTSW AX                           ; 005fb55e
    SAHF                                ; 005fb560
    JC 0x005fb5ac                       ; 005fb561
        ;   XREF to: 005fb5ac (CONDITIONAL_JUMP)  ; LAB_005fb5ac
    MOV EBX,dword ptr [ESI + 0x24b4]    ; 005fb563
        ;   Label: LAB_005fb563
    TEST EBX,EBX                        ; 005fb569
    JNZ 0x005fb5a3                      ; 005fb56b
        ;   XREF to: 005fb5a3 (CONDITIONAL_JUMP)  ; LAB_005fb5a3
    CMP dword ptr [ESI + 0x24f8],0x0    ; 005fb56d
    JNZ 0x005fb5a3                      ; 005fb574
        ;   XREF to: 005fb5a3 (CONDITIONAL_JUMP)  ; LAB_005fb5a3
    FLD float ptr [ESI + 0xbec8]        ; 005fb576
    FLDZ                                ; 005fb57c
    FCOMPP                              ; 005fb57e
    FNSTSW AX                           ; 005fb580
    SAHF                                ; 005fb582
    JNC 0x005fb5e1                      ; 005fb583
        ;   XREF to: 005fb5e1 (CONDITIONAL_JUMP)  ; LAB_005fb5e1
    FLD float ptr [ESI + 0xbec8]        ; 005fb585
    FSUB float ptr [EBP + 0x18]         ; 005fb58b
    FST float ptr [ESI + 0xbec8]        ; 005fb58e
    FLDZ                                ; 005fb594
    FCOMPP                              ; 005fb596
    FNSTSW AX                           ; 005fb598
    SAHF                                ; 005fb59a
    JBE 0x005fb5a3                      ; 005fb59b
        ;   XREF to: 005fb5a3 (CONDITIONAL_JUMP)  ; LAB_005fb5a3
    MOV dword ptr [ESI + 0xbec8],EBX    ; 005fb59d
    XOR EAX,EAX                         ; 005fb5a3
        ;   Label: LAB_005fb5a3
    MOV ESP,EBP                         ; 005fb5a5
    POP EBP                             ; 005fb5a7
    POP EDI                             ; 005fb5a8
    POP ESI                             ; 005fb5a9
    POP EBX                             ; 005fb5aa
    RET                                 ; 005fb5ab
    MOV ECX,dword ptr [ESI + 0xbec0]    ; 005fb5ac
        ;   Label: LAB_005fb5ac
    PUSH 0x41200000                     ; 005fb5b2
    INC ECX                             ; 005fb5b7
    PUSH 0x40a00000                     ; 005fb5b8
    MOV dword ptr [ESI + 0xbec0],ECX    ; 005fb5bd
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005fb5c3
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EAX,dword ptr [ESI + 0xbecc]    ; 005fb5e1
        ;   Label: LAB_005fb5e1
    LEA EDI,[ESI + 0x20]                ; 005fb5e7
    TEST EAX,EAX                        ; 005fb5ea
    JNZ 0x005fb66f                      ; 005fb5ec
        ;   XREF to: 005fb66f (CONDITIONAL_JUMP)  ; LAB_005fb66f
    MOV dword ptr [ESP + 0x144],EBX     ; 005fb5f2
    MOV dword ptr [ESP + 0x150],EBX     ; 005fb5f9
    MOV dword ptr [ESP + 0x14c],EDI     ; 005fb600
    MOV dword ptr [ESP + 0x148],EBX     ; 005fb607
    XOR EDI,EDI                         ; 005fb60e
    MOV EAX,[0x006810c8]                ; 005fb610 | g_CDemonSetPtr
        ;   Label: LAB_005fb610
    MOV EDX,dword ptr [ESP + 0x150]     ; 005fb615
    CMP EDX,dword ptr [EAX + 0x14d154]  ; 005fb61c | g_CDemonSetInstance.actor_count
    JGE 0x005fbc82                      ; 005fb622
        ;   XREF to: 005fbc82 (CONDITIONAL_JUMP)  ; LAB_005fbc82
    ADD EAX,dword ptr [ESP + 0x148]     ; 005fb628
    MOV EBX,dword ptr [EAX + 0x14d158]  ; 005fb62f | g_CDemonSetInstance.actors[0] | DAT_032613d4
    PUSH EBX                            ; 005fb635
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fb636
    CALL dword ptr [EAX + 0x8c]         ; 005fb63c
    ADD ESP,0x4                         ; 005fb642
    TEST EAX,EAX                        ; 005fb645
    JZ 0x005fbb15                       ; 005fb647
        ;   XREF to: 005fbb15 (CONDITIONAL_JUMP)  ; LAB_005fbb15
    MOV EDX,dword ptr [ESP + 0x150]     ; 005fb64d
        ;   Label: LAB_005fb64d
    MOV EAX,dword ptr [ESP + 0x148]     ; 005fb654
    INC EDX                             ; 005fb65b
    ADD EAX,0x4                         ; 005fb65c
    MOV dword ptr [ESP + 0x150],EDX     ; 005fb65f
    MOV dword ptr [ESP + 0x148],EAX     ; 005fb666
    JMP 0x005fb610                      ; 005fb66d
        ;   XREF to: 005fb610 (UNCONDITIONAL_JUMP)  ; LAB_005fb610
    PUSH EAX                            ; 005fb66f
        ;   Label: LAB_005fb66f
    MOV EDX,dword ptr [EAX + 0x154]     ; 005fb670
    CALL dword ptr [EDX + 0x8c]         ; 005fb676
    ADD ESP,0x4                         ; 005fb67c
    TEST EAX,EAX                        ; 005fb67f
    JNZ 0x005fb90a                      ; 005fb681
        ;   XREF to: 005fb90a (CONDITIONAL_JUMP)  ; LAB_005fb90a
    MOV EAX,dword ptr [ESI + 0xbecc]    ; 005fb687
    FLD float ptr [EDI]                 ; 005fb68d
    FSUB float ptr [EAX + 0x20]         ; 005fb68f
    FMUL ST0                            ; 005fb692
    FLD float ptr [EDI + 0x8]           ; 005fb694
    FSUB float ptr [EAX + 0x28]         ; 005fb697
    FMUL ST0                            ; 005fb69a
    FADDP                               ; 005fb69c
    FSQRT                               ; 005fb69e
    FMUL double ptr [0x006588fd]        ; 005fb6a0 | DOUBLE_006588fd
    FSUBR double ptr [0x00658905]       ; 005fb6a6 | DOUBLE_00658905
    FST float ptr [ESP]                 ; 005fb6ac
    FLD1                                ; 005fb6af
    FCOMPP                              ; 005fb6b1
    FNSTSW AX                           ; 005fb6b3
    SAHF                                ; 005fb6b5
    JBE 0x005fb6bf                      ; 005fb6b6
        ;   XREF to: 005fb6bf (CONDITIONAL_JUMP)  ; LAB_005fb6bf
    MOV dword ptr [ESP],0x3f800000      ; 005fb6b8
    FLD float ptr [EBP + 0x18]          ; 005fb6bf
        ;   Label: LAB_005fb6bf
    FMUL float ptr [ESP]                ; 005fb6c2
    MOV EAX,dword ptr [ESI + 0xbed0]    ; 005fb6c5
    MOV EBX,0xffffffff                  ; 005fb6cb
    PUSH EAX                            ; 005fb6d0
    FADD float ptr [ESI + 0xbec8]       ; 005fb6d1
    PUSH ESI                            ; 005fb6d7
    FSTP float ptr [ESI + 0xbec8]       ; 005fb6d8
    CALL core_zombie.cpp_CZombie_FUN_005fbd00 ; 005fb6de
        ;   XREF to: 005fbd00 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_FUN_005fbd00(CZombie * this_ptr)
    ADD ESP,0x8                         ; 005fb6e3
    MOV EDI,EAX                         ; 005fb6e6
    TEST EAX,EAX                        ; 005fb6e8
    JL 0x005fb8f0                       ; 005fb6ea
        ;   XREF to: 005fb8f0 (CONDITIONAL_JUMP)  ; LAB_005fb8f0
    FLD float ptr [ESI + 0xbec8]        ; 005fb6f0
    FLDZ                                ; 005fb6f6
    FCOMPP                              ; 005fb6f8
    FNSTSW AX                           ; 005fb6fa
    SAHF                                ; 005fb6fc
    JBE 0x005fb8f0                      ; 005fb6fd
        ;   XREF to: 005fb8f0 (CONDITIONAL_JUMP)  ; LAB_005fb8f0
    PUSH ESI                            ; 005fb703
    MOV EAX,dword ptr [ESI + 0xbecc]    ; 005fb704
    PUSH EAX                            ; 005fb70a
    MOV EDX,dword ptr [EAX + 0x154]     ; 005fb70b
    CALL dword ptr [EDX + 0x7c]         ; 005fb711
    ADD ESP,0x8                         ; 005fb714
    CMP EAX,0x3                         ; 005fb717
    JNZ 0x005fb8f0                      ; 005fb71a
        ;   XREF to: 005fb8f0 (CONDITIONAL_JUMP)  ; LAB_005fb8f0
    MOV EDX,dword ptr [ESI + 0xbed0]    ; 005fb720
    PUSH EDX                            ; 005fb726
    PUSH ESI                            ; 005fb727
    CALL core_zombie.cpp_CZombie_FUN_005fbda0 ; 005fb728
        ;   XREF to: 005fbda0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_FUN_005fbda0(CZombie * this_ptr)
    ADD ESP,0x8                         ; 005fb72d
    TEST EAX,EAX                        ; 005fb730
    JZ 0x005fb8f0                       ; 005fb732
        ;   XREF to: 005fb8f0 (CONDITIONAL_JUMP)  ; LAB_005fb8f0
    MOV EAX,dword ptr [ESI + 0xbed0]    ; 005fb738
    CMP EAX,0x2                         ; 005fb73e
    JNC 0x005fba09                      ; 005fb741
        ;   XREF to: 005fba09 (CONDITIONAL_JUMP)  ; LAB_005fba09
    CMP EAX,0x1                         ; 005fb747
    JNZ 0x005fba18                      ; 005fb74a
        ;   XREF to: 005fba18 (CONDITIONAL_JUMP)  ; LAB_005fba18
    LEA EAX,[ESP + 0x88]                ; 005fb750
        ;   Label: LAB_005fb750
    MOV EBX,dword ptr [ESI + 0xbecc]    ; 005fb757
    PUSH EAX                            ; 005fb75d
    MOV EDX,dword ptr [EBX + 0x154]     ; 005fb75e
    PUSH EBX                            ; 005fb764
    CALL dword ptr [EDX + 0x14]         ; 005fb765
    MOV EAX,0x3f000000                  ; 005fb768
    ADD ESP,0x8                         ; 005fb76d
    MOV dword ptr [ESP + 0x13c],EAX     ; 005fb770
    LEA EAX,[ESP + 0x13c]               ; 005fb777
    PUSH EAX                            ; 005fb77e
    LEA EAX,[ESP + 0xec]                ; 005fb77f
    PUSH EAX                            ; 005fb786
    LEA EAX,[ESP + 0x9c]                ; 005fb787
    PUSH EAX                            ; 005fb78e
    LEA EAX,[ESP + 0xc4]                ; 005fb78f
    PUSH EAX                            ; 005fb796
    LEA EAX,[ESP + 0x98]                ; 005fb797
    PUSH EAX                            ; 005fb79e
    CALL core_bodypart.cpp_FUN_0041b540 ; 005fb79f
        ;   XREF to: 0041b540 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_0041b540()
    ADD ESP,0xc                         ; 005fb7a4
    PUSH EAX                            ; 005fb7a7
    CALL core_bodypart.cpp_FUN_0041b4e0 ; 005fb7a8
        ;   XREF to: 0041b4e0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_0041b4e0()
    ADD ESP,0xc                         ; 005fb7ad
    LEA EAX,[ESP + 0xe8]                ; 005fb7b0
    PUSH EAX                            ; 005fb7b7
    LEA EAX,[ESP + 0x128]               ; 005fb7b8
    FLD float ptr [ESP + 0x94]          ; 005fb7bf
    PUSH EAX                            ; 005fb7c6
    FADD double ptr [0x0065890d]        ; 005fb7c7 | DOUBLE_0065890d
    PUSH EBX                            ; 005fb7cd
    FSTP float ptr [ESP + 0xfc]         ; 005fb7ce
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005fb7d5
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EAX,[ESP + 0x130]               ; 005fb7da
    LEA EDX,[ESP + 0xd0]                ; 005fb7e1
    ADD ESP,0xc                         ; 005fb7e8
    CMP EDX,EAX                         ; 005fb7eb
    JZ 0x005fb819                       ; 005fb7ed
        ;   XREF to: 005fb819 (CONDITIONAL_JUMP)  ; LAB_005fb819
    MOV EAX,dword ptr [ESP + 0x124]     ; 005fb7ef
    MOV dword ptr [ESP + 0xc4],EAX      ; 005fb7f6
    MOV EAX,dword ptr [ESP + 0x128]     ; 005fb7fd
    MOV dword ptr [ESP + 0xc8],EAX      ; 005fb804
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005fb80b
    MOV dword ptr [ESP + 0xcc],EAX      ; 005fb812
        ;   Label: LAB_005fb812
    MOV EAX,[0x03f87558]                ; 005fb819 | g_ZeroVector
        ;   Label: LAB_005fb819
    MOV dword ptr [ESP + 0xa0],EAX      ; 005fb81e
    MOV EAX,[0x03f8755c]                ; 005fb825 | g_ZeroVector.y
    MOV dword ptr [ESP + 0xa4],EAX      ; 005fb82a
    MOV EAX,[0x03f87560]                ; 005fb831 | g_ZeroVector.z
    MOV dword ptr [ESP + 0xa8],EAX      ; 005fb836
    TEST EDI,EDI                        ; 005fb83d
    JNZ 0x005fb887                      ; 005fb83f
        ;   XREF to: 005fb887 (CONDITIONAL_JUMP)  ; LAB_005fb887
    MOV EDX,0xbfc00000                  ; 005fb841
    LEA EAX,[ESP + 0xa0]                ; 005fb846
    MOV dword ptr [ESP + 0xf8],EDI      ; 005fb84d
    MOV dword ptr [ESP + 0xf4],EDX      ; 005fb854
    LEA EDX,[ESP + 0xf4]                ; 005fb85b
    MOV dword ptr [ESP + 0xfc],EDI      ; 005fb862
    CMP EAX,EDX                         ; 005fb869
    JZ 0x005fb887                       ; 005fb86b
        ;   XREF to: 005fb887 (CONDITIONAL_JUMP)  ; LAB_005fb887
    MOV EAX,0xbfc00000                  ; 005fb86d
    MOV dword ptr [ESP + 0xa4],EDI      ; 005fb872
    MOV dword ptr [ESP + 0xa8],EDI      ; 005fb879
    MOV dword ptr [ESP + 0xa0],EAX      ; 005fb880
    CMP EDI,0x1                         ; 005fb887
        ;   Label: LAB_005fb887
    JNZ 0x005fb8cf                      ; 005fb88a
        ;   XREF to: 005fb8cf (CONDITIONAL_JUMP)  ; LAB_005fb8cf
    MOV EBX,0x3fc00000                  ; 005fb88c
    LEA EDX,[ESP + 0xd0]                ; 005fb891
    XOR EDI,EDI                         ; 005fb898
    LEA EAX,[ESP + 0xa0]                ; 005fb89a
    MOV dword ptr [ESP + 0xd4],EDI      ; 005fb8a1
    MOV dword ptr [ESP + 0xd8],EDI      ; 005fb8a8
    MOV dword ptr [ESP + 0xd0],EBX      ; 005fb8af
    CMP EAX,EDX                         ; 005fb8b6
    JZ 0x005fb8cf                       ; 005fb8b8
        ;   XREF to: 005fb8cf (CONDITIONAL_JUMP)  ; LAB_005fb8cf
    MOV dword ptr [ESP + 0xa4],EDI      ; 005fb8ba
    MOV dword ptr [ESP + 0xa8],EDI      ; 005fb8c1
    MOV dword ptr [ESP + 0xa0],EBX      ; 005fb8c8
    PUSH 0x0                            ; 005fb8cf
        ;   Label: LAB_005fb8cf
    LEA EAX,[ESP + 0xa4]                ; 005fb8d1
    PUSH 0x0                            ; 005fb8d8
    PUSH EAX                            ; 005fb8da
    PUSH 0x0                            ; 005fb8db
    LEA EAX,[ESP + 0xd4]                ; 005fb8dd
    PUSH EAX                            ; 005fb8e4
    PUSH ESI                            ; 005fb8e5
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 005fb8e6
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005fb8eb
    MOV EBX,EAX                         ; 005fb8ee
    TEST EBX,EBX                        ; 005fb8f0
        ;   Label: LAB_005fb8f0
    JL 0x005fba4b                       ; 005fb8f2
        ;   XREF to: 005fba4b (CONDITIONAL_JUMP)  ; LAB_005fba4b
    JG 0x005fbab2                       ; 005fb8f8
        ;   XREF to: 005fbab2 (CONDITIONAL_JUMP)  ; LAB_005fbab2
    MOV EAX,0x1                         ; 005fb8fe
    MOV ESP,EBP                         ; 005fb903
    POP EBP                             ; 005fb905
    POP EDI                             ; 005fb906
    POP ESI                             ; 005fb907
    POP EBX                             ; 005fb908
    RET                                 ; 005fb909
    MOV EAX,dword ptr [ESI + 0xbecc]    ; 005fb90a
        ;   Label: LAB_005fb90a
    PUSH EAX                            ; 005fb910
    PUSH ESI                            ; 005fb911
    PUSH 0x65882d                       ; 005fb912 | = "%s can't pick up %s, sombody else bea..."
    MOV EDX,dword ptr [0x0066e8e0]      ; 005fb917 | g_CConsolePtr
    PUSH EDX                            ; 005fb91d | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005fb91e
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005fb923
    MOV dword ptr [ESI + 0xbecc],EBX    ; 005fb926
    PUSH ESI                            ; 005fb92c
    MOV dword ptr [ESI + 0xbec8],EBX    ; 005fb92d
    CALL core_zombie.cpp_CZombie_FUN_005fca10 ; 005fb933
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005fb938
    XOR EAX,EAX                         ; 005fb93b
    MOV ESP,EBP                         ; 005fb93d
    POP EBP                             ; 005fb93f
    POP EDI                             ; 005fb940
    POP ESI                             ; 005fb941
    POP EBX                             ; 005fb942
    RET                                 ; 005fb943
    LEA EDX,[ESP + 0x70]                ; 005fb944
        ;   Label: LAB_005fb944
    MOV EBX,dword ptr [ESI + 0xbecc]    ; 005fb948
    PUSH EDX                            ; 005fb94e
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fb94f
    PUSH EBX                            ; 005fb955
    CALL dword ptr [EAX + 0x14]         ; 005fb956
    ADD ESP,0x8                         ; 005fb959
    LEA EAX,[ESP + 0x138]               ; 005fb95c
    PUSH EAX                            ; 005fb963
    LEA EAX,[ESP + 0xb0]                ; 005fb964
    PUSH EAX                            ; 005fb96b
    LEA EAX,[ESP + 0x84]                ; 005fb96c
    PUSH EAX                            ; 005fb973
    LEA EAX,[ESP + 0x10c]               ; 005fb974
    PUSH EAX                            ; 005fb97b
    LEA EAX,[ESP + 0x80]                ; 005fb97c
    MOV ECX,0x3f000000                  ; 005fb983
    PUSH EAX                            ; 005fb988
    MOV dword ptr [ESP + 0x14c],ECX     ; 005fb989
    CALL core_bodypart.cpp_FUN_0041b540 ; 005fb990
        ;   XREF to: 0041b540 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_0041b540()
    ADD ESP,0xc                         ; 005fb995
    PUSH EAX                            ; 005fb998
    CALL core_bodypart.cpp_FUN_0041b4e0 ; 005fb999
        ;   XREF to: 0041b4e0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_0041b4e0()
    ADD ESP,0xc                         ; 005fb99e
    LEA EAX,[ESP + 0xac]                ; 005fb9a1
    PUSH EAX                            ; 005fb9a8
    LEA EAX,[ESP + 0x11c]               ; 005fb9a9
    FLD float ptr [ESP + 0x7c]          ; 005fb9b0
    PUSH EAX                            ; 005fb9b4
    FADD double ptr [0x0065890d]        ; 005fb9b5 | DOUBLE_0065890d
    PUSH EBX                            ; 005fb9bb
    FSTP float ptr [ESP + 0xc0]         ; 005fb9bc
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005fb9c3
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EDX,[ESP + 0x124]               ; 005fb9c8
    LEA EAX,[ESP + 0xd0]                ; 005fb9cf
    ADD ESP,0xc                         ; 005fb9d6
    CMP EAX,EDX                         ; 005fb9d9
    JZ 0x005fb819                       ; 005fb9db
        ;   XREF to: 005fb819 (CONDITIONAL_JUMP)  ; LAB_005fb819
    MOV EAX,dword ptr [ESP + 0x118]     ; 005fb9e1
    MOV dword ptr [ESP + 0xc4],EAX      ; 005fb9e8
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005fb9ef
    MOV dword ptr [ESP + 0xc8],EAX      ; 005fb9f6
    MOV EAX,dword ptr [ESP + 0x120]     ; 005fb9fd
    JMP 0x005fb812                      ; 005fba04
        ;   XREF to: 005fb812 (UNCONDITIONAL_JUMP)  ; LAB_005fb812
    JBE 0x005fb944                      ; 005fba09
        ;   XREF to: 005fb944 (CONDITIONAL_JUMP)  ; LAB_005fb944
        ;   Label: LAB_005fba09
    CMP EAX,0x3                         ; 005fba0f
    JZ 0x005fb750                       ; 005fba12
        ;   XREF to: 005fb750 (CONDITIONAL_JUMP)  ; LAB_005fb750
    MOV EDX,dword ptr [ESI + 0xbecc]    ; 005fba18
        ;   Label: LAB_005fba18
    LEA EAX,[ESP + 0xc4]                ; 005fba1e
    ADD EDX,0x20                        ; 005fba25
    CMP EAX,EDX                         ; 005fba28
    JZ 0x005fb819                       ; 005fba2a
        ;   XREF to: 005fb819 (CONDITIONAL_JUMP)  ; LAB_005fb819
    MOV EAX,dword ptr [EDX]             ; 005fba30
    MOV dword ptr [ESP + 0xc4],EAX      ; 005fba32
    MOV EAX,dword ptr [EDX + 0x4]       ; 005fba39
    MOV dword ptr [ESP + 0xc8],EAX      ; 005fba3c
    MOV EAX,dword ptr [EDX + 0x8]       ; 005fba43
    JMP 0x005fb812                      ; 005fba46
        ;   XREF to: 005fb812 (UNCONDITIONAL_JUMP)  ; LAB_005fb812
    MOV EBX,dword ptr [ESI + 0xbecc]    ; 005fba4b
        ;   Label: LAB_005fba4b
    PUSH EBX                            ; 005fba51
    PUSH ESI                            ; 005fba52
    PUSH 0x65885f                       ; 005fba53 | = "%s can't pick up %s, giving up\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 005fba58 | g_CConsolePtr
    PUSH EDI                            ; 005fba5e | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005fba5f
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005fba64
    MOV dword ptr [ESI + 0xbecc],0x0    ; 005fba67
    PUSH ESI                            ; 005fba71
    MOV dword ptr [ESI + 0xbec8],0x41a00000 ; 005fba72
    CALL core_zombie.cpp_CZombie_FUN_005fca10 ; 005fba7c
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005fba81
    XOR EAX,EAX                         ; 005fba84
    MOV ESP,EBP                         ; 005fba86
    POP EBP                             ; 005fba88
    POP EDI                             ; 005fba89
    POP ESI                             ; 005fba8a
    POP EBX                             ; 005fba8b
    RET                                 ; 005fba8c
    PUSH 0x1                            ; 005fba8d
        ;   Label: LAB_005fba8d
    PUSH 0xa                            ; 005fba8f
    ADD ESI,0x158                       ; 005fba91
        ;   Label: LAB_005fba91
    PUSH ESI                            ; 005fba97
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fba98
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005fba9d
    MOV EAX,0x1                         ; 005fbaa0
    MOV ESP,EBP                         ; 005fbaa5
    POP EBP                             ; 005fbaa7
    POP EDI                             ; 005fbaa8
    POP ESI                             ; 005fbaa9
    POP EBX                             ; 005fbaaa
    RET                                 ; 005fbaab
    PUSH 0x1                            ; 005fbaac
        ;   Label: LAB_005fbaac
    PUSH 0xc                            ; 005fbaae
    JMP 0x005fba91                      ; 005fbab0
        ;   XREF to: 005fba91 (UNCONDITIONAL_JUMP)  ; LAB_005fba91
    MOV EDI,dword ptr [ESI + 0xbecc]    ; 005fbab2
        ;   Label: LAB_005fbab2
    PUSH EDI                            ; 005fbab8
    PUSH ESI                            ; 005fbab9
    PUSH 0x65887f                       ; 005fbaba | = "%s beginning to pickup %s\n"
    MOV EAX,[0x0066e8e0]                ; 005fbabf | g_CConsolePtr
    PUSH EAX                            ; 005fbac4 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005fbac5
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    MOV EAX,dword ptr [ESI + 0xbed0]    ; 005fbaca
    ADD ESP,0x10                        ; 005fbad0
    CMP EAX,0x2                         ; 005fbad3
    JNC 0x005fbadf                      ; 005fbad6
        ;   XREF to: 005fbadf (CONDITIONAL_JUMP)  ; LAB_005fbadf
    CMP EAX,0x1                         ; 005fbad8
    JZ 0x005fba8d                       ; 005fbadb
        ;   XREF to: 005fba8d (CONDITIONAL_JUMP)  ; LAB_005fba8d
    JMP 0x005fbae6                      ; 005fbadd
        ;   XREF to: 005fbae6 (UNCONDITIONAL_JUMP)  ; LAB_005fbae6
    JBE 0x005fbaac                      ; 005fbadf
        ;   XREF to: 005fbaac (CONDITIONAL_JUMP)  ; LAB_005fbaac
        ;   Label: LAB_005fbadf
    CMP EAX,0x3                         ; 005fbae1
    JZ 0x005fba8d                       ; 005fbae4
        ;   XREF to: 005fba8d (CONDITIONAL_JUMP)  ; LAB_005fba8d
    MOV EDX,0x65889a                    ; 005fbae6 | = "..\\core\\zombie.cpp"
        ;   Label: LAB_005fbae6
    MOV ECX,0x5d0                       ; 005fbaeb
    PUSH 0x6588ad                       ; 005fbaf0 | = "Invalid zombie object shape!"
    MOV dword ptr [0x02f0ca48],EDX      ; 005fbaf5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005fbafb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005fbb01
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005fbb06
    MOV EAX,0x1                         ; 005fbb09
    MOV ESP,EBP                         ; 005fbb0e
    POP EBP                             ; 005fbb10
    POP EDI                             ; 005fbb11
    POP ESI                             ; 005fbb12
    POP EBX                             ; 005fbb13
    RET                                 ; 005fbb14
    PUSH ESI                            ; 005fbb15
        ;   Label: LAB_005fbb15
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fbb16
    PUSH EBX                            ; 005fbb1c
    CALL dword ptr [EAX + 0x7c]         ; 005fbb1d
    ADD ESP,0x8                         ; 005fbb20
    CMP EAX,0x3                         ; 005fbb23
    JNZ 0x005fb64d                      ; 005fbb26
        ;   XREF to: 005fb64d (CONDITIONAL_JUMP)  ; LAB_005fb64d
    LEA EDX,[ESP + 0x58]                ; 005fbb2c
    PUSH EDX                            ; 005fbb30
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fbb31
    PUSH EBX                            ; 005fbb37
    CALL dword ptr [EAX + 0x14]         ; 005fbb38
    LEA EDX,[EAX + 0xc]                 ; 005fbb3b
    FLD float ptr [EDX]                 ; 005fbb3e
    FSUB float ptr [EAX]                ; 005fbb40
    ADD ESP,0x8                         ; 005fbb42
    FSTP float ptr [ESP + 0x10c]        ; 005fbb45
    FLD float ptr [EDX + 0x4]           ; 005fbb4c
    FSUB float ptr [EAX + 0x4]          ; 005fbb4f
    FSTP float ptr [ESP + 0x110]        ; 005fbb52
    FLD float ptr [EDX + 0x8]           ; 005fbb59
    FSUB float ptr [EAX + 0x8]          ; 005fbb5c
    LEA EAX,[ESP + 0x10c]               ; 005fbb5f
    PUSH EAX                            ; 005fbb66
    FSTP float ptr [ESP + 0x118]        ; 005fbb67
    CALL core_zombie.cpp_FUN_005f8e50   ; 005fbb6e
        ;   XREF to: 005f8e50 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_005f8e50()
    ADD ESP,0x4                         ; 005fbb73
    MOV dword ptr [ESP + 0x140],EAX     ; 005fbb76
    TEST EAX,EAX                        ; 005fbb7d
    JZ 0x005fb64d                       ; 005fbb7f
        ;   XREF to: 005fb64d (CONDITIONAL_JUMP)  ; LAB_005fb64d
    PUSH EAX                            ; 005fbb85
    PUSH ESI                            ; 005fbb86
    CALL core_zombie.cpp_CZombie_FUN_005fbda0 ; 005fbb87
        ;   XREF to: 005fbda0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_FUN_005fbda0(CZombie * this_ptr)
    ADD ESP,0x8                         ; 005fbb8c
    TEST EAX,EAX                        ; 005fbb8f
    JZ 0x005fb64d                       ; 005fbb91
        ;   XREF to: 005fb64d (CONDITIONAL_JUMP)  ; LAB_005fb64d
    PUSH 0x6588ca                       ; 005fbb97 | = "CBodyPart"
    PUSH EBX                            ; 005fbb9c
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005fbb9d
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005fbba2
    TEST EAX,EAX                        ; 005fbba5
    JZ 0x005fbbc0                       ; 005fbba7
        ;   XREF to: 005fbbc0 (CONDITIONAL_JUMP)  ; LAB_005fbbc0
    MOV EDX,dword ptr [ESI + 0xbec0]    ; 005fbba9
    MOV EAX,dword ptr [EBX + 0x6c]      ; 005fbbaf
    AND EDX,0x3                         ; 005fbbb2
    AND EAX,0x3                         ; 005fbbb5
    CMP EAX,EDX                         ; 005fbbb8
    JNZ 0x005fb64d                      ; 005fbbba
        ;   XREF to: 005fb64d (CONDITIONAL_JUMP)  ; LAB_005fb64d
    LEA EAX,[EBX + 0x20]                ; 005fbbc0
        ;   Label: LAB_005fbbc0
    MOV EDX,dword ptr [ESP + 0x14c]     ; 005fbbc3
    FLD float ptr [EAX]                 ; 005fbbca
    FSUB float ptr [EDX]                ; 005fbbcc
    FSTP float ptr [ESP + 0xdc]         ; 005fbbce
    FLD float ptr [EAX + 0x4]           ; 005fbbd5
    FSUB float ptr [EDX + 0x4]          ; 005fbbd8
    FST float ptr [ESP + 0xe0]          ; 005fbbdb
    FMUL float ptr [ESP + 0xe0]         ; 005fbbe2
    FLD float ptr [EAX + 0x8]           ; 005fbbe9
    FSUB float ptr [EDX + 0x8]          ; 005fbbec
    FXCH                                ; 005fbbef
    FST float ptr [ESP + 0xe0]          ; 005fbbf1
    FMUL float ptr [ESP + 0xe0]         ; 005fbbf8
    FST float ptr [ESP + 0xe0]          ; 005fbbff
    FMUL float ptr [ESP + 0xe0]         ; 005fbc06
    FLD float ptr [ESP + 0xdc]          ; 005fbc0d
    FMUL ST0                            ; 005fbc14
    FADDP                               ; 005fbc16
    FXCH                                ; 005fbc18
    FST float ptr [ESP + 0xe4]          ; 005fbc1a
    FMUL float ptr [ESP + 0xe4]         ; 005fbc21
    FADDP                               ; 005fbc28
    FSQRT                               ; 005fbc2a
    FST float ptr [ESP + 0x4]           ; 005fbc2c
    FCOMP double ptr [0x00658905]       ; 005fbc30 | DOUBLE_00658905
    FNSTSW AX                           ; 005fbc36
    SAHF                                ; 005fbc38
    JC 0x005fb64d                       ; 005fbc39
        ;   XREF to: 005fb64d (CONDITIONAL_JUMP)  ; LAB_005fb64d
    FLD float ptr [ESI + 0xbebc]        ; 005fbc3f
    FMUL float ptr [0x00658915]         ; 005fbc45 | FLOAT_00658915
    FCOMP float ptr [ESP + 0x4]         ; 005fbc4b
    FNSTSW AX                           ; 005fbc4f
    SAHF                                ; 005fbc51
    JC 0x005fb64d                       ; 005fbc52
        ;   XREF to: 005fb64d (CONDITIONAL_JUMP)  ; LAB_005fb64d
    MOV EAX,dword ptr [ESP + 0x140]     ; 005fbc58
    MOV dword ptr [ESP + EDI*0x1 + 0x30],EAX ; 005fbc5f
    MOV EAX,dword ptr [ESP + 0x144]     ; 005fbc63
    ADD EDI,0x4                         ; 005fbc6a
    INC EAX                             ; 005fbc6d
    MOV dword ptr [ESP + EDI*0x1 + 0x4],EBX ; 005fbc6e
    MOV dword ptr [ESP + 0x144],EAX     ; 005fbc72
    CMP EDI,0x28                        ; 005fbc79
    JL 0x005fb64d                       ; 005fbc7c
        ;   XREF to: 005fb64d (CONDITIONAL_JUMP)  ; LAB_005fb64d
    MOV EDX,dword ptr [ESP + 0x144]     ; 005fbc82
        ;   Label: LAB_005fbc82
    CMP EDX,0x1                         ; 005fbc89
    JL 0x005fb5a3                       ; 005fbc8c
        ;   XREF to: 005fb5a3 (CONDITIONAL_JUMP)  ; LAB_005fb5a3
    LEA EAX,[EDX + -0x1]                ; 005fbc92
    PUSH EAX                            ; 005fbc95
    PUSH 0x0                            ; 005fbc96
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 005fbc98
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 005fbc9d
    MOV EDX,dword ptr [ESP + EAX*0x4 + 0x8] ; 005fbca0
    MOV dword ptr [ESI + 0xbecc],EDX    ; 005fbca4
    MOV EBX,dword ptr [ESI + 0xbecc]    ; 005fbcaa
    MOV ECX,dword ptr [ESI + 0xbec0]    ; 005fbcb0
    PUSH EBX                            ; 005fbcb6
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x34] ; 005fbcb7
    MOV dword ptr [ESI + 0xbec8],0xc2200000 ; 005fbcbb
    PUSH ESI                            ; 005fbcc5
    INC ECX                             ; 005fbcc6
    MOV dword ptr [ESI + 0xbed0],EAX    ; 005fbcc7
    PUSH 0x6588d4                       ; 005fbccd | = "%s is going to try to pick up %s\n"
    MOV dword ptr [ESI + 0xbec0],ECX    ; 005fbcd2
    MOV ESI,dword ptr [0x0066e8e0]      ; 005fbcd8 | g_CConsolePtr
    PUSH ESI                            ; 005fbcde | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005fbcdf
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 005fbce4
    ADD ESP,0x10                        ; 005fbce9
    MOV ESP,EBP                         ; 005fbcec
    POP EBP                             ; 005fbcee
    POP EDI                             ; 005fbcef
    POP ESI                             ; 005fbcf0
    POP EBX                             ; 005fbcf1
    RET                                 ; 005fbcf2

