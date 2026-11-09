; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_FUN_005663b0(int *total_memory,int *available_memory,int *memory_type)
;
; Parameters:
; int *            Stack[0x4]:4   total_memory
; int *            Stack[0x8]:4   available_memory
; int *            Stack[0xc]:4   memory_type
;
; XREF[1]:
;   core_menu.cpp_FUN_004e85a0 at 004e8644
;
; Referenced Globals:
;   undefined4 DAT_02cf606c
;   undefined4 DAT_02cf6108
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf6108],0x0      ; 005663b0 | DAT_02cf6108
        ;   Label: engine_special.cpp_FUN_005663b0
    JNZ 0x005663bc                      ; 005663b7
        ;   XREF to: 005663bc (CONDITIONAL_JUMP)  ; LAB_005663bc
    XOR EAX,EAX                         ; 005663b9
    RET                                 ; 005663bb
    PUSH ESI                            ; 005663bc
        ;   Label: LAB_005663bc
    PUSH EBX                            ; 005663bd
    MOV ECX,dword ptr [ESP + 0x14]      ; 005663be
    PUSH ECX                            ; 005663c2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005663c3
    PUSH EBX                            ; 005663c7
    MOV ESI,dword ptr [ESP + 0x14]      ; 005663c8
    PUSH ESI                            ; 005663cc
    CALL dword ptr [0x02cf606c]         ; 005663cd | DAT_02cf606c
    ADD ESP,0xc                         ; 005663d3
    POP EBX                             ; 005663d6
    POP ESI                             ; 005663d7
    RET                                 ; 005663d8

