; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0()
;
;
; XREF[1]:
;   engine_palette.cpp_CPaletteManager_FUN_00545060 at 005450a8
;
; Referenced Globals:
;   TerminatedCString s_engine_palette_cpp_0063e482
;   TerminatedCString s_paletteManager_addTextur_0063e498
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544fc0
        ;   Label: engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0
    PUSH ESI                            ; 00544fc1
    PUSH EDI                            ; 00544fc2
    PUSH EBP                            ; 00544fc3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00544fc4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00544fc8
    MOV EDX,dword ptr [EBX]             ; 00544fcc
    XOR EDI,EDI                         ; 00544fce
    TEST EDX,EDX                        ; 00544fd0
    JLE 0x00544ff3                      ; 00544fd2 | LAB_00544ff3
        ;   XREF to: 00544ff3 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00544fd4
    MOV EAX,dword ptr [EBX + 0x4]       ; 00544fd6
        ;   Label: LAB_00544fd6
    PUSH EBP                            ; 00544fd9
    ADD EAX,ESI                         ; 00544fda
    PUSH EAX                            ; 00544fdc
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00544fdd | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00544fe2
    TEST EAX,EAX                        ; 00544fe5
    JZ 0x00545026                       ; 00544fe7 | LAB_00545026
        ;   XREF to: 00545026 (CONDITIONAL_JUMP)
    INC EDI                             ; 00544fe9
    MOV ECX,dword ptr [EBX]             ; 00544fea
    ADD ESI,0x40                        ; 00544fec
    CMP EDI,ECX                         ; 00544fef
    JL 0x00544fd6                       ; 00544ff1 | LAB_00544fd6
        ;   XREF to: 00544fd6 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 00544ff3
        ;   Label: LAB_00544ff3
    MOV EDI,dword ptr [EBX + 0x4]       ; 00544ff5
    SHL EAX,0x6                         ; 00544ff8
    MOV ESI,EBP                         ; 00544ffb
    ADD EDI,EAX                         ; 00544ffd
    PUSH EDI                            ; 00544fff
    MOV AL,byte ptr [ESI]               ; 00545000
        ;   Label: LAB_00545000
    MOV byte ptr [EDI],AL               ; 00545002
    CMP AL,0x0                          ; 00545004
    JZ 0x00545018                       ; 00545006 | LAB_00545018
        ;   XREF to: 00545018 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00545008
    ADD ESI,0x2                         ; 0054500b
    MOV byte ptr [EDI + 0x1],AL         ; 0054500e
    ADD EDI,0x2                         ; 00545011
    CMP AL,0x0                          ; 00545014
    JNZ 0x00545000                      ; 00545016 | LAB_00545000
        ;   XREF to: 00545000 (CONDITIONAL_JUMP)
    POP EDI                             ; 00545018
        ;   Label: LAB_00545018
    MOV ESI,dword ptr [EBX]             ; 00545019
    INC ESI                             ; 0054501b
    MOV dword ptr [EBX],ESI             ; 0054501c
    CMP ESI,0x400                       ; 0054501e
    JGE 0x0054502b                      ; 00545024 | LAB_0054502b
        ;   XREF to: 0054502b (CONDITIONAL_JUMP)
    POP EBP                             ; 00545026
        ;   Label: LAB_00545026
    POP EDI                             ; 00545027
    POP ESI                             ; 00545028
    POP EBX                             ; 00545029
    RET                                 ; 0054502a
    MOV EBP,0x63e482                    ; 0054502b | = "..\\engine\\palette.cpp" | s_engine_palette_cpp_0063e482 = ..\engine\palette.cpp
        ;   Label: LAB_0054502b
    MOV EAX,0x5d                        ; 00545030
    PUSH 0x63e498                       ; 00545035 | = "paletteManager::addTexture - Too many..." | s_paletteManager_addTextur_0063e498 = paletteManager::addTexture - Too many textures!
    MOV dword ptr [0x02f0ca48],EBP      ; 0054503a | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00545040 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00545045 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054504a
    POP EBP                             ; 0054504d
    POP EDI                             ; 0054504e
    POP ESI                             ; 0054504f
    POP EBX                             ; 00545050
    RET                                 ; 00545051

