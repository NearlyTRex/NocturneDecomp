; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004943a0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x408]:1  local_408
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[28]:
;   core_doc.cpp_FUN_00474fc0 at 00475092
;   core_fldnotes.cpp_FUN_004bcba0 at 004bcde6
;   core_fldnotes.cpp_FUN_004bdd00 at 004bddb1
;   core_fldnotes.cpp_FUN_004bde80 at 004bdf76
;   core_fldnotes.cpp_FUN_004bdfa0 at 004be051
;   core_game.cpp_FUN_004d27b0 at 004d3f86
;   core_game.cpp_FUN_004d6420 at 004d68f7
;   core_game.cpp_FUN_004d6990 at 004d6e8b
;   core_game.cpp_FUN_004d77d0 at 004d7be5
;   core_hero.cpp_FUN_004ec640 at 004ec687
;   ... and 18 more
;
; Referenced Globals:
;   TerminatedCString s_Error_005dbdc2
;   undefined4 DAT_01c3f564
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005bfb18
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004943a0
        ;   Label: shape_edittool.cpp_FUN_004943a0
    SUB ESP,0x404                       ; 004943a1
    LEA EAX,[ESP + 0x414]               ; 004943a7
    MOV dword ptr [ESP + 0x400],EAX     ; 004943ae
    LEA EAX,[ESP + 0x400]               ; 004943b5
    PUSH EAX                            ; 004943bc
    MOV EDX,dword ptr [ESP + 0x414]     ; 004943bd
    PUSH EDX                            ; 004943c4
    LEA EAX,[ESP + 0x8]                 ; 004943c5
    PUSH EAX                            ; 004943c9
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 004943ca
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 004943cf
    MOV EBX,dword ptr [0x01c3f564]      ; 004943d2 | DAT_01c3f564
    PUSH EBX                            ; 004943d8
    LEA EAX,[ESP + 0x4]                 ; 004943d9
    PUSH EAX                            ; 004943dd
    XOR ECX,ECX                         ; 004943de
    PUSH 0x5dbdc2                       ; 004943e0 | = "Error"
    MOV dword ptr [ESP + 0x40c],ECX     ; 004943e5
    CALL shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 ; 004943ec
        ;   XREF to: 00493d40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40(char * title, char * message, int color)
    ADD ESP,0xc                         ; 004943f1
    ADD ESP,0x404                       ; 004943f4
    POP EBX                             ; 004943fa
    RET                                 ; 004943fb

