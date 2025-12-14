; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setdir.cpp_CZThumb_saveZBufferTable_FUN_005747d0(CZThumb * this_ptr, int count)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   count
;
; Referenced Globals:
;   TerminatedCString s_core_setdir_cpp_006463fe
;   TerminatedCString s_saveZBufferTable_already_00646411
;   uint*[1024] g_ZBufferScanlineArray
;   undefined4 g_ZBufferScanlineArray[1]
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   uint*[1024] g_ZBufferScanlineArrayBackup
;   undefined4 DAT_03363630
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005747d0
        ;   Label: core_setdir.cpp_CZThumb_saveZBufferTable_FUN_005747d0
    CMP dword ptr [0x0336362c],0x0      ; 005747d1 | g_ZBufferScanlineArrayBackup
    JNZ 0x00574802                      ; 005747d8
        ;   XREF to: 00574802 (CONDITIONAL_JUMP)  ; LAB_00574802
    MOV ESI,dword ptr [ESP + 0x8]       ; 005747da
        ;   Label: LAB_005747da
    TEST ESI,ESI                        ; 005747de
    JLE 0x00574800                      ; 005747e0
        ;   XREF to: 00574800 (CONDITIONAL_JUMP)  ; LAB_00574800
    LEA ECX,[ESI*0x4 + 0x0]             ; 005747e2
    XOR EAX,EAX                         ; 005747e9
    ADD EAX,0x4                         ; 005747eb
        ;   Label: LAB_005747eb
    MOV EDX,dword ptr [EAX + 0x2cf7d58] ; 005747ee | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    MOV dword ptr [EAX + 0x3363628],EDX ; 005747f4 | g_ZBufferScanlineArrayBackup | DAT_03363630
    CMP EAX,ECX                         ; 005747fa
    JL 0x005747eb                       ; 005747fc
        ;   XREF to: 005747eb (CONDITIONAL_JUMP)  ; LAB_005747eb
    MOV EAX,EAX                         ; 005747fe
    POP ESI                             ; 00574800
        ;   Label: LAB_00574800
    RET                                 ; 00574801
    PUSH EBX                            ; 00574802
        ;   Label: LAB_00574802
    MOV ECX,0x6463fe                    ; 00574803 | = "..\\core\\setdir.cpp"
    MOV EBX,0x67                        ; 00574808
    PUSH 0x646411                       ; 0057480d | = "saveZBufferTable - already saved!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00574812 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00574818 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057481e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00574823
    POP EBX                             ; 00574826
    JMP 0x005747da                      ; 00574827
        ;   XREF to: 005747da (UNCONDITIONAL_JUMP)  ; LAB_005747da

