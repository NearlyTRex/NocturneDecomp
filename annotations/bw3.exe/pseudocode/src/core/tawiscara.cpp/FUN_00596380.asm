; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tawiscara_cpp_FUN_00596380(CCharacter *param_1)
;
; Local Variables:
; undefined8       Stack[-0xa4]:8  local_a4
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_tawiscara.cpp_FUN_00594000 at 00594484
;
; Referenced Globals:
;   TerminatedCString s_Chain_stretched_to_f_005d9469
;   undefined4 DAT_005d9481
;   CConsole* g_CConsolePtr = 007f7ea4
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408bf0
;   core_charactr.cpp_FUN_0042c230
;   core_xform.cpp_FUN_00583260
;   engine_console.cpp_CConsole_printf_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00596380
        ;   Label: core_tawiscara.cpp_FUN_00596380
    PUSH ESI                            ; 00596381
    PUSH EDI                            ; 00596382
    PUSH EBP                            ; 00596383
    MOV EBP,ESP                         ; 00596384
    SUB ESP,0x8c                        ; 00596386
    SUB EBP,0x7e                        ; 0059638c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0059638f
    CMP dword ptr [EBX + 0xd080],0x0    ; 00596395
    JZ 0x005963a7                       ; 0059639c
        ;   XREF to: 005963a7 (CONDITIONAL_JUMP)  ; LAB_005963a7
    CMP dword ptr [EBX + 0xcde4],0x0    ; 0059639e
    JNZ 0x005963af                      ; 005963a5
        ;   XREF to: 005963af (CONDITIONAL_JUMP)  ; LAB_005963af
    LEA ESP,[EBP + 0x7e]                ; 005963a7
        ;   Label: LAB_005963a7
    POP EBP                             ; 005963aa
    POP EDI                             ; 005963ab
    POP ESI                             ; 005963ac
    POP EBX                             ; 005963ad
    RET                                 ; 005963ae
    MOV EDX,dword ptr [EBX + 0xd068]    ; 005963af
        ;   Label: LAB_005963af
    LEA EAX,[EDX*0x4 + 0x0]             ; 005963b5
    MOV EDI,0xbe99999a                  ; 005963bc
    SUB EAX,EDX                         ; 005963c1
    XOR ESI,ESI                         ; 005963c3
    SHL EAX,0x4                         ; 005963c5
    LEA EDX,[EBX + 0xfd8]               ; 005963c8
    MOV dword ptr [EBP + 0x16],ESI      ; 005963ce
    ADD EAX,EDX                         ; 005963d1
    MOV dword ptr [EBP + 0x1a],EDI      ; 005963d3
    PUSH EAX                            ; 005963d6
    LEA EAX,[EBP + 0x16]                ; 005963d7
    MOV dword ptr [EBP + 0x1e],ESI      ; 005963da
    PUSH EAX                            ; 005963dd
    LEA ESI,[EBP + 0xa]                 ; 005963de
    LEA EDI,[EBP + 0x2e]                ; 005963e1
    CALL core_xform.cpp_FUN_00583260    ; 005963e4
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[EBP + 0xa]                 ; 005963e9
    MOVSD ES:EDI,ESI                    ; 005963ec
    MOVSD ES:EDI,ESI                    ; 005963ed
    MOVSD ES:EDI,ESI                    ; 005963ee
    MOV EAX,dword ptr [EBX + 0xd080]    ; 005963ef
    ADD ESP,0x8                         ; 005963f5
    ADD EAX,0x20                        ; 005963f8
    PUSH EAX                            ; 005963fb
    PUSH EBX                            ; 005963fc
    LEA ESI,[EBP + -0x2]                ; 005963fd
    LEA EDI,[EBP + -0xe]                ; 00596400
    CALL core_actor.cpp_FUN_00408bf0    ; 00596403
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[EBP + -0x2]                ; 00596408
    MOVSD ES:EDI,ESI                    ; 0059640b
    MOVSD ES:EDI,ESI                    ; 0059640c
    MOVSD ES:EDI,ESI                    ; 0059640d
    ADD ESP,0x8                         ; 0059640e
    FLD float ptr [EBP + -0xa]          ; 00596411
    FCOMP double ptr [0x005d9481]       ; 00596414 | DAT_005d9481
    FNSTSW AX                           ; 0059641a
    SAHF                                ; 0059641c
    JC 0x00596541                       ; 0059641d
        ;   XREF to: 00596541 (CONDITIONAL_JUMP)  ; LAB_00596541
    FLD float ptr [EBP + -0xe]          ; 00596423
    FLD float ptr [EBP + -0xa]          ; 00596426
    FLD float ptr [EBP + -0x6]          ; 00596429
    LEA EDI,[EBP + 0x46]                ; 0059642c
    LEA ESI,[EBP + 0x22]                ; 0059642f
    FXCH ST2                            ; 00596432
    FSUB float ptr [EBP + 0x2e]         ; 00596434
    FXCH                                ; 00596437
    FSUB float ptr [EBP + 0x32]         ; 00596439
    FXCH ST2                            ; 0059643c
    FSUB float ptr [EBP + 0x36]         ; 0059643e
    FXCH                                ; 00596441
    FSTP float ptr [EBP + 0x22]         ; 00596443
    FXCH                                ; 00596446
    FSTP float ptr [EBP + 0x26]         ; 00596448
    FSTP float ptr [EBP + 0x2a]         ; 0059644b
    MOVSD ES:EDI,ESI                    ; 0059644e
    MOVSD ES:EDI,ESI                    ; 0059644f
    MOVSD ES:EDI,ESI                    ; 00596450
    FLD float ptr [EBP + 0x4a]          ; 00596451
    FMUL ST0                            ; 00596454
    FLD float ptr [EBP + 0x46]          ; 00596456
    FMUL ST0                            ; 00596459
    FXCH                                ; 0059645b
    FSTP float ptr [EBP + 0x6e]         ; 0059645d
    FADD float ptr [EBP + 0x6e]         ; 00596460
    FLD float ptr [EBP + 0x4e]          ; 00596463
    FMUL ST0                            ; 00596466
    FADDP                               ; 00596468
    FSQRT                               ; 0059646a
    SUB ESP,0x8                         ; 0059646c
    FST float ptr [EBP + 0x66]          ; 0059646f
    FSTP double ptr [ESP]               ; 00596472
    PUSH 0x5d9469                       ; 00596475 | = "Chain stretched to %f\n"
    MOV EDX,dword ptr [0x005f1690]      ; 0059647a | g_CConsolePtr
    PUSH EDX                            ; 00596480 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00596481
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    FLD float ptr [EBP + 0x66]          ; 00596486
    ADD ESP,0x10                        ; 00596489
    FCOMP float ptr [EBX + 0xd084]      ; 0059648c
    FNSTSW AX                           ; 00596492
    SAHF                                ; 00596494
    JBE 0x005963a7                      ; 00596495
        ;   XREF to: 005963a7 (CONDITIONAL_JUMP)  ; LAB_005963a7
    FLD float ptr [EBX + 0xd084]        ; 0059649b
    FMUL ST0                            ; 005964a1
    FSUB float ptr [EBP + 0x6e]         ; 005964a3
    FLDZ                                ; 005964a6
    FXCH                                ; 005964a8
    FSTP double ptr [EBP + 0x5e]        ; 005964aa
    FCOMP double ptr [EBP + 0x5e]       ; 005964ad
    FNSTSW AX                           ; 005964b0
    SAHF                                ; 005964b2
    JA 0x005963a7                       ; 005964b3
        ;   XREF to: 005963a7 (CONDITIONAL_JUMP)  ; LAB_005963a7
    FLD double ptr [EBP + 0x5e]         ; 005964b9
    FSQRT                               ; 005964bc
    LEA EDI,[EBP + 0x3a]                ; 005964be
    LEA ESI,[EBP + 0x22]                ; 005964c1
    MOVSD ES:EDI,ESI                    ; 005964c4
    MOVSD ES:EDI,ESI                    ; 005964c5
    MOVSD ES:EDI,ESI                    ; 005964c6
    FLD float ptr [EBP + 0x3a]          ; 005964c7
    FMUL ST0                            ; 005964ca
    FLD float ptr [EBP + 0x42]          ; 005964cc
    FMUL ST0                            ; 005964cf
    FADDP                               ; 005964d1
    FSQRT                               ; 005964d3
    XOR ECX,ECX                         ; 005964d5
    MOV dword ptr [EBP + 0x3e],ECX      ; 005964d7
    FXCH                                ; 005964da
    FSTP float ptr [EBP + 0x7a]         ; 005964dc
    FST float ptr [EBP + 0x72]          ; 005964df
    FLDZ                                ; 005964e2
    FCOMPP                              ; 005964e4
    FNSTSW AX                           ; 005964e6
    SAHF                                ; 005964e8
    JNC 0x005963a7                      ; 005964e9
        ;   XREF to: 005963a7 (CONDITIONAL_JUMP)  ; LAB_005963a7
    FLD float ptr [EBP + 0x72]          ; 005964ef
    FSUB float ptr [EBP + 0x7a]         ; 005964f2
    FST float ptr [EBP + 0x6a]          ; 005964f5
    FLDZ                                ; 005964f8
    FCOMPP                              ; 005964fa
    FNSTSW AX                           ; 005964fc
    SAHF                                ; 005964fe
    JNC 0x005963a7                      ; 005964ff
        ;   XREF to: 005963a7 (CONDITIONAL_JUMP)  ; LAB_005963a7
    FLD float ptr [EBP + 0x6a]          ; 00596505
    FDIV float ptr [EBP + 0x72]         ; 00596508
    FLD float ptr [EBP + 0x3a]          ; 0059650b
    FXCH                                ; 0059650e
    FSTP float ptr [EBP + 0x76]         ; 00596510
    FMUL float ptr [EBP + 0x76]         ; 00596513
    FLDZ                                ; 00596516
    FMUL float ptr [EBP + 0x76]         ; 00596518
    LEA EAX,[EBP + 0x3a]                ; 0059651b
    FLD float ptr [EBP + 0x42]          ; 0059651e
    PUSH EAX                            ; 00596521
    FMUL float ptr [EBP + 0x76]         ; 00596522
    PUSH EBX                            ; 00596525
    FXCH ST2                            ; 00596526
    FSTP float ptr [EBP + 0x3a]         ; 00596528
    FSTP float ptr [EBP + 0x3e]         ; 0059652b
    FSTP float ptr [EBP + 0x42]         ; 0059652e
    CALL core_charactr.cpp_FUN_0042c230 ; 00596531
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00596536
    LEA ESP,[EBP + 0x7e]                ; 00596539
    POP EBP                             ; 0059653c
    POP EDI                             ; 0059653d
    POP ESI                             ; 0059653e
    POP EBX                             ; 0059653f
    RET                                 ; 00596540
    LEA EDI,[EBP + 0x52]                ; 00596541
        ;   Label: LAB_00596541
    LEA ESI,[EBP + -0x2]                ; 00596544
    LEA EAX,[EBP + 0x52]                ; 00596547
    MOVSD ES:EDI,ESI                    ; 0059654a
    MOVSD ES:EDI,ESI                    ; 0059654b
    MOVSD ES:EDI,ESI                    ; 0059654c
    PUSH EAX                            ; 0059654d
    XOR ESI,ESI                         ; 0059654e
    PUSH EBX                            ; 00596550
    MOV dword ptr [EBP + 0x56],ESI      ; 00596551
    CALL core_charactr.cpp_FUN_0042c230 ; 00596554
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00596559
    LEA ESP,[EBP + 0x7e]                ; 0059655c
    POP EBP                             ; 0059655f
    POP EDI                             ; 00596560
    POP ESI                             ; 00596561
    POP EBX                             ; 00596562
    RET                                 ; 00596563

