; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_004343c0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_setup_FUN_0042c510 at 0042c6e6
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004343c0
        ;   Label: core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_004343c0
    PUSH ESI                            ; 004343c1
    PUSH EDI                            ; 004343c2
    PUSH EBP                            ; 004343c3
    SUB ESP,0x18                        ; 004343c4
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004343c7
    CMP byte ptr [EAX + 0x24a8],0x0     ; 004343cb
    JZ 0x00434553                       ; 004343d2
        ;   XREF to: 00434553 (CONDITIONAL_JUMP)  ; LAB_00434553
    ADD EAX,0x58                        ; 004343d8
    XOR EBX,EBX                         ; 004343db
    IMUL EDX,EBX,0x58                   ; 004343dd
        ;   Label: LAB_004343dd
    ADD EDX,dword ptr [ESP + 0x2c]      ; 004343e0
    MOV ECX,EAX                         ; 004343e4
    ADD EDX,0x4                         ; 004343e6
        ;   Label: LAB_004343e6
    MOV dword ptr [EDX + 0xb9f0],0x501502f9 ; 004343e9
    CMP EDX,ECX                         ; 004343f3
    JNZ 0x004343e6                      ; 004343f5
        ;   XREF to: 004343e6 (CONDITIONAL_JUMP)  ; LAB_004343e6
    INC EBX                             ; 004343f7
    ADD EAX,0x58                        ; 004343f8
    CMP EBX,0x16                        ; 004343fb
    JL 0x004343dd                       ; 004343fe
        ;   XREF to: 004343dd (CONDITIONAL_JUMP)  ; LAB_004343dd
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00434400
    ADD EAX,0x158                       ; 00434404
    PUSH EAX                            ; 00434409
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 0043440a
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0043440f
    MOV EDI,EAX                         ; 00434412
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00434414
    MOV EBX,dword ptr [EAX + 0x27c4]    ; 00434418
    XOR ESI,ESI                         ; 0043441e
    TEST EBX,EBX                        ; 00434420
    JLE 0x004344b2                      ; 00434422
        ;   XREF to: 004344b2 (CONDITIONAL_JUMP)  ; LAB_004344b2
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00434428
    ADD EAX,0x27c8                      ; 0043442c
    ADD EBP,0x27d0                      ; 00434431
    MOV dword ptr [ESP + 0x4],EAX       ; 00434437
    IMUL EBX,ESI,0x38                   ; 0043443b
        ;   Label: LAB_0043443b
    PUSH 0x1                            ; 0043443e
    PUSH EBP                            ; 00434440
    MOV ECX,dword ptr [ESP + 0xc]       ; 00434441
    PUSH EDI                            ; 00434445
    ADD EBX,ECX                         ; 00434446
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 00434448
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    MOV dword ptr [EBX + 0x2c],EAX      ; 0043444d
    IMUL EAX,EAX,0x120                  ; 00434450
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x1c8c] ; 00434456
    MOV ECX,dword ptr [EBX + 0x2c]      ; 0043445d
    MOV dword ptr [EBX + 0x30],EAX      ; 00434460
    IMUL EAX,ECX,0x120                  ; 00434463
    FILD dword ptr [EBX + 0x30]         ; 00434469
    FDIV float ptr [EDI + EAX*0x1 + 0x1c48] ; 0043446c
    ADD ESP,0xc                         ; 00434473
    MOV EAX,dword ptr [EBX + 0x28]      ; 00434476
    FSTP float ptr [EBX + 0x34]         ; 00434479
    TEST EAX,EAX                        ; 0043447c
    JL 0x00434496                       ; 0043447e
        ;   XREF to: 00434496 (CONDITIONAL_JUMP)  ; LAB_00434496
    IMUL EAX,dword ptr [EBX],0x58       ; 00434480
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00434483
    ADD EDX,EAX                         ; 00434487
    MOV EAX,dword ptr [EBX + 0x4]       ; 00434489
    MOV ECX,dword ptr [EBX + 0x34]      ; 0043448c
    MOV dword ptr [EDX + EAX*0x4 + 0xb9f4],ECX ; 0043448f
    CMP dword ptr [EBX + 0x28],0x0      ; 00434496
        ;   Label: LAB_00434496
    JLE 0x0043455b                      ; 0043449a
        ;   XREF to: 0043455b (CONDITIONAL_JUMP)  ; LAB_0043455b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004344a0
        ;   Label: LAB_004344a0
    INC ESI                             ; 004344a4
    MOV EDX,dword ptr [EAX + 0x27c4]    ; 004344a5
    ADD EBP,0x38                        ; 004344ab
    CMP ESI,EDX                         ; 004344ae
    JL 0x0043443b                       ; 004344b0
        ;   XREF to: 0043443b (CONDITIONAL_JUMP)  ; LAB_0043443b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004344b2
        ;   Label: LAB_004344b2
    XOR EAX,EAX                         ; 004344b6
    LEA ECX,[EDX + EAX*0x1]             ; 004344b8
        ;   Label: LAB_004344b8
    ADD EAX,0x4                         ; 004344bb
    ADD EDX,0x58                        ; 004344be
    MOV dword ptr [ECX + 0xb9f4],0x0    ; 004344c1
    CMP EAX,0x58                        ; 004344cb
    JNZ 0x004344b8                      ; 004344ce
        ;   XREF to: 004344b8 (CONDITIONAL_JUMP)  ; LAB_004344b8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004344d0
    MOV dword ptr [ESP + 0x8],EAX       ; 004344d4
    ADD EAX,0x790                       ; 004344d8
    MOV dword ptr [ESP],EAX             ; 004344dd
    MOV EAX,dword ptr [ESP + 0x8]       ; 004344e0
        ;   Label: LAB_004344e0
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004344e4
    XOR EDI,EDI                         ; 004344e8
    MOV dword ptr [ESP + 0xc],EAX       ; 004344ea
    ADD EBP,0x58                        ; 004344ee
    MOV dword ptr [ESP + 0x10],EAX      ; 004344f1
    IMUL ECX,EDI,0x58                   ; 004344f5
        ;   Label: LAB_004344f5
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004344f8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004344fc
    MOV ESI,dword ptr [ESP + 0x10]      ; 00434500
    ADD ECX,EBX                         ; 00434504
    MOV EBX,EBP                         ; 00434506
    FLD float ptr [ESI + 0xb9f4]        ; 00434508
        ;   Label: LAB_00434508
    FADD float ptr [ECX + 0xb9f4]       ; 0043450e
    FST float ptr [ESP + 0x14]          ; 00434514
    FCOMP float ptr [EDX + 0xb9f4]      ; 00434518
    FNSTSW AX                           ; 0043451e
    SAHF                                ; 00434520
    JC 0x00434576                       ; 00434521
        ;   XREF to: 00434576 (CONDITIONAL_JUMP)  ; LAB_00434576
    ADD ECX,0x4                         ; 00434523
        ;   Label: LAB_00434523
    ADD EDX,0x4                         ; 00434526
    CMP ECX,EBX                         ; 00434529
    JNZ 0x00434508                      ; 0043452b
        ;   XREF to: 00434508 (CONDITIONAL_JUMP)  ; LAB_00434508
    MOV ESI,dword ptr [ESP + 0x10]      ; 0043452d
    INC EDI                             ; 00434531
    ADD ESI,0x4                         ; 00434532
    ADD EBP,0x58                        ; 00434535
    MOV dword ptr [ESP + 0x10],ESI      ; 00434538
    CMP EDI,0x16                        ; 0043453c
    JL 0x004344f5                       ; 0043453f
        ;   XREF to: 004344f5 (CONDITIONAL_JUMP)  ; LAB_004344f5
    MOV EDI,dword ptr [ESP + 0x8]       ; 00434541
    ADD EDI,0x58                        ; 00434545
    MOV EBP,dword ptr [ESP]             ; 00434548
    MOV dword ptr [ESP + 0x8],EDI       ; 0043454b
    CMP EDI,EBP                         ; 0043454f
    JNZ 0x004344e0                      ; 00434551
        ;   XREF to: 004344e0 (CONDITIONAL_JUMP)  ; LAB_004344e0
    ADD ESP,0x18                        ; 00434553
        ;   Label: LAB_00434553
    POP EBP                             ; 00434556
    POP EDI                             ; 00434557
    POP ESI                             ; 00434558
    POP EBX                             ; 00434559
    RET                                 ; 0043455a
    IMUL EAX,dword ptr [EBX + 0x4],0x58 ; 0043455b
        ;   Label: LAB_0043455b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0043455f
    ADD EDX,EAX                         ; 00434563
    MOV EAX,dword ptr [EBX]             ; 00434565
    MOV ECX,dword ptr [EBX + 0x34]      ; 00434567
    MOV dword ptr [EDX + EAX*0x4 + 0xb9f4],ECX ; 0043456a
    JMP 0x004344a0                      ; 00434571
        ;   XREF to: 004344a0 (UNCONDITIONAL_JUMP)  ; LAB_004344a0
    MOV EAX,dword ptr [ESP + 0x14]      ; 00434576
        ;   Label: LAB_00434576
    MOV dword ptr [EDX + 0xb9f4],EAX    ; 0043457a
    JMP 0x00434523                      ; 00434580
        ;   XREF to: 00434523 (UNCONDITIONAL_JUMP)  ; LAB_00434523

