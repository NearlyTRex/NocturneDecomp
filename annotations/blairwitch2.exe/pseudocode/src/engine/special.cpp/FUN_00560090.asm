; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_FUN_00560090(int *total_memory,int *available_memory,int *memory_type)
;
; Parameters:
; int *            Stack[0x4]:4   total_memory
; int *            Stack[0x8]:4   available_memory
; int *            Stack[0xc]:4   memory_type
;
; XREF[1]:
;   core_menu.cpp_FUN_004ebf10 at 004ebfc0
;
; Referenced Globals:
;   undefined4 DAT_0264bc40
;   undefined4 DAT_0264bcdc
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bcdc],0x0      ; 00560090 | DAT_0264bcdc
        ;   Label: engine_special.cpp_FUN_00560090
    JNZ 0x0056009c                      ; 00560097
        ;   XREF to: 0056009c (CONDITIONAL_JUMP)  ; LAB_0056009c
    XOR EAX,EAX                         ; 00560099
    RET                                 ; 0056009b
    PUSH ESI                            ; 0056009c
        ;   Label: LAB_0056009c
    PUSH EBX                            ; 0056009d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056009e
    PUSH ECX                            ; 005600a2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005600a3
    PUSH EBX                            ; 005600a7
    MOV ESI,dword ptr [ESP + 0x14]      ; 005600a8
    PUSH ESI                            ; 005600ac
    CALL dword ptr [0x0264bc40]         ; 005600ad | DAT_0264bc40
    ADD ESP,0xc                         ; 005600b3
    POP EBX                             ; 005600b6
    POP ESI                             ; 005600b7
    RET                                 ; 005600b8

