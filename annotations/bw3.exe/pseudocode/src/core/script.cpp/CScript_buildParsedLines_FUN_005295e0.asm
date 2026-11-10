; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_buildParsedLines_FUN_005295e0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_FUN_00529410 at 0052953d
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_005cde8c
;   TerminatedCString s_Out_of_memory_loading_sc_005cde9f
;   TerminatedCString s_core_script_cpp_005cdec7
;   TerminatedCString s_Out_of_memory_loading_sc_005cdeda
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01ed6008
;   undefined4 DAT_01ed6009
;   undefined4 DAT_01ed600a
;   undefined4 DAT_01ed600b
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_script.cpp_CScript_freeParsedLines_FUN_00528da0
;   core_script.cpp_trimLine_FUN_00528790
;   crt_memory.c_realloc_FUN_005a3e50
;   crt_unknown.c_FUN_005a3650
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
;   shape_edittool.cpp_FUN_00486af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005295e0
        ;   Label: core_script.cpp_CScript_buildParsedLines_FUN_005295e0
    PUSH ESI                            ; 005295e1
    PUSH EDI                            ; 005295e2
    PUSH EBP                            ; 005295e3
    SUB ESP,0x4                         ; 005295e4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005295e7
    PUSH EBX                            ; 005295eb
    CALL core_script.cpp_CScript_freeParsedLines_FUN_00528da0 ; 005295ec
        ;   XREF to: 00528da0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_freeParsedLines_FUN_00528da0(CScript * this_ptr)
    ADD ESP,0x4                         ; 005295f1
    LEA EAX,[EBX + 0x34]                ; 005295f4
    XOR EBP,EBP                         ; 005295f7
    MOV dword ptr [ESP],EAX             ; 005295f9
    MOV EDX,dword ptr [ESP]             ; 005295fc
        ;   Label: LAB_005295fc
    PUSH EDX                            ; 005295ff
    CALL shape_edittool.cpp_FUN_00486af0 ; 00529600
        ;   XREF to: 00486af0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486af0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00529605
    CMP EBP,EAX                         ; 00529608
    JL 0x00529614                       ; 0052960a
        ;   XREF to: 00529614 (CONDITIONAL_JUMP)  ; LAB_00529614
    ADD ESP,0x4                         ; 0052960c
    POP EBP                             ; 0052960f
    POP EDI                             ; 00529610
    POP ESI                             ; 00529611
    POP EBX                             ; 00529612
    RET                                 ; 00529613
    PUSH 0x1ed6008                      ; 00529614 | DAT_01ed6008
        ;   Label: LAB_00529614
    PUSH EBP                            ; 00529619
    MOV ECX,dword ptr [ESP + 0x8]       ; 0052961a
    PUSH ECX                            ; 0052961e
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 0052961f
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00529624
    PUSH EAX                            ; 00529627
    CALL core_script.cpp_trimLine_FUN_00528790 ; 00529628
        ;   XREF to: 00528790 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimLine_FUN_00528790(char * input_line, char * output_buffer)
    MOV AH,byte ptr [0x01ed6008]        ; 0052962d | DAT_01ed6008
    ADD ESP,0x8                         ; 00529633
    TEST AH,AH                          ; 00529636
    JZ 0x00529704                       ; 00529638
        ;   XREF to: 00529704 (CONDITIONAL_JUMP)  ; LAB_00529704
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0052963e
    INC EAX                             ; 00529641
    SHL EAX,0x3                         ; 00529642
    PUSH EAX                            ; 00529645
    MOV ESI,dword ptr [EBX + 0x30]      ; 00529646
    PUSH ESI                            ; 00529649
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 0052964a
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0052964f
    MOV dword ptr [EBX + 0x30],EAX      ; 00529652
    TEST EAX,EAX                        ; 00529655
    JNZ 0x0052967f                      ; 00529657
        ;   XREF to: 0052967f (CONDITIONAL_JUMP)  ; LAB_0052967f
    MOV dword ptr [0x01d71de0],0x5cde8c ; 00529659 | DAT_01d71de0 | = "..\\core\\script.cpp"
    LEA EAX,[EBP + 0x1]                 ; 00529663
    PUSH EAX                            ; 00529666
    MOV EDX,0x3a4                       ; 00529667
    PUSH 0x5cde9f                       ; 0052966c | = "Out of memory loading script at line %d"
    MOV dword ptr [0x01d71de4],EDX      ; 00529671 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00529677
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0052967c
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0052967f
        ;   Label: LAB_0052967f
    MOV ECX,dword ptr [EBX + 0x30]      ; 00529682
    LEA ESI,[EBP + 0x1]                 ; 00529685
    MOV EDI,0x1ed6008                   ; 00529688
    MOV dword ptr [ECX + EAX*0x8],ESI   ; 0052968d
    SUB ECX,ECX                         ; 00529690
    DEC ECX                             ; 00529692
    XOR EAX,EAX                         ; 00529693
    SCASB.REPNE ES:EDI                  ; 00529695 | DAT_01ed6008 | DAT_01ed6009
    NOT ECX                             ; 00529697
    DEC ECX                             ; 00529699
    INC ECX                             ; 0052969a
    PUSH ECX                            ; 0052969b
    CALL crt_unknown.c_FUN_005a3650     ; 0052969c
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    MOV ECX,dword ptr [EBX + 0x2c]      ; 005296a1
    MOV EDI,dword ptr [EBX + 0x30]      ; 005296a4
    MOV dword ptr [EDI + ECX*0x8 + 0x4],EAX ; 005296a7
    MOV ECX,dword ptr [EBX + 0x30]      ; 005296ab
    ADD ESP,0x4                         ; 005296ae
    TEST ECX,ECX                        ; 005296b1
    JNZ 0x005296d8                      ; 005296b3
        ;   XREF to: 005296d8 (CONDITIONAL_JUMP)  ; LAB_005296d8
    PUSH ESI                            ; 005296b5
    MOV EDI,0x5cdec7                    ; 005296b6 | = "..\\core\\script.cpp"
    MOV EAX,0x3a7                       ; 005296bb
    PUSH 0x5cdeda                       ; 005296c0 | = "Out of memory loading script at line %d"
    MOV dword ptr [0x01d71de0],EDI      ; 005296c5 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 005296cb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005296d0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 005296d5
    MOV EDI,dword ptr [EBX + 0x2c]      ; 005296d8
        ;   Label: LAB_005296d8
    MOV EAX,dword ptr [EBX + 0x30]      ; 005296db
    MOV ESI,0x1ed6008                   ; 005296de
    MOV EDI,dword ptr [EAX + EDI*0x8 + 0x4] ; 005296e3
    PUSH EDI                            ; 005296e7
    MOV AL,byte ptr [ESI]               ; 005296e8 | DAT_01ed6008 | DAT_01ed600a
        ;   Label: LAB_005296e8
    MOV byte ptr [EDI],AL               ; 005296ea
    CMP AL,0x0                          ; 005296ec
    JZ 0x00529700                       ; 005296ee
        ;   XREF to: 00529700 (CONDITIONAL_JUMP)  ; LAB_00529700
    MOV AL,byte ptr [ESI + 0x1]         ; 005296f0 | DAT_01ed6009 | DAT_01ed600b
    ADD ESI,0x2                         ; 005296f3
    MOV byte ptr [EDI + 0x1],AL         ; 005296f6
    ADD EDI,0x2                         ; 005296f9
    CMP AL,0x0                          ; 005296fc
    JNZ 0x005296e8                      ; 005296fe
        ;   XREF to: 005296e8 (CONDITIONAL_JUMP)  ; LAB_005296e8
    POP EDI                             ; 00529700
        ;   Label: LAB_00529700
    INC dword ptr [EBX + 0x2c]          ; 00529701
    INC EBP                             ; 00529704
        ;   Label: LAB_00529704
    JMP 0x005295fc                      ; 00529705
        ;   XREF to: 005295fc (UNCONDITIONAL_JUMP)  ; LAB_005295fc

