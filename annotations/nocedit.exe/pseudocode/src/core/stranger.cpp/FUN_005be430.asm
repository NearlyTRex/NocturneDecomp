; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_FUN_005be430()
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 g_CLightActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be430
        ;   Label: core_stranger.cpp_FUN_005be430
    SUB ESP,0x4                         ; 005be431
    MOV EDX,dword ptr [0x00822c84]      ; 005be434 | g_CLightActorClassInfo.name_hash
    MOV EAX,dword ptr [ESP + 0xc]       ; 005be43a
    PUSH EDX                            ; 005be43e
    MOV ECX,dword ptr [EAX + 0x24b4]    ; 005be43f
    PUSH ECX                            ; 005be445
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005be446 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005be44b
    TEST EAX,EAX                        ; 005be44e
    JZ 0x005be471                       ; 005be450 | LAB_005be471
        ;   XREF to: 005be471 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EAX + 0x66c]     ; 005be452
    CMP EBX,0x2                         ; 005be458
    JZ 0x005be462                       ; 005be45b | LAB_005be462
        ;   XREF to: 005be462 (CONDITIONAL_JUMP)
    CMP EBX,0x3                         ; 005be45d
    JNZ 0x005be471                      ; 005be460 | LAB_005be471
        ;   XREF to: 005be471 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP],0xbf860a92      ; 005be462
        ;   Label: LAB_005be462
    MOV EAX,dword ptr [ESP]             ; 005be469
    ADD ESP,0x4                         ; 005be46c
    POP EBX                             ; 005be46f
    RET                                 ; 005be470
    MOV dword ptr [ESP],0xbfc80fc6      ; 005be471
        ;   Label: LAB_005be471
    MOV EAX,dword ptr [ESP]             ; 005be478
    ADD ESP,0x4                         ; 005be47b
    POP EBX                             ; 005be47e
    RET                                 ; 005be47f

