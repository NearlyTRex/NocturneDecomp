; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dd690(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined1       Stack[-0x27]:1  local_27
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004dd760 at 004dd777
;
; Called Functions:
;   engine_model.c_getMRGLSize_FUN_004dd520
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;   FUN_0041a5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd690
        ;   Label: FUN_004dd690
    PUSH ESI                            ; 004dd691
    PUSH EDI                            ; 004dd692
    PUSH EBP                            ; 004dd693
    SUB ESP,0x20                        ; 004dd694
    MOV EBX,dword ptr [ESP + 0x34]      ; 004dd697
    MOV EDX,dword ptr [EBX]             ; 004dd69b
    CMP EDX,0x26                        ; 004dd69d
    JZ 0x004dd6e9                       ; 004dd6a0
        ;   XREF to: 004dd6e9 (CONDITIONAL_JUMP)  ; LAB_004dd6e9
    MOV EAX,EBX                         ; 004dd6a2
    MOV dword ptr [ESP + 0x18],EBX      ; 004dd6a4
    TEST EDX,EDX                        ; 004dd6a8
    JZ 0x004dd6e1                       ; 004dd6aa
        ;   XREF to: 004dd6e1 (CONDITIONAL_JUMP)  ; LAB_004dd6e1
    MOV EBP,dword ptr [EAX]             ; 004dd6ac
        ;   Label: LAB_004dd6ac
    CMP EBP,0xd                         ; 004dd6ae
    JZ 0x004dd6b8                       ; 004dd6b1
        ;   XREF to: 004dd6b8 (CONDITIONAL_JUMP)  ; LAB_004dd6b8
    CMP EBP,0x40                        ; 004dd6b3
    JNZ 0x004dd6f4                      ; 004dd6b6
        ;   XREF to: 004dd6f4 (CONDITIONAL_JUMP)  ; LAB_004dd6f4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004dd6b8
        ;   Label: LAB_004dd6b8
    PUSH ESI                            ; 004dd6bc
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 004dd6bd
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_ensureTextureLoaded_FUN_00545920()
    ADD ESP,0x4                         ; 004dd6c2
    MOV EBX,dword ptr [ESP + 0x18]      ; 004dd6c5
        ;   Label: LAB_004dd6c5
    PUSH EBX                            ; 004dd6c9
    CALL engine_model.c_getMRGLSize_FUN_004dd520 ; 004dd6ca
        ;   XREF to: 004dd520 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_getMRGLSize_FUN_004dd520()
    ADD ESP,0x4                         ; 004dd6cf
    LEA ESI,[EBX + EAX*0x1]             ; 004dd6d2
    MOV dword ptr [ESP + 0x18],ESI      ; 004dd6d5
    MOV EDI,dword ptr [ESI]             ; 004dd6d9
    MOV EAX,ESI                         ; 004dd6db
    TEST EDI,EDI                        ; 004dd6dd
    JNZ 0x004dd6ac                      ; 004dd6df
        ;   XREF to: 004dd6ac (CONDITIONAL_JUMP)  ; LAB_004dd6ac
    ADD ESP,0x20                        ; 004dd6e1
        ;   Label: LAB_004dd6e1
    POP EBP                             ; 004dd6e4
    POP EDI                             ; 004dd6e5
    POP ESI                             ; 004dd6e6
    POP EBX                             ; 004dd6e7
    RET                                 ; 004dd6e8
    PUSH EBX                            ; 004dd6e9
        ;   Label: LAB_004dd6e9
    CALL FUN_0041a5e0                   ; 004dd6ea
        ;   XREF to: 0041a5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a5e0()
    ADD ESP,0x4                         ; 004dd6ef
    JMP 0x004dd6e1                      ; 004dd6f2
        ;   XREF to: 004dd6e1 (UNCONDITIONAL_JUMP)  ; LAB_004dd6e1
    CMP EBP,0x1d                        ; 004dd6f4
        ;   Label: LAB_004dd6f4
    JNZ 0x004dd6c5                      ; 004dd6f7
        ;   XREF to: 004dd6c5 (CONDITIONAL_JUMP)  ; LAB_004dd6c5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004dd6f9
    XOR EBP,EBP                         ; 004dd6fd
    MOV EBX,dword ptr [EAX + 0x8]       ; 004dd6ff
    MOV dword ptr [ESP + 0x1c],EAX      ; 004dd702
    TEST EBX,EBX                        ; 004dd706
    JLE 0x004dd6c5                      ; 004dd708
        ;   XREF to: 004dd6c5 (CONDITIONAL_JUMP)  ; LAB_004dd6c5
    LEA EBX,[EAX + 0x1c]                ; 004dd70a
    XOR EDI,EDI                         ; 004dd70d
        ;   Label: LAB_004dd70d
    MOV ESI,EBX                         ; 004dd70f
    MOV dword ptr [ESP + 0x4],EDI       ; 004dd711
    LEA EDI,[ESP + 0x8]                 ; 004dd715
    PUSH EDI                            ; 004dd719
    MOV AL,byte ptr [ESI]               ; 004dd71a
        ;   Label: LAB_004dd71a
    MOV byte ptr [EDI],AL               ; 004dd71c
    CMP AL,0x0                          ; 004dd71e
    JZ 0x004dd732                       ; 004dd720
        ;   XREF to: 004dd732 (CONDITIONAL_JUMP)  ; LAB_004dd732
    MOV AL,byte ptr [ESI + 0x1]         ; 004dd722
    ADD ESI,0x2                         ; 004dd725
    MOV byte ptr [EDI + 0x1],AL         ; 004dd728
    ADD EDI,0x2                         ; 004dd72b
    CMP AL,0x0                          ; 004dd72e
    JNZ 0x004dd71a                      ; 004dd730
        ;   XREF to: 004dd71a (CONDITIONAL_JUMP)  ; LAB_004dd71a
    POP EDI                             ; 004dd732
        ;   Label: LAB_004dd732
    MOV EDI,ESP                         ; 004dd733
    PUSH EDI                            ; 004dd735
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 004dd736
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_ensureTextureLoaded_FUN_00545920()
    ADD ESP,0x4                         ; 004dd73b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004dd73e
    INC EBP                             ; 004dd742
    MOV EDX,dword ptr [EAX + 0x8]       ; 004dd743
    ADD EBX,0x20                        ; 004dd746
    CMP EBP,EDX                         ; 004dd749
    JL 0x004dd70d                       ; 004dd74b
        ;   XREF to: 004dd70d (CONDITIONAL_JUMP)  ; LAB_004dd70d
    JMP 0x004dd6c5                      ; 004dd74d
        ;   XREF to: 004dd6c5 (UNCONDITIONAL_JUMP)  ; LAB_004dd6c5

