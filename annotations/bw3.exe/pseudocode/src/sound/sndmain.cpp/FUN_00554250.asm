; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00554250(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430 at 005545ec
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d304e
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005d3063
;   undefined4 DAT_005d3086
;   undefined4 DAT_0060422c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf341c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554250
        ;   Label: sound_sndmain.cpp_FUN_00554250
    PUSH ESI                            ; 00554251
    PUSH EBP                            ; 00554252
    SUB ESP,0x1c                        ; 00554253
    MOV ESI,dword ptr [0x0060422c]      ; 00554256 | DAT_0060422c
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0055425c
    CMP dword ptr [0x02cf341c],0x0      ; 00554260 | DAT_02cf341c
    JLE 0x005542bd                      ; 00554267
        ;   XREF to: 005542bd (CONDITIONAL_JUMP)  ; LAB_005542bd
    MOV EBP,dword ptr [EBX]             ; 00554269
        ;   Label: LAB_00554269
    PUSH EBP                            ; 0055426b
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 0055426c
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00554271
    FLD float ptr [ESP + 0x1c]          ; 00554275
    FMUL float ptr [EBX + 0x38]         ; 00554279
    ADD ESP,0x4                         ; 0055427c
    MOV AH,byte ptr [EBX + 0x4c]        ; 0055427f
    FSTP float ptr [ESP]                ; 00554282
    TEST AH,0x1                         ; 00554285
    JZ 0x005542e4                       ; 00554288
        ;   XREF to: 005542e4 (CONDITIONAL_JUMP)  ; LAB_005542e4
    MOV ESI,dword ptr [0x0060422c]      ; 0055428a | DAT_0060422c
    XOR EDX,EDX                         ; 00554290
    TEST ESI,ESI                        ; 00554292
    JLE 0x005542b0                      ; 00554294
        ;   XREF to: 005542b0 (CONDITIONAL_JUMP)  ; LAB_005542b0
    MOV EAX,dword ptr [ESP]             ; 00554296
    ADD EBX,0x4                         ; 00554299
        ;   Label: LAB_00554299
    INC EDX                             ; 0055429c
    MOV dword ptr [EBX + 0x8c],EAX      ; 0055429d
    CMP EDX,ESI                         ; 005542a3
    JL 0x00554299                       ; 005542a5
        ;   XREF to: 00554299 (CONDITIONAL_JUMP)  ; LAB_00554299
    LEA EAX,[EAX]                       ; 005542a7
    LEA EDX,[EDX]                       ; 005542ad
    MOV dword ptr [0x0060422c],ESI      ; 005542b0 | DAT_0060422c
        ;   Label: LAB_005542b0
    ADD ESP,0x1c                        ; 005542b6
    POP EBP                             ; 005542b9
    POP ESI                             ; 005542ba
    POP EBX                             ; 005542bb
    RET                                 ; 005542bc
    PUSH EDI                            ; 005542bd
        ;   Label: LAB_005542bd
    MOV ECX,0x5d304e                    ; 005542be | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xa9a                       ; 005542c3
    PUSH 0x5d3063                       ; 005542c8 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d71de0],ECX      ; 005542cd | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 005542d3 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005542d9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005542de
    POP EDI                             ; 005542e1
    JMP 0x00554269                      ; 005542e2
        ;   XREF to: 00554269 (UNCONDITIONAL_JUMP)  ; LAB_00554269
    MOV ESI,dword ptr [0x0060422c]      ; 005542e4 | DAT_0060422c
        ;   Label: LAB_005542e4
    XOR ECX,ECX                         ; 005542ea
    TEST ESI,ESI                        ; 005542ec
    JLE 0x005542b0                      ; 005542ee
        ;   XREF to: 005542b0 (CONDITIONAL_JUMP)  ; LAB_005542b0
    MOV EDX,EBX                         ; 005542f0
    MOV EAX,dword ptr [EDX + 0x70]      ; 005542f2
        ;   Label: LAB_005542f2
    MOV dword ptr [ESP + 0x14],EAX      ; 005542f5
    MOV EAX,dword ptr [EBX + 0xf0]      ; 005542f9
    MOV dword ptr [ESP + 0xc],EAX       ; 005542ff
    MOV EAX,dword ptr [EBX + 0xf4]      ; 00554303
    MOV dword ptr [ESP + 0x4],EAX       ; 00554309
    MOV EAX,dword ptr [EBX + 0xf8]      ; 0055430d
    FLD float ptr [ESP + 0x14]          ; 00554313
    MOV dword ptr [ESP + 0x10],EAX      ; 00554317
    FCOMP float ptr [ESP + 0x4]         ; 0055431b
    FNSTSW AX                           ; 0055431f
    SAHF                                ; 00554321
    JC 0x0055436f                       ; 00554322
        ;   XREF to: 0055436f (CONDITIONAL_JUMP)  ; LAB_0055436f
    FLD float ptr [ESP + 0x14]          ; 00554324
        ;   Label: LAB_00554324
    FCOMP float ptr [ESP + 0x10]        ; 00554328
    FNSTSW AX                           ; 0055432c
    SAHF                                ; 0055432e
    JBE 0x00554339                      ; 0055432f
        ;   XREF to: 00554339 (CONDITIONAL_JUMP)  ; LAB_00554339
    MOV EAX,dword ptr [ESP + 0x10]      ; 00554331
    MOV dword ptr [ESP + 0x14],EAX      ; 00554335
    FLD float ptr [ESP + 0xc]           ; 00554339
        ;   Label: LAB_00554339
    FMUL float ptr [0x005d3086]         ; 0055433d | DAT_005d3086
    FCOMP float ptr [ESP + 0x14]        ; 00554343
    FNSTSW AX                           ; 00554347
    SAHF                                ; 00554349
    JC 0x00554379                       ; 0055434a
        ;   XREF to: 00554379 (CONDITIONAL_JUMP)  ; LAB_00554379
    MOV dword ptr [ESP + 0x8],0x41a00000 ; 0055434c
    FLD float ptr [ESP]                 ; 00554354
        ;   Label: LAB_00554354
    FMUL float ptr [ESP + 0x8]          ; 00554357
    ADD EDX,0x4                         ; 0055435b
    INC ECX                             ; 0055435e
    FSTP float ptr [EDX + 0x8c]         ; 0055435f
    CMP ECX,ESI                         ; 00554365
    JGE 0x005542b0                      ; 00554367
        ;   XREF to: 005542b0 (CONDITIONAL_JUMP)  ; LAB_005542b0
    JMP 0x005542f2                      ; 0055436d
        ;   XREF to: 005542f2 (UNCONDITIONAL_JUMP)  ; LAB_005542f2
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055436f
        ;   Label: LAB_0055436f
    MOV dword ptr [ESP + 0x14],EAX      ; 00554373
    JMP 0x00554324                      ; 00554377
        ;   XREF to: 00554324 (UNCONDITIONAL_JUMP)  ; LAB_00554324
    FLD float ptr [ESP + 0xc]           ; 00554379
        ;   Label: LAB_00554379
    FDIV float ptr [ESP + 0x14]         ; 0055437d
    FSTP float ptr [ESP + 0x8]          ; 00554381
    JMP 0x00554354                      ; 00554385
        ;   XREF to: 00554354 (UNCONDITIONAL_JUMP)  ; LAB_00554354

