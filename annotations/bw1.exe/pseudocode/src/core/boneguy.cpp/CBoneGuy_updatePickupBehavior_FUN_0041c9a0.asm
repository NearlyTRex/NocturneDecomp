; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_0041c9a0(CBoneGuy *this_ptr,float delta_time)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x12c]:1  local_12c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041c5cd
;
; Referenced Globals:
;   undefined4 s_s_can_t_pick_up_s_sombod_005d4778+1
;   TerminatedCString s_s_can_t_pick_up_s_giving_005d47ab
;   TerminatedCString s_s_beginning_to_pickup_s_005d47cf
;   TerminatedCString s_CBodyPart_005d47ea
;   TerminatedCString s_s_is_going_to_try_to_pic_005d47f4
;   undefined4 DAT_005d4819
;   undefined4 DAT_005d4821
;   undefined4 DAT_005d4829
;   undefined4 DAT_005d4831
;   undefined4 DAT_005d4839
;   CConsole* g_CConsolePtr = 007db5f0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CConsole g_CConsoleInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_bodypart.cpp_FUN_0041afa0
;   core_bodypart.cpp_FUN_0041b020
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041c9a0
        ;   Label: core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_0041c9a0
    PUSH ESI                            ; 0041c9a1
    PUSH EDI                            ; 0041c9a2
    PUSH EBP                            ; 0041c9a3
    MOV EBP,ESP                         ; 0041c9a4
    SUB ESP,0x150                       ; 0041c9a6
    AND ESP,0xfffffff8                  ; 0041c9ac
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041c9af
    FLD float ptr [EAX + 0xc26c]        ; 0041c9b2
    FSUB float ptr [EBP + 0x18]         ; 0041c9b8
    FST float ptr [EAX + 0xc26c]        ; 0041c9bb
    FLDZ                                ; 0041c9c1
    FCOMPP                              ; 0041c9c3
    FNSTSW AX                           ; 0041c9c5
    SAHF                                ; 0041c9c7
    JC 0x0041ca13                       ; 0041c9c8
        ;   XREF to: 0041ca13 (CONDITIONAL_JUMP)  ; LAB_0041ca13
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041c9ca
        ;   Label: LAB_0041c9ca
    MOV ECX,dword ptr [EAX + 0x2628]    ; 0041c9cd
    TEST ECX,ECX                        ; 0041c9d3
    JNZ 0x0041ca0a                      ; 0041c9d5
        ;   XREF to: 0041ca0a (CONDITIONAL_JUMP)  ; LAB_0041ca0a
    FLD float ptr [EAX + 0xc270]        ; 0041c9d7
    FLDZ                                ; 0041c9dd
    FCOMPP                              ; 0041c9df
    FNSTSW AX                           ; 0041c9e1
    SAHF                                ; 0041c9e3
    JNC 0x0041ca51                      ; 0041c9e4
        ;   XREF to: 0041ca51 (CONDITIONAL_JUMP)  ; LAB_0041ca51
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041c9e6
    FLD float ptr [EAX + 0xc270]        ; 0041c9e9
    FSUB float ptr [EBP + 0x18]         ; 0041c9ef
    FST float ptr [EAX + 0xc270]        ; 0041c9f2
    FLDZ                                ; 0041c9f8
    FCOMPP                              ; 0041c9fa
    FNSTSW AX                           ; 0041c9fc
    SAHF                                ; 0041c9fe
    JBE 0x0041ca0a                      ; 0041c9ff
        ;   XREF to: 0041ca0a (CONDITIONAL_JUMP)  ; LAB_0041ca0a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ca01
    MOV dword ptr [EAX + 0xc270],ECX    ; 0041ca04
    XOR EAX,EAX                         ; 0041ca0a
        ;   Label: LAB_0041ca0a
    MOV ESP,EBP                         ; 0041ca0c
    POP EBP                             ; 0041ca0e
    POP EDI                             ; 0041ca0f
    POP ESI                             ; 0041ca10
    POP EBX                             ; 0041ca11
    RET                                 ; 0041ca12
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ca13
        ;   Label: LAB_0041ca13
    MOV EDX,dword ptr [EAX + 0xc268]    ; 0041ca16
    PUSH 0x41200000                     ; 0041ca1c
    INC EDX                             ; 0041ca21
    PUSH 0x40a00000                     ; 0041ca22
    MOV dword ptr [EAX + 0xc268],EDX    ; 0041ca27
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0041ca2d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x154],EAX     ; 0041ca32
    FLD float ptr [ESP + 0x154]         ; 0041ca39
    ADD ESP,0x8                         ; 0041ca40
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ca43
    FSTP float ptr [EAX + 0xc26c]       ; 0041ca46
    JMP 0x0041c9ca                      ; 0041ca4c
        ;   XREF to: 0041c9ca (UNCONDITIONAL_JUMP)  ; LAB_0041c9ca
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ca51
        ;   Label: LAB_0041ca51
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041ca54
    MOV ESI,dword ptr [EAX + 0xc274]    ; 0041ca57
    ADD EBX,0x20                        ; 0041ca5d
    TEST ESI,ESI                        ; 0041ca60
    JNZ 0x0041caf8                      ; 0041ca62
        ;   XREF to: 0041caf8 (CONDITIONAL_JUMP)  ; LAB_0041caf8
    LEA EAX,[ESP + 0x34]                ; 0041ca68
    MOV dword ptr [ESP + 0x148],ECX     ; 0041ca6c
    MOV dword ptr [ESP + 0x13c],ECX     ; 0041ca73
    MOV dword ptr [ESP + 0x130],EBX     ; 0041ca7a
    MOV dword ptr [ESP + 0x134],ECX     ; 0041ca81
    ADD EAX,0xc                         ; 0041ca88
    MOV dword ptr [ESP + 0x144],ECX     ; 0041ca8b
    MOV dword ptr [ESP + 0x138],EAX     ; 0041ca92
    MOV EAX,[0x00622c18]                ; 0041ca99 | g_CDemonSetPtr
        ;   Label: LAB_0041ca99
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0041ca9e
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0041caa5 | g_CDemonSetInstance.actor_count
    JGE 0x0041cf59                      ; 0041caab
        ;   XREF to: 0041cf59 (CONDITIONAL_JUMP)  ; LAB_0041cf59
    ADD EAX,dword ptr [ESP + 0x134]     ; 0041cab1
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0041cab8 | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 0041cabe
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041cabf
    CALL dword ptr [EAX + 0x94]         ; 0041cac5
    ADD ESP,0x4                         ; 0041cacb
    TEST EAX,EAX                        ; 0041cace
    JZ 0x0041cd93                       ; 0041cad0
        ;   XREF to: 0041cd93 (CONDITIONAL_JUMP)  ; LAB_0041cd93
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0041cad6
        ;   Label: LAB_0041cad6
    MOV EDI,dword ptr [ESP + 0x134]     ; 0041cadd
    INC EAX                             ; 0041cae4
    ADD EDI,0x4                         ; 0041cae5
    MOV dword ptr [ESP + 0x13c],EAX     ; 0041cae8
    MOV dword ptr [ESP + 0x134],EDI     ; 0041caef
    JMP 0x0041ca99                      ; 0041caf6
        ;   XREF to: 0041ca99 (UNCONDITIONAL_JUMP)  ; LAB_0041ca99
    MOV EAX,ESI                         ; 0041caf8
        ;   Label: LAB_0041caf8
    PUSH EAX                            ; 0041cafa
    MOV ESI,dword ptr [ESI + 0x154]     ; 0041cafb
    CALL dword ptr [ESI + 0x94]         ; 0041cb01
    ADD ESP,0x4                         ; 0041cb07
    TEST EAX,EAX                        ; 0041cb0a
    JNZ 0x0041ccbd                      ; 0041cb0c
        ;   XREF to: 0041ccbd (CONDITIONAL_JUMP)  ; LAB_0041ccbd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cb12
    MOV EAX,dword ptr [EAX + 0xc274]    ; 0041cb15
    FLD float ptr [EBX]                 ; 0041cb1b
    FSUB float ptr [EAX + 0x20]         ; 0041cb1d
    FMUL ST0                            ; 0041cb20
    FLD float ptr [EBX + 0x8]           ; 0041cb22
    FSUB float ptr [EAX + 0x28]         ; 0041cb25
    FMUL ST0                            ; 0041cb28
    FADDP                               ; 0041cb2a
    FSQRT                               ; 0041cb2c
    FMUL double ptr [0x005d4819]        ; 0041cb2e | DAT_005d4819
    FSUBR double ptr [0x005d4821]       ; 0041cb34 | DAT_005d4821
    FLD1                                ; 0041cb3a
    FCOMPP                              ; 0041cb3c
    FNSTSW AX                           ; 0041cb3e
    SAHF                                ; 0041cb40
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cb41
    MOV ESI,0xffffffff                  ; 0041cb44
    FLD float ptr [EAX + 0xc270]        ; 0041cb49
    FLDZ                                ; 0041cb4f
    FCOMPP                              ; 0041cb51
    FNSTSW AX                           ; 0041cb53
    SAHF                                ; 0041cb55
    JBE 0x0041cc9e                      ; 0041cb56
        ;   XREF to: 0041cc9e (CONDITIONAL_JUMP)  ; LAB_0041cc9e
    MOV EDI,dword ptr [EBP + 0x14]      ; 0041cb5c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cb5f
    PUSH EDI                            ; 0041cb62
    MOV EAX,dword ptr [EAX + 0xc274]    ; 0041cb63
    PUSH EAX                            ; 0041cb69
    MOV EBX,dword ptr [EAX + 0x154]     ; 0041cb6a
    CALL dword ptr [EBX + 0x84]         ; 0041cb70
    ADD ESP,0x8                         ; 0041cb76
    CMP EAX,0x3                         ; 0041cb79
    JNZ 0x0041cc9e                      ; 0041cb7c
        ;   XREF to: 0041cc9e (CONDITIONAL_JUMP)  ; LAB_0041cc9e
    MOV EBX,dword ptr [EDI + 0xc274]    ; 0041cb82
    PUSH EBX                            ; 0041cb88
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041cb89
    LEA ESI,[ESP + 0x80]                ; 0041cb8f
    CALL dword ptr [EAX + 0x1c]         ; 0041cb96
    MOV EAX,0x3f000000                  ; 0041cb99
    ADD ESP,0x4                         ; 0041cb9e
    LEA EDI,[ESP + 0x64]                ; 0041cba1
    MOV dword ptr [ESP + 0x12c],EAX     ; 0041cba5
    LEA EAX,[ESP + 0x12c]               ; 0041cbac
    MOV ECX,0x6                         ; 0041cbb3
    PUSH EAX                            ; 0041cbb8
    LEA EAX,[ESP + 0x74]                ; 0041cbb9
    LEA ESI,[ESP + 0x80]                ; 0041cbbd
    PUSH EAX                            ; 0041cbc4
    LEA EAX,[ESP + 0x6c]                ; 0041cbc5
    MOVSD.REP ES:EDI,ESI                ; 0041cbc9
    PUSH EAX                            ; 0041cbcb
    LEA ESI,[ESP + 0xc4]                ; 0041cbcc
    LEA EDI,[ESP + 0x124]               ; 0041cbd3
    CALL core_bodypart.cpp_FUN_0041b020 ; 0041cbda
        ;   XREF to: 0041b020 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041b020()
    LEA ESI,[ESP + 0xc4]                ; 0041cbdf
    ADD ESP,0x8                         ; 0041cbe6
    LEA EAX,[ESP + 0x11c]               ; 0041cbe9
    MOVSD ES:EDI,ESI                    ; 0041cbf0
    MOVSD ES:EDI,ESI                    ; 0041cbf1
    MOVSD ES:EDI,ESI                    ; 0041cbf2
    PUSH EAX                            ; 0041cbf3
    LEA ESI,[ESP + 0x108]               ; 0041cbf4
    LEA EDI,[ESP + 0xd8]                ; 0041cbfb
    CALL core_bodypart.cpp_FUN_0041afa0 ; 0041cc02
        ;   XREF to: 0041afa0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041afa0()
    LEA ESI,[ESP + 0x108]               ; 0041cc07
    ADD ESP,0x8                         ; 0041cc0e
    LEA EAX,[ESP + 0xdc]                ; 0041cc11
    FLD float ptr [ESP + 0x6c]          ; 0041cc18
    MOVSD ES:EDI,ESI                    ; 0041cc1c
    MOVSD ES:EDI,ESI                    ; 0041cc1d
    MOVSD ES:EDI,ESI                    ; 0041cc1e
    PUSH EAX                            ; 0041cc1f
    LEA EDI,[ESP + 0xe0]                ; 0041cc20
    FADD double ptr [0x005d4829]        ; 0041cc27 | DAT_005d4829
    LEA ESI,[ESP + 0xd4]                ; 0041cc2d
    FSTP float ptr [ESP + 0xdc]         ; 0041cc34
    MOVSD ES:EDI,ESI                    ; 0041cc3b
    MOVSD ES:EDI,ESI                    ; 0041cc3c
    MOVSD ES:EDI,ESI                    ; 0041cc3d
    PUSH EBX                            ; 0041cc3e
    LEA ESI,[ESP + 0x114]               ; 0041cc3f
    CALL core_actor.cpp_FUN_00408b40    ; 0041cc46
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0041cc4b
    LEA EDI,[ESP + 0xc4]                ; 0041cc4e
    LEA ESI,[ESP + 0x10c]               ; 0041cc55
    PUSH 0x0                            ; 0041cc5c
    LEA EAX,[ESP + 0xec]                ; 0041cc5e
    PUSH 0x0                            ; 0041cc65
    MOV EDX,0x3fc00000                  ; 0041cc67
    PUSH EAX                            ; 0041cc6c
    XOR ECX,ECX                         ; 0041cc6d
    LEA EAX,[ESP + 0xd0]                ; 0041cc6f
    PUSH ECX                            ; 0041cc76
    MOVSD ES:EDI,ESI                    ; 0041cc77
    MOVSD ES:EDI,ESI                    ; 0041cc78
    MOVSD ES:EDI,ESI                    ; 0041cc79
    PUSH EAX                            ; 0041cc7a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0041cc7b
    MOV dword ptr [ESP + 0xfc],EDX      ; 0041cc7e
    PUSH ESI                            ; 0041cc85
    MOV dword ptr [ESP + 0x104],ECX     ; 0041cc86
    MOV dword ptr [ESP + 0x108],ECX     ; 0041cc8d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0041cc94
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0041cc99
    MOV ESI,EAX                         ; 0041cc9c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041cc9e
        ;   Label: LAB_0041cc9e
    ADD EBX,0x158                       ; 0041cca1
    TEST ESI,ESI                        ; 0041cca7
    JL 0x0041cd0e                       ; 0041cca9
        ;   XREF to: 0041cd0e (CONDITIONAL_JUMP)  ; LAB_0041cd0e
    JG 0x0041cd5b                       ; 0041ccab
        ;   XREF to: 0041cd5b (CONDITIONAL_JUMP)  ; LAB_0041cd5b
    MOV EAX,0x1                         ; 0041ccb1
    MOV ESP,EBP                         ; 0041ccb6
    POP EBP                             ; 0041ccb8
    POP EDI                             ; 0041ccb9
    POP ESI                             ; 0041ccba
    POP EBX                             ; 0041ccbb
    RET                                 ; 0041ccbc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ccbd
        ;   Label: LAB_0041ccbd
    MOV EDX,dword ptr [EAX + 0xc274]    ; 0041ccc0
    PUSH EDX                            ; 0041ccc6
    PUSH EAX                            ; 0041ccc7
    PUSH 0x5d4779                       ; 0041ccc8 | s_s_can_t_pick_up_s_sombod_005d4778+1
    MOV EBX,dword ptr [0x00611100]      ; 0041cccd | g_CConsolePtr
    PUSH EBX                            ; 0041ccd3 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0041ccd4
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 0041ccd9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ccdc
    PUSH 0x1                            ; 0041ccdf
    ADD EAX,0x158                       ; 0041cce1
    PUSH 0x1                            ; 0041cce6
    MOV dword ptr [EAX + 0xc11c],0x0    ; 0041cce8
    PUSH EAX                            ; 0041ccf2
    MOV dword ptr [EAX + 0xc118],0x0    ; 0041ccf3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0041ccfd
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041cd02
    XOR EAX,EAX                         ; 0041cd05
    MOV ESP,EBP                         ; 0041cd07
    POP EBP                             ; 0041cd09
    POP EDI                             ; 0041cd0a
    POP ESI                             ; 0041cd0b
    POP EBX                             ; 0041cd0c
    RET                                 ; 0041cd0d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cd0e
        ;   Label: LAB_0041cd0e
    MOV ECX,dword ptr [EAX + 0xc274]    ; 0041cd11
    PUSH ECX                            ; 0041cd17
    PUSH EAX                            ; 0041cd18
    PUSH 0x5d47ab                       ; 0041cd19 | = "%s can't pick up %s, giving up!!!!\n"
    MOV EDI,dword ptr [0x00611100]      ; 0041cd1e | g_CConsolePtr
    PUSH EDI                            ; 0041cd24 | g_CConsoleInstance
    MOV ESI,EAX                         ; 0041cd25
    CALL engine_console.cpp_FUN_00445430 ; 0041cd27
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 0041cd2c
    PUSH 0x1                            ; 0041cd2f
    MOV EAX,ESI                         ; 0041cd31
    PUSH 0x1                            ; 0041cd33
    MOV dword ptr [EAX + 0xc274],0x0    ; 0041cd35
    PUSH EBX                            ; 0041cd3f
    MOV dword ptr [EAX + 0xc270],0x41a00000 ; 0041cd40
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0041cd4a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041cd4f
    XOR EAX,EAX                         ; 0041cd52
    MOV ESP,EBP                         ; 0041cd54
    POP EBP                             ; 0041cd56
    POP EDI                             ; 0041cd57
    POP ESI                             ; 0041cd58
    POP EBX                             ; 0041cd59
    RET                                 ; 0041cd5a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cd5b
        ;   Label: LAB_0041cd5b
    MOV EDI,dword ptr [EAX + 0xc274]    ; 0041cd5e
    PUSH EDI                            ; 0041cd64
    PUSH EAX                            ; 0041cd65
    PUSH 0x5d47cf                       ; 0041cd66 | = "%s beginning to pickup %s\n"
    MOV EDX,dword ptr [0x00611100]      ; 0041cd6b | g_CConsolePtr
    PUSH EDX                            ; 0041cd71 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0041cd72
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 0041cd77
    PUSH 0x1                            ; 0041cd7a
    PUSH 0x7                            ; 0041cd7c
    PUSH EBX                            ; 0041cd7e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0041cd7f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 0041cd84
    ADD ESP,0xc                         ; 0041cd89
    MOV ESP,EBP                         ; 0041cd8c
    POP EBP                             ; 0041cd8e
    POP EDI                             ; 0041cd8f
    POP ESI                             ; 0041cd90
    POP EBX                             ; 0041cd91
    RET                                 ; 0041cd92
    MOV EDX,dword ptr [EBP + 0x14]      ; 0041cd93
        ;   Label: LAB_0041cd93
    PUSH EDX                            ; 0041cd96
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041cd97
    PUSH EBX                            ; 0041cd9d
    CALL dword ptr [EAX + 0x84]         ; 0041cd9e
    ADD ESP,0x8                         ; 0041cda4
    CMP EAX,0x3                         ; 0041cda7
    JNZ 0x0041cad6                      ; 0041cdaa
        ;   XREF to: 0041cad6 (CONDITIONAL_JUMP)  ; LAB_0041cad6
    PUSH EBX                            ; 0041cdb0
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041cdb1
    LEA ESI,[ESP + 0x50]                ; 0041cdb7
    LEA EDI,[ESP + 0x38]                ; 0041cdbb
    CALL dword ptr [EAX + 0x1c]         ; 0041cdbf
    MOV ECX,0x6                         ; 0041cdc2
    ADD ESP,0x4                         ; 0041cdc7
    LEA ESI,[ESP + 0x4c]                ; 0041cdca
    MOV EAX,dword ptr [ESP + 0x138]     ; 0041cdce
    MOVSD.REP ES:EDI,ESI                ; 0041cdd5
    FLD float ptr [EAX]                 ; 0041cdd7
    FLD float ptr [EAX + 0x4]           ; 0041cdd9
    FLD float ptr [EAX + 0x8]           ; 0041cddc
    LEA EDI,[ESP + 0x94]                ; 0041cddf
    LEA ESI,[ESP + 0xf4]                ; 0041cde6
    FXCH ST2                            ; 0041cded
    FSUB float ptr [ESP + 0x34]         ; 0041cdef
    FXCH                                ; 0041cdf3
    FSUB float ptr [ESP + 0x38]         ; 0041cdf5
    FXCH ST2                            ; 0041cdf9
    FSUB float ptr [ESP + 0x3c]         ; 0041cdfb
    FXCH                                ; 0041cdff
    FSTP float ptr [ESP + 0xf4]         ; 0041ce01
    FXCH                                ; 0041ce08
    FSTP float ptr [ESP + 0xf8]         ; 0041ce0a
    FSTP float ptr [ESP + 0xfc]         ; 0041ce11
    MOVSD ES:EDI,ESI                    ; 0041ce18
    MOVSD ES:EDI,ESI                    ; 0041ce19
    MOVSD ES:EDI,ESI                    ; 0041ce1a
    FLD float ptr [ESP + 0x94]          ; 0041ce1b
    FLD1                                ; 0041ce22
    FCOMPP                              ; 0041ce24
    FNSTSW AX                           ; 0041ce26
    SAHF                                ; 0041ce28
    JBE 0x0041cad6                      ; 0041ce29
        ;   XREF to: 0041cad6 (CONDITIONAL_JUMP)  ; LAB_0041cad6
    FLD float ptr [ESP + 0x98]          ; 0041ce2f
    FLD1                                ; 0041ce36
    FCOMPP                              ; 0041ce38
    FNSTSW AX                           ; 0041ce3a
    SAHF                                ; 0041ce3c
    JBE 0x0041cad6                      ; 0041ce3d
        ;   XREF to: 0041cad6 (CONDITIONAL_JUMP)  ; LAB_0041cad6
    FLD float ptr [ESP + 0x9c]          ; 0041ce43
    FST double ptr [ESP]                ; 0041ce4a
    FCOMP double ptr [0x005d4831]       ; 0041ce4d | DAT_005d4831
    FNSTSW AX                           ; 0041ce53
    SAHF                                ; 0041ce55
    JBE 0x0041cad6                      ; 0041ce56
        ;   XREF to: 0041cad6 (CONDITIONAL_JUMP)  ; LAB_0041cad6
    FLD double ptr [ESP]                ; 0041ce5c
    FCOMP double ptr [0x005d4839]       ; 0041ce5f | DAT_005d4839
    FNSTSW AX                           ; 0041ce65
    SAHF                                ; 0041ce67
    JNC 0x0041cad6                      ; 0041ce68
        ;   XREF to: 0041cad6 (CONDITIONAL_JUMP)  ; LAB_0041cad6
    PUSH 0x5d47ea                       ; 0041ce6e | = "CBodyPart"
    PUSH EBX                            ; 0041ce73
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0041ce74
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0041ce79
    TEST EAX,EAX                        ; 0041ce7c
    JNZ 0x0041cad6                      ; 0041ce7e
        ;   XREF to: 0041cad6 (CONDITIONAL_JUMP)  ; LAB_0041cad6
    LEA EAX,[EBX + 0x20]                ; 0041ce84
    MOV ESI,dword ptr [ESP + 0x130]     ; 0041ce87
    LEA EDI,[ESP + 0xa0]                ; 0041ce8e
    FLD float ptr [EAX]                 ; 0041ce95
    FLD float ptr [EAX + 0x4]           ; 0041ce97
    FLD float ptr [EAX + 0x8]           ; 0041ce9a
    FXCH ST2                            ; 0041ce9d
    FSUB float ptr [ESI]                ; 0041ce9f
    FXCH                                ; 0041cea1
    FSUB float ptr [ESI + 0x4]          ; 0041cea3
    FXCH ST2                            ; 0041cea6
    FSUB float ptr [ESI + 0x8]          ; 0041cea8
    FXCH                                ; 0041ceab
    FSTP float ptr [ESP + 0xac]         ; 0041cead
    FXCH                                ; 0041ceb4
    FSTP float ptr [ESP + 0xb0]         ; 0041ceb6
    LEA ESI,[ESP + 0xac]                ; 0041cebd
    FSTP float ptr [ESP + 0xb4]         ; 0041cec4
    MOVSD ES:EDI,ESI                    ; 0041cecb
    MOVSD ES:EDI,ESI                    ; 0041cecc
    MOVSD ES:EDI,ESI                    ; 0041cecd
    FLD float ptr [ESP + 0xa4]          ; 0041cece
    FMUL ST0                            ; 0041ced5
    FST float ptr [ESP + 0xa4]          ; 0041ced7
    FMUL float ptr [ESP + 0xa4]         ; 0041cede
    FST float ptr [ESP + 0xa4]          ; 0041cee5
    FMUL float ptr [ESP + 0xa4]         ; 0041ceec
    FLD float ptr [ESP + 0xa0]          ; 0041cef3
    FMUL ST0                            ; 0041cefa
    FADDP                               ; 0041cefc
    FLD float ptr [ESP + 0xa8]          ; 0041cefe
    FMUL ST0                            ; 0041cf05
    FADDP                               ; 0041cf07
    FSQRT                               ; 0041cf09
    FST float ptr [ESP + 0x8]           ; 0041cf0b
    FCOMP double ptr [0x005d4821]       ; 0041cf0f | DAT_005d4821
    FNSTSW AX                           ; 0041cf15
    SAHF                                ; 0041cf17
    JC 0x0041cad6                       ; 0041cf18
        ;   XREF to: 0041cad6 (CONDITIONAL_JUMP)  ; LAB_0041cad6
    CMP dword ptr [ESP + 0x8],0x41700000 ; 0041cf1e
    JG 0x0041cad6                       ; 0041cf26
        ;   XREF to: 0041cad6 (CONDITIONAL_JUMP)  ; LAB_0041cad6
    MOV ESI,dword ptr [ESP + 0x148]     ; 0041cf2c
    MOV EAX,dword ptr [ESP + 0x144]     ; 0041cf33
    INC ESI                             ; 0041cf3a
    MOV dword ptr [ESP + EAX*0x1 + 0xc],EBX ; 0041cf3b
    LEA EBX,[EAX + 0x4]                 ; 0041cf3f
    MOV dword ptr [ESP + 0x148],ESI     ; 0041cf42
    MOV dword ptr [ESP + 0x144],EBX     ; 0041cf49
    CMP EBX,0x28                        ; 0041cf50
    JL 0x0041cad6                       ; 0041cf53
        ;   XREF to: 0041cad6 (CONDITIONAL_JUMP)  ; LAB_0041cad6
    MOV EAX,dword ptr [ESP + 0x148]     ; 0041cf59
        ;   Label: LAB_0041cf59
    CMP EAX,0x1                         ; 0041cf60
    JL 0x0041ca0a                       ; 0041cf63
        ;   XREF to: 0041ca0a (CONDITIONAL_JUMP)  ; LAB_0041ca0a
    DEC EAX                             ; 0041cf69
    PUSH EAX                            ; 0041cf6a
    PUSH 0x0                            ; 0041cf6b
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0041cf6d
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041cf72
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041cf75
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0xc] ; 0041cf78
    MOV dword ptr [EBX + 0xc274],EAX    ; 0041cf7c
    MOV ECX,dword ptr [EBX + 0xc274]    ; 0041cf82
    PUSH ECX                            ; 0041cf88
    PUSH EBX                            ; 0041cf89
    MOV ESI,dword ptr [0x00611100]      ; 0041cf8a | g_CConsolePtr
    MOV EDX,dword ptr [EBX + 0xc268]    ; 0041cf90
    PUSH 0x5d47f4                       ; 0041cf96 | = "%s is going to try to pick up %s\n"
    MOV dword ptr [EBX + 0xc270],0xc2200000 ; 0041cf9b
    INC EDX                             ; 0041cfa5
    PUSH ESI                            ; 0041cfa6 | g_CConsoleInstance
    MOV dword ptr [EBX + 0xc268],EDX    ; 0041cfa7
    CALL engine_console.cpp_FUN_00445430 ; 0041cfad
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EAX,0x1                         ; 0041cfb2
    ADD ESP,0x10                        ; 0041cfb7
    MOV ESP,EBP                         ; 0041cfba
    POP EBP                             ; 0041cfbc
    POP EDI                             ; 0041cfbd
    POP ESI                             ; 0041cfbe
    POP EBX                             ; 0041cfbf
    RET                                 ; 0041cfc0

