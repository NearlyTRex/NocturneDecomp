; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_CStranger_FUN_005c6590()
;
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bc51a
;
; Referenced Globals:
;   undefined4 DAT_00663744
;   undefined4 g_CDynamiteClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_dynamite.cpp_FUN_0049cf90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6590
        ;   Label: core_stranger.cpp_CStranger_FUN_005c6590
    PUSH ESI                            ; 005c6591
    PUSH EDI                            ; 005c6592
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c6593
    MOV EDX,dword ptr [EBX + 0x1fc2c]   ; 005c6597
    TEST EDX,EDX                        ; 005c659d
    JNZ 0x005c65a5                      ; 005c659f | LAB_005c65a5
        ;   XREF to: 005c65a5 (CONDITIONAL_JUMP)
    POP EDI                             ; 005c65a1
        ;   Label: LAB_005c65a1
    POP ESI                             ; 005c65a2
    POP EBX                             ; 005c65a3
    RET                                 ; 005c65a4
    PUSH dword ptr [ESP + 0x14]         ; 005c65a5
        ;   Label: LAB_005c65a5
    MOV ESI,dword ptr [EDX + 0x154]     ; 005c65a9
    PUSH EDX                            ; 005c65af
    CALL dword ptr [ESI + 0x4]          ; 005c65b0
    ADD ESP,0x8                         ; 005c65b3
    MOV ECX,dword ptr [0x02ceed20]      ; 005c65b6 | g_CDynamiteClassInfo.name_hash
    PUSH ECX                            ; 005c65bc
    MOV ESI,dword ptr [EBX + 0x1fc2c]   ; 005c65bd
    PUSH ESI                            ; 005c65c3
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c65c4 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 005c65c9
    ADD ESP,0x8                         ; 005c65cb
    TEST EAX,EAX                        ; 005c65ce
    JZ 0x005c65a1                       ; 005c65d0 | LAB_005c65a1
        ;   XREF to: 005c65a1 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005c65d2
    CALL core_dynamite.cpp_FUN_0049cf90 ; 005c65d3 | undefined core_dynamite.cpp_FUN_0049cf90()
        ;   XREF to: 0049cf90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c65d8
    TEST EAX,EAX                        ; 005c65db
    JZ 0x005c65a1                       ; 005c65dd | LAB_005c65a1
        ;   XREF to: 005c65a1 (CONDITIONAL_JUMP)
    LEA EAX,[ESI + 0x57c]               ; 005c65df
    MOV dword ptr [EAX + 0x8],0x0       ; 005c65e5
    PUSH ESI                            ; 005c65ec
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c65ed
    MOV dword ptr [EAX + 0x4],EDX       ; 005c65f0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c65f3
    MOV dword ptr [EAX],EDX             ; 005c65f6
    MOV EAX,dword ptr [ESI + 0x154]     ; 005c65f8
    CALL dword ptr [EAX + 0xf8]         ; 005c65fe
    MOV dword ptr [EBX + 0x1fc2c],0x0   ; 005c6604
    MOV dword ptr [EBX + 0x2a8c],0x0    ; 005c660e
    FLD float ptr [0x00663744]          ; 005c6618 | undefined4 DAT_00663744
    MOV dword ptr [EBX + 0x2a90],0x0    ; 005c661e
    ADD ESP,0x4                         ; 005c6628
    MOV EDI,dword ptr [EBX + 0x1fc38]   ; 005c662b
    FSTP float ptr [EBX + 0x1fbe4]      ; 005c6631
    CMP EDI,0x3                         ; 005c6637
    JNZ 0x005c65a1                      ; 005c663a | LAB_005c65a1
        ;   XREF to: 005c65a1 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1fc38],0x0   ; 005c6640
    POP EDI                             ; 005c664a
    POP ESI                             ; 005c664b
    POP EBX                             ; 005c664c
    RET                                 ; 005c664d

