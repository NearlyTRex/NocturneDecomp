; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_CActorDestination_process_FUN_004591f0(CActorDestination *this_ptr,float delta_time)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_process_FUN_00496560 at 00496593
;
; Referenced Globals:
;   undefined4 DAT_005ba9ac
;   undefined4 DAT_005ba9b4
;   undefined4 DAT_005fba60
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;
; Called Functions:
;   core_dest.cpp_CActorDestination_acceptsActor_FUN_004594a0
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004591f0
        ;   Label: core_dest.cpp_CActorDestination_process_FUN_004591f0
    PUSH ESI                            ; 004591f1
    PUSH EDI                            ; 004591f2
    PUSH EBP                            ; 004591f3
    MOV EBP,ESP                         ; 004591f4
    SUB ESP,0x44                        ; 004591f6
    AND ESP,0xfffffff8                  ; 004591f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004591fc
    CMP dword ptr [EAX + 0x1f0],0x0     ; 004591ff
    JZ 0x004592c7                       ; 00459206
        ;   XREF to: 004592c7 (CONDITIONAL_JUMP)  ; LAB_004592c7
    MOV ECX,dword ptr [EAX + 0x158]     ; 0045920c
    TEST ECX,ECX                        ; 00459212
    JNZ 0x004592c7                      ; 00459214
        ;   XREF to: 004592c7 (CONDITIONAL_JUMP)  ; LAB_004592c7
    MOV dword ptr [ESP + 0x40],ECX      ; 0045921a
    LEA EBX,[EAX + 0x20]                ; 0045921e
    MOV dword ptr [ESP + 0x3c],ECX      ; 00459221
    MOV EAX,[0x00603b28]                ; 00459225 | g_CDemonSetPtr
        ;   Label: LAB_00459225
    MOV EDX,dword ptr [ESP + 0x40]      ; 0045922a
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0045922e
    JGE 0x004592c7                      ; 00459234
        ;   XREF to: 004592c7 (CONDITIONAL_JUMP)  ; LAB_004592c7
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0045923a
    FLD float ptr [EBX]                 ; 0045923e
    ADD EAX,EDX                         ; 00459240
    FLD float ptr [EBX + 0x4]           ; 00459242
    MOV EDX,dword ptr [EAX + 0x14d168]  ; 00459245
    FLD float ptr [EBX + 0x8]           ; 0045924b
    LEA EAX,[EDX + 0x20]                ; 0045924e
    LEA EDI,[ESP + 0xc]                 ; 00459251
    LEA ESI,[ESP + 0x24]                ; 00459255
    FXCH ST2                            ; 00459259
    FSUB float ptr [EAX]                ; 0045925b
    FXCH                                ; 0045925d
    FSUB float ptr [EAX + 0x4]          ; 0045925f
    FXCH ST2                            ; 00459262
    FSUB float ptr [EAX + 0x8]          ; 00459264
    FXCH                                ; 00459267
    FSTP float ptr [ESP + 0x24]         ; 00459269
    FXCH                                ; 0045926d
    FSTP float ptr [ESP + 0x28]         ; 0045926f
    FSTP float ptr [ESP + 0x2c]         ; 00459273
    MOVSD ES:EDI,ESI                    ; 00459277
    MOVSD ES:EDI,ESI                    ; 00459278
    MOVSD ES:EDI,ESI                    ; 00459279
    FLD float ptr [ESP + 0x10]          ; 0045927a
    FMUL ST0                            ; 0045927e
    FLD float ptr [ESP + 0xc]           ; 00459280
    FMUL ST0                            ; 00459284
    FADDP                               ; 00459286
    FLD float ptr [ESP + 0x14]          ; 00459288
    FMUL ST0                            ; 0045928c
    FADDP                               ; 0045928e
    FSQRT                               ; 00459290
    FCOMP double ptr [0x005ba9b4]       ; 00459292 | DAT_005ba9b4
    FNSTSW AX                           ; 00459298
    SAHF                                ; 0045929a
    JC 0x004592b6                       ; 0045929b
        ;   XREF to: 004592b6 (CONDITIONAL_JUMP)  ; LAB_004592b6
    MOV EDI,dword ptr [ESP + 0x40]      ; 0045929d
        ;   Label: LAB_0045929d
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004592a1
    INC EDI                             ; 004592a5
    ADD ESI,0x4                         ; 004592a6
    MOV dword ptr [ESP + 0x40],EDI      ; 004592a9
    MOV dword ptr [ESP + 0x3c],ESI      ; 004592ad
    JMP 0x00459225                      ; 004592b1
        ;   XREF to: 00459225 (UNCONDITIONAL_JUMP)  ; LAB_00459225
    PUSH EDX                            ; 004592b6
        ;   Label: LAB_004592b6
    MOV ECX,dword ptr [EBP + 0x14]      ; 004592b7
    PUSH ECX                            ; 004592ba
    CALL core_dest.cpp_CActorDestination_acceptsActor_FUN_004594a0 ; 004592bb
        ;   XREF to: 004594a0 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_CActorDestination_acceptsActor_FUN_004594a0(CActorDestination * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004592c0
    TEST EAX,EAX                        ; 004592c3
    JZ 0x0045929d                       ; 004592c5
        ;   XREF to: 0045929d (CONDITIONAL_JUMP)  ; LAB_0045929d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004592c7
        ;   Label: LAB_004592c7
    MOV EDX,dword ptr [EAX + 0x158]     ; 004592ca
    TEST EDX,EDX                        ; 004592d0
    JZ 0x0045939c                       ; 004592d2
        ;   XREF to: 0045939c (CONDITIONAL_JUMP)  ; LAB_0045939c
    MOV EAX,EDX                         ; 004592d8
    LEA EDI,[ESP + 0x18]                ; 004592da
    LEA ESI,[ESP + 0x30]                ; 004592de
    FLD float ptr [EAX + 0x24]          ; 004592e2
    FLD float ptr [EAX + 0x28]          ; 004592e5
    MOV EDX,dword ptr [EBP + 0x14]      ; 004592e8
    FLD float ptr [EAX + 0x20]          ; 004592eb
    MOV EAX,ESP                         ; 004592ee
    FSUB float ptr [EDX + 0x20]         ; 004592f0
    FXCH ST2                            ; 004592f3
    FSUB float ptr [EDX + 0x24]         ; 004592f5
    FXCH                                ; 004592f8
    FSUB float ptr [EDX + 0x28]         ; 004592fa
    FXCH ST2                            ; 004592fd
    FSTP float ptr [ESP + 0x30]         ; 004592ff
    FSTP float ptr [ESP + 0x34]         ; 00459303
    FSTP float ptr [ESP + 0x38]         ; 00459307
    LEA EDX,[ESP + 0x18]                ; 0045930b
    MOVSD ES:EDI,ESI                    ; 0045930f
    MOVSD ES:EDI,ESI                    ; 00459310
    MOVSD ES:EDI,ESI                    ; 00459311
    CMP EAX,EDX                         ; 00459312
    JNZ 0x004593b0                      ; 00459314
        ;   XREF to: 004593b0 (CONDITIONAL_JUMP)  ; LAB_004593b0
    FLD float ptr [ESP]                 ; 0045931a
        ;   Label: LAB_0045931a
    FABS                                ; 0045931d
    FCOMP double ptr [0x005ba9ac]       ; 0045931f | DAT_005ba9ac
    FNSTSW AX                           ; 00459325
    SAHF                                ; 00459327
    JNC 0x004593d5                      ; 00459328
        ;   XREF to: 004593d5 (CONDITIONAL_JUMP)  ; LAB_004593d5
    FLD float ptr [ESP + 0x4]           ; 0045932e
    FABS                                ; 00459332
    FCOMP double ptr [0x005ba9ac]       ; 00459334 | DAT_005ba9ac
    FNSTSW AX                           ; 0045933a
    SAHF                                ; 0045933c
    JNC 0x004593d5                      ; 0045933d
        ;   XREF to: 004593d5 (CONDITIONAL_JUMP)  ; LAB_004593d5
    FLD float ptr [ESP + 0x8]           ; 00459343
    FABS                                ; 00459347
    FCOMP double ptr [0x005ba9ac]       ; 00459349 | DAT_005ba9ac
    FNSTSW AX                           ; 0045934f
    SAHF                                ; 00459351
    JNC 0x004593d5                      ; 00459352
        ;   XREF to: 004593d5 (CONDITIONAL_JUMP)  ; LAB_004593d5
    MOV EDX,dword ptr [EBP + 0x14]      ; 00459358
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045935b
    MOV ECX,dword ptr [EDX + 0x1ec]     ; 0045935e
    ADD EAX,0x188                       ; 00459364
    TEST ECX,ECX                        ; 00459369
    JNZ 0x004593cc                      ; 0045936b
        ;   XREF to: 004593cc (CONDITIONAL_JUMP)  ; LAB_004593cc
    CMP dword ptr [EDX + 0x184],0x0     ; 0045936d
    JNZ 0x0045938f                      ; 00459374
        ;   XREF to: 0045938f (CONDITIONAL_JUMP)  ; LAB_0045938f
    CMP dword ptr [EDX + 0x1f0],0x0     ; 00459376
    JNZ 0x0045938f                      ; 0045937d
        ;   XREF to: 0045938f (CONDITIONAL_JUMP)  ; LAB_0045938f
    PUSH EAX                            ; 0045937f
    MOV EDI,dword ptr [0x005fba60]      ; 00459380 | DAT_005fba60
    PUSH EDI                            ; 00459386
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00459387
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
        ;   Label: LAB_00459387
    ADD ESP,0x8                         ; 0045938c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045938f
        ;   Label: LAB_0045938f
    MOV dword ptr [EAX + 0x184],0x1     ; 00459392
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045939c
        ;   Label: LAB_0045939c
    MOV dword ptr [EAX + 0x1f0],0x0     ; 0045939f
    MOV ESP,EBP                         ; 004593a9
    POP EBP                             ; 004593ab
    POP EDI                             ; 004593ac
    POP ESI                             ; 004593ad
    POP EBX                             ; 004593ae
    RET                                 ; 004593af
    MOV EAX,dword ptr [ESP + 0x18]      ; 004593b0
        ;   Label: LAB_004593b0
    MOV dword ptr [ESP],EAX             ; 004593b4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004593b7
    MOV dword ptr [ESP + 0x4],EAX       ; 004593bb
    MOV EAX,dword ptr [ESP + 0x20]      ; 004593bf
    MOV dword ptr [ESP + 0x8],EAX       ; 004593c3
    JMP 0x0045931a                      ; 004593c7
        ;   XREF to: 0045931a (UNCONDITIONAL_JUMP)  ; LAB_0045931a
    PUSH EAX                            ; 004593cc
        ;   Label: LAB_004593cc
    MOV EAX,[0x005fba60]                ; 004593cd | DAT_005fba60
    PUSH EAX                            ; 004593d2
    JMP 0x00459387                      ; 004593d3
        ;   XREF to: 00459387 (UNCONDITIONAL_JUMP)  ; LAB_00459387
    MOV EAX,dword ptr [EBP + 0x14]      ; 004593d5
        ;   Label: LAB_004593d5
    MOV dword ptr [EAX + 0x184],0x0     ; 004593d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004593e2
    MOV dword ptr [EAX + 0x1f0],0x0     ; 004593e5
    MOV ESP,EBP                         ; 004593ef
    POP EBP                             ; 004593f1
    POP EDI                             ; 004593f2
    POP ESI                             ; 004593f3
    POP EBX                             ; 004593f4
    RET                                 ; 004593f5

