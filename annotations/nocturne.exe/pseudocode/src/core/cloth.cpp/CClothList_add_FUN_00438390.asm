; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_add_FUN_00438390(int *param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_005350c0 at 00535437
;
; Referenced Globals:
;   string s_..\\core\\cloth.cpp_0057af2b
;   string s_CClothList::add_-_list_is_full_0057af3d
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438390
        ;   Label: core_cloth.cpp_CClothList_add_FUN_00438390
    PUSH ESI                            ; 00438391
    PUSH EDI                            ; 00438392
    MOV EBX,dword ptr [ESP + 0x10]      ; 00438393
    CMP dword ptr [EBX],0xa             ; 00438397
    JGE 0x004383e0                      ; 0043839a
        ;   XREF to: 004383e0 (CONDITIONAL_JUMP)  ; LAB_004383e0
    MOV EDX,dword ptr [EBX]             ; 0043839c
        ;   Label: LAB_0043839c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0043839e
    ADD EAX,EDX                         ; 004383a5
    LEA EDI,[EBX + 0x4]                 ; 004383a7
    SHL EAX,0x3                         ; 004383aa
    MOV ESI,dword ptr [ESP + 0x14]      ; 004383ad
    ADD EDI,EAX                         ; 004383b1
    PUSH EDI                            ; 004383b3
    MOV AL,byte ptr [ESI]               ; 004383b4
        ;   Label: LAB_004383b4
    MOV byte ptr [EDI],AL               ; 004383b6
    CMP AL,0x0                          ; 004383b8
    JZ 0x004383cc                       ; 004383ba
        ;   XREF to: 004383cc (CONDITIONAL_JUMP)  ; LAB_004383cc
    MOV AL,byte ptr [ESI + 0x1]         ; 004383bc
    ADD ESI,0x2                         ; 004383bf
    MOV byte ptr [EDI + 0x1],AL         ; 004383c2
    ADD EDI,0x2                         ; 004383c5
    CMP AL,0x0                          ; 004383c8
    JNZ 0x004383b4                      ; 004383ca
        ;   XREF to: 004383b4 (CONDITIONAL_JUMP)  ; LAB_004383b4
    POP EDI                             ; 004383cc
        ;   Label: LAB_004383cc
    MOV EAX,dword ptr [EBX]             ; 004383cd
    MOV dword ptr [EBX + EAX*0x4 + 0x194],0x0 ; 004383cf
    INC dword ptr [EBX]                 ; 004383da
    POP EDI                             ; 004383dc
    POP ESI                             ; 004383dd
    POP EBX                             ; 004383de
    RET                                 ; 004383df
    MOV ECX,0x57af2b                    ; 004383e0 | = "..\\core\\cloth.cpp"
        ;   Label: LAB_004383e0
    MOV ESI,0x5d1                       ; 004383e5
    PUSH 0x57af3d                       ; 004383ea | = "CClothList::add - list is full"
    MOV dword ptr [0x01cc4800],ECX      ; 004383ef | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004383f5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004383fb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00438400
    JMP 0x0043839c                      ; 00438403
        ;   XREF to: 0043839c (UNCONDITIONAL_JUMP)  ; LAB_0043839c

