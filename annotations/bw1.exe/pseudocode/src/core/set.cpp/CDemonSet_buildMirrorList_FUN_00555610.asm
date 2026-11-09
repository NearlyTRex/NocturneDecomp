; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_00555610(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 at 0054e48c
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005f0bae
;   TerminatedCString s_CDemonSet_buildMirrorLis_005f0bbe
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 g_CGlassClassInfo.name_hash
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_main.c_FUN_005030e0
;   engine_matrix.c_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555610
        ;   Label: core_set.cpp_CDemonSet_buildMirrorList_FUN_00555610
    PUSH ESI                            ; 00555611
    PUSH EDI                            ; 00555612
    PUSH EBP                            ; 00555613
    SUB ESP,0x38                        ; 00555614
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00555617
    MOV ECX,dword ptr [EBP + 0x14d164]  ; 0055561b
    XOR EDX,EDX                         ; 00555621
    MOV dword ptr [EBP + 0x15acc8],0x0  ; 00555623
    MOV dword ptr [ESP + 0x34],EDX      ; 0055562d
    TEST ECX,ECX                        ; 00555631
    JLE 0x0055571c                      ; 00555633
        ;   XREF to: 0055571c (CONDITIONAL_JUMP)  ; LAB_0055571c
    MOV dword ptr [ESP + 0x30],EBP      ; 00555639
    MOV EDX,dword ptr [0x01cd0dfc]      ; 0055563d | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0055563d
    MOV EAX,dword ptr [ESP + 0x30]      ; 00555643
    PUSH EDX                            ; 00555647
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 00555648
    PUSH EAX                            ; 0055564e
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0055564f
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EBX,EAX                         ; 00555654
    ADD ESP,0x8                         ; 00555656
    TEST EAX,EAX                        ; 00555659
    JZ 0x005556fa                       ; 0055565b
        ;   XREF to: 005556fa (CONDITIONAL_JUMP)  ; LAB_005556fa
    CMP dword ptr [EAX + 0x1e8],0x0     ; 00555661
    JZ 0x005556fa                       ; 00555668
        ;   XREF to: 005556fa (CONDITIONAL_JUMP)  ; LAB_005556fa
    PUSH EAX                            ; 0055566e
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0055566f
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00555674
    PUSH 0x0                            ; 00555677
    MOV EAX,dword ptr [EBX + 0x154]     ; 00555679
    PUSH EBX                            ; 0055567f
    LEA ESI,[ESP + 0x20]                ; 00555680
    LEA EDI,[ESP + 0x8]                 ; 00555684
    CALL dword ptr [EAX + 0x1c]         ; 00555688
    MOV ECX,0x6                         ; 0055568b
    ADD ESP,0x4                         ; 00555690
    LEA EAX,[ESP + 0x4]                 ; 00555693
    LEA ESI,[ESP + 0x1c]                ; 00555697
    PUSH EAX                            ; 0055569b
    MOVSD.REP ES:EDI,ESI                ; 0055569c
    CALL core_box.cpp_FUN_004207b0      ; 0055569e
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 005556a3
    TEST EAX,EAX                        ; 005556a6
    JZ 0x005556eb                       ; 005556a8
        ;   XREF to: 005556eb (CONDITIONAL_JUMP)  ; LAB_005556eb
    MOV EAX,dword ptr [EBP + 0x15acc8]  ; 005556aa
    MOV dword ptr [EBP + EAX*0x4 + 0x15accc],EBX ; 005556b0
    MOV EBX,dword ptr [EBP + 0x15acc8]  ; 005556b7
    INC EBX                             ; 005556bd
    MOV dword ptr [EBP + 0x15acc8],EBX  ; 005556be
    CMP EBX,0x64                        ; 005556c4
    JL 0x005556eb                       ; 005556c7
        ;   XREF to: 005556eb (CONDITIONAL_JUMP)  ; LAB_005556eb
    MOV EDI,0x5f0bae                    ; 005556c9 | = "..\\core\\set.cpp"
    MOV EAX,0x12d2                      ; 005556ce
    PUSH 0x5f0bbe                       ; 005556d3 | = "CDemonSet::buildMirrorList - Too many..."
    MOV dword ptr [0x01d1d400],EDI      ; 005556d8 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005556de | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005556e3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005556e8
    MOV EDX,dword ptr [0x00612560]      ; 005556eb | DAT_00612560
        ;   Label: LAB_005556eb
    PUSH EDX                            ; 005556f1 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 005556f2
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 005556f7
    MOV EBX,dword ptr [ESP + 0x30]      ; 005556fa
        ;   Label: LAB_005556fa
    MOV ESI,dword ptr [ESP + 0x34]      ; 005556fe
    MOV EDI,dword ptr [EBP + 0x14d164]  ; 00555702
    ADD EBX,0x4                         ; 00555708
    INC ESI                             ; 0055570b
    MOV dword ptr [ESP + 0x30],EBX      ; 0055570c
    MOV dword ptr [ESP + 0x34],ESI      ; 00555710
    CMP ESI,EDI                         ; 00555714
    JL 0x0055563d                       ; 00555716
        ;   XREF to: 0055563d (CONDITIONAL_JUMP)  ; LAB_0055563d
    ADD ESP,0x38                        ; 0055571c
        ;   Label: LAB_0055571c
    POP EBP                             ; 0055571f
    POP EDI                             ; 00555720
    POP ESI                             ; 00555721
    POP EBX                             ; 00555722
    RET                                 ; 00555723

