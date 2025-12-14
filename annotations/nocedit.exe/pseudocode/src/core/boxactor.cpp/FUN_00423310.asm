; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boxactor.cpp_FUN_00423310()
;
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_FUN_004234e0 at 004234f9
;
; Referenced Globals:
;   void* switchdataD_004232f8 = 00423338
;   TerminatedCString s_Custom_0061698f
;   undefined4 s_ustom_00616990
;   undefined4 s_stom_00616991
;   undefined4 s_tom_00616992
;   TerminatedCString s_Flashlight_00616996
;   undefined4 s_lashlight_00616997
;   undefined4 s_ashlight_00616998
;   undefined4 s_shlight_00616999
;   TerminatedCString s_Lantern_006169a1
;   undefined4 s_antern_006169a2
;   undefined4 s_ntern_006169a3
;   undefined4 s_tern_006169a4
;   TerminatedCString s_Globe_006169a9
;   undefined4 s_lobe_006169aa
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00423310
        ;   Label: core_boxactor.cpp_FUN_00423310
    PUSH EDI                            ; 00423311
    MOV EDX,dword ptr [0x00822c84]      ; 00423312 | g_CLightActorClassInfo.name_hash
    PUSH EDX                            ; 00423318
    MOV ECX,dword ptr [ESP + 0x10]      ; 00423319
    PUSH ECX                            ; 0042331d
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0042331e
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EAX,dword ptr [EAX + 0x66c]     ; 00423323
    ADD ESP,0x8                         ; 00423329
    CMP EAX,0x3                         ; 0042332c
    JA 0x00423373                       ; 0042332f
        ;   XREF to: 00423373 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4232f8]  ; 00423331 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,0x61698f                    ; 00423338 | = "Custom"
        ;   Label: caseD_0
    MOV EDI,dword ptr [ESP + 0x14]      ; 0042333d
        ;   Label: LAB_0042333d
    PUSH EDI                            ; 00423341
    MOV AL,byte ptr [ESI]               ; 00423342 | = "Custom" | s_stom_00616991 | s_Flashlight_00616996
        ;   Label: LAB_00423342
    MOV byte ptr [EDI],AL               ; 00423344
    CMP AL,0x0                          ; 00423346
    JZ 0x0042335a                       ; 00423348
        ;   XREF to: 0042335a (CONDITIONAL_JUMP)  ; LAB_0042335a
    MOV AL,byte ptr [ESI + 0x1]         ; 0042334a | s_ustom_00616990 | s_tom_00616992 | s_lashlight_00616997
    ADD ESI,0x2                         ; 0042334d
    MOV byte ptr [EDI + 0x1],AL         ; 00423350
    ADD EDI,0x2                         ; 00423353
    CMP AL,0x0                          ; 00423356
    JNZ 0x00423342                      ; 00423358
        ;   XREF to: 00423342 (CONDITIONAL_JUMP)  ; LAB_00423342
    POP EDI                             ; 0042335a
        ;   Label: LAB_0042335a
    POP EDI                             ; 0042335b
    POP ESI                             ; 0042335c
    RET                                 ; 0042335d
    MOV ESI,0x616996                    ; 0042335e | = "Flashlight"
        ;   Label: caseD_1
    JMP 0x0042333d                      ; 00423363
        ;   XREF to: 0042333d (UNCONDITIONAL_JUMP)  ; LAB_0042333d
    MOV ESI,0x6169a1                    ; 00423365 | = "Lantern"
        ;   Label: caseD_2
    JMP 0x0042333d                      ; 0042336a
        ;   XREF to: 0042333d (UNCONDITIONAL_JUMP)  ; LAB_0042333d
    MOV ESI,0x6169a9                    ; 0042336c | = "Globe"
        ;   Label: caseD_3
    JMP 0x0042333d                      ; 00423371
        ;   XREF to: 0042333d (UNCONDITIONAL_JUMP)  ; LAB_0042333d
    MOV ESI,0x6169af                    ; 00423373 | = "???"
        ;   Label: default
    JMP 0x0042333d                      ; 00423378
        ;   XREF to: 0042333d (UNCONDITIONAL_JUMP)  ; LAB_0042333d

