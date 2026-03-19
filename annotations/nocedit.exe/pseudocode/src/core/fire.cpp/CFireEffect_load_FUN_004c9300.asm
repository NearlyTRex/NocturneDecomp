; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_load_FUN_004c9300(CFireEffect *this_ptr,_FILE *file_handle)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; char[256]        Stack[-0x110]:256  local_110
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e1c0b
;
; Referenced Globals:
;   TerminatedCString s_d_0062a0c3
;   CCrater[20] g_CraterPool
;   undefined4 g_CraterPool[1].active
;   int g_GunFlameAllocIndex
;
; Called Functions:
;   core_fire.cpp_CCrater_load_FUN_004c4880
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9300
        ;   Label: core_fire.cpp_CFireEffect_load_FUN_004c9300
    PUSH ESI                            ; 004c9301
    PUSH EDI                            ; 004c9302
    SUB ESP,0x104                       ; 004c9303
    MOV EDI,dword ptr [ESP + 0x118]     ; 004c9309
    MOV ECX,dword ptr [ESP + 0x114]     ; 004c9310
    XOR EDX,EDX                         ; 004c9317
    PUSH ECX                            ; 004c9319
    MOV dword ptr [ESP + 0x104],EDX     ; 004c931a
    CALL core_fire.cpp_CFireEffect_init_FUN_004c6c80 ; 004c9321
        ;   XREF to: 004c6c80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_004c6c80(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004c9326
    PUSH EDI                            ; 004c9329
    PUSH 0xff                           ; 004c932a
    LEA EBX,[ESP + 0x8]                 ; 004c932f
    PUSH EBX                            ; 004c9333
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004c9334
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004c9339
    LEA EBX,[ESP + 0x100]               ; 004c933c
    PUSH EBX                            ; 004c9343
    PUSH 0x62a0c3                       ; 004c9344 | = "%d\n"
    PUSH EDI                            ; 004c9349
    MOV EBX,0x2d6c6a4                   ; 004c934a | g_CraterPool
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004c934f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    LEA ESI,[EBX + 0x8c0]               ; 004c9354 | g_GunFlameAllocIndex
    ADD ESP,0xc                         ; 004c935a
    PUSH EDI                            ; 004c935d
        ;   Label: LAB_004c935d
    PUSH EBX                            ; 004c935e | g_CraterPool | g_CraterPool[1].active
    CALL core_fire.cpp_CCrater_load_FUN_004c4880 ; 004c935f
        ;   XREF to: 004c4880 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_load_FUN_004c4880(CCrater * this_ptr, _FILE * file_handle)
    ADD EBX,0x70                        ; 004c9364 | g_CraterPool[1].active
    ADD ESP,0x8                         ; 004c9367
    CMP EBX,ESI                         ; 004c936a
    JNZ 0x004c935d                      ; 004c936c
        ;   XREF to: 004c935d (CONDITIONAL_JUMP)  ; LAB_004c935d
    ADD ESP,0x104                       ; 004c936e
    POP EDI                             ; 004c9374
    POP ESI                             ; 004c9375
    POP EBX                             ; 004c9376
    RET                                 ; 004c9377

