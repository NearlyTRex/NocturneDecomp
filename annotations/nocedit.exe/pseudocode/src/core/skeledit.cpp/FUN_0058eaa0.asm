; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_skeledit_cpp_FUN_0058eaa0(void)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
; Referenced Globals:
;   TerminatedCString s_Optimizing_deformable_mo_0064b072
;   TerminatedCString s_Optimized_deformable_mod_0064b09a
;   double DOUBLE_0064b0c2 = 0.0100000000000000
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;
; *****************************************************************************

section .text

    PUSH 0x4c                           ; 0058eaa0
        ;   Label: core_skeledit.cpp_FUN_0058eaa0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058eaa5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0058eaaa
    PUSH ESI                            ; 0058eaab
    PUSH EDI                            ; 0058eaac
    PUSH EBP                            ; 0058eaad
    MOV EBP,ESP                         ; 0058eaae
    SUB ESP,0x30                        ; 0058eab0
    AND ESP,0xfffffff8                  ; 0058eab3
    PUSH 0x64b072                       ; 0058eab6 | = "Optimizing deformable model vertices..."
    MOV EDX,dword ptr [0x00678a60]      ; 0058eabb | g_CEditorToolsPtr
    PUSH EDX                            ; 0058eac1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058eac2
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 0058eac7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058eaca
    XOR ECX,ECX                         ; 0058eacd
    MOV EBX,dword ptr [EAX]             ; 0058eacf
    MOV dword ptr [ESP + 0x4],ECX       ; 0058ead1
    TEST EBX,EBX                        ; 0058ead5
    JLE 0x0058eb44                      ; 0058ead7
        ;   XREF to: 0058eb44 (CONDITIONAL_JUMP)  ; LAB_0058eb44
    MOV dword ptr [ESP],ECX             ; 0058ead9
    XOR ESI,ESI                         ; 0058eadc
        ;   Label: LAB_0058eadc
    MOV EDX,dword ptr [ESP]             ; 0058eade
    MOV dword ptr [ESP + 0xc],ESI       ; 0058eae1
    MOV dword ptr [ESP + 0x8],EDX       ; 0058eae5
    MOV dword ptr [ESP + 0x2c],ESI      ; 0058eae9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058eaed
        ;   Label: LAB_0058eaed
    ADD EDX,dword ptr [ESP + 0x8]       ; 0058eaf0
    MOV ECX,dword ptr [ESP + 0xc]       ; 0058eaf4
    CMP ECX,dword ptr [EDX + 0x2c]      ; 0058eaf8
    JGE 0x0058eb29                      ; 0058eafb
        ;   XREF to: 0058eb29 (CONDITIONAL_JUMP)  ; LAB_0058eb29
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058eafd
    MOV EDX,dword ptr [EDX + 0x40]      ; 0058eb01
    ADD EAX,EDX                         ; 0058eb04
    XOR EDX,EDX                         ; 0058eb06
    MOV DL,byte ptr [EAX]               ; 0058eb08
    MOV dword ptr [ESP + 0x28],EAX      ; 0058eb0a
    CMP EDX,0x2                         ; 0058eb0e
    JGE 0x0058eb5f                      ; 0058eb11
        ;   XREF to: 0058eb5f (CONDITIONAL_JUMP)  ; LAB_0058eb5f
    MOV EDX,dword ptr [ESP + 0xc]       ; 0058eb13
        ;   Label: LAB_0058eb13
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058eb17
    INC EDX                             ; 0058eb1b
    ADD EAX,0x34                        ; 0058eb1c
    MOV dword ptr [ESP + 0xc],EDX       ; 0058eb1f
    MOV dword ptr [ESP + 0x2c],EAX      ; 0058eb23
    JMP 0x0058eaed                      ; 0058eb27
        ;   XREF to: 0058eaed (UNCONDITIONAL_JUMP)  ; LAB_0058eaed
    MOV ESI,dword ptr [ESP]             ; 0058eb29
        ;   Label: LAB_0058eb29
    MOV EDI,dword ptr [ESP + 0x4]       ; 0058eb2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058eb30
    ADD ESI,0x4                         ; 0058eb33
    INC EDI                             ; 0058eb36
    MOV ECX,dword ptr [EAX]             ; 0058eb37
    MOV dword ptr [ESP],ESI             ; 0058eb39
    MOV dword ptr [ESP + 0x4],EDI       ; 0058eb3c
    CMP EDI,ECX                         ; 0058eb40
    JL 0x0058eadc                       ; 0058eb42
        ;   XREF to: 0058eadc (CONDITIONAL_JUMP)  ; LAB_0058eadc
    PUSH 0x64b09a                       ; 0058eb44 | = "Optimized deformable model vertices OK"
        ;   Label: LAB_0058eb44
    MOV ECX,dword ptr [0x00678a60]      ; 0058eb49 | g_CEditorToolsPtr
    PUSH ECX                            ; 0058eb4f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058eb50
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 0058eb55
    MOV ESP,EBP                         ; 0058eb58
    POP EBP                             ; 0058eb5a
    POP EDI                             ; 0058eb5b
    POP ESI                             ; 0058eb5c
    POP EBX                             ; 0058eb5d
    RET                                 ; 0058eb5e
    LEA ECX,[EAX + 0x10]                ; 0058eb5f
        ;   Label: LAB_0058eb5f
    XOR ESI,ESI                         ; 0058eb62
    XOR EBX,EBX                         ; 0058eb64
    MOV dword ptr [ESP + 0x24],ESI      ; 0058eb66
    MOV EDX,ECX                         ; 0058eb6a
    MOV dword ptr [ESP + 0x20],EAX      ; 0058eb6c
    MOV dword ptr [ESP + 0x14],EAX      ; 0058eb70
    MOV dword ptr [ESP + 0x18],EAX      ; 0058eb74
    MOV ESI,EAX                         ; 0058eb78
    MOV EDI,dword ptr [ESP + 0x28]      ; 0058eb7a
        ;   Label: LAB_0058eb7a
    XOR EAX,EAX                         ; 0058eb7e
    MOV AL,byte ptr [EDI]               ; 0058eb80
    MOV dword ptr [ESP + 0x10],EAX      ; 0058eb82
    CMP EBX,EAX                         ; 0058eb86
    JGE 0x0058ec02                      ; 0058eb88
        ;   XREF to: 0058ec02 (CONDITIONAL_JUMP)  ; LAB_0058ec02
    FLD float ptr [ESI + 0x4]           ; 0058eb8e
    FCOMP double ptr [0x0064b0c2]       ; 0058eb91 | DOUBLE_0064b0c2
    FNSTSW AX                           ; 0058eb97
    SAHF                                ; 0058eb99
    JA 0x0058ebae                       ; 0058eb9a
        ;   XREF to: 0058ebae (CONDITIONAL_JUMP)  ; LAB_0058ebae
    MOV EDI,dword ptr [ESP + 0x18]      ; 0058eb9c
        ;   Label: LAB_0058eb9c
    ADD ECX,0xc                         ; 0058eba0
    INC EBX                             ; 0058eba3
    INC EDI                             ; 0058eba4
    ADD ESI,0x4                         ; 0058eba5
    MOV dword ptr [ESP + 0x18],EDI      ; 0058eba8
    JMP 0x0058eb7a                      ; 0058ebac
        ;   XREF to: 0058eb7a (UNCONDITIONAL_JUMP)  ; LAB_0058eb7a
    CMP EBX,dword ptr [ESP + 0x24]      ; 0058ebae
        ;   Label: LAB_0058ebae
    JLE 0x0058ebe0                      ; 0058ebb2
        ;   XREF to: 0058ebe0 (CONDITIONAL_JUMP)  ; LAB_0058ebe0
    MOV EAX,dword ptr [ESP + 0x18]      ; 0058ebb4
    MOV EDI,dword ptr [ESP + 0x14]      ; 0058ebb8
    MOV AL,byte ptr [EAX + 0x1]         ; 0058ebbc
    MOV byte ptr [EDI + 0x1],AL         ; 0058ebbf
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058ebc2
    MOV EDI,dword ptr [ESI + 0x4]       ; 0058ebc6
    MOV dword ptr [EAX + 0x4],EDI       ; 0058ebc9
    CMP EDX,ECX                         ; 0058ebcc
    JZ 0x0058ebe0                       ; 0058ebce
        ;   XREF to: 0058ebe0 (CONDITIONAL_JUMP)  ; LAB_0058ebe0
    MOV EAX,dword ptr [ECX]             ; 0058ebd0
    MOV dword ptr [EDX],EAX             ; 0058ebd2
    MOV EAX,dword ptr [ECX + 0x4]       ; 0058ebd4
    MOV dword ptr [EDX + 0x4],EAX       ; 0058ebd7
    MOV EAX,dword ptr [ECX + 0x8]       ; 0058ebda
    MOV dword ptr [EDX + 0x8],EAX       ; 0058ebdd
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058ebe0
        ;   Label: LAB_0058ebe0
    MOV EDI,dword ptr [ESP + 0x14]      ; 0058ebe4
    ADD EAX,0x4                         ; 0058ebe8
    ADD EDX,0xc                         ; 0058ebeb
    MOV dword ptr [ESP + 0x20],EAX      ; 0058ebee
    MOV EAX,dword ptr [ESP + 0x24]      ; 0058ebf2
    INC EDI                             ; 0058ebf6
    INC EAX                             ; 0058ebf7
    MOV dword ptr [ESP + 0x14],EDI      ; 0058ebf8
    MOV dword ptr [ESP + 0x24],EAX      ; 0058ebfc
    JMP 0x0058eb9c                      ; 0058ec00
        ;   XREF to: 0058eb9c (UNCONDITIONAL_JUMP)  ; LAB_0058eb9c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0058ec02
        ;   Label: LAB_0058ec02
    CMP EAX,dword ptr [ESP + 0x10]      ; 0058ec06
    JGE 0x0058eb13                      ; 0058ec0a
        ;   XREF to: 0058eb13 (CONDITIONAL_JUMP)  ; LAB_0058eb13
    MOV AL,byte ptr [ESP + 0x24]        ; 0058ec10
    XOR ECX,ECX                         ; 0058ec14
    MOV EDX,EDI                         ; 0058ec16
    MOV dword ptr [ESP + 0x1c],ECX      ; 0058ec18
    MOV byte ptr [EDI],AL               ; 0058ec1c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058ec1e
    XOR EBX,EBX                         ; 0058ec22
        ;   Label: LAB_0058ec22
    MOV BL,byte ptr [EAX]               ; 0058ec24
    CMP ECX,EBX                         ; 0058ec26
    JGE 0x0058ec3a                      ; 0058ec28
        ;   XREF to: 0058ec3a (CONDITIONAL_JUMP)  ; LAB_0058ec3a
    ADD EDX,0x4                         ; 0058ec2a
    FLD float ptr [ESP + 0x1c]          ; 0058ec2d
    FADD float ptr [EDX]                ; 0058ec31
    INC ECX                             ; 0058ec33
    FSTP float ptr [ESP + 0x1c]         ; 0058ec34
    JMP 0x0058ec22                      ; 0058ec38
        ;   XREF to: 0058ec22 (UNCONDITIONAL_JUMP)  ; LAB_0058ec22
    MOV EDX,EAX                         ; 0058ec3a
        ;   Label: LAB_0058ec3a
    XOR ECX,ECX                         ; 0058ec3c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058ec3e
    XOR EBX,EBX                         ; 0058ec42
        ;   Label: LAB_0058ec42
    MOV BL,byte ptr [EAX]               ; 0058ec44
    CMP ECX,EBX                         ; 0058ec46
    JGE 0x0058eb13                      ; 0058ec48
        ;   XREF to: 0058eb13 (CONDITIONAL_JUMP)  ; LAB_0058eb13
    FLD float ptr [EDX + 0x4]           ; 0058ec4e
    FDIV float ptr [ESP + 0x1c]         ; 0058ec51
    ADD EDX,0x4                         ; 0058ec55
    INC ECX                             ; 0058ec58
    FSTP float ptr [EDX]                ; 0058ec59
    JMP 0x0058ec42                      ; 0058ec5b
        ;   XREF to: 0058ec42 (UNCONDITIONAL_JUMP)  ; LAB_0058ec42

