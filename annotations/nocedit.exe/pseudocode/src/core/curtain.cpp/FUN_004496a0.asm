; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCurtain * core_curtain.cpp_FUN_004496a0(CCurtain * this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_curtain.cpp_FUN_00449660 at 0044967a
;
; Referenced Globals:
;   TerminatedCString s_SGLASS_RAW_00619bd7
;   undefined4 s_GLASS.RAW_00619bd8
;   undefined4 s_LASS.RAW_00619bd9
;   undefined4 s_ASS.RAW_00619bda
;   TerminatedCString s_none_00619be2
;   undefined4 s_one_00619be3
;   undefined4 s_ne_00619be4
;   undefined4 s_e_00619be5
;   CDemonActor_vtable PTR_core_curtain.cpp_FUN_0065c4e4
;   WatcomTypeInfo g_SCurtainVertexTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004496a0
        ;   Label: core_curtain.cpp_FUN_004496a0
    PUSH EDI                            ; 004496a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004496a2
    PUSH EDX                            ; 004496a6
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004496a7 | CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004496ac
    PUSH 0x65c5f0                       ; 004496af | WatcomTypeInfo g_SCurtainVertexTypeInfo
    PUSH 0x3e8                          ; 004496b4
    ADD EAX,0x208                       ; 004496b9
    PUSH EAX                            ; 004496be
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004496bf | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    LEA EDX,[EAX + 0xfffffdf8]          ; 004496c4
    MOV dword ptr [EDX + 0x154],0x65c4e4 ; 004496ca | CDemonActor_vtable PTR_core_curtain.cpp_FUN_0065c4e4
    MOV ESI,0x619bd7                    ; 004496d4 | = "SGLASS.RAW" | s_SGLASS_RAW_00619bd7 = SGLASS.RAW
    MOV dword ptr [EDX + 0x158],0x40800000 ; 004496d9
    ADD ESP,0xc                         ; 004496e3
    MOV dword ptr [EDX + 0x15c],0x40800000 ; 004496e6
    LEA EDI,[EDX + 0x16c]               ; 004496f0
    MOV dword ptr [EDX + 0x160],0x3dcccccd ; 004496f6
    PUSH EDI                            ; 00449700
    MOV AL,byte ptr [ESI]               ; 00449701 | = "SGLASS.RAW" | s_SGLASS_RAW_00619bd7 = SGLASS.RAW
        ;   Label: LAB_00449701
    MOV byte ptr [EDI],AL               ; 00449703
    CMP AL,0x0                          ; 00449705
    JZ 0x00449719                       ; 00449707 | LAB_00449719
        ;   XREF to: 00449719 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00449709 | s_GLASS.RAW_00619bd8
    ADD ESI,0x2                         ; 0044970c
    MOV byte ptr [EDI + 0x1],AL         ; 0044970f
    ADD EDI,0x2                         ; 00449712
    CMP AL,0x0                          ; 00449715
    JNZ 0x00449701                      ; 00449717 | LAB_00449701
        ;   XREF to: 00449701 (CONDITIONAL_JUMP)
    POP EDI                             ; 00449719
        ;   Label: LAB_00449719
    MOV dword ptr [EDX + 0x168],0x0     ; 0044971a
    MOV dword ptr [EDX + 0x164],0xd     ; 00449724
    MOV dword ptr [EDX + 0x17c],0x8000  ; 0044972e
    MOV dword ptr [EDX + 0x180],0x1     ; 00449738
    MOV dword ptr [EDX + 0x18c],0x0     ; 00449742
    MOV dword ptr [EDX + 0x188],0x0     ; 0044974c
    MOV ESI,0x619be2                    ; 00449756 | = "none" | s_none_00619be2 = none
    MOV dword ptr [EDX + 0x184],0x0     ; 0044975b
    LEA EDI,[EDX + 0x194]               ; 00449765
    MOV dword ptr [EDX + 0x190],0x0     ; 0044976b
    PUSH EDI                            ; 00449775
    MOV AL,byte ptr [ESI]               ; 00449776 | = "none" | s_none_00619be2 = none
        ;   Label: LAB_00449776
    MOV byte ptr [EDI],AL               ; 00449778
    CMP AL,0x0                          ; 0044977a
    JZ 0x0044978e                       ; 0044977c | LAB_0044978e
        ;   XREF to: 0044978e (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0044977e | s_one_00619be3
    ADD ESI,0x2                         ; 00449781
    MOV byte ptr [EDI + 0x1],AL         ; 00449784
    ADD EDI,0x2                         ; 00449787
    CMP AL,0x0                          ; 0044978a
    JNZ 0x00449776                      ; 0044978c | LAB_00449776
        ;   XREF to: 00449776 (CONDITIONAL_JUMP)
    POP EDI                             ; 0044978e
        ;   Label: LAB_0044978e
    MOV dword ptr [EDX + 0x65b14],0x3f800000 ; 0044978f
    MOV dword ptr [EDX + 0x65b18],0x3f733333 ; 00449799
    MOV dword ptr [EDX + 0x65b1c],0x0   ; 004497a3
    MOV dword ptr [EDX + 0x65b20],0x3f000000 ; 004497ad
    MOV dword ptr [EDX + 0x65b24],0x42000000 ; 004497b7
    MOV dword ptr [EDX + 0x65b2c],0x0   ; 004497c1
    MOV dword ptr [EDX + 0x65b30],0x0   ; 004497cb
    MOV dword ptr [EDX + 0x1f8],0x1     ; 004497d5
    MOV dword ptr [EDX + 0x1fc],0x3f000000 ; 004497df
    MOV dword ptr [EDX + 0x200],0x1     ; 004497e9
    MOV EAX,EDX                         ; 004497f3
    MOV dword ptr [EDX + 0x65b34],0x0   ; 004497f5
    POP EDI                             ; 004497ff
    POP ESI                             ; 00449800
    RET                                 ; 00449801

