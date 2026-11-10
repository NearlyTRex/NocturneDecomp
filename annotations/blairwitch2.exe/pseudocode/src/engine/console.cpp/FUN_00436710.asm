; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_console_cpp_FUN_00436710(CConsole *param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x1014]:1  local_1014
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[95]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a050 at 0040a6c1
;   core_actor.cpp_FUN_00408a50 at 00408a62
;   core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e600 at 0040e625
;   core_baron.cpp_CBaron_process_FUN_0040f950 at 0040fc43
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 00411cae
;   core_batman.cpp_CBatman_processDismemberment_FUN_00413f40 at 00414218
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 004131ff
;   core_biggs.cpp_CBiggs_process_FUN_00414e50 at 004150e5
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00415cd0 at 00415de8
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 0041926c
;   ... and 85 more
;
; Referenced Globals:
;   undefined4 DAT_005cdc35
;   undefined4 DAT_005cdc38
;   TerminatedCString s_console_txt_00609ed8
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_stdio.c_vsprintf_FUN_005b7768
;   crt_unknown.c_FUN_005b8010
;   engine_console.cpp_CConsole_writeChar_FUN_004367e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436710
        ;   Label: engine_console.cpp_FUN_00436710
    PUSH ESI                            ; 00436711
    PUSH EDI                            ; 00436712
    PUSH EBP                            ; 00436713
    SUB ESP,0x1004                      ; 00436714
    MOV EBP,dword ptr [ESP + 0x1018]    ; 0043671a
    LEA EAX,[ESP + 0x1020]              ; 00436721
    MOV dword ptr [ESP + 0x1000],EAX    ; 00436728
    LEA EAX,[ESP + 0x1000]              ; 0043672f
    PUSH EAX                            ; 00436736
    MOV EDX,dword ptr [ESP + 0x1020]    ; 00436737
    PUSH EDX                            ; 0043673e
    LEA EAX,[ESP + 0x8]                 ; 0043673f
    PUSH EAX                            ; 00436743
    LEA EDI,[ESP + 0xc]                 ; 00436744
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 00436748
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 0043674d
    XOR ECX,ECX                         ; 00436750
    XOR EBX,EBX                         ; 00436752
    MOV dword ptr [ESP + 0x1000],ECX    ; 00436754
    SUB ECX,ECX                         ; 0043675b
    DEC ECX                             ; 0043675d
    XOR EAX,EAX                         ; 0043675e
    SCASB.REPNE ES:EDI                  ; 00436760
    NOT ECX                             ; 00436762
    DEC ECX                             ; 00436764
    MOV ESI,ECX                         ; 00436765
    TEST ECX,ECX                        ; 00436767
    JLE 0x00436780                      ; 00436769
        ;   XREF to: 00436780 (CONDITIONAL_JUMP)  ; LAB_00436780
    XOR EAX,EAX                         ; 0043676b
        ;   Label: LAB_0043676b
    MOV AL,byte ptr [ESP + EBX*0x1]     ; 0043676d
    PUSH EAX                            ; 00436770
    PUSH EBP                            ; 00436771
    INC EBX                             ; 00436772
    CALL engine_console.cpp_CConsole_writeChar_FUN_004367e0 ; 00436773
        ;   XREF to: 004367e0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_writeChar_FUN_004367e0(CConsole * this_ptr, char character)
    ADD ESP,0x8                         ; 00436778
    CMP EBX,ESI                         ; 0043677b
    JL 0x0043676b                       ; 0043677d
        ;   XREF to: 0043676b (CONDITIONAL_JUMP)  ; LAB_0043676b
    NOP                                 ; 0043677f
    PUSH 0x0                            ; 00436780
        ;   Label: LAB_00436780
    PUSH EBP                            ; 00436782
    CALL engine_console.cpp_CConsole_writeChar_FUN_004367e0 ; 00436783
        ;   XREF to: 004367e0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_writeChar_FUN_004367e0(CConsole * this_ptr, char character)
    MOV EBX,dword ptr [EBP]             ; 00436788
    ADD ESP,0x8                         ; 0043678b
    TEST EBX,EBX                        ; 0043678e
    JNZ 0x0043679d                      ; 00436790
        ;   XREF to: 0043679d (CONDITIONAL_JUMP)  ; LAB_0043679d
    ADD ESP,0x1004                      ; 00436792
        ;   Label: LAB_00436792
    POP EBP                             ; 00436798
    POP EDI                             ; 00436799
    POP ESI                             ; 0043679a
    POP EBX                             ; 0043679b
    RET                                 ; 0043679c
    PUSH 0x5cdc35                       ; 0043679d | DAT_005cdc35
        ;   Label: LAB_0043679d
    PUSH 0x609ed8                       ; 004367a2 | = "console.txt"
    CALL crt_stdio.c_fopen_FUN_005b910c ; 004367a7
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    MOV EBX,EAX                         ; 004367ac
    ADD ESP,0x8                         ; 004367ae
    TEST EAX,EAX                        ; 004367b1
    JZ 0x00436792                       ; 004367b3
        ;   XREF to: 00436792 (CONDITIONAL_JUMP)  ; LAB_00436792
    MOV EAX,ESP                         ; 004367b5
    PUSH EAX                            ; 004367b7
    PUSH 0x5cdc38                       ; 004367b8 | DAT_005cdc38
    PUSH EBX                            ; 004367bd
    CALL crt_unknown.c_FUN_005b8010     ; 004367be
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004367c3
    PUSH EBX                            ; 004367c6
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004367c7
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004367cc
    ADD ESP,0x1004                      ; 004367cf
    POP EBP                             ; 004367d5
    POP EDI                             ; 004367d6
    POP ESI                             ; 004367d7
    POP EBX                             ; 004367d8
    RET                                 ; 004367d9

