; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ammo_cpp_FUN_00411200(void)
;
;
; XREF[1]:
;   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 at 004113c0
;
; Referenced Globals:
;   void* switchdataD_004111dc = 0041122c
;   TerminatedCString s_Generic_00614a8d
;   undefined4 s_eneric_00614a8e
;   TerminatedCString s_Holy_00614a95
;   undefined4 s_oly_00614a96
;   TerminatedCString s_Wood_00614a9a
;   undefined4 s_ood_00614a9b
;   TerminatedCString s_Silver_00614a9f
;   undefined4 s_ilver_00614aa0
;   TerminatedCString s_Gold_00614aa6
;   undefined4 s_old_00614aa7
;   TerminatedCString s_Flaming_00614aab
;   undefined4 s_laming_00614aac
;   TerminatedCString s_Blanks_00614ab3
;   undefined4 s_lanks_00614ab4
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00411200
        ;   Label: core_ammo.cpp_FUN_00411200
    PUSH EDI                            ; 00411201
    MOV EDI,dword ptr [ESP + 0x14]      ; 00411202
    MOV EDX,dword ptr [0x008223a4]      ; 00411206 | g_CAmmoClassInfo.name_hash
    PUSH EDX                            ; 0041120c
    MOV ECX,dword ptr [ESP + 0x10]      ; 0041120d
    PUSH ECX                            ; 00411211
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00411212
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EAX,dword ptr [EAX + 0x318]     ; 00411217
    ADD ESP,0x8                         ; 0041121d
    CMP EAX,0x8                         ; 00411220
    JA 0x0041124b                       ; 00411223
        ;   XREF to: 0041124b (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4111dc]  ; 00411225 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,0x614a8d                    ; 0041122c | = "Generic"
        ;   Label: caseD_0
    PUSH EDI                            ; 00411231
        ;   Label: LAB_00411231
    MOV AL,byte ptr [ESI]               ; 00411232 | = "Mercury" | s_rcury_00614ac4 | s_Lithium_00614aba
        ;   Label: LAB_00411232
    MOV byte ptr [EDI],AL               ; 00411234
    CMP AL,0x0                          ; 00411236
    JZ 0x0041124a                       ; 00411238
        ;   XREF to: 0041124a (CONDITIONAL_JUMP)  ; LAB_0041124a
    MOV AL,byte ptr [ESI + 0x1]         ; 0041123a | s_ercury_00614ac3 | s_cury_00614ac5 | s_ithium_00614abb
    ADD ESI,0x2                         ; 0041123d
    MOV byte ptr [EDI + 0x1],AL         ; 00411240
    ADD EDI,0x2                         ; 00411243
    CMP AL,0x0                          ; 00411246
    JNZ 0x00411232                      ; 00411248
        ;   XREF to: 00411232 (CONDITIONAL_JUMP)  ; LAB_00411232
    POP EDI                             ; 0041124a
        ;   Label: LAB_0041124a
    POP EDI                             ; 0041124b
        ;   Label: default
    POP ESI                             ; 0041124c
    RET                                 ; 0041124d
    MOV ESI,0x614a95                    ; 0041124e | = "Holy"
        ;   Label: caseD_1
    JMP 0x00411231                      ; 00411253
        ;   XREF to: 00411231 (UNCONDITIONAL_JUMP)  ; LAB_00411231
    MOV ESI,0x614a9a                    ; 00411255 | = "Wood"
        ;   Label: caseD_2
    JMP 0x00411231                      ; 0041125a
        ;   XREF to: 00411231 (UNCONDITIONAL_JUMP)  ; LAB_00411231
    MOV ESI,0x614a9f                    ; 0041125c | = "Silver"
        ;   Label: caseD_3
    JMP 0x00411231                      ; 00411261
        ;   XREF to: 00411231 (UNCONDITIONAL_JUMP)  ; LAB_00411231
    MOV ESI,0x614aa6                    ; 00411263 | = "Gold"
        ;   Label: caseD_4
    JMP 0x00411231                      ; 00411268
        ;   XREF to: 00411231 (UNCONDITIONAL_JUMP)  ; LAB_00411231
    MOV ESI,0x614aab                    ; 0041126a | = "Flaming"
        ;   Label: caseD_5
    JMP 0x00411231                      ; 0041126f
        ;   XREF to: 00411231 (UNCONDITIONAL_JUMP)  ; LAB_00411231
    MOV ESI,0x614ab3                    ; 00411271 | = "Blanks"
        ;   Label: caseD_6
    JMP 0x00411231                      ; 00411276
        ;   XREF to: 00411231 (UNCONDITIONAL_JUMP)  ; LAB_00411231
    MOV ESI,0x614aba                    ; 00411278 | = "Lithium"
        ;   Label: caseD_7
    JMP 0x00411231                      ; 0041127d
        ;   XREF to: 00411231 (UNCONDITIONAL_JUMP)  ; LAB_00411231
    MOV ESI,0x614ac2                    ; 0041127f | = "Mercury"
        ;   Label: caseD_8
    JMP 0x00411231                      ; 00411284
        ;   XREF to: 00411231 (UNCONDITIONAL_JUMP)  ; LAB_00411231

