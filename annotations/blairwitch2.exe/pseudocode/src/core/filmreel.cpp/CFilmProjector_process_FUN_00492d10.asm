; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmProjector_process_FUN_00492d10(CFilmProjector *this_ptr,float delta_time)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005d531d
;   CFilterFX* g_CFilterFXPtr = 01511cac
;   undefined4 DAT_006141f0
;   undefined4 g_CFilmReelClassInfo.name_hash
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_dest.cpp_CActorDestination_process_FUN_00447140
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_00447c50
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;   core_main.c_FUN_004e4500
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492d10
        ;   Label: core_filmreel.cpp_CFilmProjector_process_FUN_00492d10
    PUSH ESI                            ; 00492d11
    PUSH EDI                            ; 00492d12
    PUSH EBP                            ; 00492d13
    SUB ESP,0x4                         ; 00492d14
    MOV EBX,dword ptr [ESP + 0x18]      ; 00492d17
    MOV EDX,dword ptr [EBX + 0x2e0]     ; 00492d1b
    TEST EDX,EDX                        ; 00492d21
    JNZ 0x00492d53                      ; 00492d23
        ;   XREF to: 00492d53 (CONDITIONAL_JUMP)  ; LAB_00492d53
    CMP dword ptr [EBX + 0x538],0x0     ; 00492d25
    JNZ 0x00492e57                      ; 00492d2c
        ;   XREF to: 00492e57 (CONDITIONAL_JUMP)  ; LAB_00492e57
    PUSH dword ptr [ESP + 0x1c]         ; 00492d32
        ;   Label: LAB_00492d32
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 00492d36
    PUSH EBX                            ; 00492d3c
    MOV dword ptr [EBX + 0x538],EAX     ; 00492d3d
    CALL core_dest.cpp_CActorDestination_process_FUN_00447140 ; 00492d43
        ;   XREF to: 00447140 (UNCONDITIONAL_CALL)  ; void core_dest.cpp_CActorDestination_process_FUN_00447140(CActorDestination * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00492d48
    ADD ESP,0x4                         ; 00492d4b
    POP EBP                             ; 00492d4e
    POP EDI                             ; 00492d4f
    POP ESI                             ; 00492d50
    POP EBX                             ; 00492d51
    RET                                 ; 00492d52
    FLD float ptr [ESP + 0x1c]          ; 00492d53
        ;   Label: LAB_00492d53
    MOV EAX,dword ptr [EBX + 0x2b4]     ; 00492d57
    FMUL float ptr [0x005d531d]         ; 00492d5d | DAT_005d531d
    FLD float ptr [EAX + 0x38]          ; 00492d63
    FSUB ST0,ST1                        ; 00492d66
    FSTP float ptr [EAX + 0x38]         ; 00492d68
    FSUBR float ptr [EBX + 0x534]       ; 00492d6b
    MOV EBP,dword ptr [EBX + 0x538]     ; 00492d71
    FSTP float ptr [EBX + 0x534]        ; 00492d77
    TEST EBP,EBP                        ; 00492d7d
    JZ 0x00492dd7                       ; 00492d7f
        ;   XREF to: 00492dd7 (CONDITIONAL_JUMP)  ; LAB_00492dd7
    MOV EDX,dword ptr [EBX + 0x53c]     ; 00492d81
    PUSH EDX                            ; 00492d87
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00492d88
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00492d8d
    TEST EAX,EAX                        ; 00492d90
    JZ 0x00492dbd                       ; 00492d92
        ;   XREF to: 00492dbd (CONDITIONAL_JUMP)  ; LAB_00492dbd
    MOV ECX,dword ptr [EBX + 0x4cc]     ; 00492d94
        ;   Label: LAB_00492d94
    CMP ECX,dword ptr [EBX + 0x2b4]     ; 00492d9a
    JNZ 0x00492d32                      ; 00492da0
        ;   XREF to: 00492d32 (CONDITIONAL_JUMP)  ; LAB_00492d32
    LEA EAX,[EBX + 0x4d0]               ; 00492da2
    PUSH EAX                            ; 00492da8
    MOV ESI,dword ptr [0x006141f0]      ; 00492da9 | DAT_006141f0
    PUSH ESI                            ; 00492daf
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 00492db0
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00492db5
    JMP 0x00492d32                      ; 00492db8
        ;   XREF to: 00492d32 (UNCONDITIONAL_JUMP)  ; LAB_00492d32
    PUSH 0x5d52b3                       ; 00492dbd
        ;   Label: LAB_00492dbd
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00492dc2
    PUSH EBX                            ; 00492dc8
    CALL dword ptr [EAX + 0x34]         ; 00492dc9
    ADD ESP,0x8                         ; 00492dcc
    MOV dword ptr [EBX + 0x53c],EAX     ; 00492dcf
    JMP 0x00492d94                      ; 00492dd5
        ;   XREF to: 00492d94 (UNCONDITIONAL_JUMP)  ; LAB_00492d94
    MOV EAX,[0x01c3de74]                ; 00492dd7 | g_CFilmReelClassInfo.name_hash
        ;   Label: LAB_00492dd7
    PUSH EAX                            ; 00492ddc
    MOV EDX,dword ptr [EBX + 0x2b4]     ; 00492ddd
    PUSH EDX                            ; 00492de3
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00492de4
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00492de9
    MOV ESI,EAX                         ; 00492dec
    TEST EAX,EAX                        ; 00492dee
    JNZ 0x00492e15                      ; 00492df0
        ;   XREF to: 00492e15 (CONDITIONAL_JUMP)  ; LAB_00492e15
    MOV ECX,0x5d52bf                    ; 00492df2
    MOV EDI,0x11d                       ; 00492df7
    PUSH 0x5d52d4                       ; 00492dfc
    MOV dword ptr [0x01d046a0],ECX      ; 00492e01 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00492e07 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00492e0d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00492e12
    LEA EAX,[ESI + 0x434]               ; 00492e15
        ;   Label: LAB_00492e15
    PUSH EAX                            ; 00492e1b
    MOV EBP,dword ptr [0x0060a0b8]      ; 00492e1c | g_CFilterFXPtr
    PUSH EBP                            ; 00492e22
    CALL core_dfilter.cpp_CFilterFX_openMovie_FUN_00447c50 ; 00492e23
        ;   XREF to: 00447c50 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_openMovie_FUN_00447c50(CFilterFX * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00492e28
    MOV EAX,dword ptr [EBX + 0x53c]     ; 00492e2b
    PUSH EAX                            ; 00492e31
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00492e32
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00492e37
    PUSH 0x5d5303                       ; 00492e3a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00492e3f
    PUSH EBX                            ; 00492e45
    CALL dword ptr [EAX + 0x34]         ; 00492e46
    ADD ESP,0x8                         ; 00492e49
    MOV dword ptr [EBX + 0x53c],EAX     ; 00492e4c
    JMP 0x00492d94                      ; 00492e52
        ;   XREF to: 00492d94 (UNCONDITIONAL_JUMP)  ; LAB_00492d94
    PUSH EDX                            ; 00492e57
        ;   Label: LAB_00492e57
    MOV ESI,dword ptr [0x0060a0b8]      ; 00492e58 | g_CFilterFXPtr
    PUSH ESI                            ; 00492e5e
    CALL core_dfilter.cpp_CFilterFX_openMovie_FUN_00447c50 ; 00492e5f
        ;   XREF to: 00447c50 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_openMovie_FUN_00447c50(CFilterFX * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00492e64
    MOV EDI,dword ptr [EBX + 0x53c]     ; 00492e67
    PUSH EDI                            ; 00492e6d
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00492e6e
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00492e73
    PUSH 0x5d5310                       ; 00492e76
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00492e7b
    PUSH EBX                            ; 00492e81
    CALL dword ptr [EAX + 0x34]         ; 00492e82
    ADD ESP,0x8                         ; 00492e85
    MOV dword ptr [EBX + 0x53c],EAX     ; 00492e88
    JMP 0x00492d32                      ; 00492e8e
        ;   XREF to: 00492d32 (UNCONDITIONAL_JUMP)  ; LAB_00492d32

