; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_alphabit_cpp_FUN_0040d8a0(CAlphaBitmap *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_fldnotes.cpp_FUN_004a8570 at 004a8619
;   core_fldnotes.cpp_FUN_004abe00 at 004ac5e5
;   core_inv.cpp_CInventory_renderAllItems_FUN_004dda90 at 004de085
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040db50
;   engine_special.cpp_renderAlphaRow16_FUN_0056313e
;   engine_special.cpp_renderAlphaRow32_FUN_005630a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d8a0
        ;   Label: engine_alphabit.cpp_FUN_0040d8a0
    PUSH ESI                            ; 0040d8a1
    PUSH EDI                            ; 0040d8a2
    PUSH EBP                            ; 0040d8a3
    SUB ESP,0x1c                        ; 0040d8a4
    MOV EBP,dword ptr [ESP + 0x30]      ; 0040d8a7
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0040d8ab
    MOV ESI,dword ptr [ESP + 0x40]      ; 0040d8af
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040d8b3
    MOV EBX,dword ptr [ESP + 0x48]      ; 0040d8b7
    SUB EAX,EDI                         ; 0040d8bb
    MOV EDX,dword ptr [0x005fba18]      ; 0040d8bd | DAT_005fba18
    INC EAX                             ; 0040d8c3
    SUB EBX,ESI                         ; 0040d8c4
    MOV dword ptr [ESP + 0x10],EAX      ; 0040d8c6
    MOV EAX,dword ptr [ESP + 0x34]      ; 0040d8ca
    INC EBX                             ; 0040d8ce
    CMP EAX,EDX                         ; 0040d8cf
    JGE 0x0040d9e0                      ; 0040d8d1
        ;   XREF to: 0040d9e0 (CONDITIONAL_JUMP)  ; LAB_0040d9e0
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d8d7
    CMP EAX,dword ptr [0x005fba1c]      ; 0040d8db | DAT_005fba1c
    JGE 0x0040d9e0                      ; 0040d8e1
        ;   XREF to: 0040d9e0 (CONDITIONAL_JUMP)  ; LAB_0040d9e0
    MOV EAX,dword ptr [ESP + 0x34]      ; 0040d8e7
    ADD EAX,dword ptr [ESP + 0x10]      ; 0040d8eb
    TEST EAX,EAX                        ; 0040d8ef
    JL 0x0040d9e0                       ; 0040d8f1
        ;   XREF to: 0040d9e0 (CONDITIONAL_JUMP)  ; LAB_0040d9e0
    MOV EDX,dword ptr [ESP + 0x38]      ; 0040d8f7
    ADD EDX,EBX                         ; 0040d8fb
    TEST EDX,EDX                        ; 0040d8fd
    JL 0x0040d9e0                       ; 0040d8ff
        ;   XREF to: 0040d9e0 (CONDITIONAL_JUMP)  ; LAB_0040d9e0
    MOV ECX,dword ptr [ESP + 0x34]      ; 0040d905
    TEST ECX,ECX                        ; 0040d909
    JL 0x0040d9e8                       ; 0040d90b
        ;   XREF to: 0040d9e8 (CONDITIONAL_JUMP)  ; LAB_0040d9e8
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d911
        ;   Label: LAB_0040d911
    TEST EAX,EAX                        ; 0040d915
    JL 0x0040d9f9                       ; 0040d917
        ;   XREF to: 0040d9f9 (CONDITIONAL_JUMP)  ; LAB_0040d9f9
    MOV EAX,dword ptr [ESP + 0x34]      ; 0040d91d
        ;   Label: LAB_0040d91d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040d921
    MOV ECX,dword ptr [0x005fba18]      ; 0040d925 | DAT_005fba18
    ADD EAX,EDX                         ; 0040d92b
    CMP EAX,ECX                         ; 0040d92d
    JGE 0x0040da08                      ; 0040d92f
        ;   XREF to: 0040da08 (CONDITIONAL_JUMP)  ; LAB_0040da08
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d935
        ;   Label: LAB_0040d935
    MOV EDX,dword ptr [0x005fba1c]      ; 0040d939 | DAT_005fba1c
    ADD EAX,EBX                         ; 0040d93f
    CMP EAX,EDX                         ; 0040d941
    JL 0x0040d949                       ; 0040d943
        ;   XREF to: 0040d949 (CONDITIONAL_JUMP)  ; LAB_0040d949
    SUB EAX,EDX                         ; 0040d945
    SUB EBX,EAX                         ; 0040d947
    PUSH EBP                            ; 0040d949
        ;   Label: LAB_0040d949
    CALL engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040db50 ; 0040d94a
        ;   XREF to: 0040db50 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040db50(CAlphaBitmap * this_ptr)
    IMUL ESI,dword ptr [EBP + 0xc]      ; 0040d94f
    ADD ESP,0x4                         ; 0040d953
    ADD EDI,ESI                         ; 0040d956
    MOV ESI,dword ptr [EBP]             ; 0040d958
    MOV EAX,dword ptr [EBP + 0x4]       ; 0040d95b
    ADD ESI,EDI                         ; 0040d95e
    ADD EDI,EAX                         ; 0040d960
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d962
    LEA EDX,[EBX*0x4 + 0x0]             ; 0040d966
    SHL EAX,0x2                         ; 0040d96d
    MOV ECX,dword ptr [0x005fba20]      ; 0040d970 | DAT_005fba20
    ADD EDX,EAX                         ; 0040d976
    CMP ECX,0x20                        ; 0040d978
    JNZ 0x0040da17                      ; 0040d97b
        ;   XREF to: 0040da17 (CONDITIONAL_JUMP)  ; LAB_0040da17
    TEST EBX,EBX                        ; 0040d981
    JLE 0x0040d9e0                      ; 0040d983
        ;   XREF to: 0040d9e0 (CONDITIONAL_JUMP)  ; LAB_0040d9e0
    MOV EBX,dword ptr [ESP + 0x34]      ; 0040d985
    MOV dword ptr [ESP + 0x18],EAX      ; 0040d989
    SHL EBX,0x2                         ; 0040d98d
    MOV dword ptr [ESP + 0x4],EDX       ; 0040d990
    MOV dword ptr [ESP + 0xc],EBX       ; 0040d994
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040d998
        ;   Label: LAB_0040d998
    PUSH EDX                            ; 0040d99c
    MOV ECX,dword ptr [ESP + 0x50]      ; 0040d99d
    PUSH ECX                            ; 0040d9a1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040d9a2
    PUSH EDI                            ; 0040d9a6
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040d9a7
    MOV EAX,dword ptr [EAX + 0x1c5faec] ; 0040d9ab | DAT_01c5faec | DAT_01c5faf0
    PUSH ESI                            ; 0040d9b1
    ADD EAX,EBX                         ; 0040d9b2
    PUSH EAX                            ; 0040d9b4
    CALL engine_special.cpp_renderAlphaRow32_FUN_005630a3 ; 0040d9b5
        ;   XREF to: 005630a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderAlphaRow32_FUN_005630a3(uint * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 0040d9ba
    MOV EBX,dword ptr [EBP + 0xc]       ; 0040d9bd
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040d9c0
    MOV ECX,dword ptr [ESP + 0x4]       ; 0040d9c4
    ADD ESI,EBX                         ; 0040d9c8
    ADD EDX,0x4                         ; 0040d9ca
    ADD EDI,EBX                         ; 0040d9cd
    MOV dword ptr [ESP + 0x18],EDX      ; 0040d9cf
    CMP EDX,ECX                         ; 0040d9d3
    JL 0x0040d998                       ; 0040d9d5
        ;   XREF to: 0040d998 (CONDITIONAL_JUMP)  ; LAB_0040d998
    LEA EAX,[EAX]                       ; 0040d9d7
    LEA EDX,[EDX]                       ; 0040d9dd
    ADD ESP,0x1c                        ; 0040d9e0
        ;   Label: LAB_0040d9e0
    POP EBP                             ; 0040d9e3
    POP EDI                             ; 0040d9e4
    POP ESI                             ; 0040d9e5
    POP EBX                             ; 0040d9e6
    RET                                 ; 0040d9e7
    SUB EDI,ECX                         ; 0040d9e8
        ;   Label: LAB_0040d9e8
    XOR ECX,ECX                         ; 0040d9ea
    MOV dword ptr [ESP + 0x10],EAX      ; 0040d9ec
    MOV dword ptr [ESP + 0x34],ECX      ; 0040d9f0
    JMP 0x0040d911                      ; 0040d9f4
        ;   XREF to: 0040d911 (UNCONDITIONAL_JUMP)  ; LAB_0040d911
    ADD EBX,EAX                         ; 0040d9f9
        ;   Label: LAB_0040d9f9
    SUB ESI,EAX                         ; 0040d9fb
    XOR EAX,EAX                         ; 0040d9fd
    MOV dword ptr [ESP + 0x38],EAX      ; 0040d9ff
    JMP 0x0040d91d                      ; 0040da03
        ;   XREF to: 0040d91d (UNCONDITIONAL_JUMP)  ; LAB_0040d91d
    SUB EAX,ECX                         ; 0040da08
        ;   Label: LAB_0040da08
    MOV ECX,EDX                         ; 0040da0a
    SUB ECX,EAX                         ; 0040da0c
    MOV dword ptr [ESP + 0x10],ECX      ; 0040da0e
    JMP 0x0040d935                      ; 0040da12
        ;   XREF to: 0040d935 (UNCONDITIONAL_JUMP)  ; LAB_0040d935
    TEST EBX,EBX                        ; 0040da17
        ;   Label: LAB_0040da17
    JLE 0x0040d9e0                      ; 0040da19
        ;   XREF to: 0040d9e0 (CONDITIONAL_JUMP)  ; LAB_0040d9e0
    MOV EBX,dword ptr [ESP + 0x34]      ; 0040da1b
    MOV dword ptr [ESP + 0x14],EAX      ; 0040da1f
    ADD EBX,EBX                         ; 0040da23
    MOV dword ptr [ESP + 0x8],EDX       ; 0040da25
    MOV dword ptr [ESP],EBX             ; 0040da29
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040da2c
        ;   Label: LAB_0040da2c
    PUSH EDX                            ; 0040da30
    MOV ECX,dword ptr [ESP + 0x50]      ; 0040da31
    PUSH ECX                            ; 0040da35
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040da36
    PUSH EDI                            ; 0040da3a
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040da3b
    MOV EAX,dword ptr [EAX + 0x1c5faec] ; 0040da3f | DAT_01c5faec | DAT_01c5faf0
    PUSH ESI                            ; 0040da45
    ADD EAX,EBX                         ; 0040da46
    PUSH EAX                            ; 0040da48
    CALL engine_special.cpp_renderAlphaRow16_FUN_0056313e ; 0040da49
        ;   XREF to: 0056313e (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderAlphaRow16_FUN_0056313e(ushort * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 0040da4e
    MOV EBX,dword ptr [EBP + 0xc]       ; 0040da51
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040da54
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040da58
    ADD ESI,EBX                         ; 0040da5c
    ADD EDX,0x4                         ; 0040da5e
    ADD EDI,EBX                         ; 0040da61
    MOV dword ptr [ESP + 0x14],EDX      ; 0040da63
    CMP EDX,ECX                         ; 0040da67
    JL 0x0040da2c                       ; 0040da69
        ;   XREF to: 0040da2c (CONDITIONAL_JUMP)  ; LAB_0040da2c
    ADD ESP,0x1c                        ; 0040da6b
    POP EBP                             ; 0040da6e
    POP EDI                             ; 0040da6f
    POP ESI                             ; 0040da70
    POP EBX                             ; 0040da71
    RET                                 ; 0040da72

