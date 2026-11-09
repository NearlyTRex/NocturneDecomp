; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005ce010(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; Referenced Globals:
;   undefined1* PTR_unkafter_2d.cpp_FUN_005ceab0_00626b70 = 005ceab0
;   undefined1* PTR_unkafter_2d.cpp_FUN_005ceba8_00626b74 = 005ceba8
;   undefined1* PTR_unkafter_2d.cpp_FUN_005cdfd0_00626b78 = 005cdfd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce010
        ;   Label: unkafter_2d.cpp_FUN_005ce010
    PUSH ESI                            ; 005ce011
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ce012
    MOV ESI,dword ptr [ESP + 0x10]      ; 005ce016
    MOV ECX,dword ptr [ESP + 0x14]      ; 005ce01a
    TEST EBX,EBX                        ; 005ce01e
    JZ 0x005ce031                       ; 005ce020
        ;   XREF to: 005ce031 (CONDITIONAL_JUMP)  ; LAB_005ce031
    MOV EAX,dword ptr [EBX]             ; 005ce022
    MOV EDX,dword ptr [0x00626b70]      ; 005ce024 | PTR_unkafter_2d.cpp_FUN_005ceab0_00626b70
    MOV [0x00626b70],EAX                ; 005ce02a | PTR_unkafter_2d.cpp_FUN_005ceab0_00626b70
    MOV dword ptr [EBX],EDX             ; 005ce02f
    TEST ESI,ESI                        ; 005ce031
        ;   Label: LAB_005ce031
    JZ 0x005ce044                       ; 005ce033
        ;   XREF to: 005ce044 (CONDITIONAL_JUMP)  ; LAB_005ce044
    MOV EAX,dword ptr [ESI]             ; 005ce035
    MOV EDX,dword ptr [0x00626b74]      ; 005ce037 | PTR_unkafter_2d.cpp_FUN_005ceba8_00626b74
    MOV [0x00626b74],EAX                ; 005ce03d | PTR_unkafter_2d.cpp_FUN_005ceba8_00626b74
    MOV dword ptr [ESI],EDX             ; 005ce042
    TEST ECX,ECX                        ; 005ce044
        ;   Label: LAB_005ce044
    JZ 0x005ce057                       ; 005ce046
        ;   XREF to: 005ce057 (CONDITIONAL_JUMP)  ; LAB_005ce057
    MOV EAX,dword ptr [ECX]             ; 005ce048
    MOV EDX,dword ptr [0x00626b78]      ; 005ce04a | PTR_unkafter_2d.cpp_FUN_005cdfd0_00626b78
    MOV [0x00626b78],EAX                ; 005ce050 | PTR_unkafter_2d.cpp_FUN_005cdfd0_00626b78
    MOV dword ptr [ECX],EDX             ; 005ce055
    POP ESI                             ; 005ce057
        ;   Label: LAB_005ce057
    POP EBX                             ; 005ce058
    RET                                 ; 005ce059

