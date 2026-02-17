; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart *this_ptr,int vertex_count,int tri_count)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   tri_count
;
; XREF[6]:
;   core_bodypart.cpp_CBodyPart_archive_FUN_00419880 at 00419aa7
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00419130 at 0041914b
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050 at 0041a080
;   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 at 00419c7f
;   core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_0041b070 at 0041b096
;   core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0 at 0059c83e
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_00615bd9
;   TerminatedCString s_core_bodypart_cpp_00615bee
;   TerminatedCString s_core_bodypart_cpp_00615c03
;   TerminatedCString s_core_bodypart_cpp_00615c18
;   TerminatedCString s_core_bodypart_cpp_00615c2d
;   TerminatedCString s_CBodyPart_setCounts_out__00615c42
;   TerminatedCString s_core_bodypart_cpp_00615c87
;   TerminatedCString s_CBodyPart_setCounts_out__00615c9c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004191d0
        ;   Label: core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
    PUSH ESI                            ; 004191d1
    PUSH EDI                            ; 004191d2
    PUSH EBP                            ; 004191d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004191d4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004191d8
    MOV dword ptr [EBX + 0x174],EAX     ; 004191dc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004191e2
    MOV EDX,dword ptr [EBX + 0x174]     ; 004191e6
    MOV dword ptr [EBX + 0x180],EAX     ; 004191ec
    LEA EAX,[EDX*0x4 + 0x0]             ; 004191f2
    PUSH 0xa8                           ; 004191f9
    SUB EAX,EDX                         ; 004191fe
    PUSH 0x615bd9                       ; 00419200 | = "..\\core\\bodypart.cpp"
    SHL EAX,0x2                         ; 00419205
    PUSH EAX                            ; 00419208
    MOV EDX,dword ptr [EBX + 0x178]     ; 00419209
    PUSH EDX                            ; 0041920f
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 00419210
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 00419215
    MOV EDX,dword ptr [EBX + 0x174]     ; 00419218
    MOV dword ptr [EBX + 0x178],EAX     ; 0041921e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00419224
    PUSH 0xa9                           ; 0041922b
    SUB EAX,EDX                         ; 00419230
    PUSH 0x615bee                       ; 00419232 | = "..\\core\\bodypart.cpp"
    SHL EAX,0x2                         ; 00419237
    PUSH EAX                            ; 0041923a
    MOV ECX,dword ptr [EBX + 0x17c]     ; 0041923b
    PUSH ECX                            ; 00419241
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 00419242
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    MOV dword ptr [EBX + 0x17c],EAX     ; 00419247
    MOV EAX,dword ptr [EBX + 0x180]     ; 0041924d
    ADD ESP,0x10                        ; 00419253
    SHL EAX,0x2                         ; 00419256
    PUSH 0xab                           ; 00419259
    MOV EDX,EAX                         ; 0041925e
    SHL EAX,0x4                         ; 00419260
    PUSH 0x615c03                       ; 00419263 | = "..\\core\\bodypart.cpp"
    SUB EAX,EDX                         ; 00419268
    PUSH EAX                            ; 0041926a
    MOV ESI,dword ptr [EBX + 0x184]     ; 0041926b
    PUSH ESI                            ; 00419271
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 00419272
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 00419277
    MOV dword ptr [EBX + 0x184],EAX     ; 0041927a
    PUSH 0xac                           ; 00419280
    MOV EAX,dword ptr [EBX + 0x180]     ; 00419285
    PUSH 0x615c18                       ; 0041928b | = "..\\core\\bodypart.cpp"
    SHL EAX,0x2                         ; 00419290
    PUSH EAX                            ; 00419293
    MOV EDI,dword ptr [EBX + 0x188]     ; 00419294
    PUSH EDI                            ; 0041929a
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0041929b
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004192a0
    MOV EBP,dword ptr [EBX + 0x174]     ; 004192a3
    MOV dword ptr [EBX + 0x188],EAX     ; 004192a9
    TEST EBP,EBP                        ; 004192af
    JLE 0x004192ef                      ; 004192b1
        ;   XREF to: 004192ef (CONDITIONAL_JUMP)  ; LAB_004192ef
    CMP dword ptr [EBX + 0x178],0x0     ; 004192b3
    JZ 0x004192c5                       ; 004192ba
        ;   XREF to: 004192c5 (CONDITIONAL_JUMP)  ; LAB_004192c5
    CMP dword ptr [EBX + 0x17c],0x0     ; 004192bc
    JNZ 0x004192ef                      ; 004192c3
        ;   XREF to: 004192ef (CONDITIONAL_JUMP)  ; LAB_004192ef
    MOV EDI,dword ptr [EBX + 0x174]     ; 004192c5
        ;   Label: LAB_004192c5
    PUSH EDI                            ; 004192cb
    MOV ECX,0x615c2d                    ; 004192cc | = "..\\core\\bodypart.cpp"
    MOV ESI,0xb2                        ; 004192d1
    PUSH 0x615c42                       ; 004192d6 | = "CBodyPart::setCounts - out of memory ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004192db | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004192e1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004192e7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004192ec
    CMP dword ptr [EBX + 0x180],0x0     ; 004192ef
        ;   Label: LAB_004192ef
    JLE 0x0041930a                      ; 004192f6
        ;   XREF to: 0041930a (CONDITIONAL_JUMP)  ; LAB_0041930a
    CMP dword ptr [EBX + 0x184],0x0     ; 004192f8
    JZ 0x0041930f                       ; 004192ff
        ;   XREF to: 0041930f (CONDITIONAL_JUMP)  ; LAB_0041930f
    CMP dword ptr [EBX + 0x188],0x0     ; 00419301
    JZ 0x0041930f                       ; 00419308
        ;   XREF to: 0041930f (CONDITIONAL_JUMP)  ; LAB_0041930f
    POP EBP                             ; 0041930a
        ;   Label: LAB_0041930a
    POP EDI                             ; 0041930b
    POP ESI                             ; 0041930c
    POP EBX                             ; 0041930d
    RET                                 ; 0041930e
    MOV EDI,dword ptr [EBX + 0x180]     ; 0041930f
        ;   Label: LAB_0041930f
    PUSH EDI                            ; 00419315
    MOV ECX,0x615c87                    ; 00419316 | = "..\\core\\bodypart.cpp"
    MOV ESI,0xb7                        ; 0041931b
    PUSH 0x615c9c                       ; 00419320 | = "CBodyPart::setCounts - out of memory ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00419325 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0041932b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00419331
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00419336
    POP EBP                             ; 00419339
    POP EDI                             ; 0041933a
    POP ESI                             ; 0041933b
    POP EBX                             ; 0041933c
    RET                                 ; 0041933d

