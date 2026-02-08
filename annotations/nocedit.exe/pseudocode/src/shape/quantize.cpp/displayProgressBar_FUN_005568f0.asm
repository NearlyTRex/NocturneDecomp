; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_quantize_cpp_displayProgressBar_FUN_005568f0(char *label,int total_count,int current_index)
;
; Parameters:
; char *           Stack[0x4]:4   label
; int              Stack[0x8]:4   total_count
; int              Stack[0xc]:4   current_index
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined1       Stack[-0x77]:1  local_77
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_s_00641092
;   TerminatedCString s_s_006410ae
;   double DOUBLE_006410cb = 20
;   int g_QuantizeCurrentLineNumber
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005568f0
        ;   Label: shape_quantize.cpp_displayProgressBar_FUN_005568f0
    PUSH ESI                            ; 005568f1
    SUB ESP,0x70                        ; 005568f2
    MOV EAX,dword ptr [ESP + 0x84]      ; 005568f5
    MOV dword ptr [ESP + 0x68],EAX      ; 005568fc
    MOV EAX,dword ptr [ESP + 0x80]      ; 00556900
    MOV dword ptr [ESP + 0x6c],EAX      ; 00556907
    FILD dword ptr [ESP + 0x68]         ; 0055690b
    FILD dword ptr [ESP + 0x6c]         ; 0055690f
    FDIVP                               ; 00556913
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00556915
    PUSH EDX                            ; 00556919
    FMUL double ptr [0x006410cb]        ; 0055691a | DOUBLE_006410cb
    PUSH 0x641092                       ; 00556920 | = "\r%s [                    ]\r"
    LEA EAX,[ESP + 0x8]                 ; 00556925
    LEA ESI,[ESP + 0x8]                 ; 00556929
    PUSH EAX                            ; 0055692d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0055692e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x70]        ; 00556933
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00556937
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055693c
    MOV DL,0x5b                         ; 0055693f
    MOV ECX,dword ptr [ESP + 0x64]      ; 00556941
    MOV AL,byte ptr [ESI]               ; 00556945
        ;   Label: LAB_00556945
    CMP AL,DL                           ; 00556947
    JZ 0x0055695d                       ; 00556949
        ;   XREF to: 0055695d (CONDITIONAL_JUMP)  ; LAB_0055695d
    CMP AL,0x0                          ; 0055694b
    JZ 0x0055695b                       ; 0055694d
        ;   XREF to: 0055695b (CONDITIONAL_JUMP)  ; LAB_0055695b
    INC ESI                             ; 0055694f
    MOV AL,byte ptr [ESI]               ; 00556950
    CMP AL,DL                           ; 00556952
    JZ 0x0055695d                       ; 00556954
        ;   XREF to: 0055695d (CONDITIONAL_JUMP)  ; LAB_0055695d
    INC ESI                             ; 00556956
    CMP AL,0x0                          ; 00556957
    JNZ 0x00556945                      ; 00556959
        ;   XREF to: 00556945 (CONDITIONAL_JUMP)  ; LAB_00556945
    SUB ESI,ESI                         ; 0055695b
        ;   Label: LAB_0055695b
    PUSH ECX                            ; 0055695d
        ;   Label: LAB_0055695d
    PUSH 0x2e                           ; 0055695e
    INC ESI                             ; 00556960
    PUSH ESI                            ; 00556961
    CALL crt_memory.c_memset_FUN_005fde40 ; 00556962
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EDX,dword ptr [0x03106158]      ; 00556967 | g_QuantizeCurrentLineNumber
    ADD EDX,0x4                         ; 0055696d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00556970
    SUB EAX,EDX                         ; 00556977
    SHL EAX,0x2                         ; 00556979
    ADD ESP,0xc                         ; 0055697c
    SUB EAX,EDX                         ; 0055697f
    PUSH EAX                            ; 00556981
    PUSH 0x0                            ; 00556982
    LEA EAX,[ESP + 0x8]                 ; 00556984
    PUSH EAX                            ; 00556988
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00556989
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0055698e
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00556991
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,dword ptr [ESP + 0x80]      ; 00556996
    MOV EBX,dword ptr [ESP + 0x84]      ; 0055699d
    DEC EAX                             ; 005569a4
    CMP EAX,EBX                         ; 005569a5
    JZ 0x005569b1                       ; 005569a7
        ;   XREF to: 005569b1 (CONDITIONAL_JUMP)  ; LAB_005569b1
    XOR EAX,EAX                         ; 005569a9
    ADD ESP,0x70                        ; 005569ab
    POP ESI                             ; 005569ae
    POP EBX                             ; 005569af
    RET                                 ; 005569b0
    MOV ESI,dword ptr [ESP + 0x7c]      ; 005569b1
        ;   Label: LAB_005569b1
    PUSH ESI                            ; 005569b5
    PUSH 0x6410ae                       ; 005569b6 | = "%s [....................]\n"
    LEA EAX,[ESP + 0x8]                 ; 005569bb
    PUSH EAX                            ; 005569bf
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005569c0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,dword ptr [0x03106158]      ; 005569c5 | g_QuantizeCurrentLineNumber
    ADD EDX,0x4                         ; 005569cb
    LEA EAX,[EDX*0x4 + 0x0]             ; 005569ce
    SUB EAX,EDX                         ; 005569d5
    SHL EAX,0x2                         ; 005569d7
    ADD ESP,0xc                         ; 005569da
    SUB EAX,EDX                         ; 005569dd
    PUSH EAX                            ; 005569df
    PUSH 0x0                            ; 005569e0
    LEA EAX,[ESP + 0x8]                 ; 005569e2
    PUSH EAX                            ; 005569e6
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005569e7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005569ec
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005569ef
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    XOR EAX,EAX                         ; 005569f4
    ADD ESP,0x70                        ; 005569f6
    POP ESI                             ; 005569f9
    POP EBX                             ; 005569fa
    RET                                 ; 005569fb

