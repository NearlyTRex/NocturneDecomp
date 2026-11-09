; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00511340(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x88]:1  local_88
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
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[2]:
;   core_platfrm.cpp_CPlatform_setup_FUN_005112b0 at 005112cb
;   core_platfrm.cpp_FUN_005114f0 at 0051170d
;
; Called Functions:
;   core_course.cpp_FUN_00444ac0
;   core_xform.cpp_FUN_00585b20
;   core_xform.cpp_FUN_00585de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511340
        ;   Label: core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00511340
    PUSH ESI                            ; 00511341
    PUSH EDI                            ; 00511342
    PUSH EBP                            ; 00511343
    MOV EBP,ESP                         ; 00511344
    SUB ESP,0x88                        ; 00511346
    SUB EBP,0x7e                        ; 0051134c
    MOV EDX,dword ptr [EBP + 0x92]      ; 0051134f
    FLD float ptr [EDX + 0x2dc]         ; 00511355
    FLDZ                                ; 0051135b
    FCOMPP                              ; 0051135d
    FNSTSW AX                           ; 0051135f
    SAHF                                ; 00511361
    JA 0x0051148c                       ; 00511362
        ;   XREF to: 0051148c (CONDITIONAL_JUMP)  ; LAB_0051148c
    FLD float ptr [EDX + 0x2dc]         ; 00511368
        ;   Label: LAB_00511368
    FLD1                                ; 0051136e
    FCOMPP                              ; 00511370
    FNSTSW AX                           ; 00511372
    SAHF                                ; 00511374
    JNC 0x00511381                      ; 00511375
        ;   XREF to: 00511381 (CONDITIONAL_JUMP)  ; LAB_00511381
    MOV dword ptr [EDX + 0x2dc],0x3f800000 ; 00511377
    LEA ECX,[EDX + 0x20]                ; 00511381
        ;   Label: LAB_00511381
    MOV AH,byte ptr [EDX + 0x2f0]       ; 00511384
    LEA EBX,[EDX + 0x30]                ; 0051138a
    TEST AH,AH                          ; 0051138d
    JNZ 0x0051149b                      ; 0051138f
        ;   XREF to: 0051149b (CONDITIONAL_JUMP)  ; LAB_0051149b
    LEA EAX,[EDX + 0x328]               ; 00511395
    LEA ESI,[EDX + 0x2dc]               ; 0051139b
    FLD float ptr [EAX]                 ; 005113a1
    FMUL float ptr [ESI]                ; 005113a3
    FLD float ptr [EAX + 0x4]           ; 005113a5
    FMUL float ptr [ESI]                ; 005113a8
    FLD float ptr [EAX + 0x8]           ; 005113aa
    FMUL float ptr [ESI]                ; 005113ad
    LEA EDI,[EBP + 0x5e]                ; 005113af
    FXCH ST2                            ; 005113b2
    FSTP float ptr [EBP + 0x22]         ; 005113b4
    FSTP float ptr [EBP + 0x26]         ; 005113b7
    LEA ESI,[EBP + 0x22]                ; 005113ba
    FSTP float ptr [EBP + 0x2a]         ; 005113bd
    MOVSD ES:EDI,ESI                    ; 005113c0
    MOVSD ES:EDI,ESI                    ; 005113c1
    MOVSD ES:EDI,ESI                    ; 005113c2
    LEA EAX,[EDX + 0x31c]               ; 005113c3
    FLD float ptr [EDX + 0x2dc]         ; 005113c9
    FLD1                                ; 005113cf
    FSUBRP                              ; 005113d1
    FLD float ptr [EAX]                 ; 005113d3
    FXCH                                ; 005113d5
    FSTP float ptr [EBP + 0x76]         ; 005113d7
    FMUL float ptr [EBP + 0x76]         ; 005113da
    FLD float ptr [EAX + 0x4]           ; 005113dd
    FMUL float ptr [EBP + 0x76]         ; 005113e0
    FLD float ptr [EAX + 0x8]           ; 005113e3
    FMUL float ptr [EBP + 0x76]         ; 005113e6
    LEA EDI,[EBP + 0x6a]                ; 005113e9
    LEA ESI,[EBP + 0x46]                ; 005113ec
    FXCH ST2                            ; 005113ef
    FSTP float ptr [EBP + 0x46]         ; 005113f1
    FSTP float ptr [EBP + 0x4a]         ; 005113f4
    FSTP float ptr [EBP + 0x4e]         ; 005113f7
    MOVSD ES:EDI,ESI                    ; 005113fa
    MOVSD ES:EDI,ESI                    ; 005113fb
    MOVSD ES:EDI,ESI                    ; 005113fc
    FLD float ptr [EBP + 0x6a]          ; 005113fd
    FLD float ptr [EBP + 0x6e]          ; 00511400
    FLD float ptr [EBP + 0x72]          ; 00511403
    LEA EDI,[EBP + 0x3a]                ; 00511406
    LEA ESI,[EBP + 0x2e]                ; 00511409
    FXCH ST2                            ; 0051140c
    FADD float ptr [EBP + 0x5e]         ; 0051140e
    FXCH                                ; 00511411
    FADD float ptr [EBP + 0x62]         ; 00511413
    FXCH ST2                            ; 00511416
    FADD float ptr [EBP + 0x66]         ; 00511418
    FXCH                                ; 0051141b
    FSTP float ptr [EBP + 0x2e]         ; 0051141d
    FXCH                                ; 00511420
    FSTP float ptr [EBP + 0x32]         ; 00511422
    FSTP float ptr [EBP + 0x36]         ; 00511425
    MOVSD ES:EDI,ESI                    ; 00511428
    MOVSD ES:EDI,ESI                    ; 00511429
    MOVSD ES:EDI,ESI                    ; 0051142a
    MOV EAX,dword ptr [EBP + 0x3a]      ; 0051142b
    MOV dword ptr [ECX],EAX             ; 0051142e
    MOV EAX,dword ptr [EBP + 0x3e]      ; 00511430
    MOV dword ptr [ECX + 0x4],EAX       ; 00511433
    MOV EAX,dword ptr [EBP + 0x42]      ; 00511436
    MOV dword ptr [ECX + 0x8],EAX       ; 00511439
    LEA EAX,[EDX + 0x344]               ; 0051143c
    PUSH dword ptr [EDX + 0x2dc]        ; 00511442
    PUSH EAX                            ; 00511448
    ADD EDX,0x334                       ; 00511449
    PUSH EDX                            ; 0051144f
    LEA ESI,[EBP + 0x6]                 ; 00511450
    LEA EDI,[EBP + -0xa]                ; 00511453
    CALL core_xform.cpp_FUN_00585b20    ; 00511456
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00585b20()
    LEA ESI,[EBP + 0x6]                 ; 0051145b
    LEA EAX,[EBP + -0xa]                ; 0051145e
    ADD ESP,0xc                         ; 00511461
    MOVSD ES:EDI,ESI                    ; 00511464
    MOVSD ES:EDI,ESI                    ; 00511465
    MOVSD ES:EDI,ESI                    ; 00511466
    MOVSD ES:EDI,ESI                    ; 00511467
    PUSH EAX                            ; 00511468
    LEA ESI,[EBP + 0x52]                ; 00511469
    LEA EDI,[EBP + 0x16]                ; 0051146c
    CALL core_xform.cpp_FUN_00585de0    ; 0051146f
        ;   XREF to: 00585de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00585de0()
    LEA ESI,[EBP + 0x52]                ; 00511474
    LEA EAX,[EBP + 0x16]                ; 00511477
    ADD ESP,0x4                         ; 0051147a
    MOVSD ES:EDI,ESI                    ; 0051147d
    MOVSD ES:EDI,ESI                    ; 0051147e
    MOVSD ES:EDI,ESI                    ; 0051147f
    CMP EBX,EAX                         ; 00511480
    JNZ 0x005114c2                      ; 00511482
        ;   XREF to: 005114c2 (CONDITIONAL_JUMP)  ; LAB_005114c2
    LEA ESP,[EBP + 0x7e]                ; 00511484
        ;   Label: LAB_00511484
    POP EBP                             ; 00511487
    POP EDI                             ; 00511488
    POP ESI                             ; 00511489
    POP EBX                             ; 0051148a
    RET                                 ; 0051148b
    MOV dword ptr [EDX + 0x2dc],0x0     ; 0051148c
        ;   Label: LAB_0051148c
    JMP 0x00511368                      ; 00511496
        ;   XREF to: 00511368 (UNCONDITIONAL_JUMP)  ; LAB_00511368
    PUSH EBX                            ; 0051149b
        ;   Label: LAB_0051149b
    LEA EAX,[EDX + 0x310]               ; 0051149c
    PUSH ECX                            ; 005114a2
    MOV ECX,dword ptr [EAX]             ; 005114a3
    MOV dword ptr [EBP + 0x7a],ECX      ; 005114a5
    FILD dword ptr [EBP + 0x7a]         ; 005114a8
    FMUL float ptr [EDX + 0x2dc]        ; 005114ab
    SUB ESP,0x4                         ; 005114b1
    FSTP float ptr [ESP]                ; 005114b4
    PUSH EAX                            ; 005114b7
    CALL core_course.cpp_FUN_00444ac0   ; 005114b8
        ;   XREF to: 00444ac0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00444ac0(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 005114bd
    JMP 0x00511484                      ; 005114c0
        ;   XREF to: 00511484 (UNCONDITIONAL_JUMP)  ; LAB_00511484
    MOV EAX,dword ptr [EBP + 0x16]      ; 005114c2
        ;   Label: LAB_005114c2
    MOV dword ptr [EBX],EAX             ; 005114c5
    MOV EAX,dword ptr [EBP + 0x1a]      ; 005114c7
    MOV dword ptr [EBX + 0x4],EAX       ; 005114ca
    MOV EAX,dword ptr [EBP + 0x1e]      ; 005114cd
    MOV dword ptr [EBX + 0x8],EAX       ; 005114d0
    LEA ESP,[EBP + 0x7e]                ; 005114d3
    POP EBP                             ; 005114d6
    POP EDI                             ; 005114d7
    POP ESI                             ; 005114d8
    POP EBX                             ; 005114d9
    RET                                 ; 005114da

