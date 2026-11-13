; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00597900(int param_1)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_00597cf0 at 00597cf7
;
; Referenced Globals:
;   undefined4 DAT_02c8a634
;
; Called Functions:
;   engine_texture.cpp_FUN_00597140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597900
        ;   Label: engine_texture.cpp_FUN_00597900
    PUSH EBP                            ; 00597901
    MOV EAX,dword ptr [ESP + 0xc]       ; 00597902
    MOV EDX,dword ptr [EAX + 0x18004]   ; 00597906
    XOR EBX,EBX                         ; 0059790c
    TEST EDX,EDX                        ; 0059790e
    JLE 0x00597966                      ; 00597910
        ;   XREF to: 00597966 (CONDITIONAL_JUMP)  ; LAB_00597966
    PUSH EDI                            ; 00597912
    PUSH ESI                            ; 00597913
    MOV EDI,0x2c8a638                   ; 00597914
    LEA EBP,[EAX + 0x8]                 ; 00597919
    MOV ESI,EBP                         ; 0059791c
        ;   Label: LAB_0059791c
    MOV dword ptr [0x02c8a634],EBX      ; 0059791e | DAT_02c8a634
    PUSH EDI                            ; 00597924
    MOV AL,byte ptr [ESI]               ; 00597925
        ;   Label: LAB_00597925
    MOV byte ptr [EDI],AL               ; 00597927
    CMP AL,0x0                          ; 00597929
    JZ 0x0059793d                       ; 0059792b
        ;   XREF to: 0059793d (CONDITIONAL_JUMP)  ; LAB_0059793d
    MOV AL,byte ptr [ESI + 0x1]         ; 0059792d
    ADD ESI,0x2                         ; 00597930
    MOV byte ptr [EDI + 0x1],AL         ; 00597933
    ADD EDI,0x2                         ; 00597936
    CMP AL,0x0                          ; 00597939
    JNZ 0x00597925                      ; 0059793b
        ;   XREF to: 00597925 (CONDITIONAL_JUMP)  ; LAB_00597925
    POP EDI                             ; 0059793d
        ;   Label: LAB_0059793d
    PUSH 0x1                            ; 0059793e
    PUSH 0x2c8a630                      ; 00597940
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00597945
    PUSH ECX                            ; 00597949
    CALL engine_texture.cpp_FUN_00597140 ; 0059794a
        ;   XREF to: 00597140 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597140()
    ADD ESP,0xc                         ; 0059794f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00597952
    INC EBX                             ; 00597956
    MOV ESI,dword ptr [EAX + 0x18004]   ; 00597957
    ADD EBP,0x60                        ; 0059795d
    CMP EBX,ESI                         ; 00597960
    JL 0x0059791c                       ; 00597962
        ;   XREF to: 0059791c (CONDITIONAL_JUMP)  ; LAB_0059791c
    POP ESI                             ; 00597964
    POP EDI                             ; 00597965
    POP EBP                             ; 00597966
        ;   Label: LAB_00597966
    POP EBX                             ; 00597967
    RET                                 ; 00597968

