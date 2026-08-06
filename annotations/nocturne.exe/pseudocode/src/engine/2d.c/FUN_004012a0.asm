; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_FUN_004012a0(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004c90e0 at 004c936b
;   core_main.c_displayErrorAndQuit_FUN_004c8440 at 004c84b9
;
; Referenced Globals:
;   uchar* g_FontBitmapData
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;   wincore_wddvmem.cpp_FUN_00552cb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x006afa38]      ; 004012a0 | g_FontBitmapData
        ;   Label: engine_2d.c_FUN_004012a0
    TEST EDX,EDX                        ; 004012a6
    JZ 0x00552cb0                       ; 004012a8
        ;   XREF to: 00552cb0 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004012ae
    PUSH EDX                            ; 004012af
    CALL crt_memory.c_free_FUN_005638d0 ; 004012b0
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    XOR EBX,EBX                         ; 004012b5
    ADD ESP,0x4                         ; 004012b7
    MOV dword ptr [0x006afa38],EBX      ; 004012ba | g_FontBitmapData
    POP EBX                             ; 004012c0
    JMP 0x00552cb0                      ; 004012c1
        ;   XREF to: 00552cb0 (UNCONDITIONAL_CALL)

