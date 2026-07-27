; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c__stricmp_FUN_00564520(byte *param_1,byte *param_2)
;
;
; XREF[93]:
;   FUN_0056b960 at 0056b9ef
;   FUN_0056c750 at 0056c783
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0 at 004f4aef
;   cockpit_pkbmpset.cpp_FUN_004f5a50 at 004f5adc
;   core_actor.cpp_CDemonActor_load_FUN_0040c160 at 0040c1aa
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_00417c90 at 00417cb0
;   core_charactr.cpp_CCharacter_getDeathState_FUN_00428710 at 0042875a
;   core_dmodel.cpp_loadModel_FUN_004543b0 at 004543cc
;   core_dracbrid.cpp_CDraculaBride_setup_FUN_00458730 at 0045875f
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047e2df
;   ... and 83 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564520
        ;   Label: crt_string.c__stricmp_FUN_00564520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00564521
    MOV EDX,dword ptr [ESP + 0xc]       ; 00564525
    MOV AL,byte ptr [EBX]               ; 00564529
        ;   Label: LAB_00564529
    MOV AH,byte ptr [EDX]               ; 0056452b
    CMP AL,0x41                         ; 0056452d
    JC 0x00564537                       ; 0056452f
        ;   XREF to: 00564537 (CONDITIONAL_JUMP)  ; LAB_00564537
    CMP AL,0x5a                         ; 00564531
    JA 0x00564537                       ; 00564533
        ;   XREF to: 00564537 (CONDITIONAL_JUMP)  ; LAB_00564537
    ADD AL,0x20                         ; 00564535
    CMP AH,0x41                         ; 00564537
        ;   Label: LAB_00564537
    JC 0x00564544                       ; 0056453a
        ;   XREF to: 00564544 (CONDITIONAL_JUMP)  ; LAB_00564544
    CMP AH,0x5a                         ; 0056453c
    JA 0x00564544                       ; 0056453f
        ;   XREF to: 00564544 (CONDITIONAL_JUMP)  ; LAB_00564544
    ADD AH,0x20                         ; 00564541
    CMP AL,AH                           ; 00564544
        ;   Label: LAB_00564544
    JNZ 0x00564550                      ; 00564546
        ;   XREF to: 00564550 (CONDITIONAL_JUMP)  ; LAB_00564550
    TEST AH,AH                          ; 00564548
    JZ 0x00564550                       ; 0056454a
        ;   XREF to: 00564550 (CONDITIONAL_JUMP)  ; LAB_00564550
    INC EBX                             ; 0056454c
    INC EDX                             ; 0056454d
    JMP 0x00564529                      ; 0056454e
        ;   XREF to: 00564529 (UNCONDITIONAL_JUMP)  ; LAB_00564529
    XOR EDX,EDX                         ; 00564550
        ;   Label: LAB_00564550
    MOV DL,AL                           ; 00564552
    MOV AL,AH                           ; 00564554
    AND EAX,0xff                        ; 00564556
    SUB EDX,EAX                         ; 0056455b
    MOV EAX,EDX                         ; 0056455d
    POP EBX                             ; 0056455f
    RET                                 ; 00564560

