; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CGore_FUN_004ee1e0(CGore *this_ptr,_FILE *file_handle)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
;
; XREF[2]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e1a58
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 at 00523506
;
; Referenced Globals:
;   TerminatedCString s_d_0062e44a
;   TerminatedCString s_d_0062e44e
;   int INT_02d873d8
;   CBloodSplat[2000] DAT_02d873dc
;   undefined4 DAT_02d87420
;   int INT_02da8720
;   CBloodPool[32] DAT_02da8724
;   undefined4 DAT_02da874c
;
; Called Functions:
;   core_gore.cpp_CBloodPool_FUN_004ed160
;   core_gore.cpp_CBloodSplat_FUN_004ecb00
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee1e0
        ;   Label: core_gore.cpp_CGore_FUN_004ee1e0
    PUSH ESI                            ; 004ee1e1
    PUSH EDI                            ; 004ee1e2
    PUSH EBP                            ; 004ee1e3
    SUB ESP,0x100                       ; 004ee1e4
    MOV EDI,dword ptr [ESP + 0x118]     ; 004ee1ea
    PUSH EDI                            ; 004ee1f1
    PUSH 0xff                           ; 004ee1f2
    LEA EBX,[ESP + 0x8]                 ; 004ee1f7
    PUSH EBX                            ; 004ee1fb
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004ee1fc
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004ee201
    PUSH 0x2da8720                      ; 004ee204 | INT_02da8720
    PUSH 0x62e44a                       ; 004ee209 | = "%d\n"
    PUSH EDI                            ; 004ee20e
    XOR ESI,ESI                         ; 004ee20f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ee211
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EDX,dword ptr [0x02da8720]      ; 004ee216 | INT_02da8720
    ADD ESP,0xc                         ; 004ee21c
    TEST EDX,EDX                        ; 004ee21f
    JLE 0x004ee240                      ; 004ee221
        ;   XREF to: 004ee240 (CONDITIONAL_JUMP)  ; LAB_004ee240
    MOV EBX,0x2da8724                   ; 004ee223 | DAT_02da8724
    PUSH EDI                            ; 004ee228
        ;   Label: LAB_004ee228
    PUSH EBX                            ; 004ee229 | DAT_02da8724 | DAT_02da874c
    INC ESI                             ; 004ee22a
    CALL core_gore.cpp_CBloodPool_FUN_004ed160 ; 004ee22b
        ;   XREF to: 004ed160 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_FUN_004ed160(CBloodPool * this_ptr)
    MOV ECX,dword ptr [0x02da8720]      ; 004ee230 | INT_02da8720
    ADD ESP,0x8                         ; 004ee236
    ADD EBX,0x28                        ; 004ee239 | DAT_02da874c
    CMP ESI,ECX                         ; 004ee23c
    JL 0x004ee228                       ; 004ee23e
        ;   XREF to: 004ee228 (CONDITIONAL_JUMP)  ; LAB_004ee228
    PUSH 0x2d873d8                      ; 004ee240 | INT_02d873d8
        ;   Label: LAB_004ee240
    PUSH 0x62e44e                       ; 004ee245 | = "%d\n"
    PUSH EDI                            ; 004ee24a
    XOR ESI,ESI                         ; 004ee24b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ee24d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EBX,dword ptr [0x02d873d8]      ; 004ee252 | INT_02d873d8
    ADD ESP,0xc                         ; 004ee258
    TEST EBX,EBX                        ; 004ee25b
    JLE 0x004ee280                      ; 004ee25d
        ;   XREF to: 004ee280 (CONDITIONAL_JUMP)  ; LAB_004ee280
    MOV EBX,0x2d873dc                   ; 004ee25f | DAT_02d873dc
    PUSH EDI                            ; 004ee264
        ;   Label: LAB_004ee264
    PUSH EBX                            ; 004ee265 | DAT_02d873dc | DAT_02d87420
    INC ESI                             ; 004ee266
    CALL core_gore.cpp_CBloodSplat_FUN_004ecb00 ; 004ee267
        ;   XREF to: 004ecb00 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_FUN_004ecb00(CBloodSplat * this_ptr)
    MOV EBP,dword ptr [0x02d873d8]      ; 004ee26c | INT_02d873d8
    ADD ESP,0x8                         ; 004ee272
    ADD EBX,0x44                        ; 004ee275 | DAT_02d87420
    CMP ESI,EBP                         ; 004ee278
    JL 0x004ee264                       ; 004ee27a
        ;   XREF to: 004ee264 (CONDITIONAL_JUMP)  ; LAB_004ee264
    LEA EAX,[EAX]                       ; 004ee27c
    ADD ESP,0x100                       ; 004ee280
        ;   Label: LAB_004ee280
    POP EBP                             ; 004ee286
    POP EDI                             ; 004ee287
    POP ESI                             ; 004ee288
    POP EBX                             ; 004ee289
    RET                                 ; 004ee28a

