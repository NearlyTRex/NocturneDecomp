; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_FUN_00522200(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_mission.cpp_FUN_004fce00 at 004fcee7
;
; Referenced Globals:
;   TerminatedCString s_initSection_005e2fc1
;   TerminatedCString s_initSectionEnd_005e2fcd
;   TerminatedCString s_core_script_cpp_005e2fdc
;   TerminatedCString s_Script_has_initSection_l_005e2fef
;   TerminatedCString s_core_script_cpp_005e302e
;   TerminatedCString s_Error_processing_script_005e3041
;   TerminatedCString s_core_script_cpp_005e307e
;   TerminatedCString s_Infinite_loop_detected_i_005e3091
;   CGame* g_CGamePtr = 01cb6900
;   CGame g_CGameInstance
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01e650f8
;   undefined4 DAT_01e65904
;
; Called Functions:
;   core_game.cpp_FUN_004b8250
;   core_main.c_FUN_004e4500
;   core_script.cpp_FUN_00522350
;   core_script.cpp_FUN_005299b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522200
        ;   Label: core_script.cpp_FUN_00522200
    PUSH ESI                            ; 00522201
    PUSH EBP                            ; 00522202
    SUB ESP,0x8                         ; 00522203
    MOV EBX,dword ptr [ESP + 0x18]      ; 00522206
    XOR EDX,EDX                         ; 0052220a
    MOV ECX,dword ptr [EBX + 0x2c]      ; 0052220c
    MOV dword ptr [0x01e650f8],EDX      ; 0052220f | DAT_01e650f8
    CMP ECX,0x1                         ; 00522215
    JL 0x00522220                       ; 00522218
        ;   XREF to: 00522220 (CONDITIONAL_JUMP)  ; LAB_00522220
    CMP dword ptr [EBX + 0x30],0x0      ; 0052221a
    JNZ 0x00522227                      ; 0052221e
        ;   XREF to: 00522227 (CONDITIONAL_JUMP)  ; LAB_00522227
    ADD ESP,0x8                         ; 00522220
        ;   Label: LAB_00522220
    POP EBP                             ; 00522223
    POP ESI                             ; 00522224
    POP EBX                             ; 00522225
    RET                                 ; 00522226
    PUSH 0x5e2fc1                       ; 00522227 | = "initSection"
        ;   Label: LAB_00522227
    PUSH EBX                            ; 0052222c
    CALL core_script.cpp_FUN_005299b0   ; 0052222d
        ;   XREF to: 005299b0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_005299b0(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 00522232
    MOV ESI,EAX                         ; 00522235
    TEST EAX,EAX                        ; 00522237
    JL 0x00522220                       ; 00522239
        ;   XREF to: 00522220 (CONDITIONAL_JUMP)  ; LAB_00522220
    PUSH EDI                            ; 0052223b
    PUSH 0x5e2fcd                       ; 0052223c | = "initSectionEnd"
    PUSH EBX                            ; 00522241
    CALL core_script.cpp_FUN_005299b0   ; 00522242
        ;   XREF to: 005299b0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_005299b0(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 00522247
    MOV EBP,EAX                         ; 0052224a
    TEST EAX,EAX                        ; 0052224c
    JL 0x005222ba                       ; 0052224e
        ;   XREF to: 005222ba (CONDITIONAL_JUMP)  ; LAB_005222ba
    MOV EAX,dword ptr [EBX + 0x44]      ; 00522250
        ;   Label: LAB_00522250
    XOR EDX,EDX                         ; 00522253
    MOV dword ptr [ESP + 0x8],EAX       ; 00522255
    MOV dword ptr [0x01e65904],EDX      ; 00522259 | DAT_01e65904
    MOV dword ptr [EBX + 0x44],ESI      ; 0052225f
    XOR ESI,ESI                         ; 00522262
    LEA EAX,[ESP + 0x4]                 ; 00522264
        ;   Label: LAB_00522264
    PUSH EAX                            ; 00522268
    MOV ECX,0x3e800000                  ; 00522269
    PUSH EBX                            ; 0052226e
    MOV EDI,dword ptr [EBX + 0x44]      ; 0052226f
    MOV dword ptr [ESP + 0xc],ECX       ; 00522272
    CALL core_script.cpp_FUN_00522350   ; 00522276
        ;   XREF to: 00522350 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00522350()
    ADD ESP,0x8                         ; 0052227b
    TEST EAX,EAX                        ; 0052227e
    JL 0x005222e1                       ; 00522280
        ;   XREF to: 005222e1 (CONDITIONAL_JUMP)  ; LAB_005222e1
    CMP EBP,dword ptr [EBX + 0x44]      ; 00522282
        ;   Label: LAB_00522282
    JNZ 0x00522319                      ; 00522285
        ;   XREF to: 00522319 (CONDITIONAL_JUMP)  ; LAB_00522319
    CMP dword ptr [0x01e65904],0x0      ; 0052228b | DAT_01e65904
    JZ 0x005222ab                       ; 00522292
        ;   XREF to: 005222ab (CONDITIONAL_JUMP)  ; LAB_005222ab
    MOV ECX,dword ptr [0x00616494]      ; 00522294 | g_CGamePtr
    PUSH ECX                            ; 0052229a | g_CGameInstance
    XOR ESI,ESI                         ; 0052229b
    CALL core_game.cpp_FUN_004b8250     ; 0052229d
        ;   XREF to: 004b8250 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b8250(CGame * this_ptr)
    ADD ESP,0x4                         ; 005222a2
    MOV dword ptr [0x01e65904],ESI      ; 005222a5 | DAT_01e65904
    MOV EAX,dword ptr [ESP + 0x8]       ; 005222ab
        ;   Label: LAB_005222ab
    MOV dword ptr [EBX + 0x44],EAX      ; 005222af
    POP EDI                             ; 005222b2
    ADD ESP,0x8                         ; 005222b3
    POP EBP                             ; 005222b6
    POP ESI                             ; 005222b7
    POP EBX                             ; 005222b8
    RET                                 ; 005222b9
    MOV EDI,0x5e2fdc                    ; 005222ba | = "..\\core\\script.cpp"
        ;   Label: LAB_005222ba
    MOV EAX,0x42d                       ; 005222bf
    PUSH 0x5e2fef                       ; 005222c4 | = "Script has \"initSection\" label, but..."
    MOV dword ptr [0x01d046a0],EDI      ; 005222c9 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 005222cf | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005222d4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005222d9
    JMP 0x00522250                      ; 005222dc
        ;   XREF to: 00522250 (UNCONDITIONAL_JUMP)  ; LAB_00522250
    MOV EAX,0x5e302e                    ; 005222e1 | = "..\\core\\script.cpp"
        ;   Label: LAB_005222e1
    MOV EDX,0x449                       ; 005222e6
    MOV [0x01d046a0],EAX                ; 005222eb | DAT_01d046a0
    MOV EAX,dword ptr [EBX + 0x30]      ; 005222f0
    MOV dword ptr [0x01d046a4],EDX      ; 005222f3 | DAT_01d046a4
    PUSH 0x1e65100                      ; 005222f9
    MOV ECX,dword ptr [EAX + EDI*0x8 + 0x4] ; 005222fe
    PUSH ECX                            ; 00522302
    MOV EDX,dword ptr [EAX + EDI*0x8]   ; 00522303
    PUSH EDX                            ; 00522306
    PUSH 0x5e3041                       ; 00522307 | = "Error processing script.\nLine: %d\nT..."
    CALL core_main.c_FUN_004e4500       ; 0052230c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x10                        ; 00522311
    JMP 0x00522282                      ; 00522314
        ;   XREF to: 00522282 (UNCONDITIONAL_JUMP)  ; LAB_00522282
    INC ESI                             ; 00522319
        ;   Label: LAB_00522319
    CMP ESI,0x2710                      ; 0052231a
    JLE 0x00522264                      ; 00522320
        ;   XREF to: 00522264 (CONDITIONAL_JUMP)  ; LAB_00522264
    MOV EDI,0x5e307e                    ; 00522326 | = "..\\core\\script.cpp"
    MOV EAX,0x45b                       ; 0052232b
    PUSH 0x5e3091                       ; 00522330 | = "Infinite loop detected in initSection.\n"
    MOV dword ptr [0x01d046a0],EDI      ; 00522335 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0052233b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00522340
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00522345
    JMP 0x00522264                      ; 00522348
        ;   XREF to: 00522264 (UNCONDITIONAL_JUMP)  ; LAB_00522264

