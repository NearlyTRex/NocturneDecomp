; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_ammobox.cpp_FUN_00411a30()
;
;
; XREF[1]:
;   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 at 00411be4
;
; Referenced Globals:
;   void* switchdataD_00411a1c = 00411a5c
;   TerminatedCString s_Generic_00614c6f
;   undefined4 s_eneric_00614c70
;   TerminatedCString s_Holy_00614c77
;   undefined4 s_oly_00614c78
;   TerminatedCString s_Wood_00614c7c
;   undefined4 s_ood_00614c7d
;   TerminatedCString s_Silver_00614c81
;   undefined4 s_ilver_00614c82
;   TerminatedCString s_Gold_00614c88
;   undefined4 s_old_00614c89
;   undefined4 s_ld_00614c8a
;   undefined4 s_d_00614c8b
;   undefined4 g_CAmmoBoxClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00411a30
        ;   Label: core_ammobox.cpp_FUN_00411a30
    PUSH EDI                            ; 00411a31
    MOV EDI,dword ptr [ESP + 0x14]      ; 00411a32
    MOV EDX,dword ptr [0x008223e0]      ; 00411a36 | g_CAmmoBoxClassInfo.name_hash
    PUSH EDX                            ; 00411a3c
    MOV ECX,dword ptr [ESP + 0x10]      ; 00411a3d
    PUSH ECX                            ; 00411a41
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00411a42 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x318]     ; 00411a47
    ADD ESP,0x8                         ; 00411a4d
    CMP EAX,0x4                         ; 00411a50
    JA 0x00411a7b                       ; 00411a53 | default
        ;   XREF to: 00411a7b (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x411a1c]  ; 00411a55 | void * switchdataD_00411a1c
        ;   Label: switchD
    MOV ESI,0x614c6f                    ; 00411a5c | = "Generic" | s_Generic_00614c6f = Generic
        ;   Label: caseD_0
    PUSH EDI                            ; 00411a61
        ;   Label: LAB_00411a61
    MOV AL,byte ptr [ESI]               ; 00411a62 | = "Gold" | s_Gold_00614c88 = Gold | s_Silver_00614c81 = Silver
        ;   Label: LAB_00411a62
    MOV byte ptr [EDI],AL               ; 00411a64
    CMP AL,0x0                          ; 00411a66
    JZ 0x00411a7a                       ; 00411a68 | LAB_00411a7a
        ;   XREF to: 00411a7a (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00411a6a | s_old_00614c89
    ADD ESI,0x2                         ; 00411a6d
    MOV byte ptr [EDI + 0x1],AL         ; 00411a70
    ADD EDI,0x2                         ; 00411a73
    CMP AL,0x0                          ; 00411a76
    JNZ 0x00411a62                      ; 00411a78 | LAB_00411a62
        ;   XREF to: 00411a62 (CONDITIONAL_JUMP)
    POP EDI                             ; 00411a7a
        ;   Label: LAB_00411a7a
    POP EDI                             ; 00411a7b
        ;   Label: default
    POP ESI                             ; 00411a7c
    RET                                 ; 00411a7d
    MOV ESI,0x614c77                    ; 00411a7e | = "Holy" | s_Holy_00614c77 = Holy
        ;   Label: caseD_1
    JMP 0x00411a61                      ; 00411a83 | LAB_00411a61
        ;   XREF to: 00411a61 (UNCONDITIONAL_JUMP)
    MOV ESI,0x614c7c                    ; 00411a85 | = "Wood" | s_Wood_00614c7c = Wood
        ;   Label: caseD_2
    JMP 0x00411a61                      ; 00411a8a | LAB_00411a61
        ;   XREF to: 00411a61 (UNCONDITIONAL_JUMP)
    MOV ESI,0x614c81                    ; 00411a8c | = "Silver" | s_Silver_00614c81 = Silver
        ;   Label: caseD_3
    JMP 0x00411a61                      ; 00411a91 | LAB_00411a61
        ;   XREF to: 00411a61 (UNCONDITIONAL_JUMP)
    MOV ESI,0x614c88                    ; 00411a93 | = "Gold" | s_Gold_00614c88 = Gold
        ;   Label: caseD_4
    JMP 0x00411a61                      ; 00411a98 | LAB_00411a61
        ;   XREF to: 00411a61 (UNCONDITIONAL_JUMP)

