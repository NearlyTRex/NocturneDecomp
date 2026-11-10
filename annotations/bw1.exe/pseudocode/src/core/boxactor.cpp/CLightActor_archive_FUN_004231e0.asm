; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CLightActor_archive_FUN_004231e0(CLightActor *this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_lightType_005d4d6e
;   TerminatedCString s_bLightPos_005d4d78
;   TerminatedCString s_lightOrient_005d4d82
;   TerminatedCString s_lightFov_005d4d8e
;   TerminatedCString s_lightFov_005d4d97
;   TerminatedCString s_light_status_005d4da0
;   TerminatedCString s_light_falloff_005d4dad
;   undefined4 DAT_007c3038
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveOrientation_FUN_0040b260
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_boxactor.cpp_CBoxActor_archive_FUN_00422760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004231e0
        ;   Label: core_boxactor.cpp_CLightActor_archive_FUN_004231e0
    PUSH ESI                            ; 004231e1
    SUB ESP,0x4                         ; 004231e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004231e5
    PUSH EBX                            ; 004231e9
    CALL core_boxactor.cpp_CBoxActor_archive_FUN_00422760 ; 004231ea
        ;   XREF to: 00422760 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_archive_FUN_00422760(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 004231ef
    PUSH 0x5d4d6e                       ; 004231f2 | = "lightType"
    LEA EAX,[EBX + 0x678]               ; 004231f7
    PUSH EAX                            ; 004231fd
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004231fe
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [EBX + 0x678]     ; 00423203
    ADD ESP,0x8                         ; 00423209
    TEST EDX,EDX                        ; 0042320c
    JNZ 0x00423261                      ; 0042320e
        ;   XREF to: 00423261 (CONDITIONAL_JUMP)  ; LAB_00423261
    PUSH 0x5d4d78                       ; 00423210 | = "bLightPos"
    LEA EAX,[EBX + 0x3628]              ; 00423215
    PUSH EAX                            ; 0042321b
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 0042321c
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 00423221
    PUSH 0x5d4d82                       ; 00423224 | = "lightOrient"
    LEA EAX,[EBX + 0x3634]              ; 00423229
    PUSH EAX                            ; 0042322f
    LEA ESI,[EBX + 0x67c]               ; 00423230
    CALL core_actor.cpp_archiveOrientation_FUN_0040b260 ; 00423236
        ;   XREF to: 0040b260 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveOrientation_FUN_0040b260()
    MOV ECX,dword ptr [0x007c3038]      ; 0042323b | DAT_007c3038
    ADD ESP,0x8                         ; 00423241
    CMP ECX,0x1                         ; 00423244
    JNZ 0x00423285                      ; 00423247
        ;   XREF to: 00423285 (CONDITIONAL_JUMP)  ; LAB_00423285
    PUSH 0x5d4d8e                       ; 00423249 | = "lightFov"
    LEA EAX,[ESP + 0x4]                 ; 0042324e
    PUSH EAX                            ; 00423252
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00423253
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 00423258
    MOV EAX,dword ptr [ESP]             ; 0042325b
    MOV dword ptr [ESI + 0x38],EAX      ; 0042325e
    PUSH 0x5d4da0                       ; 00423261 | = "light status"
        ;   Label: LAB_00423261
    LEA EAX,[EBX + 0x2330]              ; 00423266
    PUSH EAX                            ; 0042326c
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042326d
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    MOV ESI,dword ptr [EBX + 0x678]     ; 00423272
    ADD ESP,0x8                         ; 00423278
    TEST ESI,ESI                        ; 0042327b
    JZ 0x004232a0                       ; 0042327d
        ;   XREF to: 004232a0 (CONDITIONAL_JUMP)  ; LAB_004232a0
    ADD ESP,0x4                         ; 0042327f
    POP ESI                             ; 00423282
    POP EBX                             ; 00423283
    RET                                 ; 00423284
    PUSH 0x5d4d97                       ; 00423285 | = "lightFov"
        ;   Label: LAB_00423285
    LEA EAX,[ESP + 0x4]                 ; 0042328a
    FLD float ptr [ESI + 0x38]          ; 0042328e
    PUSH EAX                            ; 00423291
    FSTP float ptr [ESP + 0x8]          ; 00423292
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00423296
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0042329b
    JMP 0x00423261                      ; 0042329e
        ;   XREF to: 00423261 (UNCONDITIONAL_JUMP)  ; LAB_00423261
    PUSH 0x5d4dad                       ; 004232a0 | = "light falloff"
        ;   Label: LAB_004232a0
    ADD EBX,0x7bc                       ; 004232a5
    PUSH EBX                            ; 004232ab
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004232ac
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004232b1
    ADD ESP,0x4                         ; 004232b4
    POP ESI                             ; 004232b7
    POP EBX                             ; 004232b8
    RET                                 ; 004232b9

