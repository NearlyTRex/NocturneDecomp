; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0043bc30(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_0052f2a0 at 0052f2f5
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01466954
;   undefined4 DAT_01c2b64c
;   undefined4 DAT_01c37788
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0043bb50
;   core_dstrendr.cpp_memcpyMMX_FUN_00470201
;   engine_special.cpp_FUN_00560050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bc30
        ;   Label: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0043bc30
    PUSH ESI                            ; 0043bc31
    PUSH EDI                            ; 0043bc32
    PUSH EBP                            ; 0043bc33
    SUB ESP,0x24                        ; 0043bc34
    MOV EDX,dword ptr [0x01c37788]      ; 0043bc37 | DAT_01c37788
    TEST EDX,EDX                        ; 0043bc3d
    JNZ 0x0043be70                      ; 0043bc3f
        ;   XREF to: 0043be70 (CONDITIONAL_JUMP)  ; LAB_0043be70
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043bc45
    MOV ECX,dword ptr [EAX + 0x1d0]     ; 0043bc49
    CMP ECX,0x100                       ; 0043bc4f
    JG 0x0043be94                       ; 0043bc55
        ;   XREF to: 0043be94 (CONDITIONAL_JUMP)  ; LAB_0043be94
    XOR EBX,EBX                         ; 0043bc5b
    TEST ECX,ECX                        ; 0043bc5d
    JLE 0x0043bcbb                      ; 0043bc5f
        ;   XREF to: 0043bcbb (CONDITIONAL_JUMP)  ; LAB_0043bcbb
    LEA EDX,[EAX + 0x1d4]               ; 0043bc61
    MOV EBP,dword ptr [EDX]             ; 0043bc67
        ;   Label: LAB_0043bc67
    MOV EAX,EDX                         ; 0043bc69
    TEST EBP,EBP                        ; 0043bc6b
    JL 0x0043becd                       ; 0043bc6d
        ;   XREF to: 0043becd (CONDITIONAL_JUMP)  ; LAB_0043becd
    MOV ESI,dword ptr [ESP + 0x38]      ; 0043bc73
        ;   Label: LAB_0043bc73
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043bc77
    MOV EDI,dword ptr [ESI + 0x144]     ; 0043bc7a
    CMP ECX,EDI                         ; 0043bc80
    JGE 0x0043bed8                      ; 0043bc82
        ;   XREF to: 0043bed8 (CONDITIONAL_JUMP)  ; LAB_0043bed8
    CMP dword ptr [EAX + 0x8],0x0       ; 0043bc88
        ;   Label: LAB_0043bc88
    JL 0x0043bee3                       ; 0043bc8c
        ;   XREF to: 0043bee3 (CONDITIONAL_JUMP)  ; LAB_0043bee3
    MOV ESI,dword ptr [ESP + 0x38]      ; 0043bc92
        ;   Label: LAB_0043bc92
    MOV ECX,dword ptr [EAX + 0xc]       ; 0043bc96
    MOV EDI,dword ptr [ESI + 0x148]     ; 0043bc99
    CMP ECX,EDI                         ; 0043bc9f
    JL 0x0043bca9                       ; 0043bca1
        ;   XREF to: 0043bca9 (CONDITIONAL_JUMP)  ; LAB_0043bca9
    LEA ECX,[EDI + -0x1]                ; 0043bca3
    MOV dword ptr [EAX + 0xc],ECX       ; 0043bca6
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043bca9
        ;   Label: LAB_0043bca9
    INC EBX                             ; 0043bcad
    MOV ECX,dword ptr [EAX + 0x1d0]     ; 0043bcae
    ADD EDX,0x10                        ; 0043bcb4
    CMP EBX,ECX                         ; 0043bcb7
    JL 0x0043bc67                       ; 0043bcb9
        ;   XREF to: 0043bc67 (CONDITIONAL_JUMP)  ; LAB_0043bc67
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043bcbb
        ;   Label: LAB_0043bcbb
    MOV EBX,dword ptr [ESP + 0x38]      ; 0043bcbf
    XOR ESI,ESI                         ; 0043bcc3
    XOR ECX,ECX                         ; 0043bcc5
    MOV dword ptr [ESP + 0x18],ESI      ; 0043bcc7
    MOV EDI,dword ptr [EAX + 0x1d0]     ; 0043bccb
    MOV EBX,dword ptr [EBX + 0x148]     ; 0043bcd1
    TEST EDI,EDI                        ; 0043bcd7
    JLE 0x0043bd0c                      ; 0043bcd9
        ;   XREF to: 0043bd0c (CONDITIONAL_JUMP)  ; LAB_0043bd0c
    ADD EAX,0x1d4                       ; 0043bcdb
    MOV ESI,dword ptr [EAX + 0x8]       ; 0043bce0
        ;   Label: LAB_0043bce0
    MOV EDX,EAX                         ; 0043bce3
    CMP EBX,ESI                         ; 0043bce5
    JLE 0x0043bceb                      ; 0043bce7
        ;   XREF to: 0043bceb (CONDITIONAL_JUMP)  ; LAB_0043bceb
    MOV EBX,ESI                         ; 0043bce9
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043bceb
        ;   Label: LAB_0043bceb
    MOV ESI,dword ptr [EDX + 0xc]       ; 0043bcef
    CMP ESI,EDI                         ; 0043bcf2
    JLE 0x0043bcfa                      ; 0043bcf4
        ;   XREF to: 0043bcfa (CONDITIONAL_JUMP)  ; LAB_0043bcfa
    MOV dword ptr [ESP + 0x18],ESI      ; 0043bcf6
    MOV EDX,dword ptr [ESP + 0x38]      ; 0043bcfa
        ;   Label: LAB_0043bcfa
    INC ECX                             ; 0043bcfe
    MOV EBP,dword ptr [EDX + 0x1d0]     ; 0043bcff
    ADD EAX,0x10                        ; 0043bd05
    CMP ECX,EBP                         ; 0043bd08
    JL 0x0043bce0                       ; 0043bd0a
        ;   XREF to: 0043bce0 (CONDITIONAL_JUMP)  ; LAB_0043bce0
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043bd0c
        ;   Label: LAB_0043bd0c
    MOV dword ptr [ESP + 0x20],EBX      ; 0043bd10
    CMP EBX,EAX                         ; 0043bd14
    JG 0x0043be68                       ; 0043bd16
        ;   XREF to: 0043be68 (CONDITIONAL_JUMP)  ; LAB_0043be68
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043bd1c
    SHL EBX,0x2                         ; 0043bd20
    ADD EAX,0x1d4                       ; 0043bd23
    MOV dword ptr [ESP + 0x14],EBX      ; 0043bd28
    MOV dword ptr [ESP + 0x10],EAX      ; 0043bd2c
    XOR ECX,ECX                         ; 0043bd30
        ;   Label: LAB_0043bd30
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043bd32
    MOV dword ptr [ESP + 0x1c],ECX      ; 0043bd36
    MOV ESI,dword ptr [EAX + 0x1d0]     ; 0043bd3a
    MOV dword ptr [0x01466954],ECX      ; 0043bd40 | DAT_01466954
    TEST ESI,ESI                        ; 0043bd46
    JLE 0x0043bdd0                      ; 0043bd48
        ;   XREF to: 0043bdd0 (CONDITIONAL_JUMP)  ; LAB_0043bdd0
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043bd4e
    XOR EBP,EBP                         ; 0043bd52
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043bd54
        ;   Label: LAB_0043bd54
    MOV ESI,dword ptr [EDI + 0x8]       ; 0043bd58
    MOV EDX,EDI                         ; 0043bd5b
    CMP EAX,ESI                         ; 0043bd5d
    JL 0x0043bdb6                       ; 0043bd5f
        ;   XREF to: 0043bdb6 (CONDITIONAL_JUMP)  ; LAB_0043bdb6
    CMP EAX,dword ptr [EDI + 0xc]       ; 0043bd61
    JG 0x0043bdb6                       ; 0043bd64
        ;   XREF to: 0043bdb6 (CONDITIONAL_JUMP)  ; LAB_0043bdb6
    MOV EBX,dword ptr [0x01466954]      ; 0043bd66 | DAT_01466954
    XOR ECX,ECX                         ; 0043bd6c
    TEST EBX,EBX                        ; 0043bd6e
    JLE 0x0043bd91                      ; 0043bd70
        ;   XREF to: 0043bd91 (CONDITIONAL_JUMP)  ; LAB_0043bd91
    LEA ESI,[EBX*0x4 + 0x0]             ; 0043bd72
    XOR EAX,EAX                         ; 0043bd79
    MOV EBX,dword ptr [EDX + 0x4]       ; 0043bd7b
        ;   Label: LAB_0043bd7b
    CMP EBX,dword ptr [EAX + 0x1466958] ; 0043bd7e
    JGE 0x0043beef                      ; 0043bd84
        ;   XREF to: 0043beef (CONDITIONAL_JUMP)  ; LAB_0043beef
    ADD EAX,0x4                         ; 0043bd8a
        ;   Label: LAB_0043bd8a
    CMP EAX,ESI                         ; 0043bd8d
    JL 0x0043bd7b                       ; 0043bd8f
        ;   XREF to: 0043bd7b (CONDITIONAL_JUMP)  ; LAB_0043bd7b
    TEST ECX,ECX                        ; 0043bd91
        ;   Label: LAB_0043bd91
    JNZ 0x0043bdb6                      ; 0043bd93
        ;   XREF to: 0043bdb6 (CONDITIONAL_JUMP)  ; LAB_0043bdb6
    MOV EAX,dword ptr [EDX]             ; 0043bd95
    MOV dword ptr [EBP + 0x1466958],EAX ; 0043bd97
    MOV EAX,dword ptr [EDX + 0x4]       ; 0043bd9d
    MOV EDX,dword ptr [0x01466954]      ; 0043bda0 | DAT_01466954
    ADD EBP,0x4                         ; 0043bda6
    INC EDX                             ; 0043bda9
    MOV dword ptr [EBP + 0x1466d54],EAX ; 0043bdaa
    MOV dword ptr [0x01466954],EDX      ; 0043bdb0 | DAT_01466954
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043bdb6
        ;   Label: LAB_0043bdb6
    MOV EDX,dword ptr [ESP + 0x38]      ; 0043bdba
    ADD EDI,0x10                        ; 0043bdbe
    INC EAX                             ; 0043bdc1
    MOV ECX,dword ptr [EDX + 0x1d0]     ; 0043bdc2
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043bdc8
    CMP EAX,ECX                         ; 0043bdcc
    JL 0x0043bd54                       ; 0043bdce
        ;   XREF to: 0043bd54 (CONDITIONAL_JUMP)  ; LAB_0043bd54
    MOV EBX,dword ptr [0x01466954]      ; 0043bdd0 | DAT_01466954
        ;   Label: LAB_0043bdd0
    XOR EDI,EDI                         ; 0043bdd6
    TEST EBX,EBX                        ; 0043bdd8
    JLE 0x0043be48                      ; 0043bdda
        ;   XREF to: 0043be48 (CONDITIONAL_JUMP)  ; LAB_0043be48
    MOV EBP,dword ptr [ESP + 0x14]      ; 0043bddc
    XOR ESI,ESI                         ; 0043bde0
    MOV EAX,dword ptr [ESI + 0x1466958] ; 0043bde2
        ;   Label: LAB_0043bde2
    MOV EDX,dword ptr [EBP + 0x1c2b64c] ; 0043bde8 | DAT_01c2b64c
    SHL EAX,0x2                         ; 0043bdee
    LEA ECX,[EDX + EAX*0x1]             ; 0043bdf1
    MOV EDX,dword ptr [ESP + 0x38]      ; 0043bdf4
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043bdf8
    IMUL EAX,dword ptr [EDX + 0x144]    ; 0043bdfc
    ADD EAX,dword ptr [ESI + 0x1466958] ; 0043be03
    LEA EDX,[EAX*0x4 + 0x0]             ; 0043be09
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043be10
    MOV EAX,dword ptr [EAX + 0x15c]     ; 0043be14
    MOV EBX,dword ptr [ESI + 0x1466958] ; 0043be1a
    ADD EDX,EAX                         ; 0043be20
    MOV EAX,dword ptr [ESI + 0x1466d58] ; 0043be22
    SUB EAX,EBX                         ; 0043be28
    SHL EAX,0x2                         ; 0043be2a
    ADD EAX,0x4                         ; 0043be2d
    PUSH EAX                            ; 0043be30
    PUSH EDX                            ; 0043be31
    PUSH ECX                            ; 0043be32
    ADD ESI,0x4                         ; 0043be33
    INC EDI                             ; 0043be36
    CALL core_dstrendr.cpp_memcpyMMX_FUN_00470201 ; 0043be37
        ;   XREF to: 00470201 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_memcpyMMX_FUN_00470201(void * dest, void * src, int byte_count)
    MOV EAX,[0x01466954]                ; 0043be3c | DAT_01466954
    ADD ESP,0xc                         ; 0043be41
    CMP EDI,EAX                         ; 0043be44
    JL 0x0043bde2                       ; 0043be46
        ;   XREF to: 0043bde2 (CONDITIONAL_JUMP)  ; LAB_0043bde2
    MOV EBP,dword ptr [ESP + 0x14]      ; 0043be48
        ;   Label: LAB_0043be48
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043be4c
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043be50
    ADD EBP,0x4                         ; 0043be54
    INC EAX                             ; 0043be57
    MOV dword ptr [ESP + 0x14],EBP      ; 0043be58
    MOV dword ptr [ESP + 0x20],EAX      ; 0043be5c
    CMP EAX,EDX                         ; 0043be60
    JLE 0x0043bd30                      ; 0043be62
        ;   XREF to: 0043bd30 (CONDITIONAL_JUMP)  ; LAB_0043bd30
    ADD ESP,0x24                        ; 0043be68
        ;   Label: LAB_0043be68
    POP EBP                             ; 0043be6b
    POP EDI                             ; 0043be6c
    POP ESI                             ; 0043be6d
    POP EBX                             ; 0043be6e
    RET                                 ; 0043be6f
    MOV EAX,[0x006141bc]                ; 0043be70 | DAT_006141bc
        ;   Label: LAB_0043be70
    DEC EAX                             ; 0043be75
    PUSH EAX                            ; 0043be76
    MOV EAX,[0x006141b8]                ; 0043be77 | DAT_006141b8
    DEC EAX                             ; 0043be7c
    PUSH EAX                            ; 0043be7d
    PUSH 0x0                            ; 0043be7e
    PUSH 0x0                            ; 0043be80
    PUSH 0x0                            ; 0043be82
    CALL engine_special.cpp_FUN_00560050 ; 0043be84
        ;   XREF to: 00560050 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00560050(int slot, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 0043be89
    ADD ESP,0x24                        ; 0043be8c
    POP EBP                             ; 0043be8f
    POP EDI                             ; 0043be90
    POP ESI                             ; 0043be91
    POP EBX                             ; 0043be92
    RET                                 ; 0043be93
    MOV dword ptr [ESP],EDX             ; 0043be94
        ;   Label: LAB_0043be94
    MOV dword ptr [ESP + 0x8],EDX       ; 0043be97
    MOV EAX,dword ptr [EAX + 0x144]     ; 0043be9b
    DEC EAX                             ; 0043bea1
    MOV dword ptr [ESP + 0x4],EAX       ; 0043bea2
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043bea6
    MOV EAX,dword ptr [EAX + 0x148]     ; 0043beaa
    DEC EAX                             ; 0043beb0
    MOV dword ptr [ESP + 0xc],EAX       ; 0043beb1
    MOV EAX,ESP                         ; 0043beb5
    PUSH EAX                            ; 0043beb7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0043beb8
    PUSH EAX                            ; 0043bebc
    CALL core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0043bb50 ; 0043bebd
        ;   XREF to: 0043bb50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0043bb50(CDemonCamera * this_ptr, CRect * rect_ptr)
    ADD ESP,0x8                         ; 0043bec2
    ADD ESP,0x24                        ; 0043bec5
    POP EBP                             ; 0043bec8
    POP EDI                             ; 0043bec9
    POP ESI                             ; 0043beca
    POP EBX                             ; 0043becb
    RET                                 ; 0043becc
    MOV dword ptr [EDX],0x0             ; 0043becd
        ;   Label: LAB_0043becd
    JMP 0x0043bc73                      ; 0043bed3
        ;   XREF to: 0043bc73 (UNCONDITIONAL_JUMP)  ; LAB_0043bc73
    LEA ECX,[EDI + -0x1]                ; 0043bed8
        ;   Label: LAB_0043bed8
    MOV dword ptr [EAX + 0x4],ECX       ; 0043bedb
    JMP 0x0043bc88                      ; 0043bede
        ;   XREF to: 0043bc88 (UNCONDITIONAL_JUMP)  ; LAB_0043bc88
    MOV dword ptr [EAX + 0x8],0x0       ; 0043bee3
        ;   Label: LAB_0043bee3
    JMP 0x0043bc92                      ; 0043beea
        ;   XREF to: 0043bc92 (UNCONDITIONAL_JUMP)  ; LAB_0043bc92
    MOV EBX,dword ptr [EDX]             ; 0043beef
        ;   Label: LAB_0043beef
    CMP EBX,dword ptr [EAX + 0x1466d58] ; 0043bef1
    JG 0x0043bd8a                       ; 0043bef7
        ;   XREF to: 0043bd8a (CONDITIONAL_JUMP)  ; LAB_0043bd8a
    CMP EBX,dword ptr [EAX + 0x1466958] ; 0043befd
    JL 0x0043bf14                       ; 0043bf03
        ;   XREF to: 0043bf14 (CONDITIONAL_JUMP)  ; LAB_0043bf14
    MOV EBX,dword ptr [EDX + 0x4]       ; 0043bf05
    CMP EBX,dword ptr [EAX + 0x1466d58] ; 0043bf08
    JLE 0x0043bdb6                      ; 0043bf0e
        ;   XREF to: 0043bdb6 (CONDITIONAL_JUMP)  ; LAB_0043bdb6
    MOV EBX,dword ptr [EDX]             ; 0043bf14
        ;   Label: LAB_0043bf14
    CMP EBX,dword ptr [EAX + 0x1466958] ; 0043bf16
    JGE 0x0043bf29                      ; 0043bf1c
        ;   XREF to: 0043bf29 (CONDITIONAL_JUMP)  ; LAB_0043bf29
    MOV ECX,0x1                         ; 0043bf1e
    MOV dword ptr [EAX + 0x1466958],EBX ; 0043bf23
    MOV EBX,dword ptr [EDX + 0x4]       ; 0043bf29
        ;   Label: LAB_0043bf29
    CMP EBX,dword ptr [EAX + 0x1466d58] ; 0043bf2c
    JLE 0x0043bf3f                      ; 0043bf32
        ;   XREF to: 0043bf3f (CONDITIONAL_JUMP)  ; LAB_0043bf3f
    MOV dword ptr [EAX + 0x1466d58],EBX ; 0043bf34
    JMP 0x0043bdb6                      ; 0043bf3a
        ;   XREF to: 0043bdb6 (UNCONDITIONAL_JUMP)  ; LAB_0043bdb6
    TEST ECX,ECX                        ; 0043bf3f
        ;   Label: LAB_0043bf3f
    JNZ 0x0043bd91                      ; 0043bf41
        ;   XREF to: 0043bd91 (CONDITIONAL_JUMP)  ; LAB_0043bd91
    JMP 0x0043bd8a                      ; 0043bf47
        ;   XREF to: 0043bd8a (UNCONDITIONAL_JUMP)  ; LAB_0043bd8a

