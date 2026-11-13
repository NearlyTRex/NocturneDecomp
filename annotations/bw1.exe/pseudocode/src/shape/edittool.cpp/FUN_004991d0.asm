; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004991d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005ff7ec
;
; Called Functions:
;   engine_special.cpp_FUN_00580173
;   shape_edittool.cpp_FUN_00498f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004991d0
        ;   Label: shape_edittool.cpp_FUN_004991d0
    SUB ESP,0x3c                        ; 004991d1
    MOV EAX,dword ptr [ESP + 0x48]      ; 004991d4
    LEA EBX,[ESP + 0x30]                ; 004991d8
    FLD float ptr [EAX]                 ; 004991dc
    FMUL float ptr [0x005ff7ec]         ; 004991de | DAT_005ff7ec
    FISTP dword ptr [EBX]               ; 004991e4
    FLD float ptr [EAX + 0x4]           ; 004991e6
    FMUL float ptr [0x005ff7ec]         ; 004991e9 | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x4]         ; 004991ef
    FLD float ptr [EAX + 0x8]           ; 004991f2
    FMUL float ptr [0x005ff7ec]         ; 004991f5 | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x8]         ; 004991fb
    LEA EBX,[ESP + 0x30]                ; 004991fe
    PUSH EBX                            ; 00499202
    LEA EBX,[ESP + 0x4]                 ; 00499203
    PUSH EBX                            ; 00499207
    CALL engine_special.cpp_FUN_00580173 ; 00499208
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049920d
    TEST byte ptr [ESP + 0x13],0x80     ; 00499210
    JZ 0x0049921c                       ; 00499215
        ;   XREF to: 0049921c (CONDITIONAL_JUMP)  ; LAB_0049921c
    ADD ESP,0x3c                        ; 00499217
    POP EBX                             ; 0049921a
    RET                                 ; 0049921b
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0049921c
        ;   Label: LAB_0049921c
    MOV EBX,dword ptr [ESP + 0x14]      ; 00499220
    PUSH EDX                            ; 00499224
    SAR EBX,0x10                        ; 00499225
    PUSH EBX                            ; 00499228
    MOV EBX,dword ptr [ESP + 0x18]      ; 00499229
    SAR EBX,0x10                        ; 0049922d
    PUSH EBX                            ; 00499230
    MOV ECX,dword ptr [ESP + 0x50]      ; 00499231
    PUSH ECX                            ; 00499235
    CALL shape_edittool.cpp_FUN_00498f10 ; 00499236
        ;   XREF to: 00498f10 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00498f10()
    ADD ESP,0x10                        ; 0049923b
    ADD ESP,0x3c                        ; 0049923e
    POP EBX                             ; 00499241
    RET                                 ; 00499242

