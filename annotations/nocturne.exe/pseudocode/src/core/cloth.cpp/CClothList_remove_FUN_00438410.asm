; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_remove_FUN_00438410(CClothList *this_ptr,int index)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_0057af5c
;   TerminatedCString s_CClothList_remove_invali_0057af6e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_cloth.cpp_CCloth_dtor_FUN_00435160
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_operator_delete_FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438410
        ;   Label: core_cloth.cpp_CClothList_remove_FUN_00438410
    PUSH ESI                            ; 00438411
    PUSH EBP                            ; 00438412
    MOV EBP,dword ptr [ESP + 0x14]      ; 00438413
    TEST EBP,EBP                        ; 00438417
    JL 0x00438423                       ; 00438419
        ;   XREF to: 00438423 (CONDITIONAL_JUMP)  ; LAB_00438423
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043841b
    CMP EBP,dword ptr [EAX]             ; 0043841f
    JL 0x00438446                       ; 00438421
        ;   XREF to: 00438446 (CONDITIONAL_JUMP)  ; LAB_00438446
    MOV ECX,0x57af5c                    ; 00438423 | = "..\\core\\cloth.cpp"
        ;   Label: LAB_00438423
    MOV EBX,0x5e4                       ; 00438428
    PUSH 0x57af6e                       ; 0043842d | = "CClothList::remove - invalid index"
    MOV dword ptr [0x01cc4800],ECX      ; 00438432 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 00438438 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0043843e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00438443
    MOV ESI,dword ptr [ESP + 0x10]      ; 00438446
        ;   Label: LAB_00438446
    LEA EAX,[EBP*0x4 + 0x0]             ; 0043844a
    ADD EAX,ESI                         ; 00438451
    MOV EAX,dword ptr [EAX + 0x194]     ; 00438453
    TEST EAX,EAX                        ; 00438459
    JZ 0x00438471                       ; 0043845b
        ;   XREF to: 00438471 (CONDITIONAL_JUMP)  ; LAB_00438471
    PUSH 0x0                            ; 0043845d
    PUSH EAX                            ; 0043845f
    CALL core_cloth.cpp_CCloth_dtor_FUN_00435160 ; 00438460
        ;   XREF to: 00435160 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00435160(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00438465
    PUSH EAX                            ; 00438468
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 00438469
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0043846e
    MOV EAX,dword ptr [ESP + 0x10]      ; 00438471
        ;   Label: LAB_00438471
    INC EBP                             ; 00438475
    CMP EBP,dword ptr [EAX]             ; 00438476
    JGE 0x004384da                      ; 00438478
        ;   XREF to: 004384da (CONDITIONAL_JUMP)  ; LAB_004384da
    PUSH EDI                            ; 0043847a
    LEA ECX,[EBP*0x4 + 0x0]             ; 0043847b
    LEA ESI,[EAX + 0x4]                 ; 00438482
    ADD ECX,EAX                         ; 00438485
    LEA EAX,[EBP*0x4 + 0x0]             ; 00438487
    ADD EAX,EBP                         ; 0043848e
    SHL EAX,0x3                         ; 00438490
    LEA EBX,[EAX + -0x28]               ; 00438493
    ADD EBX,ESI                         ; 00438496
    LEA EDX,[EAX + ESI*0x1]             ; 00438498
    MOV ESI,EDX                         ; 0043849b
        ;   Label: LAB_0043849b
    MOV EDI,EBX                         ; 0043849d
    ADD ECX,0x4                         ; 0043849f
    PUSH EDI                            ; 004384a2
    MOV AL,byte ptr [ESI]               ; 004384a3
        ;   Label: LAB_004384a3
    MOV byte ptr [EDI],AL               ; 004384a5
    CMP AL,0x0                          ; 004384a7
    JZ 0x004384bb                       ; 004384a9
        ;   XREF to: 004384bb (CONDITIONAL_JUMP)  ; LAB_004384bb
    MOV AL,byte ptr [ESI + 0x1]         ; 004384ab
    ADD ESI,0x2                         ; 004384ae
    MOV byte ptr [EDI + 0x1],AL         ; 004384b1
    ADD EDI,0x2                         ; 004384b4
    CMP AL,0x0                          ; 004384b7
    JNZ 0x004384a3                      ; 004384b9
        ;   XREF to: 004384a3 (CONDITIONAL_JUMP)  ; LAB_004384a3
    POP EDI                             ; 004384bb
        ;   Label: LAB_004384bb
    MOV EAX,dword ptr [ECX + 0x190]     ; 004384bc
    MOV dword ptr [ECX + 0x18c],EAX     ; 004384c2
    MOV EAX,dword ptr [ESP + 0x14]      ; 004384c8
    INC EBP                             ; 004384cc
    ADD EBX,0x28                        ; 004384cd
    MOV ESI,dword ptr [EAX]             ; 004384d0
    ADD EDX,0x28                        ; 004384d2
    CMP EBP,ESI                         ; 004384d5
    JL 0x0043849b                       ; 004384d7
        ;   XREF to: 0043849b (CONDITIONAL_JUMP)  ; LAB_0043849b
    POP EDI                             ; 004384d9
    MOV EAX,dword ptr [ESP + 0x10]      ; 004384da
        ;   Label: LAB_004384da
    MOV EBP,dword ptr [EAX]             ; 004384de
    DEC EBP                             ; 004384e0
    MOV dword ptr [EAX],EBP             ; 004384e1
    LEA EAX,[EBP*0x4 + 0x0]             ; 004384e3
    ADD EAX,EBP                         ; 004384ea
    MOV EDX,dword ptr [ESP + 0x10]      ; 004384ec
    SHL EAX,0x3                         ; 004384f0
    ADD EAX,EDX                         ; 004384f3
    MOV byte ptr [EAX + 0x4],0x0        ; 004384f5
    MOV EAX,dword ptr [EDX]             ; 004384f9
    SHL EAX,0x2                         ; 004384fb
    ADD EAX,EDX                         ; 004384fe
    MOV dword ptr [EAX + 0x194],0x0     ; 00438500
    POP EBP                             ; 0043850a
    POP ESI                             ; 0043850b
    POP EBX                             ; 0043850c
    RET                                 ; 0043850d

