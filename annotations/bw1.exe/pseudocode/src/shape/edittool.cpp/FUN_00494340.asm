; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00494340(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x408]:1  local_408
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[12]:
;   core_doc.cpp_FUN_0046bde0 at 0046c8e4
;   core_doc.cpp_FUN_00470750 at 004707be
;   core_doc.cpp_FUN_004712b0 at 00471503
;   core_doc.cpp_FUN_00474400 at 00474dea
;   core_fldnotes.cpp_CFieldNotes_loadState_FUN_004bebc0 at 004bedc3
;   core_main.c_FUN_005032a0 at 00503650
;   core_script.cpp_CScript_loadState_FUN_0054b3e0 at 0054b6f4
;   core_set.cpp_FUN_00555e30 at 00555ec8
;   core_stranger.cpp_CStranger_processPickupComplete_FUN_0058cda0 at 0058ce0e
;   core_stranger.cpp_CStranger_tryPlaceObject_FUN_0058d910 at 0058dc9b
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_Warning_005dbdba
;   undefined4 DAT_01c3f560
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005bfb18
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494340
        ;   Label: shape_edittool.cpp_FUN_00494340
    SUB ESP,0x404                       ; 00494341
    LEA EAX,[ESP + 0x414]               ; 00494347
    MOV dword ptr [ESP + 0x400],EAX     ; 0049434e
    LEA EAX,[ESP + 0x400]               ; 00494355
    PUSH EAX                            ; 0049435c
    MOV EDX,dword ptr [ESP + 0x414]     ; 0049435d
    PUSH EDX                            ; 00494364
    LEA EAX,[ESP + 0x8]                 ; 00494365
    PUSH EAX                            ; 00494369
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 0049436a
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005bfb18(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0049436f
    MOV EBX,dword ptr [0x01c3f560]      ; 00494372 | DAT_01c3f560
    PUSH EBX                            ; 00494378
    LEA EAX,[ESP + 0x4]                 ; 00494379
    PUSH EAX                            ; 0049437d
    XOR ECX,ECX                         ; 0049437e
    PUSH 0x5dbdba                       ; 00494380 | = "Warning"
    MOV dword ptr [ESP + 0x40c],ECX     ; 00494385
    CALL shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 ; 0049438c
        ;   XREF to: 00493d40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40(char * title, char * message, int color)
    ADD ESP,0xc                         ; 00494391
    ADD ESP,0x404                       ; 00494394
    POP EBX                             ; 0049439a
    RET                                 ; 0049439b

