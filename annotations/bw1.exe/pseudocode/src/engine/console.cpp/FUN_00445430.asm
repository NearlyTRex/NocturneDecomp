; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_console_cpp_FUN_00445430(CConsole *param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x1014]:1  local_1014
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[100]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f20 at 0040a3ad
;   core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e1a0 at 0040e1c5
;   core_baron.cpp_CBaron_process_FUN_0040f4d0 at 0040f7c3
;   core_batcreat.cpp_CBatCreature_process_FUN_004115b0 at 00411907
;   core_batman.cpp_CBatman_processDismemberment_FUN_00413c40 at 00413f18
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00412f08
;   core_biggs.cpp_CBiggs_process_FUN_00414b30 at 00414dc5
;   core_bird.cpp_CBird_process_FUN_00415340 at 004155fa
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419130 at 00419254
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041c6ec
;   ... and 90 more
;
; Referenced Globals:
;   undefined4 DAT_005d6cf7
;   undefined4 DAT_005d6cfa
;   TerminatedCString s_console_txt_00611108
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_stdio.c_vsprintf_FUN_005bfb18
;   crt_unknown.c_FUN_005c03c0
;   engine_console.cpp_CConsole_writeChar_FUN_00445500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445430
        ;   Label: engine_console.cpp_FUN_00445430
    PUSH ESI                            ; 00445431
    PUSH EDI                            ; 00445432
    PUSH EBP                            ; 00445433
    SUB ESP,0x1004                      ; 00445434
    MOV EBP,dword ptr [ESP + 0x1018]    ; 0044543a
    LEA EAX,[ESP + 0x1020]              ; 00445441
    MOV dword ptr [ESP + 0x1000],EAX    ; 00445448
    LEA EAX,[ESP + 0x1000]              ; 0044544f
    PUSH EAX                            ; 00445456
    MOV EDX,dword ptr [ESP + 0x1020]    ; 00445457
    PUSH EDX                            ; 0044545e
    LEA EAX,[ESP + 0x8]                 ; 0044545f
    PUSH EAX                            ; 00445463
    LEA EDI,[ESP + 0xc]                 ; 00445464
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 00445468
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 0044546d
    XOR ECX,ECX                         ; 00445470
    XOR EBX,EBX                         ; 00445472
    MOV dword ptr [ESP + 0x1000],ECX    ; 00445474
    SUB ECX,ECX                         ; 0044547b
    DEC ECX                             ; 0044547d
    XOR EAX,EAX                         ; 0044547e
    SCASB.REPNE ES:EDI                  ; 00445480
    NOT ECX                             ; 00445482
    DEC ECX                             ; 00445484
    MOV ESI,ECX                         ; 00445485
    TEST ECX,ECX                        ; 00445487
    JLE 0x004454a0                      ; 00445489
        ;   XREF to: 004454a0 (CONDITIONAL_JUMP)  ; LAB_004454a0
    XOR EAX,EAX                         ; 0044548b
        ;   Label: LAB_0044548b
    MOV AL,byte ptr [ESP + EBX*0x1]     ; 0044548d
    PUSH EAX                            ; 00445490
    PUSH EBP                            ; 00445491
    INC EBX                             ; 00445492
    CALL engine_console.cpp_CConsole_writeChar_FUN_00445500 ; 00445493
        ;   XREF to: 00445500 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_writeChar_FUN_00445500(CConsole * this_ptr, char character)
    ADD ESP,0x8                         ; 00445498
    CMP EBX,ESI                         ; 0044549b
    JL 0x0044548b                       ; 0044549d
        ;   XREF to: 0044548b (CONDITIONAL_JUMP)  ; LAB_0044548b
    NOP                                 ; 0044549f
    PUSH 0x0                            ; 004454a0
        ;   Label: LAB_004454a0
    PUSH EBP                            ; 004454a2
    CALL engine_console.cpp_CConsole_writeChar_FUN_00445500 ; 004454a3
        ;   XREF to: 00445500 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_writeChar_FUN_00445500(CConsole * this_ptr, char character)
    MOV EBX,dword ptr [EBP]             ; 004454a8
    ADD ESP,0x8                         ; 004454ab
    TEST EBX,EBX                        ; 004454ae
    JNZ 0x004454bd                      ; 004454b0
        ;   XREF to: 004454bd (CONDITIONAL_JUMP)  ; LAB_004454bd
    ADD ESP,0x1004                      ; 004454b2
        ;   Label: LAB_004454b2
    POP EBP                             ; 004454b8
    POP EDI                             ; 004454b9
    POP ESI                             ; 004454ba
    POP EBX                             ; 004454bb
    RET                                 ; 004454bc
    PUSH 0x5d6cf7                       ; 004454bd | DAT_005d6cf7
        ;   Label: LAB_004454bd
    PUSH 0x611108                       ; 004454c2 | = "console.txt"
    CALL crt_stdio.c_fopen_FUN_005c157c ; 004454c7
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005c157c()
    MOV EBX,EAX                         ; 004454cc
    ADD ESP,0x8                         ; 004454ce
    TEST EAX,EAX                        ; 004454d1
    JZ 0x004454b2                       ; 004454d3
        ;   XREF to: 004454b2 (CONDITIONAL_JUMP)  ; LAB_004454b2
    MOV EAX,ESP                         ; 004454d5
    PUSH EAX                            ; 004454d7
    PUSH 0x5d6cfa                       ; 004454d8 | DAT_005d6cfa
    PUSH EBX                            ; 004454dd
    CALL crt_unknown.c_FUN_005c03c0     ; 004454de
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 004454e3
    PUSH EBX                            ; 004454e6
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004454e7
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004454ec
    ADD ESP,0x1004                      ; 004454ef
    POP EBP                             ; 004454f5
    POP EDI                             ; 004454f6
    POP ESI                             ; 004454f7
    POP EBX                             ; 004454f8
    RET                                 ; 004454f9

