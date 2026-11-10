; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004d3850(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_prye.cpp_FUN_00518cd0 at 0051a94a
;
; Referenced Globals:
;   undefined4 g_CBoxActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d3850
        ;   Label: core_hero.cpp_CHero_stopPushingBox_FUN_004d3850
    PUSH EBP                            ; 004d3851
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d3852
    MOV EDX,dword ptr [EBX + 0x20b9c]   ; 004d3856
    TEST EDX,EDX                        ; 004d385c
    JNZ 0x004d3863                      ; 004d385e
        ;   XREF to: 004d3863 (CONDITIONAL_JUMP)  ; LAB_004d3863
    POP EBP                             ; 004d3860
    POP EBX                             ; 004d3861
    RET                                 ; 004d3862
    PUSH EDI                            ; 004d3863
        ;   Label: LAB_004d3863
    MOV ECX,dword ptr [0x007e17b4]      ; 004d3864 | g_CBoxActorClassInfo.name_hash
    PUSH ECX                            ; 004d386a
    PUSH EDX                            ; 004d386b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d386c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDI,dword ptr [EAX + 0x320]     ; 004d3871
    ADD ESP,0x8                         ; 004d3877
    CMP EBX,EDI                         ; 004d387a
    JNZ 0x004d3897                      ; 004d387c
        ;   XREF to: 004d3897 (CONDITIONAL_JUMP)  ; LAB_004d3897
    MOV EBP,dword ptr [EAX + 0x328]     ; 004d387e
    PUSH EBP                            ; 004d3884
    MOV dword ptr [EAX + 0x320],0x0     ; 004d3885
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004d388f
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004d3894
    MOV dword ptr [EBX + 0x20b9c],0x0   ; 004d3897
        ;   Label: LAB_004d3897
    POP EDI                             ; 004d38a1
    POP EBP                             ; 004d38a2
    POP EBX                             ; 004d38a3
    RET                                 ; 004d38a4

