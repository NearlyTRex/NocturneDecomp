; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * crt_memory.c_constructObjectArray_FlaggedCtor_FUN_00608dc8(void * array_start, int element_count, WatcomTypeInfo * type_info)
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
;   crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200 at 00601221
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608dc8
        ;   Label: crt_memory.c_constructObjectArray_FlaggedCtor_FUN_00608dc8
    PUSH ESI                            ; 00608dc9
    PUSH EDI                            ; 00608dca
    PUSH EBP                            ; 00608dcb
    SUB ESP,0xc                         ; 00608dcc
    MOV EBX,dword ptr [ESP + 0x20]      ; 00608dcf
    MOV EBP,dword ptr [ESP + 0x24]      ; 00608dd3
    MOV EDI,dword ptr [ESP + 0x28]      ; 00608dd7
    MOV dword ptr [ESP + 0x4],EDI       ; 00608ddb
    MOV dword ptr [ESP + 0x8],EBX       ; 00608ddf
    XOR EDX,EDX                         ; 00608de3
    MOV ESI,dword ptr [EDI + 0x4]       ; 00608de5
    MOV dword ptr [ESP],EDX             ; 00608de8
    MOV EDI,dword ptr [EDI + 0x10]      ; 00608deb
    CMP EBP,dword ptr [ESP]             ; 00608dee
        ;   Label: LAB_00608dee
    JA 0x00608dff                       ; 00608df1
        ;   XREF to: 00608dff (CONDITIONAL_JUMP)  ; LAB_00608dff
    MOV EAX,dword ptr [ESP + 0x8]       ; 00608df3
    ADD ESP,0xc                         ; 00608df7
    POP EBP                             ; 00608dfa
    POP EDI                             ; 00608dfb
    POP ESI                             ; 00608dfc
    POP EBX                             ; 00608dfd
    RET                                 ; 00608dfe
    PUSH 0x0                            ; 00608dff
        ;   Label: LAB_00608dff
    PUSH EBX                            ; 00608e01
    CALL ESI                            ; 00608e02
    ADD ESP,0x8                         ; 00608e04
    MOV EAX,dword ptr [ESP]             ; 00608e07
    INC EAX                             ; 00608e0a
    ADD EBX,EDI                         ; 00608e0b
    MOV dword ptr [ESP],EAX             ; 00608e0d
    JMP 0x00608dee                      ; 00608e10
        ;   XREF to: 00608dee (UNCONDITIONAL_JUMP)  ; LAB_00608dee

