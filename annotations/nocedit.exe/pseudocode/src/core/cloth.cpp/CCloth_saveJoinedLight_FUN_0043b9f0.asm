; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_0043b9f0(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320 at 0043c346
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_006184ca
;   TerminatedCString s_CCloth_saveJoinedLight_C_006184dc
;   TerminatedCString s_core_cloth_cpp_00618516
;   TerminatedCString s_CCloth_saveJoinedLight_M_00618528
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b9f0
        ;   Label: core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0
    PUSH ESI                            ; 0043b9f1
    PUSH EDI                            ; 0043b9f2
    PUSH EBP                            ; 0043b9f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0043b9f4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043b9f8
    TEST EDI,EDI                        ; 0043b9fc
    JZ 0x0043ba85                       ; 0043b9fe
        ;   XREF to: 0043ba85 (CONDITIONAL_JUMP)  ; LAB_0043ba85
    MOV EDI,dword ptr [EDI + 0x2230]    ; 0043ba04
        ;   Label: LAB_0043ba04
    TEST EDI,EDI                        ; 0043ba0a
    JL 0x0043baad                       ; 0043ba0c
        ;   XREF to: 0043baad (CONDITIONAL_JUMP)  ; LAB_0043baad
    MOV EAX,dword ptr [EBP + 0x3f028]   ; 0043ba12
        ;   Label: LAB_0043ba12
    XOR ESI,ESI                         ; 0043ba18
    TEST EAX,EAX                        ; 0043ba1a
    JLE 0x0043ba80                      ; 0043ba1c
        ;   XREF to: 0043ba80 (CONDITIONAL_JUMP)  ; LAB_0043ba80
    LEA EAX,[EDI*0x4 + 0x0]             ; 0043ba1e
    SUB EAX,EDI                         ; 0043ba25
    SHL EAX,0x3                         ; 0043ba27
    ADD EAX,EDI                         ; 0043ba2a
    SHL EAX,0x4                         ; 0043ba2c
    LEA EBX,[EAX + EBP*0x1]             ; 0043ba2f
    MOV EAX,EBP                         ; 0043ba32
    MOV ECX,dword ptr [EBX + 0x3f1bc]   ; 0043ba34
        ;   Label: LAB_0043ba34
    IMUL ECX,ECX,0x30                   ; 0043ba3a
    MOV EDX,dword ptr [0x006703ec]      ; 0043ba3d | g_CDemonRendererPtr2
    MOV EDI,dword ptr [EDX]             ; 0043ba43 | g_CDemonRendererInstance
    MOV EDI,dword ptr [ECX + EDI*0x1 + 0x20] ; 0043ba45
    MOV dword ptr [EAX + 0x3f98c],EDI   ; 0043ba49
    MOV EDI,dword ptr [EDX]             ; 0043ba4f | g_CDemonRendererInstance
    MOV EDI,dword ptr [ECX + EDI*0x1 + 0x24] ; 0043ba51
    MOV dword ptr [EAX + 0x3fb1c],EDI   ; 0043ba55
    MOV EDX,dword ptr [EDX]             ; 0043ba5b | g_CDemonRendererInstance
    ADD EAX,0x4                         ; 0043ba5d
    MOV EDX,dword ptr [ECX + EDX*0x1 + 0x28] ; 0043ba60
    MOV dword ptr [EAX + 0x3fca8],EDX   ; 0043ba64
    INC ESI                             ; 0043ba6a
    MOV EDX,dword ptr [EBP + 0x3f028]   ; 0043ba6b
    ADD EBX,0x4                         ; 0043ba71
    CMP ESI,EDX                         ; 0043ba74
    JL 0x0043ba34                       ; 0043ba76
        ;   XREF to: 0043ba34 (CONDITIONAL_JUMP)  ; LAB_0043ba34
    LEA EAX,[EAX]                       ; 0043ba78
    MOV EDX,EDX                         ; 0043ba7e
    POP EBP                             ; 0043ba80
        ;   Label: LAB_0043ba80
    POP EDI                             ; 0043ba81
    POP ESI                             ; 0043ba82
    POP EBX                             ; 0043ba83
    RET                                 ; 0043ba84
    MOV EDX,0x6184ca                    ; 0043ba85 | = "..\\core\\cloth.cpp"
        ;   Label: LAB_0043ba85
    MOV ECX,0x4e3                       ; 0043ba8a
    PUSH 0x6184dc                       ; 0043ba8f | = "CCloth::saveJoinedLight - Can't save ..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0043ba94 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0043ba9a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043baa0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043baa5
    JMP 0x0043ba04                      ; 0043baa8
        ;   XREF to: 0043ba04 (UNCONDITIONAL_JUMP)  ; LAB_0043ba04
    MOV EBX,0x618516                    ; 0043baad | = "..\\core\\cloth.cpp"
        ;   Label: LAB_0043baad
    MOV ESI,0x4e8                       ; 0043bab2
    PUSH 0x618528                       ; 0043bab7 | = "CCloth::saveJoinedLight - Model wasn'..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0043babc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0043bac2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043bac8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043bacd
    JMP 0x0043ba12                      ; 0043bad0
        ;   XREF to: 0043ba12 (UNCONDITIONAL_JUMP)  ; LAB_0043ba12

