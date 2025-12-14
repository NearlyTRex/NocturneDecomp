; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_pod.cpp_CPod_remount_FUN_00550af0(CPod * this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_00640722
;   TerminatedCString s_Can_t_re_mount_s_00640734
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550af0
        ;   Label: engine_pod.cpp_CPod_remount_FUN_00550af0
    PUSH ESI                            ; 00550af1
    PUSH EDI                            ; 00550af2
    PUSH EBP                            ; 00550af3
    SUB ESP,0x100                       ; 00550af4
    MOV EAX,dword ptr [ESP + 0x114]     ; 00550afa
    MOV EDX,dword ptr [EAX]             ; 00550b01
    XOR EBP,EBP                         ; 00550b03
    TEST EDX,EDX                        ; 00550b05
    JLE 0x00550b51                      ; 00550b07
        ;   XREF to: 00550b51 (CONDITIONAL_JUMP)  ; LAB_00550b51
    MOV EBX,EAX                         ; 00550b09
    MOV ESI,dword ptr [EBX + 0x4]       ; 00550b0b
        ;   Label: LAB_00550b0b
    MOV EDI,ESP                         ; 00550b0e
    ADD ESI,0x4                         ; 00550b10
    PUSH EDI                            ; 00550b13
    MOV AL,byte ptr [ESI]               ; 00550b14
        ;   Label: LAB_00550b14
    MOV byte ptr [EDI],AL               ; 00550b16
    CMP AL,0x0                          ; 00550b18
    JZ 0x00550b2c                       ; 00550b1a
        ;   XREF to: 00550b2c (CONDITIONAL_JUMP)  ; LAB_00550b2c
    MOV AL,byte ptr [ESI + 0x1]         ; 00550b1c
    ADD ESI,0x2                         ; 00550b1f
    MOV byte ptr [EDI + 0x1],AL         ; 00550b22
    ADD EDI,0x2                         ; 00550b25
    CMP AL,0x0                          ; 00550b28
    JNZ 0x00550b14                      ; 00550b2a
        ;   XREF to: 00550b14 (CONDITIONAL_JUMP)  ; LAB_00550b14
    POP EDI                             ; 00550b2c
        ;   Label: LAB_00550b2c
    MOV EAX,ESP                         ; 00550b2d
    PUSH EAX                            ; 00550b2f
    MOV ESI,dword ptr [EBX + 0x4]       ; 00550b30
    PUSH ESI                            ; 00550b33
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 00550b34
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 00550b39
    TEST EAX,EAX                        ; 00550b3c
    JZ 0x00550b5c                       ; 00550b3e
        ;   XREF to: 00550b5c (CONDITIONAL_JUMP)  ; LAB_00550b5c
    MOV EAX,dword ptr [ESP + 0x114]     ; 00550b40
        ;   Label: LAB_00550b40
    INC EBP                             ; 00550b47
    MOV ECX,dword ptr [EAX]             ; 00550b48
    ADD EBX,0x4                         ; 00550b4a
    CMP EBP,ECX                         ; 00550b4d
    JL 0x00550b0b                       ; 00550b4f
        ;   XREF to: 00550b0b (CONDITIONAL_JUMP)  ; LAB_00550b0b
    ADD ESP,0x100                       ; 00550b51
        ;   Label: LAB_00550b51
    POP EBP                             ; 00550b57
    POP EDI                             ; 00550b58
    POP ESI                             ; 00550b59
    POP EBX                             ; 00550b5a
    RET                                 ; 00550b5b
    MOV dword ptr [0x02f0ca4c],0x3b3    ; 00550b5c | g_CurrentLineNumber
        ;   Label: LAB_00550b5c
    MOV EAX,ESP                         ; 00550b66
    PUSH EAX                            ; 00550b68
    MOV EDI,0x640722                    ; 00550b69 | = "..\\engine\\pod.cpp"
    PUSH 0x640734                       ; 00550b6e | = "Can't re-mount %s"
    MOV dword ptr [0x02f0ca48],EDI      ; 00550b73 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00550b79
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00550b7e
    JMP 0x00550b40                      ; 00550b81
        ;   XREF to: 00550b40 (UNCONDITIONAL_JUMP)  ; LAB_00550b40

