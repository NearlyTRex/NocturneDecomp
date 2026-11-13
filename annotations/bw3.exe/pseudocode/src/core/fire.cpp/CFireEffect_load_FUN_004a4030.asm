; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_load_FUN_004a4030(CFireEffect *this_ptr,_FILE *file_handle)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_game.cpp_FUN_004bdfb0 at 004be8ac
;
; Referenced Globals:
;   undefined4 DAT_005c0a50
;
; Called Functions:
;   core_fire.cpp_CCrater_load_FUN_0049dbe0
;   core_fire.cpp_CFireEffect_init_FUN_004a1480
;   crt_stdio.c_fgets_FUN_005a3f00
;   crt_stdio.c_fscanf_FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4030
        ;   Label: core_fire.cpp_CFireEffect_load_FUN_004a4030
    PUSH ESI                            ; 004a4031
    PUSH EDI                            ; 004a4032
    SUB ESP,0x104                       ; 004a4033
    MOV EDI,dword ptr [ESP + 0x118]     ; 004a4039
    MOV ECX,dword ptr [ESP + 0x114]     ; 004a4040
    XOR EDX,EDX                         ; 004a4047
    PUSH ECX                            ; 004a4049
    MOV dword ptr [ESP + 0x104],EDX     ; 004a404a
    CALL core_fire.cpp_CFireEffect_init_FUN_004a1480 ; 004a4051
        ;   XREF to: 004a1480 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_004a1480(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004a4056
    PUSH EDI                            ; 004a4059
    PUSH 0xff                           ; 004a405a
    LEA EBX,[ESP + 0x8]                 ; 004a405f
    PUSH EBX                            ; 004a4063
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004a4064
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005a3f00(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004a4069
    LEA EBX,[ESP + 0x100]               ; 004a406c
    PUSH EBX                            ; 004a4073
    PUSH 0x5c0a50                       ; 004a4074 | DAT_005c0a50
    PUSH EDI                            ; 004a4079
    MOV EBX,0x1cfaff8                   ; 004a407a
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004a407f
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    LEA ESI,[EBX + 0x8c0]               ; 004a4084
    ADD ESP,0xc                         ; 004a408a
    PUSH EDI                            ; 004a408d
        ;   Label: LAB_004a408d
    PUSH EBX                            ; 004a408e
    CALL core_fire.cpp_CCrater_load_FUN_0049dbe0 ; 004a408f
        ;   XREF to: 0049dbe0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_load_FUN_0049dbe0(CCrater * this_ptr, _FILE * file_handle)
    ADD EBX,0x70                        ; 004a4094
    ADD ESP,0x8                         ; 004a4097
    CMP EBX,ESI                         ; 004a409a
    JNZ 0x004a408d                      ; 004a409c
        ;   XREF to: 004a408d (CONDITIONAL_JUMP)  ; LAB_004a408d
    ADD ESP,0x104                       ; 004a409e
    POP EDI                             ; 004a40a4
    POP ESI                             ; 004a40a5
    POP EBX                             ; 004a40a6
    RET                                 ; 004a40a7

