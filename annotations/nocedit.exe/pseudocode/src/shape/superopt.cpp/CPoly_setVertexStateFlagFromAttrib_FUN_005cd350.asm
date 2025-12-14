; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CPoly_setVertexStateFlagFromAttrib_FUN_005cd350(CPoly * this_ptr, uint flag_to_set, uint attrib_mask)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_to_set
; uint             Stack[0xc]:4   attrib_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd350
        ;   Label: shape_superopt.cpp_CPoly_setVertexStateFlagFromAttrib_FUN_005cd350
    PUSH ESI                            ; 005cd351
    PUSH EDI                            ; 005cd352
    MOV ESI,dword ptr [ESP + 0x10]      ; 005cd353
    MOV EDI,dword ptr [ESP + 0x14]      ; 005cd357
    MOV EDX,dword ptr [ESP + 0x18]      ; 005cd35b
    MOV EAX,dword ptr [ESI + 0x4]       ; 005cd35f
    SHL EAX,0x3                         ; 005cd362
    MOV EBX,dword ptr [ESI]             ; 005cd365
    MOV ECX,EAX                         ; 005cd367
    SHL EAX,0x3                         ; 005cd369
    MOV EBX,dword ptr [EBX + 0x4]       ; 005cd36c
    SUB EAX,ECX                         ; 005cd36f
    ADD EAX,EBX                         ; 005cd371
    MOV ECX,dword ptr [EAX + 0x30]      ; 005cd373
    AND ECX,EDX                         ; 005cd376
    CMP ECX,EDX                         ; 005cd378
    JZ 0x005cd3b3                       ; 005cd37a
        ;   XREF to: 005cd3b3 (CONDITIONAL_JUMP)  ; LAB_005cd3b3
    MOV EAX,dword ptr [ESI + 0x8]       ; 005cd37c
        ;   Label: LAB_005cd37c
    SHL EAX,0x3                         ; 005cd37f
    MOV ECX,EAX                         ; 005cd382
    SHL EAX,0x3                         ; 005cd384
    SUB EAX,ECX                         ; 005cd387
    ADD EAX,EBX                         ; 005cd389
    MOV ECX,dword ptr [EAX + 0x30]      ; 005cd38b
    AND ECX,EDX                         ; 005cd38e
    CMP ECX,EDX                         ; 005cd390
    JNZ 0x005cd397                      ; 005cd392
        ;   XREF to: 005cd397 (CONDITIONAL_JUMP)  ; LAB_005cd397
    OR dword ptr [EAX + 0x34],EDI       ; 005cd394
    MOV EAX,dword ptr [ESI + 0xc]       ; 005cd397
        ;   Label: LAB_005cd397
    SHL EAX,0x3                         ; 005cd39a
    MOV ECX,EAX                         ; 005cd39d
    SHL EAX,0x3                         ; 005cd39f
    SUB EAX,ECX                         ; 005cd3a2
    ADD EBX,EAX                         ; 005cd3a4
    MOV EAX,dword ptr [EBX + 0x30]      ; 005cd3a6
    AND EAX,EDX                         ; 005cd3a9
    CMP EAX,EDX                         ; 005cd3ab
    JZ 0x005cd3b8                       ; 005cd3ad
        ;   XREF to: 005cd3b8 (CONDITIONAL_JUMP)  ; LAB_005cd3b8
    POP EDI                             ; 005cd3af
    POP ESI                             ; 005cd3b0
    POP EBX                             ; 005cd3b1
    RET                                 ; 005cd3b2
    OR dword ptr [EAX + 0x34],EDI       ; 005cd3b3
        ;   Label: LAB_005cd3b3
    JMP 0x005cd37c                      ; 005cd3b6
        ;   XREF to: 005cd37c (UNCONDITIONAL_JUMP)  ; LAB_005cd37c
    OR dword ptr [EBX + 0x34],EDI       ; 005cd3b8
        ;   Label: LAB_005cd3b8
    POP EDI                             ; 005cd3bb
    POP ESI                             ; 005cd3bc
    POP EBX                             ; 005cd3bd
    RET                                 ; 005cd3be

