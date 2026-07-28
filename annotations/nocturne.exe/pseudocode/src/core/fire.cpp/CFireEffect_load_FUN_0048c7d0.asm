; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_load_FUN_0048c7d0(CFireEffect *this_ptr,_FILE *file_handle)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_game.cpp_FUN_004a4170 at 004a4aba
;
; Referenced Globals:
;   TerminatedCString s_d_0058152c
;
; Called Functions:
;   core_fire.cpp_CCrater_load_FUN_00487d50
;   core_fire.cpp_CFireEffect_init_FUN_0048a150
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c7d0
        ;   Label: core_fire.cpp_CFireEffect_load_FUN_0048c7d0
    PUSH ESI                            ; 0048c7d1
    PUSH EDI                            ; 0048c7d2
    SUB ESP,0x104                       ; 0048c7d3
    MOV EDI,dword ptr [ESP + 0x118]     ; 0048c7d9
    MOV ECX,dword ptr [ESP + 0x114]     ; 0048c7e0
    XOR EDX,EDX                         ; 0048c7e7
    PUSH ECX                            ; 0048c7e9
    MOV dword ptr [ESP + 0x104],EDX     ; 0048c7ea
    CALL core_fire.cpp_CFireEffect_init_FUN_0048a150 ; 0048c7f1
        ;   XREF to: 0048a150 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_0048a150(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 0048c7f6
    PUSH EDI                            ; 0048c7f9
    PUSH 0xff                           ; 0048c7fa
    LEA EBX,[ESP + 0x8]                 ; 0048c7ff
    PUSH EBX                            ; 0048c803
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0048c804
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0048c809
    LEA EBX,[ESP + 0x100]               ; 0048c80c
    PUSH EBX                            ; 0048c813
    PUSH 0x58152c                       ; 0048c814 | = "%d\n"
    PUSH EDI                            ; 0048c819
    MOV EBX,0x1c625f8                   ; 0048c81a
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0048c81f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    LEA ESI,[EBX + 0x8c0]               ; 0048c824
    ADD ESP,0xc                         ; 0048c82a
    PUSH EDI                            ; 0048c82d
        ;   Label: LAB_0048c82d
    PUSH EBX                            ; 0048c82e
    CALL core_fire.cpp_CCrater_load_FUN_00487d50 ; 0048c82f
        ;   XREF to: 00487d50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_load_FUN_00487d50(CCrater * this_ptr, _FILE * file_handle)
    ADD EBX,0x70                        ; 0048c834
    ADD ESP,0x8                         ; 0048c837
    CMP EBX,ESI                         ; 0048c83a
    JNZ 0x0048c82d                      ; 0048c83c
        ;   XREF to: 0048c82d (CONDITIONAL_JUMP)  ; LAB_0048c82d
    ADD ESP,0x104                       ; 0048c83e
    POP EDI                             ; 0048c844
    POP ESI                             ; 0048c845
    POP EBX                             ; 0048c846
    RET                                 ; 0048c847

