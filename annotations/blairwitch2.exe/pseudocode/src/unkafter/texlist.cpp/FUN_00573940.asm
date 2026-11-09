; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * unkafter_texlist_cpp_FUN_00573940(undefined4 *param_1)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_00574d50 at 00574d6c
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573940
        ;   Label: unkafter_texlist.cpp_FUN_00573940
    MOV EBX,dword ptr [ESP + 0x8]       ; 00573941
    PUSH 0x18000                        ; 00573945
    MOV dword ptr [EBX + 0x18004],0x0   ; 0057394a
    PUSH 0x0                            ; 00573954
    LEA EAX,[EBX + 0x4]                 ; 00573956
    MOV dword ptr [EBX],0x0             ; 00573959
    PUSH EAX                            ; 0057395f
    MOV dword ptr [EBX + 0x18008],0x0   ; 00573960
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057396a
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057396f
    MOV EAX,EBX                         ; 00573972
    POP EBX                             ; 00573974
    RET                                 ; 00573975

