; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setdir.cpp_CZThumb_restoreZBufferTable_FUN_00574830(CZThumb * this_ptr, int count)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   count
;
; Referenced Globals:
;   TerminatedCString s_core_setdir_cpp_00646433
;   TerminatedCString s_saveZBufferTable_not_sav_00646446
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

    PUSH ESI                            ; 00574830
        ;   Label: core_setdir.cpp_CZThumb_restoreZBufferTable_FUN_00574830
    PUSH EDI                            ; 00574831
    CMP dword ptr [0x0336362c],0x0      ; 00574832 | g_ZBufferScanlineArrayBackup
    JZ 0x0057486b                       ; 00574839
        ;   XREF to: 0057486b (CONDITIONAL_JUMP)  ; LAB_0057486b
    MOV ESI,dword ptr [ESP + 0xc]       ; 0057483b
        ;   Label: LAB_0057483b
    TEST ESI,ESI                        ; 0057483f
    JLE 0x00574860                      ; 00574841
        ;   XREF to: 00574860 (CONDITIONAL_JUMP)  ; LAB_00574860
    LEA ECX,[ESI*0x4 + 0x0]             ; 00574843
    XOR EAX,EAX                         ; 0057484a
    ADD EAX,0x4                         ; 0057484c
        ;   Label: LAB_0057484c
    MOV EDX,dword ptr [EAX + 0x3363628] ; 0057484f | g_ZBufferScanlineArrayBackup | DAT_03363630
    MOV dword ptr [EAX + 0x2cf7d58],EDX ; 00574855 | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    CMP EAX,ECX                         ; 0057485b
    JL 0x0057484c                       ; 0057485d
        ;   XREF to: 0057484c (CONDITIONAL_JUMP)  ; LAB_0057484c
    NOP                                 ; 0057485f
    XOR EDI,EDI                         ; 00574860
        ;   Label: LAB_00574860
    MOV dword ptr [0x0336362c],EDI      ; 00574862 | g_ZBufferScanlineArrayBackup
    POP EDI                             ; 00574868
    POP ESI                             ; 00574869
    RET                                 ; 0057486a
    PUSH EBX                            ; 0057486b
        ;   Label: LAB_0057486b
    MOV ECX,0x646433                    ; 0057486c | = "..\\core\\setdir.cpp"
    MOV EBX,0x70                        ; 00574871
    PUSH 0x646446                       ; 00574876 | = "saveZBufferTable - not saved!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0057487b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00574881 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00574887
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0057488c
    POP EBX                             ; 0057488f
    JMP 0x0057483b                      ; 00574890
        ;   XREF to: 0057483b (UNCONDITIONAL_JUMP)  ; LAB_0057483b

