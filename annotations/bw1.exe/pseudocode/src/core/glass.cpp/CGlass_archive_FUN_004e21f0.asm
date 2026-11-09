; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_archive_FUN_004e21f0(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_glassSize_005e3f3b+1
;   TerminatedCString s_glassTexture_005e3f46
;   TerminatedCString s_opacity_005e3f53
;   TerminatedCString s_shattered_005e3f5b
;   TerminatedCString s_breakEvent_005e3f65
;   TerminatedCString s_mirrorFlag_005e3f70
;   TerminatedCString s_breakableCondition_005e3f7b
;   TerminatedCString s_backgroundFlag_005e3f8e
;   TerminatedCString s_brokenTexture_005e3f9d
;   int g_CGlassClassVersion = 0x6
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e21f0
        ;   Label: core_glass.cpp_CGlass_archive_FUN_004e21f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e21f1
    PUSH EBX                            ; 004e21f5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 004e21f6
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e21fb
    PUSH 0x5e3f3c                       ; 004e21fe | s_glassSize_005e3f3b+1
    LEA EAX,[EBX + 0x158]               ; 004e2203
    PUSH EAX                            ; 004e2209
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 004e220a
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 004e220f
    PUSH 0x5e3f46                       ; 004e2212 | = "glassTexture"
    LEA EAX,[EBX + 0x16c]               ; 004e2217
    PUSH EAX                            ; 004e221d
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004e221e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    MOV EDX,dword ptr [0x0061dc44]      ; 004e2223 | g_CGlassClassVersion
    ADD ESP,0x8                         ; 004e2229
    CMP EDX,0x2                         ; 004e222c
    JGE 0x004e22ab                      ; 004e222f
        ;   XREF to: 004e22ab (CONDITIONAL_JUMP)  ; LAB_004e22ab
    CMP dword ptr [0x0061dc44],0x3      ; 004e2235 | g_CGlassClassVersion
        ;   Label: LAB_004e2235
    JL 0x004e2266                       ; 004e223c
        ;   XREF to: 004e2266 (CONDITIONAL_JUMP)  ; LAB_004e2266
    PUSH 0x5e3f5b                       ; 004e223e | = "shattered"
    LEA EAX,[EBX + 0x180]               ; 004e2243
    PUSH EAX                            ; 004e2249
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004e224a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e224f
    PUSH 0x5e3f65                       ; 004e2252 | = "breakEvent"
    LEA EAX,[EBX + 0x184]               ; 004e2257
    PUSH EAX                            ; 004e225d
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004e225e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e2263
    CMP dword ptr [0x0061dc44],0x4      ; 004e2266 | g_CGlassClassVersion
        ;   Label: LAB_004e2266
    JL 0x004e2283                       ; 004e226d
        ;   XREF to: 004e2283 (CONDITIONAL_JUMP)  ; LAB_004e2283
    PUSH 0x5e3f70                       ; 004e226f | = "mirrorFlag"
    LEA EAX,[EBX + 0x1e8]               ; 004e2274
    PUSH EAX                            ; 004e227a
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004e227b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e2280
    CMP dword ptr [0x0061dc44],0x5      ; 004e2283 | g_CGlassClassVersion
        ;   Label: LAB_004e2283
    JL 0x004e22a0                       ; 004e228a
        ;   XREF to: 004e22a0 (CONDITIONAL_JUMP)  ; LAB_004e22a0
    PUSH 0x5e3f7b                       ; 004e228c | = "breakableCondition"
    LEA EAX,[EBX + 0x30c]               ; 004e2291
    PUSH EAX                            ; 004e2297
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004e2298
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e229d
    CMP dword ptr [0x0061dc44],0x6      ; 004e22a0 | g_CGlassClassVersion
        ;   Label: LAB_004e22a0
    JGE 0x004e22c4                      ; 004e22a7
        ;   XREF to: 004e22c4 (CONDITIONAL_JUMP)  ; LAB_004e22c4
    POP EBX                             ; 004e22a9
    RET                                 ; 004e22aa
    PUSH 0x5e3f53                       ; 004e22ab | = "opacity"
        ;   Label: LAB_004e22ab
    LEA EAX,[EBX + 0x17c]               ; 004e22b0
    PUSH EAX                            ; 004e22b6
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004e22b7
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e22bc
    JMP 0x004e2235                      ; 004e22bf
        ;   XREF to: 004e2235 (UNCONDITIONAL_JUMP)  ; LAB_004e2235
    PUSH 0x5e3f8e                       ; 004e22c4 | = "backgroundFlag"
        ;   Label: LAB_004e22c4
    LEA EAX,[EBX + 0x370]               ; 004e22c9
    PUSH EAX                            ; 004e22cf
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004e22d0
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e22d5
    PUSH 0x5e3f9d                       ; 004e22d8 | = "brokenTexture"
    ADD EBX,0x37c                       ; 004e22dd
    PUSH EBX                            ; 004e22e3
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004e22e4
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e22e9
    POP EBX                             ; 004e22ec
    RET                                 ; 004e22ed

