; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_FUN_004012a0(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004c8440 at 004c84b9
;   core_main.c_FUN_004c90e0 at 004c936b
;
; Referenced Globals:
;   undefined4 DAT_006afa38
;
; Called Functions:
;   crt_unknown.c_FUN_005638d0
;   wincore_wddvmem.cpp_FUN_00552cb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x006afa38]      ; 004012a0 | DAT_006afa38
        ;   Label: engine_2d.c_FUN_004012a0
    TEST EDX,EDX                        ; 004012a6
    JZ 0x00552cb0                       ; 004012a8
        ;   XREF to: 00552cb0 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004012ae
    PUSH EDX                            ; 004012af
    CALL crt_unknown.c_FUN_005638d0     ; 004012b0
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    XOR EBX,EBX                         ; 004012b5
    ADD ESP,0x4                         ; 004012b7
    MOV dword ptr [0x006afa38],EBX      ; 004012ba | DAT_006afa38
    POP EBX                             ; 004012c0
    JMP 0x00552cb0                      ; 004012c1
        ;   XREF to: 00552cb0 (UNCONDITIONAL_CALL)

