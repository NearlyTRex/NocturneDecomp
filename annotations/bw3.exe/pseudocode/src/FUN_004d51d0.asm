; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d51d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005c51db
;   undefined4 DAT_007e2cec
;
; Called Functions:
;   FUN_0040aca0
;   FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d51d0
        ;   Label: FUN_004d51d0
    PUSH ESI                            ; 004d51d1
    PUSH EDI                            ; 004d51d2
    SUB ESP,0x4                         ; 004d51d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004d51d6
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004d51da
    MOV EDX,dword ptr [ESP + 0x20]      ; 004d51de
    PUSH EDX                            ; 004d51e2
    PUSH EBX                            ; 004d51e3
    MOV ECX,dword ptr [ESP + 0x20]      ; 004d51e4
    PUSH ECX                            ; 004d51e8
    PUSH ESI                            ; 004d51e9
    CALL FUN_0040aca0                   ; 004d51ea
        ;   XREF to: 0040aca0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040aca0()
    ADD ESP,0x10                        ; 004d51ef
    MOV EAX,dword ptr [ESI + 0x154]     ; 004d51f2
    PUSH ESI                            ; 004d51f8
    CALL dword ptr [EAX + 0xec]         ; 004d51f9
    MOV dword ptr [ESP + 0x4],EAX       ; 004d51ff
    FLD float ptr [ESP + 0x4]           ; 004d5203
    ADD ESP,0x4                         ; 004d5207
    MOV ESI,dword ptr [0x007e2cec]      ; 004d520a | DAT_007e2cec
    PUSH ESI                            ; 004d5210
    MOV EDI,dword ptr [ESP + 0x24]      ; 004d5211
    MOV dword ptr [EBX + 0x30],0x71     ; 004d5215
    PUSH EDI                            ; 004d521c
    FSTP float ptr [EBX + 0x4]          ; 004d521d
    CALL FUN_0040c840                   ; 004d5220
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d5225
    TEST EAX,EAX                        ; 004d5228
    JZ 0x004d5241                       ; 004d522a
        ;   XREF to: 004d5241 (CONDITIONAL_JUMP)  ; LAB_004d5241
    TEST dword ptr [EAX + 0x3254],0x7fffffff ; 004d522c
    JZ 0x004d5241                       ; 004d5236
        ;   XREF to: 004d5241 (CONDITIONAL_JUMP)  ; LAB_004d5241
    CMP dword ptr [EAX + 0x3258],0x0    ; 004d5238
    JZ 0x004d5248                       ; 004d523f
        ;   XREF to: 004d5248 (CONDITIONAL_JUMP)  ; LAB_004d5248
    ADD ESP,0x4                         ; 004d5241
        ;   Label: LAB_004d5241
    POP EDI                             ; 004d5244
    POP ESI                             ; 004d5245
    POP EBX                             ; 004d5246
    RET                                 ; 004d5247
    FLD float ptr [EBX + 0x4]           ; 004d5248
        ;   Label: LAB_004d5248
    FMUL float ptr [0x005c51db]         ; 004d524b | DAT_005c51db
    FSTP float ptr [EBX + 0x4]          ; 004d5251
    ADD ESP,0x4                         ; 004d5254
    POP EDI                             ; 004d5257
    POP ESI                             ; 004d5258
    POP EBX                             ; 004d5259
    RET                                 ; 004d525a

