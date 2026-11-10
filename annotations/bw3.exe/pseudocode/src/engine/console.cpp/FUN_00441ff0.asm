; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_console_cpp_FUN_00441ff0(CConsole *param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x1014]:1  local_1014
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[84]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f60 at 0040a50f
;   core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e6b0 at 0040e6d5
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a10a8
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 00596f7e
;   core_bird.cpp_CBird_process_FUN_0040fb40 at 0040fdfa
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00414d40 at 00414e64
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a7c9
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 0041866e
;   core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_00418930 at 00418c64
;   core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423cd0 at 00423dd1
;   ... and 74 more
;
; Referenced Globals:
;   undefined4 DAT_005b93df
;   undefined4 DAT_005b93e2
;   TerminatedCString s_console_txt_005f1698
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_stdio.c_vsprintf_FUN_005a2898
;   crt_unknown.c_FUN_005a3140
;   engine_console.cpp_CConsole_writeChar_FUN_004420c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441ff0
        ;   Label: engine_console.cpp_FUN_00441ff0
    PUSH ESI                            ; 00441ff1
    PUSH EDI                            ; 00441ff2
    PUSH EBP                            ; 00441ff3
    SUB ESP,0x1004                      ; 00441ff4
    MOV EBP,dword ptr [ESP + 0x1018]    ; 00441ffa
    LEA EAX,[ESP + 0x1020]              ; 00442001
    MOV dword ptr [ESP + 0x1000],EAX    ; 00442008
    LEA EAX,[ESP + 0x1000]              ; 0044200f
    PUSH EAX                            ; 00442016
    MOV EDX,dword ptr [ESP + 0x1020]    ; 00442017
    PUSH EDX                            ; 0044201e
    LEA EAX,[ESP + 0x8]                 ; 0044201f
    PUSH EAX                            ; 00442023
    LEA EDI,[ESP + 0xc]                 ; 00442024
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 00442028
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 0044202d
    XOR ECX,ECX                         ; 00442030
    XOR EBX,EBX                         ; 00442032
    MOV dword ptr [ESP + 0x1000],ECX    ; 00442034
    SUB ECX,ECX                         ; 0044203b
    DEC ECX                             ; 0044203d
    XOR EAX,EAX                         ; 0044203e
    SCASB.REPNE ES:EDI                  ; 00442040
    NOT ECX                             ; 00442042
    DEC ECX                             ; 00442044
    MOV ESI,ECX                         ; 00442045
    TEST ECX,ECX                        ; 00442047
    JLE 0x00442060                      ; 00442049
        ;   XREF to: 00442060 (CONDITIONAL_JUMP)  ; LAB_00442060
    XOR EAX,EAX                         ; 0044204b
        ;   Label: LAB_0044204b
    MOV AL,byte ptr [ESP + EBX*0x1]     ; 0044204d
    PUSH EAX                            ; 00442050
    PUSH EBP                            ; 00442051
    INC EBX                             ; 00442052
    CALL engine_console.cpp_CConsole_writeChar_FUN_004420c0 ; 00442053
        ;   XREF to: 004420c0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_writeChar_FUN_004420c0(CConsole * this_ptr, char character)
    ADD ESP,0x8                         ; 00442058
    CMP EBX,ESI                         ; 0044205b
    JL 0x0044204b                       ; 0044205d
        ;   XREF to: 0044204b (CONDITIONAL_JUMP)  ; LAB_0044204b
    NOP                                 ; 0044205f
    PUSH 0x0                            ; 00442060
        ;   Label: LAB_00442060
    PUSH EBP                            ; 00442062
    CALL engine_console.cpp_CConsole_writeChar_FUN_004420c0 ; 00442063
        ;   XREF to: 004420c0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_writeChar_FUN_004420c0(CConsole * this_ptr, char character)
    MOV EBX,dword ptr [EBP]             ; 00442068
    ADD ESP,0x8                         ; 0044206b
    TEST EBX,EBX                        ; 0044206e
    JNZ 0x0044207d                      ; 00442070
        ;   XREF to: 0044207d (CONDITIONAL_JUMP)  ; LAB_0044207d
    ADD ESP,0x1004                      ; 00442072
        ;   Label: LAB_00442072
    POP EBP                             ; 00442078
    POP EDI                             ; 00442079
    POP ESI                             ; 0044207a
    POP EBX                             ; 0044207b
    RET                                 ; 0044207c
    PUSH 0x5b93df                       ; 0044207d | DAT_005b93df
        ;   Label: LAB_0044207d
    PUSH 0x5f1698                       ; 00442082 | = "console.txt"
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 00442087
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    MOV EBX,EAX                         ; 0044208c
    ADD ESP,0x8                         ; 0044208e
    TEST EAX,EAX                        ; 00442091
    JZ 0x00442072                       ; 00442093
        ;   XREF to: 00442072 (CONDITIONAL_JUMP)  ; LAB_00442072
    MOV EAX,ESP                         ; 00442095
    PUSH EAX                            ; 00442097
    PUSH 0x5b93e2                       ; 00442098 | DAT_005b93e2
    PUSH EBX                            ; 0044209d
    CALL crt_unknown.c_FUN_005a3140     ; 0044209e
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004420a3
    PUSH EBX                            ; 004420a6
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004420a7
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004420ac
    ADD ESP,0x1004                      ; 004420af
    POP EBP                             ; 004420b5
    POP EDI                             ; 004420b6
    POP ESI                             ; 004420b7
    POP EBX                             ; 004420b8
    RET                                 ; 004420b9

