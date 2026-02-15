; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CInputString_calcX_FUN_0049d8f0(CInputString *this_ptr,int char_index)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_index
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   shape_edittool.cpp_CInputString_draw_FUN_0049d9b0 at 0049da83
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eec
;   TerminatedCString s_CInputString_calcX_strin_00622f02
;   CBitFont* g_EditorFont
;   char[1024] g_TempStringBuffer
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d8f0
        ;   Label: shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0
    PUSH EBP                            ; 0049d8f1
    SUB ESP,0x4                         ; 0049d8f2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049d8f5
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049d8f9
    TEST EBX,EBX                        ; 0049d8fd
    JL 0x0049d978                       ; 0049d8ff
        ;   XREF to: 0049d978 (CONDITIONAL_JUMP)  ; LAB_0049d978
    MOV EDX,dword ptr [EAX + 0x130]     ; 0049d905
    CMP EBX,EDX                         ; 0049d90b
    JLE 0x0049d911                      ; 0049d90d
        ;   XREF to: 0049d911 (CONDITIONAL_JUMP)  ; LAB_0049d911
    MOV EBX,EDX                         ; 0049d90f
    PUSH EDI                            ; 0049d911
        ;   Label: LAB_0049d911
    CMP dword ptr [EAX + 0x13c],0x0     ; 0049d912
    JZ 0x0049d97c                       ; 0049d919
        ;   XREF to: 0049d97c (CONDITIONAL_JUMP)  ; LAB_0049d97c
    CMP EBX,0x400                       ; 0049d91b
    JC 0x0049d946                       ; 0049d921
        ;   XREF to: 0049d946 (CONDITIONAL_JUMP)  ; LAB_0049d946
    MOV EDI,0x622eec                    ; 0049d923 | = "..\\shape\\edittool.cpp"
    MOV EBP,0x1be                       ; 0049d928
    PUSH 0x622f02                       ; 0049d92d | = "CInputString::calcX - string too big ..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0049d932 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0049d938 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049d93e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049d943
    PUSH EBX                            ; 0049d946
        ;   Label: LAB_0049d946
    PUSH 0x2a                           ; 0049d947
    PUSH 0x2cf2678                      ; 0049d949 | g_TempStringBuffer
    CALL crt_memory.c_memset_FUN_005fde40 ; 0049d94e
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0049d953
    XOR AH,AH                           ; 0049d956
    PUSH 0x2cf2678                      ; 0049d958 | g_TempStringBuffer
    MOV byte ptr [EBX + 0x2cf2678],AH   ; 0049d95d | g_TempStringBuffer
    MOV EAX,[0x02cf1cd0]                ; 0049d963 | g_EditorFont
    PUSH EAX                            ; 0049d968
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 0049d969
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0049d96e
    POP EDI                             ; 0049d971
    ADD ESP,0x4                         ; 0049d972
        ;   Label: LAB_0049d972
    POP EBP                             ; 0049d975
    POP EBX                             ; 0049d976
    RET                                 ; 0049d977
    XOR EAX,EAX                         ; 0049d978
        ;   Label: LAB_0049d978
    JMP 0x0049d972                      ; 0049d97a
        ;   XREF to: 0049d972 (UNCONDITIONAL_JUMP)  ; LAB_0049d972
    PUSH ESI                            ; 0049d97c
        ;   Label: LAB_0049d97c
    PUSH EAX                            ; 0049d97d
    ADD EBX,EAX                         ; 0049d97e
    XOR EDX,EDX                         ; 0049d980
    MOV ESI,dword ptr [0x02cf1cd0]      ; 0049d982 | g_EditorFont
    MOV DL,byte ptr [EBX]               ; 0049d988
    PUSH ESI                            ; 0049d98a
    MOV dword ptr [ESP + 0x10],EDX      ; 0049d98b
    MOV byte ptr [EBX],0x0              ; 0049d98f
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 0049d992
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0049d997
    MOV DL,byte ptr [ESP + 0x8]         ; 0049d99a
    MOV byte ptr [EBX],DL               ; 0049d99e
    POP ESI                             ; 0049d9a0
    POP EDI                             ; 0049d9a1
    ADD ESP,0x4                         ; 0049d9a2
    POP EBP                             ; 0049d9a5
    POP EBX                             ; 0049d9a6
    RET                                 ; 0049d9a7

