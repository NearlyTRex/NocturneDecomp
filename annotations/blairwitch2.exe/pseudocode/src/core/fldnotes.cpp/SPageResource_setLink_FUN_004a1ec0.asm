; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SPageResource_setLink_FUN_004a1ec0(SPageResource *this_ptr,char *param_2)
;
; Parameters:
; SPageResource *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_malloc_FUN_005b8580
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1ec0
        ;   Label: core_fldnotes.cpp_SPageResource_setLink_FUN_004a1ec0
    PUSH ESI                            ; 004a1ec1
    PUSH EBP                            ; 004a1ec2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a1ec3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a1ec7
    MOV EDX,dword ptr [EBX + 0x10]      ; 004a1ecb
    TEST EDX,EDX                        ; 004a1ece
    JNZ 0x004a1eda                      ; 004a1ed0
        ;   XREF to: 004a1eda (CONDITIONAL_JUMP)  ; LAB_004a1eda
    TEST ESI,ESI                        ; 004a1ed2
    JNZ 0x004a1ef2                      ; 004a1ed4
        ;   XREF to: 004a1ef2 (CONDITIONAL_JUMP)  ; LAB_004a1ef2
    POP EBP                             ; 004a1ed6
    POP ESI                             ; 004a1ed7
    POP EBX                             ; 004a1ed8
    RET                                 ; 004a1ed9
    PUSH EDX                            ; 004a1eda
        ;   Label: LAB_004a1eda
    CALL crt_unknown.c_FUN_005b86a0     ; 004a1edb
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 004a1ee0
    MOV dword ptr [EBX + 0x10],0x0      ; 004a1ee3
    TEST ESI,ESI                        ; 004a1eea
    JNZ 0x004a1ef2                      ; 004a1eec
        ;   XREF to: 004a1ef2 (CONDITIONAL_JUMP)  ; LAB_004a1ef2
    POP EBP                             ; 004a1eee
    POP ESI                             ; 004a1eef
    POP EBX                             ; 004a1ef0
    RET                                 ; 004a1ef1
    PUSH EDI                            ; 004a1ef2
        ;   Label: LAB_004a1ef2
    MOV EDI,ESI                         ; 004a1ef3
    SUB ECX,ECX                         ; 004a1ef5
    DEC ECX                             ; 004a1ef7
    XOR EAX,EAX                         ; 004a1ef8
    SCASB.REPNE ES:EDI                  ; 004a1efa
    NOT ECX                             ; 004a1efc
    DEC ECX                             ; 004a1efe
    INC ECX                             ; 004a1eff
    PUSH ECX                            ; 004a1f00
    CALL crt_memory.c_malloc_FUN_005b8580 ; 004a1f01
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 004a1f06
    MOV dword ptr [EBX + 0x10],EAX      ; 004a1f09
    TEST EAX,EAX                        ; 004a1f0c
    JNZ 0x004a1f32                      ; 004a1f0e
        ;   XREF to: 004a1f32 (CONDITIONAL_JUMP)  ; LAB_004a1f32
    MOV EBP,0x5d5a3f                    ; 004a1f10
    MOV EAX,0x360                       ; 004a1f15
    PUSH 0x5d5a54                       ; 004a1f1a
    MOV dword ptr [0x01d046a0],EBP      ; 004a1f1f | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004a1f25 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a1f2a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a1f2f
    MOV EDI,dword ptr [EBX + 0x10]      ; 004a1f32
        ;   Label: LAB_004a1f32
    PUSH EDI                            ; 004a1f35
    MOV AL,byte ptr [ESI]               ; 004a1f36
        ;   Label: LAB_004a1f36
    MOV byte ptr [EDI],AL               ; 004a1f38
    CMP AL,0x0                          ; 004a1f3a
    JZ 0x004a1f4e                       ; 004a1f3c
        ;   XREF to: 004a1f4e (CONDITIONAL_JUMP)  ; LAB_004a1f4e
    MOV AL,byte ptr [ESI + 0x1]         ; 004a1f3e
    ADD ESI,0x2                         ; 004a1f41
    MOV byte ptr [EDI + 0x1],AL         ; 004a1f44
    ADD EDI,0x2                         ; 004a1f47
    CMP AL,0x0                          ; 004a1f4a
    JNZ 0x004a1f36                      ; 004a1f4c
        ;   XREF to: 004a1f36 (CONDITIONAL_JUMP)  ; LAB_004a1f36
    POP EDI                             ; 004a1f4e
        ;   Label: LAB_004a1f4e
    POP EDI                             ; 004a1f4f
    POP EBP                             ; 004a1f50
    POP ESI                             ; 004a1f51
    POP EBX                             ; 004a1f52
    RET                                 ; 004a1f53

