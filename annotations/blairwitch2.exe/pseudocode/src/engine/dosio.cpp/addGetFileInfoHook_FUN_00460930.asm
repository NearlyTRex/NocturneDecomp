; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00460930(FileSearchHandlerFunc *handler)
;
; Parameters:
; FileSearchHandlerFunc * Stack[0x4]:4   handler
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e4746
;
; Referenced Globals:
;   TerminatedCString s_engine_dosio_c_005d0c2b
;   TerminatedCString s_addGetFileInfoHook_too_m_005d0c3d
;   undefined4 DAT_01b4d370
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00460930
        ;   Label: engine_dosio.cpp_addGetFileInfoHook_FUN_00460930
    CMP dword ptr [0x01b4d370],0x5      ; 00460931 | DAT_01b4d370
    JGE 0x00460955                      ; 00460938
        ;   XREF to: 00460955 (CONDITIONAL_JUMP)  ; LAB_00460955
    MOV EAX,[0x01b4d370]                ; 0046093a | DAT_01b4d370
        ;   Label: LAB_0046093a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046093f
    LEA ESI,[EAX + 0x1]                 ; 00460943
    MOV dword ptr [EAX*0x4 + 0x1b4d374],EDX ; 00460946
    MOV dword ptr [0x01b4d370],ESI      ; 0046094d | DAT_01b4d370
    POP ESI                             ; 00460953
    RET                                 ; 00460954
    PUSH EBX                            ; 00460955
        ;   Label: LAB_00460955
    MOV ECX,0x5d0c2b                    ; 00460956 | = "..\\engine\\dosio.c"
    MOV EBX,0x6a                        ; 0046095b
    PUSH 0x5d0c3d                       ; 00460960 | = "addGetFileInfoHook - too many!"
    MOV dword ptr [0x01d046a0],ECX      ; 00460965 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0046096b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00460971
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00460976
    POP EBX                             ; 00460979
    JMP 0x0046093a                      ; 0046097a
        ;   XREF to: 0046093a (UNCONDITIONAL_JUMP)  ; LAB_0046093a

