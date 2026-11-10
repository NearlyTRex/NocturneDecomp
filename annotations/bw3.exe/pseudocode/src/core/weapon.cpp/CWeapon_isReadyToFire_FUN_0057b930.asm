; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_0057b930(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_wp_nomana_wav_005d78de+1
;   undefined4 DAT_006045f8
;   undefined4 g_CHeroClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b930
        ;   Label: core_weapon.cpp_CWeapon_isReadyToFire_FUN_0057b930
    PUSH EDI                            ; 0057b931
    MOV EBX,dword ptr [ESP + 0xc]       ; 0057b932
    MOV EDX,dword ptr [0x01d5ba70]      ; 0057b936 | g_CHeroClassInfo.name_hash
    PUSH EDX                            ; 0057b93c
    MOV ECX,dword ptr [EBX + 0x304]     ; 0057b93d
    PUSH ECX                            ; 0057b943
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0057b944
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    FLDZ                                ; 0057b949
    MOV EDX,EAX                         ; 0057b94b
    ADD ESP,0x8                         ; 0057b94d
    FCOMP float ptr [EBX + 0x300]       ; 0057b950
    FNSTSW AX                           ; 0057b956
    SAHF                                ; 0057b958
    JC 0x0057b982                       ; 0057b959
        ;   XREF to: 0057b982 (CONDITIONAL_JUMP)  ; LAB_0057b982
    TEST EDX,EDX                        ; 0057b95b
    JZ 0x0057b971                       ; 0057b95d
        ;   XREF to: 0057b971 (CONDITIONAL_JUMP)  ; LAB_0057b971
    CMP dword ptr [EDX + 0x20b60],0x0   ; 0057b95f
    JZ 0x0057b971                       ; 0057b966
        ;   XREF to: 0057b971 (CONDITIONAL_JUMP)  ; LAB_0057b971
    CMP dword ptr [EBX + 0x56c],0xa     ; 0057b968
    JZ 0x0057b982                       ; 0057b96f
        ;   XREF to: 0057b982 (CONDITIONAL_JUMP)  ; LAB_0057b982
    CMP dword ptr [EBX + 0x590],0x0     ; 0057b971
        ;   Label: LAB_0057b971
    JNZ 0x0057b987                      ; 0057b978
        ;   XREF to: 0057b987 (CONDITIONAL_JUMP)  ; LAB_0057b987
    MOV EAX,0x1                         ; 0057b97a
        ;   Label: LAB_0057b97a
    POP EDI                             ; 0057b97f
    POP EBX                             ; 0057b980
    RET                                 ; 0057b981
    XOR EAX,EAX                         ; 0057b982
        ;   Label: LAB_0057b982
    POP EDI                             ; 0057b984
    POP EBX                             ; 0057b985
    RET                                 ; 0057b986
    MOV EAX,[0x01d5ba70]                ; 0057b987 | g_CHeroClassInfo.name_hash
        ;   Label: LAB_0057b987
    PUSH EAX                            ; 0057b98c
    MOV EDX,dword ptr [EBX + 0x304]     ; 0057b98d
    PUSH EDX                            ; 0057b993
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0057b994
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0057b999
    MOV ECX,EAX                         ; 0057b99c
    TEST EAX,EAX                        ; 0057b99e
    JZ 0x0057b97a                       ; 0057b9a0
        ;   XREF to: 0057b97a (CONDITIONAL_JUMP)  ; LAB_0057b97a
    CMP dword ptr [EBX + 0x56c],0xa     ; 0057b9a2
    JNZ 0x0057b9b9                      ; 0057b9a9
        ;   XREF to: 0057b9b9 (CONDITIONAL_JUMP)  ; LAB_0057b9b9
    MOV EDI,dword ptr [EAX + 0x20b80]   ; 0057b9ab
    CMP EDI,dword ptr [EBX + 0x58c]     ; 0057b9b1
    JL 0x0057b9d5                       ; 0057b9b7
        ;   XREF to: 0057b9d5 (CONDITIONAL_JUMP)  ; LAB_0057b9d5
    CMP dword ptr [EBX + 0x56c],0xb     ; 0057b9b9
        ;   Label: LAB_0057b9b9
    JNZ 0x0057b97a                      ; 0057b9c0
        ;   XREF to: 0057b97a (CONDITIONAL_JUMP)  ; LAB_0057b97a
    MOV EDX,dword ptr [ECX + 0x20b84]   ; 0057b9c2
    CMP EDX,dword ptr [EBX + 0x58c]     ; 0057b9c8
    JGE 0x0057b97a                      ; 0057b9ce
        ;   XREF to: 0057b97a (CONDITIONAL_JUMP)  ; LAB_0057b97a
    XOR EAX,EAX                         ; 0057b9d0
    POP EDI                             ; 0057b9d2
    POP EBX                             ; 0057b9d3
    RET                                 ; 0057b9d4
    LEA EAX,[EBX + 0x20]                ; 0057b9d5
        ;   Label: LAB_0057b9d5
    PUSH EAX                            ; 0057b9d8
    PUSH 0x5d78df                       ; 0057b9d9 | s_wp_nomana_wav_005d78de+1
    PUSH EBX                            ; 0057b9de
    MOV ECX,dword ptr [0x006045f8]      ; 0057b9df | DAT_006045f8
    PUSH ECX                            ; 0057b9e5
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 0057b9e6
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0057b9eb
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 0057b9ee
    XOR EAX,EAX                         ; 0057b9f8
    POP EDI                             ; 0057b9fa
    POP EBX                             ; 0057b9fb
    RET                                 ; 0057b9fc

