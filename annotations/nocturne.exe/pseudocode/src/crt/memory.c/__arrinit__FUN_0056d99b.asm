; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___arrinit__FUN_0056d99b(void *array_start,int element_count,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   array_start
; int              Stack[0x8]:4   element_count
; WatcomTypeInfo * Stack[0xc]:4   type_info
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c___arrinit_dispatch_FUN_005661c2 at 005661e3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d99b
        ;   Label: crt_memory.c___arrinit__FUN_0056d99b
    PUSH ESI                            ; 0056d99c
    PUSH EDI                            ; 0056d99d
    PUSH EBP                            ; 0056d99e
    SUB ESP,0xc                         ; 0056d99f
    MOV EBX,dword ptr [ESP + 0x20]      ; 0056d9a2
    MOV EBP,dword ptr [ESP + 0x24]      ; 0056d9a6
    MOV EDI,dword ptr [ESP + 0x28]      ; 0056d9aa
    MOV dword ptr [ESP + 0x4],EDI       ; 0056d9ae
    MOV dword ptr [ESP + 0x8],EBX       ; 0056d9b2
    XOR EDX,EDX                         ; 0056d9b6
    MOV ESI,dword ptr [EDI + 0x4]       ; 0056d9b8
    MOV dword ptr [ESP],EDX             ; 0056d9bb
    MOV EDI,dword ptr [EDI + 0x10]      ; 0056d9be
    CMP EBP,dword ptr [ESP]             ; 0056d9c1
        ;   Label: LAB_0056d9c1
    JA 0x0056d9d2                       ; 0056d9c4
        ;   XREF to: 0056d9d2 (CONDITIONAL_JUMP)  ; LAB_0056d9d2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056d9c6
    ADD ESP,0xc                         ; 0056d9ca
    POP EBP                             ; 0056d9cd
    POP EDI                             ; 0056d9ce
    POP ESI                             ; 0056d9cf
    POP EBX                             ; 0056d9d0
    RET                                 ; 0056d9d1
    PUSH 0x0                            ; 0056d9d2
        ;   Label: LAB_0056d9d2
    PUSH EBX                            ; 0056d9d4
    CALL ESI                            ; 0056d9d5
    ADD ESP,0x8                         ; 0056d9d7
    MOV EAX,dword ptr [ESP]             ; 0056d9da
    INC EAX                             ; 0056d9dd
    ADD EBX,EDI                         ; 0056d9de
    MOV dword ptr [ESP],EAX             ; 0056d9e0
    JMP 0x0056d9c1                      ; 0056d9e3
        ;   XREF to: 0056d9c1 (UNCONDITIONAL_JUMP)  ; LAB_0056d9c1

