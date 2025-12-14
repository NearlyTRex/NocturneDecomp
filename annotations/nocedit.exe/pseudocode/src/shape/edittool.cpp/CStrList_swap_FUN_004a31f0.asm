; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CStrList_swap_FUN_004a31f0(CStrList * this_ptr, int index1, int index2)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index1
; int              Stack[0xc]:4   index2
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_swap_FUN_004a5870 at 004a5893
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_006238f1
;   TerminatedCString s_CStrList_swap_invalid_in_00623907
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a31f0
        ;   Label: shape_edittool.cpp_CStrList_swap_FUN_004a31f0
    PUSH ESI                            ; 004a31f1
    PUSH EDI                            ; 004a31f2
    PUSH EBP                            ; 004a31f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a31f4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a31f8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004a31fc
    TEST EDI,EDI                        ; 004a3200
    JL 0x004a320a                       ; 004a3202
        ;   XREF to: 004a320a (CONDITIONAL_JUMP)  ; LAB_004a320a
    MOV EDX,dword ptr [EBX]             ; 004a3204
    CMP EDI,EDX                         ; 004a3206
    JL 0x004a3235                       ; 004a3208
        ;   XREF to: 004a3235 (CONDITIONAL_JUMP)  ; LAB_004a3235
    MOV EBP,0x6238f1                    ; 004a320a | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a320a
    MOV EAX,0xc2e                       ; 004a320f
    PUSH 0x623907                       ; 004a3214 | = "CStrList::swap - invalid indices"
    MOV dword ptr [0x02f0ca48],EBP      ; 004a3219 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004a321f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a3224
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a3229
    CMP EDI,ESI                         ; 004a322c
    JNZ 0x004a3246                      ; 004a322e
        ;   XREF to: 004a3246 (CONDITIONAL_JUMP)  ; LAB_004a3246
    POP EBP                             ; 004a3230
    POP EDI                             ; 004a3231
    POP ESI                             ; 004a3232
    POP EBX                             ; 004a3233
    RET                                 ; 004a3234
    TEST ESI,ESI                        ; 004a3235
        ;   Label: LAB_004a3235
    JL 0x004a320a                       ; 004a3237
        ;   XREF to: 004a320a (CONDITIONAL_JUMP)  ; LAB_004a320a
    CMP ESI,EDX                         ; 004a3239
    JGE 0x004a320a                      ; 004a323b
        ;   XREF to: 004a320a (CONDITIONAL_JUMP)  ; LAB_004a320a
    CMP EDI,ESI                         ; 004a323d
    JNZ 0x004a3246                      ; 004a323f
        ;   XREF to: 004a3246 (CONDITIONAL_JUMP)  ; LAB_004a3246
    POP EBP                             ; 004a3241
    POP EDI                             ; 004a3242
    POP ESI                             ; 004a3243
    POP EBX                             ; 004a3244
    RET                                 ; 004a3245
    LEA EAX,[EDI*0x4 + 0x0]             ; 004a3246
        ;   Label: LAB_004a3246
    MOV ECX,dword ptr [EBX + 0x8]       ; 004a324d
    ADD EAX,ECX                         ; 004a3250
    MOV ECX,dword ptr [ECX + ESI*0x4]   ; 004a3252
    MOV EDI,dword ptr [EAX]             ; 004a3255
    MOV dword ptr [EAX],ECX             ; 004a3257
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a3259
    MOV dword ptr [EAX + ESI*0x4],EDI   ; 004a325c
    POP EBP                             ; 004a325f
    POP EDI                             ; 004a3260
    POP ESI                             ; 004a3261
    POP EBX                             ; 004a3262
    RET                                 ; 004a3263

