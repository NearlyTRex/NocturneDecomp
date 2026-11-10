; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004cf830(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_doc.cpp_FUN_00450c60 at 00452430
;   core_gabriela.cpp_CGabriella_process_FUN_004ad640 at 004ae99c
;   core_stranger.cpp_CStranger_processFrame_FUN_00563060 at 00564872
;
; Referenced Globals:
;   undefined4 g_CBoxActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf830
        ;   Label: core_hero.cpp_CHero_stopPushingBox_FUN_004cf830
    PUSH EBP                            ; 004cf831
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cf832
    MOV EDX,dword ptr [EBX + 0x2560c]   ; 004cf836
    TEST EDX,EDX                        ; 004cf83c
    JNZ 0x004cf843                      ; 004cf83e
        ;   XREF to: 004cf843 (CONDITIONAL_JUMP)  ; LAB_004cf843
    POP EBP                             ; 004cf840
    POP EBX                             ; 004cf841
    RET                                 ; 004cf842
    PUSH EDI                            ; 004cf843
        ;   Label: LAB_004cf843
    MOV ECX,dword ptr [0x007bc9e8]      ; 004cf844 | g_CBoxActorClassInfo.name_hash
    PUSH ECX                            ; 004cf84a
    PUSH EDX                            ; 004cf84b
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004cf84c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV EDI,dword ptr [EAX + 0x47c]     ; 004cf851
    ADD ESP,0x8                         ; 004cf857
    CMP EBX,EDI                         ; 004cf85a
    JNZ 0x004cf877                      ; 004cf85c
        ;   XREF to: 004cf877 (CONDITIONAL_JUMP)  ; LAB_004cf877
    MOV EBP,dword ptr [EAX + 0x484]     ; 004cf85e
    PUSH EBP                            ; 004cf864
    MOV dword ptr [EAX + 0x47c],0x0     ; 004cf865
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004cf86f
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004cf874
    MOV dword ptr [EBX + 0x2560c],0x0   ; 004cf877
        ;   Label: LAB_004cf877
    POP EDI                             ; 004cf881
    POP EBP                             ; 004cf882
    POP EBX                             ; 004cf883
    RET                                 ; 004cf884

