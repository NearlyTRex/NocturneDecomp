; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004d6340(CGame *this_ptr,char *name,float value,float duration)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
; float            Stack[0xc]:4   value
; float            Stack[0x10]:4   duration
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 at 0042e27b
;   core_charactr.cpp_FUN_004319e0 at 00431b75
;   core_vampboss.cpp_FUN_005a5550 at 005a68bc
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6340
        ;   Label: core_game.cpp_FUN_004d6340
    PUSH ESI                            ; 004d6341
    PUSH EDI                            ; 004d6342
    PUSH EBP                            ; 004d6343
    SUB ESP,0x4                         ; 004d6344
    MOV EBX,dword ptr [ESP + 0x18]      ; 004d6347
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004d634b
    FLD float ptr [ESP + 0x24]          ; 004d634f
    FLDZ                                ; 004d6353
    FCOMPP                              ; 004d6355
    FNSTSW AX                           ; 004d6357
    SAHF                                ; 004d6359
    JNC 0x004d63a7                      ; 004d635a
        ;   XREF to: 004d63a7 (CONDITIONAL_JUMP)  ; LAB_004d63a7
    TEST EBP,EBP                        ; 004d635c
    JZ 0x004d63a7                       ; 004d635e
        ;   XREF to: 004d63a7 (CONDITIONAL_JUMP)  ; LAB_004d63a7
    CMP byte ptr [EBP],0x0              ; 004d6360
    JZ 0x004d63a7                       ; 004d6364
        ;   XREF to: 004d63a7 (CONDITIONAL_JUMP)  ; LAB_004d63a7
    LEA EAX,[EBX + 0x3c0]               ; 004d6366
    MOV EDX,dword ptr [EBX + 0x3bc]     ; 004d636c
    XOR ESI,ESI                         ; 004d6372
    MOV dword ptr [ESP],EAX             ; 004d6374
    MOV EDI,EAX                         ; 004d6377
    TEST EDX,EDX                        ; 004d6379
    JLE 0x004d639c                      ; 004d637b
        ;   XREF to: 004d639c (CONDITIONAL_JUMP)  ; LAB_004d639c
    PUSH EBP                            ; 004d637d
        ;   Label: LAB_004d637d
    PUSH EDI                            ; 004d637e
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004d637f
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d6384
    TEST EAX,EAX                        ; 004d6387
    JZ 0x004d63af                       ; 004d6389
        ;   XREF to: 004d63af (CONDITIONAL_JUMP)  ; LAB_004d63af
    INC ESI                             ; 004d638b
    MOV ECX,dword ptr [EBX + 0x3bc]     ; 004d638c
    ADD EDI,0x100                       ; 004d6392
    CMP ESI,ECX                         ; 004d6398
    JL 0x004d637d                       ; 004d639a
        ;   XREF to: 004d637d (CONDITIONAL_JUMP)  ; LAB_004d637d
    MOV ESI,dword ptr [EBX + 0x3bc]     ; 004d639c
        ;   Label: LAB_004d639c
    CMP ESI,0x5                         ; 004d63a2
    JL 0x004d63c7                       ; 004d63a5
        ;   XREF to: 004d63c7 (CONDITIONAL_JUMP)  ; LAB_004d63c7
    ADD ESP,0x4                         ; 004d63a7
        ;   Label: LAB_004d63a7
    POP EBP                             ; 004d63aa
    POP EDI                             ; 004d63ab
    POP ESI                             ; 004d63ac
    POP EBX                             ; 004d63ad
    RET                                 ; 004d63ae
    MOV EAX,dword ptr [ESP + 0x20]      ; 004d63af
        ;   Label: LAB_004d63af
    MOV dword ptr [EBX + ESI*0x4 + 0x8c0],EAX ; 004d63b3
    MOV EAX,dword ptr [ESP + 0x24]      ; 004d63ba
    MOV dword ptr [EBX + ESI*0x4 + 0x8d4],EAX ; 004d63be
    JMP 0x004d63a7                      ; 004d63c5
        ;   XREF to: 004d63a7 (UNCONDITIONAL_JUMP)  ; LAB_004d63a7
    MOV EDI,ESI                         ; 004d63c7
        ;   Label: LAB_004d63c7
    MOV EAX,dword ptr [ESP]             ; 004d63c9
    SHL EDI,0x8                         ; 004d63cc
    MOV ESI,EBP                         ; 004d63cf
    ADD EDI,EAX                         ; 004d63d1
    PUSH EDI                            ; 004d63d3
    MOV AL,byte ptr [ESI]               ; 004d63d4
        ;   Label: LAB_004d63d4
    MOV byte ptr [EDI],AL               ; 004d63d6
    CMP AL,0x0                          ; 004d63d8
    JZ 0x004d63ec                       ; 004d63da
        ;   XREF to: 004d63ec (CONDITIONAL_JUMP)  ; LAB_004d63ec
    MOV AL,byte ptr [ESI + 0x1]         ; 004d63dc
    ADD ESI,0x2                         ; 004d63df
    MOV byte ptr [EDI + 0x1],AL         ; 004d63e2
    ADD EDI,0x2                         ; 004d63e5
    CMP AL,0x0                          ; 004d63e8
    JNZ 0x004d63d4                      ; 004d63ea
        ;   XREF to: 004d63d4 (CONDITIONAL_JUMP)  ; LAB_004d63d4
    POP EDI                             ; 004d63ec
        ;   Label: LAB_004d63ec
    MOV EAX,dword ptr [EBX + 0x3bc]     ; 004d63ed
    MOV ESI,dword ptr [ESP + 0x20]      ; 004d63f3
    MOV dword ptr [EBX + EAX*0x4 + 0x8c0],ESI ; 004d63f7
    MOV EAX,dword ptr [EBX + 0x3bc]     ; 004d63fe
    MOV ESI,dword ptr [ESP + 0x24]      ; 004d6404
    MOV dword ptr [EBX + EAX*0x4 + 0x8d4],ESI ; 004d6408
    INC dword ptr [EBX + 0x3bc]         ; 004d640f
    ADD ESP,0x4                         ; 004d6415
    POP EBP                             ; 004d6418
    POP EDI                             ; 004d6419
    POP ESI                             ; 004d641a
    POP EBX                             ; 004d641b
    RET                                 ; 004d641c

