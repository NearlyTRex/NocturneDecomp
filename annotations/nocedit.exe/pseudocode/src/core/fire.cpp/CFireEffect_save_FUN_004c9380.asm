; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CFireEffect_save_FUN_004c9380(CFireEffect *this_ptr,FILE *file_handle)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e0e78
;
; Referenced Globals:
;   TerminatedCString s_Fire_state_0062a0c7
;   TerminatedCString s_s_1_0062a0d3
;   CCrater[20] g_CraterPool
;   undefined4 DAT_02d6c714
;   CCrater* g_CraterActiveListHead
;
; Called Functions:
;   core_fire.cpp_CCrater_save_FUN_004c49c0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9380
        ;   Label: core_fire.cpp_CFireEffect_save_FUN_004c9380
    PUSH ESI                            ; 004c9381
    PUSH EDI                            ; 004c9382
    MOV ESI,dword ptr [ESP + 0x14]      ; 004c9383
    PUSH 0x62a0c7                       ; 004c9387 | = "Fire state\n"
    PUSH ESI                            ; 004c938c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004c938d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 004c9392
    PUSH 0x62a0d3                       ; 004c9395 | = "1\n"
    MOV EBX,0x2d6c6a4                   ; 004c939a | g_CraterPool
    PUSH ESI                            ; 004c939f
    LEA EDI,[EBX + 0x8c0]               ; 004c93a0 | g_CraterActiveListHead
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004c93a6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 004c93ab
    PUSH ESI                            ; 004c93ae
        ;   Label: LAB_004c93ae
    PUSH EBX                            ; 004c93af | g_CraterPool | DAT_02d6c714
    CALL core_fire.cpp_CCrater_save_FUN_004c49c0 ; 004c93b0
        ;   XREF to: 004c49c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_save_FUN_004c49c0(CCrater * this_ptr, FILE * file_handle)
    ADD EBX,0x70                        ; 004c93b5 | DAT_02d6c714
    ADD ESP,0x8                         ; 004c93b8
    CMP EBX,EDI                         ; 004c93bb
    JNZ 0x004c93ae                      ; 004c93bd
        ;   XREF to: 004c93ae (CONDITIONAL_JUMP)  ; LAB_004c93ae
    POP EDI                             ; 004c93bf
    POP ESI                             ; 004c93c0
    POP EBX                             ; 004c93c1
    RET                                 ; 004c93c2

