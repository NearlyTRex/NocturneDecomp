; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmProjector_process_FUN_004ab6c0(CFilmProjector *this_ptr,float delta_time)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005df15f
;   CFilterFX* g_CFilterFXPtr = 0152d230
;   undefined4 DAT_0061b4d0
;   undefined4 g_CFilmReelClassInfo.name_hash
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_dest.cpp_CActorDestination_process_FUN_0045d2a0
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_0045ddb0
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_main.c_FUN_005030e0
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab6c0
        ;   Label: core_filmreel.cpp_CFilmProjector_process_FUN_004ab6c0
    PUSH ESI                            ; 004ab6c1
    PUSH EDI                            ; 004ab6c2
    PUSH EBP                            ; 004ab6c3
    SUB ESP,0x4                         ; 004ab6c4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004ab6c7
    MOV EDX,dword ptr [EBX + 0x184]     ; 004ab6cb
    TEST EDX,EDX                        ; 004ab6d1
    JNZ 0x004ab703                      ; 004ab6d3
        ;   XREF to: 004ab703 (CONDITIONAL_JUMP)  ; LAB_004ab703
    CMP dword ptr [EBX + 0x3dc],0x0     ; 004ab6d5
    JNZ 0x004ab807                      ; 004ab6dc
        ;   XREF to: 004ab807 (CONDITIONAL_JUMP)  ; LAB_004ab807
    PUSH dword ptr [ESP + 0x1c]         ; 004ab6e2
        ;   Label: LAB_004ab6e2
    MOV EAX,dword ptr [EBX + 0x184]     ; 004ab6e6
    PUSH EBX                            ; 004ab6ec
    MOV dword ptr [EBX + 0x3dc],EAX     ; 004ab6ed
    CALL core_dest.cpp_CActorDestination_process_FUN_0045d2a0 ; 004ab6f3
        ;   XREF to: 0045d2a0 (UNCONDITIONAL_CALL)  ; void core_dest.cpp_CActorDestination_process_FUN_0045d2a0(CActorDestination * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ab6f8
    ADD ESP,0x4                         ; 004ab6fb
    POP EBP                             ; 004ab6fe
    POP EDI                             ; 004ab6ff
    POP ESI                             ; 004ab700
    POP EBX                             ; 004ab701
    RET                                 ; 004ab702
    FLD float ptr [ESP + 0x1c]          ; 004ab703
        ;   Label: LAB_004ab703
    MOV EAX,dword ptr [EBX + 0x158]     ; 004ab707
    FMUL float ptr [0x005df15f]         ; 004ab70d | DAT_005df15f
    FLD float ptr [EAX + 0x38]          ; 004ab713
    FSUB ST0,ST1                        ; 004ab716
    FSTP float ptr [EAX + 0x38]         ; 004ab718
    FSUBR float ptr [EBX + 0x3d8]       ; 004ab71b
    MOV EBP,dword ptr [EBX + 0x3dc]     ; 004ab721
    FSTP float ptr [EBX + 0x3d8]        ; 004ab727
    TEST EBP,EBP                        ; 004ab72d
    JZ 0x004ab787                       ; 004ab72f
        ;   XREF to: 004ab787 (CONDITIONAL_JUMP)  ; LAB_004ab787
    MOV EDX,dword ptr [EBX + 0x3e0]     ; 004ab731
    PUSH EDX                            ; 004ab737
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004ab738
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004ab73d
    TEST EAX,EAX                        ; 004ab740
    JZ 0x004ab76d                       ; 004ab742
        ;   XREF to: 004ab76d (CONDITIONAL_JUMP)  ; LAB_004ab76d
    MOV ECX,dword ptr [EBX + 0x370]     ; 004ab744
        ;   Label: LAB_004ab744
    CMP ECX,dword ptr [EBX + 0x158]     ; 004ab74a
    JNZ 0x004ab6e2                      ; 004ab750
        ;   XREF to: 004ab6e2 (CONDITIONAL_JUMP)  ; LAB_004ab6e2
    LEA EAX,[EBX + 0x374]               ; 004ab752
    PUSH EAX                            ; 004ab758
    MOV ESI,dword ptr [0x0061b4d0]      ; 004ab759 | DAT_0061b4d0
    PUSH ESI                            ; 004ab75f
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004ab760
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004ab765
    JMP 0x004ab6e2                      ; 004ab768
        ;   XREF to: 004ab6e2 (UNCONDITIONAL_JUMP)  ; LAB_004ab6e2
    PUSH 0x5df0f5                       ; 004ab76d
        ;   Label: LAB_004ab76d
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ab772
    PUSH EBX                            ; 004ab778
    CALL dword ptr [EAX + 0x2c]         ; 004ab779
    ADD ESP,0x8                         ; 004ab77c
    MOV dword ptr [EBX + 0x3e0],EAX     ; 004ab77f
    JMP 0x004ab744                      ; 004ab785
        ;   XREF to: 004ab744 (UNCONDITIONAL_JUMP)  ; LAB_004ab744
    MOV EAX,[0x01c57034]                ; 004ab787 | g_CFilmReelClassInfo.name_hash
        ;   Label: LAB_004ab787
    PUSH EAX                            ; 004ab78c
    MOV EDX,dword ptr [EBX + 0x158]     ; 004ab78d
    PUSH EDX                            ; 004ab793
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004ab794
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ab799
    MOV ESI,EAX                         ; 004ab79c
    TEST EAX,EAX                        ; 004ab79e
    JNZ 0x004ab7c5                      ; 004ab7a0
        ;   XREF to: 004ab7c5 (CONDITIONAL_JUMP)  ; LAB_004ab7c5
    MOV ECX,0x5df101                    ; 004ab7a2
    MOV EDI,0x11d                       ; 004ab7a7
    PUSH 0x5df116                       ; 004ab7ac
    MOV dword ptr [0x01d1d400],ECX      ; 004ab7b1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004ab7b7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004ab7bd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004ab7c2
    LEA EAX,[ESI + 0x2d8]               ; 004ab7c5
        ;   Label: LAB_004ab7c5
    PUSH EAX                            ; 004ab7cb
    MOV EBP,dword ptr [0x0061135c]      ; 004ab7cc | g_CFilterFXPtr
    PUSH EBP                            ; 004ab7d2
    CALL core_dfilter.cpp_CFilterFX_openMovie_FUN_0045ddb0 ; 004ab7d3
        ;   XREF to: 0045ddb0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_openMovie_FUN_0045ddb0(CFilterFX * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ab7d8
    MOV EAX,dword ptr [EBX + 0x3e0]     ; 004ab7db
    PUSH EAX                            ; 004ab7e1
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004ab7e2
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004ab7e7
    PUSH 0x5df145                       ; 004ab7ea
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ab7ef
    PUSH EBX                            ; 004ab7f5
    CALL dword ptr [EAX + 0x2c]         ; 004ab7f6
    ADD ESP,0x8                         ; 004ab7f9
    MOV dword ptr [EBX + 0x3e0],EAX     ; 004ab7fc
    JMP 0x004ab744                      ; 004ab802
        ;   XREF to: 004ab744 (UNCONDITIONAL_JUMP)  ; LAB_004ab744
    PUSH EDX                            ; 004ab807
        ;   Label: LAB_004ab807
    MOV ESI,dword ptr [0x0061135c]      ; 004ab808 | g_CFilterFXPtr
    PUSH ESI                            ; 004ab80e
    CALL core_dfilter.cpp_CFilterFX_openMovie_FUN_0045ddb0 ; 004ab80f
        ;   XREF to: 0045ddb0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_openMovie_FUN_0045ddb0(CFilterFX * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ab814
    MOV EDI,dword ptr [EBX + 0x3e0]     ; 004ab817
    PUSH EDI                            ; 004ab81d
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004ab81e
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004ab823
    PUSH 0x5df152                       ; 004ab826
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ab82b
    PUSH EBX                            ; 004ab831
    CALL dword ptr [EAX + 0x2c]         ; 004ab832
    ADD ESP,0x8                         ; 004ab835
    MOV dword ptr [EBX + 0x3e0],EAX     ; 004ab838
    JMP 0x004ab6e2                      ; 004ab83e
        ;   XREF to: 004ab6e2 (UNCONDITIONAL_JUMP)  ; LAB_004ab6e2

