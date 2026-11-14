; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_doc.cpp_FUN_00469550 at 0046afc8
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c7935
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 00587308
;
; Referenced Globals:
;   undefined4 g_CBoxActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ebbe0
        ;   Label: core_hero.cpp_CHero_stopPushingBox_FUN_004ebbe0
    PUSH EBP                            ; 004ebbe1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ebbe2
    MOV EDX,dword ptr [EBX + 0x1ff7c]   ; 004ebbe6
    TEST EDX,EDX                        ; 004ebbec
    JNZ 0x004ebbf3                      ; 004ebbee
        ;   XREF to: 004ebbf3 (CONDITIONAL_JUMP)  ; LAB_004ebbf3
    POP EBP                             ; 004ebbf0
    POP EBX                             ; 004ebbf1
    RET                                 ; 004ebbf2
    PUSH EDI                            ; 004ebbf3
        ;   Label: LAB_004ebbf3
    MOV ECX,dword ptr [0x007c5094]      ; 004ebbf4 | g_CBoxActorClassInfo.name_hash
    PUSH ECX                            ; 004ebbfa
    PUSH EDX                            ; 004ebbfb
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004ebbfc
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDI,dword ptr [EAX + 0x320]     ; 004ebc01
    ADD ESP,0x8                         ; 004ebc07
    CMP EBX,EDI                         ; 004ebc0a
    JNZ 0x004ebc27                      ; 004ebc0c
        ;   XREF to: 004ebc27 (CONDITIONAL_JUMP)  ; LAB_004ebc27
    MOV EBP,dword ptr [EAX + 0x328]     ; 004ebc0e
    PUSH EBP                            ; 004ebc14
    MOV dword ptr [EAX + 0x320],0x0     ; 004ebc15
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004ebc1f
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004ebc24
    MOV dword ptr [EBX + 0x1ff7c],0x0   ; 004ebc27
        ;   Label: LAB_004ebc27
    POP EDI                             ; 004ebc31
    POP EBP                             ; 004ebc32
    POP EBX                             ; 004ebc33
    RET                                 ; 004ebc34

