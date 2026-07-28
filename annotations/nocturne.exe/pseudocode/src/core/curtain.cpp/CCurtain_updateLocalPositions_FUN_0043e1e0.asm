; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_curtain_cpp_CCurtain_updateLocalPositions_FUN_0043e1e0(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_curtain.cpp_CCurtain_process_FUN_0043ebf0 at 0043f059
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e1e0
        ;   Label: core_curtain.cpp_CCurtain_updateLocalPositions_FUN_0043e1e0
    PUSH ESI                            ; 0043e1e1
    PUSH EDI                            ; 0043e1e2
    PUSH EBP                            ; 0043e1e3
    SUB ESP,0x20                        ; 0043e1e4
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043e1e7
    MOV EDX,dword ptr [EAX + 0x1fc]     ; 0043e1eb
    XOR EDI,EDI                         ; 0043e1f1
    TEST EDX,EDX                        ; 0043e1f3
    JLE 0x0043e26c                      ; 0043e1f5
        ;   XREF to: 0043e26c (CONDITIONAL_JUMP)  ; LAB_0043e26c
    MOV EBP,dword ptr [ESP + 0x34]      ; 0043e1f7
    ADD EAX,0x200                       ; 0043e1fb
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043e200
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043e204
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043e208
    ADD EBP,0x20                        ; 0043e20c
    ADD EAX,0x3c                        ; 0043e20f
    ADD EBX,0x220                       ; 0043e212
    MOV dword ptr [ESP + 0x18],EAX      ; 0043e218
    IMUL ESI,EDI,0x74                   ; 0043e21c
        ;   Label: LAB_0043e21c
    FLD float ptr [EBX]                 ; 0043e21f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043e221
    FSUB float ptr [EBP]                ; 0043e225
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043e228
    FSTP float ptr [ESP]                ; 0043e22c
    FLD float ptr [EBX + 0x4]           ; 0043e22f
    FSUB float ptr [EBP + 0x4]          ; 0043e232
    ADD ESI,EAX                         ; 0043e235
    MOV EAX,ESP                         ; 0043e237
    FSTP float ptr [ESP + 0x4]          ; 0043e239
    PUSH EAX                            ; 0043e23d
    LEA EAX,[ESP + 0x10]                ; 0043e23e
    FLD float ptr [EBX + 0x8]           ; 0043e242
    PUSH EAX                            ; 0043e245
    FSUB float ptr [EBP + 0x8]          ; 0043e246
    PUSH EDX                            ; 0043e249
    FSTP float ptr [ESP + 0x14]         ; 0043e24a
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 0043e24e
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 0043e253
    CMP ESI,EAX                         ; 0043e256
    JNZ 0x0043e274                      ; 0043e258
        ;   XREF to: 0043e274 (CONDITIONAL_JUMP)  ; LAB_0043e274
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043e25a
        ;   Label: LAB_0043e25a
    INC EDI                             ; 0043e25e
    MOV ECX,dword ptr [EAX + 0x1fc]     ; 0043e25f
    ADD EBX,0x74                        ; 0043e265
    CMP EDI,ECX                         ; 0043e268
    JL 0x0043e21c                       ; 0043e26a
        ;   XREF to: 0043e21c (CONDITIONAL_JUMP)  ; LAB_0043e21c
    ADD ESP,0x20                        ; 0043e26c
        ;   Label: LAB_0043e26c
    POP EBP                             ; 0043e26f
    POP EDI                             ; 0043e270
    POP ESI                             ; 0043e271
    POP EBX                             ; 0043e272
    RET                                 ; 0043e273
    MOV EDX,dword ptr [EAX]             ; 0043e274
        ;   Label: LAB_0043e274
    MOV dword ptr [ESI],EDX             ; 0043e276
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043e278
    MOV dword ptr [ESI + 0x4],EDX       ; 0043e27b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043e27e
    MOV dword ptr [ESI + 0x8],EDX       ; 0043e281
    JMP 0x0043e25a                      ; 0043e284
        ;   XREF to: 0043e25a (UNCONDITIONAL_JUMP)  ; LAB_0043e25a

