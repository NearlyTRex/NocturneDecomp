; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CGore_save_FUN_004ee290(CGore *this_ptr,_FILE *file_handle)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 at 0052393c
;
; Referenced Globals:
;   TerminatedCString s_Gore_0062e452
;   TerminatedCString s_d_0062e460
;   TerminatedCString s_d_0062e464
;   int g_BloodSplatCount
;   CBloodSplat[2000] g_BloodSplats
;   undefined4 g_BloodSplats[1].expired
;   int g_BloodPoolCount
;   CBloodPool[32] g_BloodPools
;   undefined4 g_BloodPools[1].expired
;
; Called Functions:
;   core_gore.cpp_CBloodPool_save_FUN_004ed1c0
;   core_gore.cpp_CBloodSplat_save_FUN_004ecb90
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee290
        ;   Label: core_gore.cpp_CGore_save_FUN_004ee290
    PUSH ESI                            ; 004ee291
    PUSH EDI                            ; 004ee292
    PUSH EBP                            ; 004ee293
    MOV EDI,dword ptr [ESP + 0x18]      ; 004ee294
    PUSH 0x62e452                       ; 004ee298 | = "--- Gore ---\n"
    PUSH EDI                            ; 004ee29d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ee29e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004ee2a3
    MOV EDX,dword ptr [0x02da8720]      ; 004ee2a6 | g_BloodPoolCount
    PUSH EDX                            ; 004ee2ac
    PUSH 0x62e460                       ; 004ee2ad | = "%d\n"
    PUSH EDI                            ; 004ee2b2
    XOR ESI,ESI                         ; 004ee2b3
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ee2b5
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ECX,dword ptr [0x02da8720]      ; 004ee2ba | g_BloodPoolCount
    ADD ESP,0xc                         ; 004ee2c0
    TEST ECX,ECX                        ; 004ee2c3
    JLE 0x004ee2f0                      ; 004ee2c5
        ;   XREF to: 004ee2f0 (CONDITIONAL_JUMP)  ; LAB_004ee2f0
    MOV EBX,0x2da8724                   ; 004ee2c7 | g_BloodPools
    PUSH EDI                            ; 004ee2cc
        ;   Label: LAB_004ee2cc
    PUSH EBX                            ; 004ee2cd | g_BloodPools | g_BloodPools[1].expired
    INC ESI                             ; 004ee2ce
    CALL core_gore.cpp_CBloodPool_save_FUN_004ed1c0 ; 004ee2cf
        ;   XREF to: 004ed1c0 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool * this_ptr, _FILE * file_handle)
    MOV EBP,dword ptr [0x02da8720]      ; 004ee2d4 | g_BloodPoolCount
    ADD ESP,0x8                         ; 004ee2da
    ADD EBX,0x28                        ; 004ee2dd | g_BloodPools[1].expired
    CMP ESI,EBP                         ; 004ee2e0
    JL 0x004ee2cc                       ; 004ee2e2
        ;   XREF to: 004ee2cc (CONDITIONAL_JUMP)  ; LAB_004ee2cc
    LEA EAX,[EAX]                       ; 004ee2e4
    LEA EDX,[EDX]                       ; 004ee2ea
    MOV EAX,[0x02d873d8]                ; 004ee2f0 | g_BloodSplatCount
        ;   Label: LAB_004ee2f0
    PUSH EAX                            ; 004ee2f5
    PUSH 0x62e464                       ; 004ee2f6 | = "%d\n"
    PUSH EDI                            ; 004ee2fb
    XOR EBX,EBX                         ; 004ee2fc
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ee2fe
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDX,dword ptr [0x02d873d8]      ; 004ee303 | g_BloodSplatCount
    ADD ESP,0xc                         ; 004ee309
    TEST EDX,EDX                        ; 004ee30c
    JLE 0x004ee330                      ; 004ee30e
        ;   XREF to: 004ee330 (CONDITIONAL_JUMP)  ; LAB_004ee330
    MOV ESI,0x2d873dc                   ; 004ee310 | g_BloodSplats
    PUSH EDI                            ; 004ee315
        ;   Label: LAB_004ee315
    PUSH ESI                            ; 004ee316 | g_BloodSplats | g_BloodSplats[1].expired
    INC EBX                             ; 004ee317
    CALL core_gore.cpp_CBloodSplat_save_FUN_004ecb90 ; 004ee318
        ;   XREF to: 004ecb90 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodSplat_save_FUN_004ecb90(CBloodSplat * this_ptr, _FILE * file_handle)
    MOV ECX,dword ptr [0x02d873d8]      ; 004ee31d | g_BloodSplatCount
    ADD ESP,0x8                         ; 004ee323
    ADD ESI,0x44                        ; 004ee326
    CMP EBX,ECX                         ; 004ee329
    JL 0x004ee315                       ; 004ee32b
        ;   XREF to: 004ee315 (CONDITIONAL_JUMP)  ; LAB_004ee315
    LEA EAX,[EAX]                       ; 004ee32d
    POP EBP                             ; 004ee330
        ;   Label: LAB_004ee330
    POP EDI                             ; 004ee331
    POP ESI                             ; 004ee332
    POP EBX                             ; 004ee333
    RET                                 ; 004ee334

