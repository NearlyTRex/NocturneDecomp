; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_FUN_00544310(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_mission.cpp_FUN_0051bdc0 at 0051bea7
;
; Referenced Globals:
;   TerminatedCString s_initSection_005ee2c5
;   TerminatedCString s_initSectionEnd_005ee2d1
;   TerminatedCString s_core_script_cpp_005ee2e0
;   TerminatedCString s_Script_has_initSection_l_005ee2f3
;   TerminatedCString s_core_script_cpp_005ee332
;   TerminatedCString s_Error_processing_script_005ee345
;   TerminatedCString s_core_script_cpp_005ee382
;   TerminatedCString s_Infinite_loop_detected_i_005ee395
;   CGame* g_CGamePtr = 01ccf390
;   CGame g_CGameInstance
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01e810a8
;   undefined4 DAT_01e818b4
;
; Called Functions:
;   core_game.cpp_FUN_004d19d0
;   core_main.c_FUN_005030e0
;   core_script.cpp_CScript_step_FUN_00544460
;   core_script.cpp_FUN_0054acc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544310
        ;   Label: core_script.cpp_FUN_00544310
    PUSH ESI                            ; 00544311
    PUSH EBP                            ; 00544312
    SUB ESP,0x8                         ; 00544313
    MOV EBX,dword ptr [ESP + 0x18]      ; 00544316
    XOR EDX,EDX                         ; 0054431a
    MOV ECX,dword ptr [EBX + 0x2c]      ; 0054431c
    MOV dword ptr [0x01e810a8],EDX      ; 0054431f | DAT_01e810a8
    CMP ECX,0x1                         ; 00544325
    JL 0x00544330                       ; 00544328
        ;   XREF to: 00544330 (CONDITIONAL_JUMP)  ; LAB_00544330
    CMP dword ptr [EBX + 0x30],0x0      ; 0054432a
    JNZ 0x00544337                      ; 0054432e
        ;   XREF to: 00544337 (CONDITIONAL_JUMP)  ; LAB_00544337
    ADD ESP,0x8                         ; 00544330
        ;   Label: LAB_00544330
    POP EBP                             ; 00544333
    POP ESI                             ; 00544334
    POP EBX                             ; 00544335
    RET                                 ; 00544336
    PUSH 0x5ee2c5                       ; 00544337 | = "initSection"
        ;   Label: LAB_00544337
    PUSH EBX                            ; 0054433c
    CALL core_script.cpp_FUN_0054acc0   ; 0054433d
        ;   XREF to: 0054acc0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_0054acc0(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 00544342
    MOV ESI,EAX                         ; 00544345
    TEST EAX,EAX                        ; 00544347
    JL 0x00544330                       ; 00544349
        ;   XREF to: 00544330 (CONDITIONAL_JUMP)  ; LAB_00544330
    PUSH EDI                            ; 0054434b
    PUSH 0x5ee2d1                       ; 0054434c | = "initSectionEnd"
    PUSH EBX                            ; 00544351
    CALL core_script.cpp_FUN_0054acc0   ; 00544352
        ;   XREF to: 0054acc0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_0054acc0(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 00544357
    MOV EBP,EAX                         ; 0054435a
    TEST EAX,EAX                        ; 0054435c
    JL 0x005443ca                       ; 0054435e
        ;   XREF to: 005443ca (CONDITIONAL_JUMP)  ; LAB_005443ca
    MOV EAX,dword ptr [EBX + 0x44]      ; 00544360
        ;   Label: LAB_00544360
    XOR EDX,EDX                         ; 00544363
    MOV dword ptr [ESP + 0x8],EAX       ; 00544365
    MOV dword ptr [0x01e818b4],EDX      ; 00544369 | DAT_01e818b4
    MOV dword ptr [EBX + 0x44],ESI      ; 0054436f
    XOR ESI,ESI                         ; 00544372
    LEA EAX,[ESP + 0x4]                 ; 00544374
        ;   Label: LAB_00544374
    PUSH EAX                            ; 00544378
    MOV ECX,0x3e800000                  ; 00544379
    PUSH EBX                            ; 0054437e
    MOV EDI,dword ptr [EBX + 0x44]      ; 0054437f
    MOV dword ptr [ESP + 0xc],ECX       ; 00544382
    CALL core_script.cpp_CScript_step_FUN_00544460 ; 00544386
        ;   XREF to: 00544460 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_step_FUN_00544460(CScript * this_ptr, float * time_remaining)
    ADD ESP,0x8                         ; 0054438b
    TEST EAX,EAX                        ; 0054438e
    JL 0x005443f1                       ; 00544390
        ;   XREF to: 005443f1 (CONDITIONAL_JUMP)  ; LAB_005443f1
    CMP EBP,dword ptr [EBX + 0x44]      ; 00544392
        ;   Label: LAB_00544392
    JNZ 0x00544429                      ; 00544395
        ;   XREF to: 00544429 (CONDITIONAL_JUMP)  ; LAB_00544429
    CMP dword ptr [0x01e818b4],0x0      ; 0054439b | DAT_01e818b4
    JZ 0x005443bb                       ; 005443a2
        ;   XREF to: 005443bb (CONDITIONAL_JUMP)  ; LAB_005443bb
    MOV ECX,dword ptr [0x0061d95c]      ; 005443a4 | g_CGamePtr
    PUSH ECX                            ; 005443aa | g_CGameInstance
    XOR ESI,ESI                         ; 005443ab
    CALL core_game.cpp_FUN_004d19d0     ; 005443ad
        ;   XREF to: 004d19d0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d19d0()
    ADD ESP,0x4                         ; 005443b2
    MOV dword ptr [0x01e818b4],ESI      ; 005443b5 | DAT_01e818b4
    MOV EAX,dword ptr [ESP + 0x8]       ; 005443bb
        ;   Label: LAB_005443bb
    MOV dword ptr [EBX + 0x44],EAX      ; 005443bf
    POP EDI                             ; 005443c2
    ADD ESP,0x8                         ; 005443c3
    POP EBP                             ; 005443c6
    POP ESI                             ; 005443c7
    POP EBX                             ; 005443c8
    RET                                 ; 005443c9
    MOV EDI,0x5ee2e0                    ; 005443ca | = "..\\core\\script.cpp"
        ;   Label: LAB_005443ca
    MOV EAX,0x42a                       ; 005443cf
    PUSH 0x5ee2f3                       ; 005443d4 | = "Script has \"initSection\" label, but..."
    MOV dword ptr [0x01d1d400],EDI      ; 005443d9 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005443df | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005443e4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005443e9
    JMP 0x00544360                      ; 005443ec
        ;   XREF to: 00544360 (UNCONDITIONAL_JUMP)  ; LAB_00544360
    MOV EAX,0x5ee332                    ; 005443f1 | = "..\\core\\script.cpp"
        ;   Label: LAB_005443f1
    MOV EDX,0x446                       ; 005443f6
    MOV [0x01d1d400],EAX                ; 005443fb | DAT_01d1d400
    MOV EAX,dword ptr [EBX + 0x30]      ; 00544400
    MOV dword ptr [0x01d1d404],EDX      ; 00544403 | DAT_01d1d404
    PUSH 0x1e810b0                      ; 00544409
    MOV ECX,dword ptr [EAX + EDI*0x8 + 0x4] ; 0054440e
    PUSH ECX                            ; 00544412
    MOV EDX,dword ptr [EAX + EDI*0x8]   ; 00544413
    PUSH EDX                            ; 00544416
    PUSH 0x5ee345                       ; 00544417 | = "Error processing script.\nLine: %d\nT..."
    CALL core_main.c_FUN_005030e0       ; 0054441c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x10                        ; 00544421
    JMP 0x00544392                      ; 00544424
        ;   XREF to: 00544392 (UNCONDITIONAL_JUMP)  ; LAB_00544392
    INC ESI                             ; 00544429
        ;   Label: LAB_00544429
    CMP ESI,0x2710                      ; 0054442a
    JLE 0x00544374                      ; 00544430
        ;   XREF to: 00544374 (CONDITIONAL_JUMP)  ; LAB_00544374
    MOV EDI,0x5ee382                    ; 00544436 | = "..\\core\\script.cpp"
    MOV EAX,0x458                       ; 0054443b
    PUSH 0x5ee395                       ; 00544440 | = "Infinite loop detected in initSection.\n"
    MOV dword ptr [0x01d1d400],EDI      ; 00544445 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0054444b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00544450
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00544455
    JMP 0x00544374                      ; 00544458
        ;   XREF to: 00544374 (UNCONDITIONAL_JUMP)  ; LAB_00544374

